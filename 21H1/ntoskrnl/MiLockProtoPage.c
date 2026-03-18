/*
 * XREFs of MiLockProtoPage @ 0x140314A40
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeProtoAddressValid @ 0x140314BF0 (MiMakeProtoAddressValid.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = v18;
    if ( MiPteInShadowRange((unsigned __int64)&v18)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0 )
    {
      v7 = v6;
      if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v18 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v6 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v6 |= 0x42uLL;
        }
        else
        {
          v6 = v18;
        }
      }
    }
    v9 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v10 = (unsigned __int8)MiLockPageInline(v9, v7, Flink);
    MiRemoveLockedPageChargeAndDecRef(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  return BugCheckParameter1;
}
