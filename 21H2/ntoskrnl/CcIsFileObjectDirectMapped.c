/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x14023F954
 * Callers:
 *     CcCopyWriteWontFlush @ 0x1402D0780 (CcCopyWriteWontFlush.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall CcIsFileObjectDirectMapped(__int64 a1, char a2)
{
  bool v2; // bl
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      v2 = (*(_DWORD *)(v6 + 152) & 0x40000000) != 0;
  }
  if ( !v4 )
  {
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return v2;
}
