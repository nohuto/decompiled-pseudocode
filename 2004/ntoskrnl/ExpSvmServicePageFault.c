/*
 * XREFs of ExpSvmServicePageFault @ 0x1405B3ED0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r14
  _KPROCESS *v7; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  char v14; // si
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C16698, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_140C16690 + 2 * a3);
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
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v14 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0LL, (__int64)v19);
    v14 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v15 = -1073741819;
  }
  else
  {
    v16 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v16 = a1 & 2;
    v15 = MmAccessFault(v16, a2, 1, 0LL);
  }
  if ( v14 )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  return v15;
}
