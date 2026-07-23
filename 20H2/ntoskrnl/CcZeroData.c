/*
 * XREFs of CcZeroData @ 0x140240A60
 * Callers:
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartitionFromFileObject @ 0x140240E64 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcDereferencePartition @ 0x14029EBDC (CcDereferencePartition.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     CcZeroDataOnDisk @ 0x14031E570 (CcZeroDataOnDisk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  char v8; // r15
  __int64 v9; // rbx
  unsigned __int8 OldIrql; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // r9
  unsigned int SectorSize; // r12d
  unsigned int v14; // edi
  LONGLONG v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // r14d
  unsigned __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+40h] [rbp-78h]
  int v25; // [rsp+48h] [rbp-70h]
  int v26; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v29; // [rsp+C0h] [rbp+8h]
  LONGLONG v30; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v31; // [rsp+D0h] [rbp+18h]
  BOOLEAN v32; // [rsp+D8h] [rbp+20h]

  v32 = Wait;
  v31 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v30 = StartOffset->QuadPart;
  v23 = 0LL;
  v29 = 0;
  PartitionFromFileObject = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 968)) <= 1 )
    __fastfail(0xEu);
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
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v8
    && v9 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7104LL) >= 0x800uLL || v9 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v14 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v14 = 0;
    if ( v8 )
    {
      if ( (v14 & (unsigned int)v30) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v30 += v14;
        LODWORD(v30) = ~v14 & v30;
        v21 = v30 - StartOffset->LowPart;
        LOBYTE(v12) = v32;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v21, v12) )
          goto LABEL_42;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (_DWORD)StartOffset, v21, 0, 0, (__int64)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_17:
      if ( v30 < v31->QuadPart )
      {
        v15 = v14 + v31->QuadPart;
        v23 = (~v14 | 0xFFFFFFFF00000000uLL) & v15;
        CcZeroDataOnDisk(FileObject, &v30, &v23, SectorSize);
      }
      v29 = 1;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7104LL) >= 0x800uLL )
      goto LABEL_12;
    if ( v9 > 0x2000 && ((unsigned int)v30 & v14) != 0 )
    {
      v26 = (v30 + (unsigned __int64)v14) >> 32;
      v25 = ~v14 & (v30 + v14);
      LODWORD(v9) = v25 - v30;
    }
    else
    {
      if ( v9 <= 0x2000 )
      {
LABEL_12:
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = v30 + 0x200000 + v14;
          Status[0] = ~v14 & (v30 + 0x200000 + v14);
          LODWORD(v9) = Status[0] - v30;
        }
        goto LABEL_14;
      }
      LODWORD(v9) = 0;
    }
LABEL_14:
    if ( (_DWORD)v9 )
    {
      LOBYTE(v12) = v32;
      if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v30, (unsigned int)v9, v12) )
        goto LABEL_42;
    }
    v30 += (unsigned int)v9;
    goto LABEL_17;
  }
LABEL_42:
  CcDereferencePartition(PartitionFromFileObject);
  return v29;
}
