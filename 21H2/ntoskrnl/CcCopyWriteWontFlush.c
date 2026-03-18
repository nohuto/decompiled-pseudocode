/*
 * XREFs of CcCopyWriteWontFlush @ 0x140229E10
 * Callers:
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcIsFileObjectDirectMapped @ 0x140229F30 (CcIsFileObjectDirectMapped.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWriteStreamEx @ 0x1402844A0 (CcCanIWriteStreamEx.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x140284848 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v7; // eax
  int PrivateVolumeCacheMapFromFileObject; // esi
  __int64 v9; // rbp
  BOOLEAN result; // al
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-10h]

  if ( Length >= 0x1000000 )
    goto LABEL_13;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  v7 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v7 = 0;
  }
  else if ( v7 >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
LABEL_5:
    if ( !v7 )
      goto LABEL_13;
  }
  PrivateVolumeCacheMapFromFileObject = 0;
  v19 = 0LL;
  v18 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *((_QWORD *)PspSystemPartition + 1);
  if ( CcEnablePerVolumeLazyWriter == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v9);
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
          v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    Flags = FileObject->Flags;
  }
  if ( (Flags & 0x1000000) == 0
    || (unsigned __int8)CcCanIWriteStreamEx(
                          v9,
                          PrivateVolumeCacheMapFromFileObject,
                          (_DWORD)FileObject,
                          Length,
                          0,
                          0,
                          0LL) )
  {
    return 1;
  }
LABEL_13:
  result = CcIsFileObjectDirectMapped(FileObject, 0LL);
  if ( result )
    return 1;
  return result;
}
