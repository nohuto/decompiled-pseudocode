/*
 * XREFs of MiLockProtoPage @ 0x140352790
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x140352940 (MiMakeProtoAddressValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned __int8 a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v22 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = v22;
    if ( MiPteInShadowRange((unsigned __int64)&v22)
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
          v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v22 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v6 |= 0x20uLL;
          if ( (v16 & 0x42) != 0 )
            v6 |= 0x42uLL;
        }
        else
        {
          v6 = v22;
        }
      }
    }
    v10 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10, v7, (__int64)Flink, v9);
    MiRemoveLockedPageChargeAndDecRef(v10, v12, v13, v14);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    if ( !BugCheckParameter1 )
      return 0LL;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a3);
  MiMakeProtoAddressValid(BugCheckParameter1);
  MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  return BugCheckParameter1;
}
