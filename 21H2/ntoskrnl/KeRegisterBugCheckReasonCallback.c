/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14039E7B0
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FED0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059FFD8 (SmPrepareForFatalPageError.c)
 *     IopInitializeTriageDumpData @ 0x1407C9478 (IopInitializeTriageDumpData.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     HalpMiscInitDiscard @ 0x140A6E378 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140A6EBE0 (PopRecorderInit.c)
 *     HalpFirmwareInitDiscard @ 0x140A6FB60 (HalpFirmwareInitDiscard.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14039E8F8 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rdi
  BOOLEAN v8; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 *v10; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( CallbackRecord->State )
    goto LABEL_16;
  if ( (_DWORD)v5 == 4 || (v10 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_16:
    v8 = 0;
    goto LABEL_11;
  }
  CallbackRecord->CallbackRoutine = CallbackRoutine;
  CallbackRecord->Reason = v5;
  CallbackRecord->Component = Component;
  CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
  CallbackRecord->State = 1;
  if ( (_DWORD)v5 == 1023 )
    _InterlockedIncrement(&KiRecoveryCallbackCount);
  if ( (_DWORD)v5 == 7 )
  {
    Blink = v11->Blink;
    if ( Blink->Flink == v11 )
    {
      CallbackRecord->Entry.Flink = v11;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v11->Blink = &CallbackRecord->Entry;
      goto LABEL_11;
    }
LABEL_20:
    __fastfail(3u);
  }
  Flink = v11->Flink;
  if ( v11->Flink->Blink != v11 )
    goto LABEL_20;
  CallbackRecord->Entry.Flink = Flink;
  CallbackRecord->Entry.Blink = v11;
  Flink->Blink = &CallbackRecord->Entry;
  v11->Flink = &CallbackRecord->Entry;
LABEL_11:
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
