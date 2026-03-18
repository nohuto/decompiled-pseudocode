/*
 * XREFs of ExpSvmServicePageFault @ 0x1405B37B0
 * Callers:
 *     <none>
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r14
  _KPROCESS *v7; // rbp
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf
  char v15; // si
  unsigned int v16; // ebx
  ULONG_PTR v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v20[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C16718, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_140C16710 + 2 * a3);
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
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        v8 = (unsigned int)v13 & SchedulerAssist[5];
        SchedulerAssist[5] = v8;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v15 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0LL, (__int64)v20, SchedulerAssist);
    v15 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v16 = -1073741819;
  }
  else
  {
    v17 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v17 = a1 & 2;
    v16 = MmAccessFault(v17, a2, 1, 0LL);
  }
  if ( v15 )
    KiUnstackDetachProcess((__int64)v20, 0LL, v8, SchedulerAssist);
  return v16;
}
