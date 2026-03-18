/*
 * XREFs of MiInitializeBootProcess @ 0x140B0A508
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 */

__int64 MiInitializeBootProcess()
{
  _KPROCESS *Process; // rdi
  _QWORD *v1; // rcx
  unsigned __int64 **v2; // rcx
  unsigned __int64 *p_UserDirectoryTableBase; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_140D051F8 )
    qword_140D051F8 = 0x100000LL;
  if ( !qword_140D051F0 )
    qword_140D051F0 = 0x2000LL;
  if ( !qword_140D051E8 )
    qword_140D051E8 = 0x10000LL;
  if ( !qword_140D051E0 )
    qword_140D051E0 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].ThreadSeed[26] = 50LL;
  *(_QWORD *)&Process[1].ThreadSeed[30] = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  *v1 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v1, (__int64)Process, 0);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = (unsigned __int64 **)qword_140C50660;
  p_UserDirectoryTableBase = &Process[1].UserDirectoryTableBase;
  if ( *(__int64 **)qword_140C50660 != &qword_140C50658 )
    __fastfail(3u);
  *(_QWORD *)&Process[1].AddressPolicy = qword_140C50660;
  *p_UserDirectoryTableBase = (unsigned __int64)&qword_140C50658;
  *v2 = p_UserDirectoryTableBase;
  qword_140C50660 = (__int64)&Process[1].UserDirectoryTableBase;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v12 = 0;
  return MmInitializeProcessAddressSpace((ULONG_PTR)Process, 0LL, 0LL, &v12, 0);
}
