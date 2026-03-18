/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x1406A1534
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x1406A1440 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     CmpTransReferenceTransaction @ 0x1406A1680 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x1406A16FC (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x1406A17E4 (CmpBindHiveToTrans.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // rbx
  int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int64 Trans; // rax
  void *v14; // rsi
  signed __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rax

  v5 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = a1;
  v9 = 0;
  v10 = CmpTransReferenceTransaction(a1);
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v11 = *(_QWORD *)(v5 + 16);
  if ( v11 )
  {
    *a4 = v11;
    v10 = 0;
  }
  else if ( a3 )
  {
    Trans = CmpTransAllocateTrans(v8, 0LL, 0LL, a2);
    v14 = (void *)Trans;
    if ( Trans )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), Trans, 0LL);
      CurrentThread = KeGetCurrentThread();
      v17 = v15;
      if ( v15 )
      {
        --CurrentThread->KernelApcDisable;
        v9 = 1;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        v10 = (unsigned int)CmpBindHiveToTrans(a2, v17) != 0 ? -1072103421 : -1072103423;
      }
      else
      {
        v18 = (__int64)v14;
        v8 = 0LL;
        v14 = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        if ( (*(_DWORD *)(v18 + 48) & 7) != 0 )
        {
          v10 = -1072103422;
LABEL_20:
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v10;
        }
        *(_DWORD *)(v18 + 48) = 128;
        v19 = (__int64 *)qword_140C47C28;
        if ( *(__int64 **)qword_140C47C28 != &CmpLightTransactionList )
          __fastfail(3u);
        *(_QWORD *)v18 = &CmpLightTransactionList;
        *(_QWORD *)(v18 + 8) = v19;
        *v19 = v18;
        qword_140C47C28 = v18;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *a4 = v18;
        v10 = 0;
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0x72544D43u);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1072103422;
  }
  if ( v8 )
    CmpTransDereferenceTransaction(v8);
  if ( v9 )
    goto LABEL_20;
  return v10;
}
