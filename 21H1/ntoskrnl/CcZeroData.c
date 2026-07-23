/*
 * XREFs of CcZeroData @ 0x1402C0D40
 * Callers:
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcGetPartitionFromFileObject @ 0x1402C1144 (CcGetPartitionFromFileObject.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     CcZeroDataOnDisk @ 0x140310190 (CcZeroDataOnDisk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned int SectorSize; // r12d
  unsigned int v13; // edi
  LONGLONG v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // r14d
  unsigned __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+40h] [rbp-78h]
  int v24; // [rsp+48h] [rbp-70h]
  int v25; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v28; // [rsp+C0h] [rbp+8h]
  LONGLONG v29; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v30; // [rsp+D0h] [rbp+18h]
  BOOLEAN v31; // [rsp+D8h] [rbp+20h]

  v31 = Wait;
  v30 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v29 = StartOffset->QuadPart;
  v22 = 0LL;
  v28 = 0;
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
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
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
      v13 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v13 = 0;
    if ( v8 )
    {
      if ( (v13 & (unsigned int)v29) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v29 += v13;
        LODWORD(v29) = ~v13 & v29;
        v20 = v29 - StartOffset->LowPart;
        if ( !CcZeroDataInCache((__int64)FileObject, (__int64 *)StartOffset, v20, v31) )
          goto LABEL_42;
        CcFlushCachePriv(
          (__int64)FileObject->SectionObjectPointer,
          (__int64 *)StartOffset,
          v20,
          0LL,
          0,
          (unsigned int *)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_17:
      if ( v29 < v30->QuadPart )
      {
        v14 = v13 + v30->QuadPart;
        v22 = (~v13 | 0xFFFFFFFF00000000uLL) & v14;
        CcZeroDataOnDisk(FileObject, &v29, &v22, SectorSize);
      }
      v28 = 1;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7104LL) >= 0x800uLL )
      goto LABEL_12;
    if ( v9 > 0x2000 && ((unsigned int)v29 & v13) != 0 )
    {
      v25 = (v29 + (unsigned __int64)v13) >> 32;
      v24 = ~v13 & (v29 + v13);
      LODWORD(v9) = v24 - v29;
    }
    else
    {
      if ( v9 <= 0x2000 )
      {
LABEL_12:
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = v29 + 0x200000 + v13;
          Status[0] = ~v13 & (v29 + 0x200000 + v13);
          LODWORD(v9) = Status[0] - v29;
        }
        goto LABEL_14;
      }
      LODWORD(v9) = 0;
    }
LABEL_14:
    if ( (_DWORD)v9 && !CcZeroDataInCache((__int64)FileObject, &v29, v9, v31) )
      goto LABEL_42;
    v29 += (unsigned int)v9;
    goto LABEL_17;
  }
LABEL_42:
  CcDereferencePartition(PartitionFromFileObject);
  return v28;
}
