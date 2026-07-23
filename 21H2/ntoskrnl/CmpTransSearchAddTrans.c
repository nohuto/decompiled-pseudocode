/*
 * XREFs of CmpTransSearchAddTrans @ 0x140766FEC
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x140766F74 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     CmpTransReferenceTransaction @ 0x1405DEF80 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1405DEFE0 (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x1405DEFFC (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x1405DF0EC (CmpBindHiveToTrans.c)
 *     CmpSearchForTrans @ 0x14076720C (CmpSearchForTrans.c)
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        char **a6)
{
  char *Trans; // rsi
  int v7; // r13d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  char *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char **v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rax
  BOOLEAN v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  char **v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  signed __int32 v43[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v16 = CmpSearchForTrans(a3, a1, a2);
      if ( !v16 )
      {
        if ( !v13 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v16 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_20;
      LODWORD(v44) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v44,
        4uLL,
        0LL);
    }
    if ( Trans )
      break;
    if ( v16 )
    {
      CmpBindHiveToTrans((__int64)a4, v16);
      goto LABEL_11;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    Trans = CmpTransAllocateTrans(a1, a2, a3, (__int64)a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( *(_QWORD *)(a3 + 80) )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1632LL));
    v7 = v30;
    if ( !v30 )
    {
      v12 = -1073741431;
      goto LABEL_21;
    }
  }
  v25 = *(char ***)(a3 + 24);
  if ( *v25 != (char *)(a3 + 16) )
    goto LABEL_37;
  *((_QWORD *)Trans + 1) = v25;
  *(_QWORD *)Trans = a3 + 16;
  *v25 = Trans;
  *(_QWORD *)(a3 + 24) = Trans;
  ++CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
  v14 = 0;
  v12 = CmpTransInitializeTransaction(Trans);
  if ( v12 < 0 )
  {
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v38 = *(_QWORD *)Trans;
    if ( *(char **)(*(_QWORD *)Trans + 8LL) == Trans )
    {
      v39 = (char **)*((_QWORD *)Trans + 1);
      if ( *v39 == Trans )
      {
        *v39 = (char *)v38;
        *(_QWORD *)(v38 + 8) = v39;
        --CmpTransactionInitializingCount;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v40, v41, v42);
        _InterlockedOr(v43, 0);
        if ( CmpTransactionInitializingEvent )
          ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
LABEL_21:
        if ( Trans )
          ExFreePoolWithTag(Trans, 0x72544D43u);
        goto LABEL_12;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  v17 = Trans;
LABEL_11:
  v12 = 0;
  *a6 = v17;
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection(a4 + 204);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
