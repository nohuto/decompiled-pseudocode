/*
 * XREFs of MiInitializeBootProcess @ 0x140A56244
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetPageTablePfnBuddy @ 0x140336A64 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
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
  if ( !qword_140CFB1B8 )
    qword_140CFB1B8 = 0x100000LL;
  if ( !qword_140CFB1B0 )
    qword_140CFB1B0 = 0x2000LL;
  if ( !qword_140CFB1A8 )
    qword_140CFB1A8 = 0x10000LL;
  if ( !qword_140CFB1A0 )
    qword_140CFB1A0 = 4096LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)&Process[1].ThreadSeedPadding[6] = 50LL;
  *(_QWORD *)&Process[1].IdealProcessor[14] = 450LL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  *v1 = 0LL;
  MiSetPageTablePfnBuddy((__int64)v1, (__int64)Process, 0);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x40000u);
  _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v2 = (unsigned __int64 **)qword_140C4DCB0;
  p_UserDirectoryTableBase = &Process[1].UserDirectoryTableBase;
  if ( *(__int64 **)qword_140C4DCB0 != &qword_140C4DCA8 )
    __fastfail(3u);
  *(_QWORD *)&Process[1].AddressPolicy = qword_140C4DCB0;
  *p_UserDirectoryTableBase = (unsigned __int64)&qword_140C4DCA8;
  *v2 = p_UserDirectoryTableBase;
  qword_140C4DCB0 = (__int64)&Process[1].UserDirectoryTableBase;
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
