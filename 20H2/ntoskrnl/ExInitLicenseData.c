/*
 * XREFs of ExInitLicenseData @ 0x1407A0C50
 * Callers:
 *     sub_1405B1448 @ 0x1405B1448 (sub_1405B1448.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ClipInitHandles @ 0x1403B6B40 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406B1500 (ExpSetKernelDataProtection.c)
 *     ExGetExpirationDate @ 0x1407A0760 (ExGetExpirationDate.c)
 *     sub_1407A1770 @ 0x1407A1770 (sub_1407A1770.c)
 *     ntoskrnl_24 @ 0x14094FE10 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     sub_140A59CD4 @ 0x140A59CD4 (sub_140A59CD4.c)
 */

void ExInitLicenseData()
{
  _QWORD *v0; // rsi
  char v1; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rdi
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  int v7; // r15d
  char v8; // r14
  __int64 v9; // rdx
  __int128 *v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  int ExpirationDate; // ecx
  LARGE_INTEGER v17; // rax
  unsigned int v18; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v20[5]; // [rsp+28h] [rbp-48h] BYREF
  char v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+51h] [rbp-1Fh]
  __int16 v23; // [rsp+55h] [rbp-1Bh]
  char v24; // [rsp+57h] [rbp-19h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v0 = (_QWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  v1 = *((_BYTE *)v0 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140A59CD4();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = v0 + 5855;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  memset(v20, 0, 32);
  v20[4] = 10800LL;
  v21 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v21 = 0;
  ExpSetKernelDataProtection((__int64)v0, (__int64)v20, -1, 1);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 5855);
  KeAbPostRelease((ULONG_PTR)(v0 + 5855));
  KeLeaveCriticalRegion();
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  *((_DWORD *)v0 + 2) = 0;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 5855);
  KeAbPostRelease((ULONG_PTR)(v0 + 5855));
  KeLeaveCriticalRegion();
  if ( *v0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v7 = sub_1407A1770(v0);
    if ( v7 == -1073741762 )
    {
      *((_BYTE *)v0 + 46992) = 1;
      v8 = 1;
    }
    else
    {
      v8 = *((_BYTE *)v0 + 46992);
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    KeLeaveCriticalRegion();
    if ( !v1 && v8 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v7 >= 0 && !v8 )
    {
      v9 = *(unsigned int *)(*v0 + 81920LL);
      if ( qword_140D2D520 )
        ((void (__fastcall *)(_QWORD *, __int64))qword_140D2D520)(v0, v9);
      else
        SLUpdateLicenseDataInternal(v0, v9, *v0);
    }
    v10 = &v25;
    v11 = 16LL;
    do
    {
      v12 = __rdtsc();
      *(_BYTE *)v10 = v12;
      v10 = (__int128 *)((char *)v10 + 1);
      --v11;
    }
    while ( v11 );
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    *(_OWORD *)((char *)v0 + 46993) = v25;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    KeLeaveCriticalRegion();
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v15 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v15) && *v0 )
      ExFreePoolWithTag((PVOID)*v0, 0x69534C53u);
    *v0 = 0LL;
    if ( !v0[5854] )
    {
      v18 = *((_DWORD *)v0 + 11706);
      if ( v18 )
      {
        memset(v0 + 3, 0, 16LL * v18);
        *((_DWORD *)v0 + 11706) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    KeLeaveCriticalRegion();
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v17 = Time;
    if ( ExpirationDate < 0 )
      v17.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = v17.QuadPart;
  }
}
