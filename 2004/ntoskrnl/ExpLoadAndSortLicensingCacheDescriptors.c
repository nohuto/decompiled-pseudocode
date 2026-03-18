/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x140794C84
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x1405ADB04 (ExpSetLicenseTamperState.c)
 *     sub_140794EC8 @ 0x140794EC8 (sub_140794EC8.c)
 *     sub_140794F2C @ 0x140794F2C (sub_140794F2C.c)
 *     ntoskrnl_24 @ 0x14094A050 (ntoskrnl_24.c)
 */

__int64 __fastcall ExpLoadAndSortLicensingCacheDescriptors(__int64 a1)
{
  signed __int64 *v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r14d
  _DWORD *v9; // r12
  void *v10; // rcx
  char v11; // r15
  int v12; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h]
  char v16; // [rsp+A0h] [rbp+18h]

  v12 = 0;
  v16 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 37464);
  ExAcquirePushLockSharedEx(a1 + 37464, 0LL);
  if ( *(_BYTE *)(a1 + 37616) )
  {
    v12 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 37452) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a1 + 37448) )
      v3 = -1073741772;
    v12 = v3;
  }
  else
  {
    v16 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v4 = v12;
  if ( v12 >= 0 && v16 == 1 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
    if ( *(_BYTE *)(a1 + 37452) == 1 )
      goto LABEL_30;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v8 = sub_140794EC8(a1);
      v12 = v8;
      if ( v8 < 0 )
        goto LABEL_30;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 37456);
      if ( !v7 )
        goto LABEL_28;
      v8 = v12;
    }
    if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      ExpSetLicenseTamperState(a1, 2);
    v9 = (_DWORD *)(a1 + 37448);
    v10 = (void *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 37448) )
    {
      LOBYTE(v6) = 1;
      v8 = sub_140794F2C(v7, v6, a1 + 24, 2339LL, a1 + 37448);
      v12 = v8;
      v10 = (void *)(a1 + 24);
    }
    if ( v8 >= 0 )
    {
      if ( *v9 )
      {
        qsort(v10, (unsigned int)*v9, 0x10uLL, sub_14079E020);
        *(_BYTE *)(a1 + 37452) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 37452) = 1;
        v12 = -1073741772;
      }
      goto LABEL_30;
    }
    if ( v8 != -1073741789 )
    {
LABEL_30:
      v11 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = v12;
      goto LABEL_12;
    }
LABEL_28:
    v12 = -1073741762;
    *(_BYTE *)(a1 + 37616) = 1;
    v15 = 1;
    goto LABEL_30;
  }
LABEL_12:
  if ( v15 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return v4;
}
