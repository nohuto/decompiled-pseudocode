/*
 * XREFs of CcZeroData @ 0x140299610
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B410 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     CcZeroDataOnDisk @ 0x14023E060 (CcZeroDataOnDisk.c)
 *     CcGetPartitionFromFileObject @ 0x140299A14 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x140299A48 (CcZeroDataInCache.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v11; // r9
  unsigned int v12; // edi
  LONGLONG v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // r14d
  unsigned __int64 v21; // [rsp+38h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+40h] [rbp-78h]
  int v23; // [rsp+48h] [rbp-70h]
  int v24; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v27; // [rsp+C0h] [rbp+8h]
  LONGLONG v28; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v29; // [rsp+D0h] [rbp+18h]
  BOOLEAN v30; // [rsp+D8h] [rbp+20h]

  v30 = Wait;
  v29 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v28 = StartOffset->QuadPart;
  v21 = 0LL;
  v27 = 0;
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
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
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
    if ( IoGetRelatedDeviceObject(FileObject)->SectorSize )
      v12 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v12 = 0;
    if ( v8 )
    {
      if ( (v12 & (unsigned int)v28) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v28 += v12;
        LODWORD(v28) = ~v12 & v28;
        v19 = v28 - StartOffset->LowPart;
        LOBYTE(v11) = v30;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v19, v11) )
          goto LABEL_42;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (_DWORD)StartOffset, v19, 0, 0, (__int64)Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_17:
      if ( v28 < v29->QuadPart )
      {
        v13 = v12 + v29->QuadPart;
        v21 = (~v12 | 0xFFFFFFFF00000000uLL) & v13;
        CcZeroDataOnDisk((__int64)FileObject, &v28, &v21);
      }
      v27 = 1;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 7104LL) >= 0x800uLL )
      goto LABEL_12;
    if ( v9 > 0x2000 && ((unsigned int)v28 & v12) != 0 )
    {
      v24 = (v28 + (unsigned __int64)v12) >> 32;
      v23 = ~v12 & (v28 + v12);
      LODWORD(v9) = v23 - v28;
    }
    else
    {
      if ( v9 <= 0x2000 )
      {
LABEL_12:
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = v28 + 0x200000 + v12;
          Status[0] = ~v12 & (v28 + 0x200000 + v12);
          LODWORD(v9) = Status[0] - v28;
        }
        goto LABEL_14;
      }
      LODWORD(v9) = 0;
    }
LABEL_14:
    if ( (_DWORD)v9 )
    {
      LOBYTE(v11) = v30;
      if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v28, (unsigned int)v9, v11) )
        goto LABEL_42;
    }
    v28 += (unsigned int)v9;
    goto LABEL_17;
  }
LABEL_42:
  CcDereferencePartition(PartitionFromFileObject);
  return v27;
}
