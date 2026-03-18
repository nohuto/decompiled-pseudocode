/*
 * XREFs of MiLockProtoPage @ 0x140323190
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeProtoAddressValid @ 0x140323340 (MiMakeProtoAddressValid.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = v17;
    if ( MiPteInShadowRange((unsigned __int64)&v17)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v11 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
      else
      {
        v6 = v17;
      }
    }
    v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v7);
    MiRemoveLockedPageChargeAndDecRef(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  return BugCheckParameter1;
}
