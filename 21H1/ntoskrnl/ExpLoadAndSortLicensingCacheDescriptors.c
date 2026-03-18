/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x140792454
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x1405AD3E4 (ExpSetLicenseTamperState.c)
 *     sub_140792698 @ 0x140792698 (sub_140792698.c)
 *     sub_1407926FC @ 0x1407926FC (sub_1407926FC.c)
 *     ntoskrnl_24 @ 0x140948CB0 (ntoskrnl_24.c)
 */

__int64 __fastcall ExpLoadAndSortLicensingCacheDescriptors(__int64 a1)
{
  signed __int64 *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // r14d
  _DWORD *v12; // r12
  void *v13; // rcx
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v20; // [rsp+48h] [rbp-40h]
  char v21; // [rsp+98h] [rbp+10h]
  char v22; // [rsp+A0h] [rbp+18h]

  v18 = 0;
  v22 = 0;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 37464);
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  if ( *(_BYTE *)(a1 + 37616) )
  {
    v18 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 37452) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a1 + 37448) )
      v3 = -1073741772;
    v18 = v3;
  }
  else
  {
    v22 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v7 = v18;
  if ( v18 >= 0 && v22 == 1 )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( *(_BYTE *)(a1 + 37452) == 1 )
      goto LABEL_30;
    v10 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v11 = sub_140792698(a1);
      v18 = v11;
      if ( v11 < 0 )
        goto LABEL_30;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 37456);
      if ( !v10 )
        goto LABEL_28;
      v11 = v18;
    }
    if ( (*(_DWORD *)(v10 + 12) & 1) != 0 )
      ExpSetLicenseTamperState(a1, 2);
    v12 = (_DWORD *)(a1 + 37448);
    v13 = (void *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 37448) )
    {
      LOBYTE(v9) = 1;
      v11 = sub_1407926FC(v10, v9, a1 + 24, 2339LL, a1 + 37448);
      v18 = v11;
      v13 = (void *)(a1 + 24);
    }
    if ( v11 >= 0 )
    {
      if ( *v12 )
      {
        qsort(v13, (unsigned int)*v12, 0x10uLL, sub_140799C50);
        *(_BYTE *)(a1 + 37452) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 37452) = 1;
        v18 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v11 != -1073741789 )
    {
LABEL_30:
      v14 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
        ExfTryToWakePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
      v7 = v18;
      goto LABEL_12;
    }
LABEL_28:
    v18 = -1073741762;
    *(_BYTE *)(a1 + 37616) = 1;
    v21 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v21 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return v7;
}
