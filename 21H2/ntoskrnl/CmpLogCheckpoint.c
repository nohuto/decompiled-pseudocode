/*
 * XREFs of CmpLogCheckpoint @ 0x1407707A4
 * Callers:
 *     CmpStopRMLog @ 0x1405E1088 (CmpStopRMLog.c)
 *     CmpTransWriteLog @ 0x140763D58 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v14; // rbx
  void *v15; // rcx
  NTSTATUS v16; // eax
  CLFS_INFORMATION *v17; // rax
  CLFS_INFORMATION *v18; // rbx
  const CLFS_LSN *v20; // r14
  CLFS_CONTAINER_ID v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG pcbInfoBuffer; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v27; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v31; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_LSN plsnNext; // [rsp+68h] [rbp-98h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+F0h] [rbp-10h] BYREF
  int *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0;
  v31 = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = CLFS_LSN_NULL_EXT;
  pcbInfoBuffer = 120;
  memset(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v31, 0);
    if ( !NextElement )
      break;
    v20 = (const CLFS_LSN *)(NextElement + 104);
    if ( !ClfsLsnInvalid((const CLFS_LSN *)NextElement + 13) )
    {
      v21 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v20) == v21 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v20, &plsn) )
      plsn = *v20;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v27 = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v27);
    ExFreePoolWithTag(v14, 0);
  }
  if ( v3 >= 0 )
  {
    v15 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v16 = ClfsWriteRestartArea(
            v15,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v16;
    if ( a3 )
    {
      if ( v16 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v28 = 120;
  v17 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v18 = v17;
  if ( v17 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v17, &v28);
    ExFreePoolWithTag(v18, 0);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v37 = 0;
      v35 = &v29;
      v29 = v3;
      v36 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)word_140023ACA,
        0LL,
        0LL,
        3u,
        &v34);
    }
  }
  return (unsigned int)v3;
}
