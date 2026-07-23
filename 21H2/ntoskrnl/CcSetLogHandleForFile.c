/*
 * XREFs of CcSetLogHandleForFile @ 0x1404EB000
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  _DWORD *v3; // r9
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char *SharedCacheMap; // rbx
  __int64 Partition; // rdi
  bool v9; // zf
  char **v10; // r8
  PVOID *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x27BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x281uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(
                (_QWORD *)SectionObjectPointer->SharedCacheMap,
                (__int64)LogHandle,
                (__int64)FlushToLsnRoutine,
                v3);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v9 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v9 )
  {
    v10 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v11 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v10[1] != SharedCacheMap + 120 || *v11 != SharedCacheMap + 120 )
      goto LABEL_21;
    *v11 = v10;
    v10[1] = (char *)v11;
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v12 = (__int64 *)(SharedCacheMap + 120);
    if ( *((_DWORD *)SharedCacheMap + 28) )
      v13 = Partition + 96;
    else
      v13 = Partition + 32;
    v14 = *(__int64 ***)(v13 + 8);
    if ( *v14 == (__int64 *)v13 )
    {
      *v12 = v13;
      *((_QWORD *)SharedCacheMap + 16) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      goto LABEL_12;
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_12:
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
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
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
}
