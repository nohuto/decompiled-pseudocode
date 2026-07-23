/*
 * XREFs of ExpSvmReferenceAsid @ 0x1405B9570
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // rbx
  ULONG_PTR *v3; // rdx
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C16958, &LockHandle);
  v2 = 0LL;
  v3 = (ULONG_PTR *)((char *)qword_140C16950 + 16 * (unsigned int)v1);
  if ( (unsigned int)v1 >= (unsigned int)dword_140C16944 )
  {
    BugCheckParameter4 = 0LL;
LABEL_14:
    if ( (unsigned int)v1 < (unsigned int)dword_140C16944 )
      v2 = *v3;
    KeBugCheckEx(0x158u, v1, (unsigned int)dword_140C16944, v2, BugCheckParameter4);
  }
  v4 = *v3;
  if ( !*v3 || (v5 = v3[1], v5 < 0) )
  {
    BugCheckParameter4 = v3[1];
    goto LABEL_14;
  }
  v3[1] = v5 + 1;
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
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return *(_QWORD *)(v4 + 2184);
}
