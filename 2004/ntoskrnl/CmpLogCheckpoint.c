/*
 * XREFs of CmpLogCheckpoint @ 0x14075DC60
 * Callers:
 *     CmpStopRMLog @ 0x1406530F8 (CmpStopRMLog.c)
 *     CmpTransWriteLog @ 0x140750928 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v11; // rbx
  void *v12; // rcx
  NTSTATUS v13; // eax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  const CLFS_LSN *v17; // r14
  CLFS_CONTAINER_ID v18; // ebx
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG pcbInfoBuffer; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v21; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_LSN plsnNext; // [rsp+68h] [rbp-98h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+F0h] [rbp-10h] BYREF
  int *v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int v31; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0;
  v25 = 0LL;
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
    NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v25, 0);
    if ( !NextElement )
      break;
    v17 = (const CLFS_LSN *)(NextElement + 104);
    if ( !ClfsLsnInvalid((const CLFS_LSN *)NextElement + 13) )
    {
      v18 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v17) == v18 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v17, &plsn) )
      plsn = *v17;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v21 = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v21);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v3 >= 0 )
  {
    v12 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v13 = ClfsWriteRestartArea(
            v12,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v13;
    if ( a3 )
    {
      if ( v13 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v22 = 120;
  v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v15 = v14;
  if ( v14 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v14, &v22);
    ExFreePoolWithTag(v15, 0);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v31 = 0;
      v29 = &v23;
      v23 = v3;
      v30 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)&word_140022A26,
        0LL,
        0LL,
        3u,
        &v28);
    }
  }
  return (unsigned int)v3;
}
