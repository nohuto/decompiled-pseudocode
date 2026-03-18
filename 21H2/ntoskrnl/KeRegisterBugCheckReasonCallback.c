/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14024AE50
 * Callers:
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1405FD49C (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 *     CarpBugcheckInit @ 0x140605200 (CarpBugcheckInit.c)
 *     IopInitializeBugCheckDriverData @ 0x140658604 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeTriageDumpData @ 0x1408555E0 (IopInitializeTriageDumpData.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     HalpMiscInitDiscard @ 0x140B27708 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140B28664 (PopRecorderInit.c)
 *     HalpFirmwareInitDiscard @ 0x140B2A8FC (HalpFirmwareInitDiscard.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14024AFA0 (KiCheckForDuplicateBugCheckCallback.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // edx
  bool v19; // zf

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
    goto LABEL_15;
  if ( (_DWORD)v5 == 4 || (v10 = (struct _LIST_ENTRY *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = (struct _LIST_ENTRY *)&KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_15:
    v8 = 0;
    goto LABEL_10;
  }
  CallbackRecord->CallbackRoutine = CallbackRoutine;
  CallbackRecord->Reason = v5;
  CallbackRecord->Component = Component;
  CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
  CallbackRecord->State = 1;
  if ( (_DWORD)v5 == 1023 )
  {
    if ( _InterlockedIncrement(&KiRecoveryCallbackCount) == 1 && !KiPristineTriageDump )
      KeInsertQueueDpc(&KiPristineTriageDumpAllocationDpc, 0LL, 0LL);
  }
  else if ( (_DWORD)v5 == 7 )
  {
    Blink = v10->Blink;
    if ( Blink->Flink == v10 )
    {
      CallbackRecord->Entry.Flink = v10;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v10->Blink = &CallbackRecord->Entry;
      goto LABEL_10;
    }
LABEL_22:
    __fastfail(3u);
  }
  Flink = v10->Flink;
  if ( v10->Flink->Blink != v10 )
    goto LABEL_22;
  CallbackRecord->Entry.Flink = Flink;
  CallbackRecord->Entry.Blink = v10;
  Flink->Blink = &CallbackRecord->Entry;
  v10->Flink = &CallbackRecord->Entry;
LABEL_10:
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
