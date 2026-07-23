/*
 * XREFs of ExInitLicenseData @ 0x140791B78
 * Callers:
 *     sub_1405AD1C8 @ 0x1405AD1C8 (sub_1405AD1C8.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ClipInitHandles @ 0x1403B3380 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 *     ExGetExpirationDate @ 0x140791484 (ExGetExpirationDate.c)
 *     sub_140792698 @ 0x140792698 (sub_140792698.c)
 *     ntoskrnl_24 @ 0x140948CB0 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     sub_140A538E8 @ 0x140A538E8 (sub_140A538E8.c)
 */

void ExInitLicenseData()
{
  _QWORD *v0; // rsi
  char v1; // r12
  struct _LIST_ENTRY *CurrentServerSilo; // rax
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
  struct _LIST_ENTRY *v15; // rax
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
  v1 = *((_BYTE *)v0 + 37616);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo((__int64)CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140A538E8();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = v0 + 4683;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 4683), 0LL);
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
    ExfTryToWakePushLock(v0 + 4683);
  KeAbPostRelease((ULONG_PTR)(v0 + 4683));
  KeLeaveCriticalRegion();
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 4683), 0LL);
  *((_DWORD *)v0 + 2) = 0;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 4683);
  KeAbPostRelease((ULONG_PTR)(v0 + 4683));
  KeLeaveCriticalRegion();
  if ( *v0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 4683), 0LL);
    v7 = sub_140792698(v0);
    if ( v7 == -1073741762 )
    {
      *((_BYTE *)v0 + 37616) = 1;
      v8 = 1;
    }
    else
    {
      v8 = *((_BYTE *)v0 + 37616);
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 4683);
    KeAbPostRelease((ULONG_PTR)(v0 + 4683));
    KeLeaveCriticalRegion();
    if ( !v1 && v8 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v7 >= 0 && !v8 )
    {
      v9 = *(unsigned int *)(*v0 + 0x10000LL);
      if ( qword_140D2C518 )
        ((void (__fastcall *)(_QWORD *, __int64))qword_140D2C518)(v0, v9);
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 4683), 0LL);
    *(_OWORD *)((char *)v0 + 37617) = v25;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 4683);
    KeAbPostRelease((ULONG_PTR)(v0 + 4683));
    KeLeaveCriticalRegion();
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 4683), 0LL);
    v15 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo((__int64)v15) && *v0 )
      ExFreePoolWithTag((PVOID)*v0, 0x69534C53u);
    *v0 = 0LL;
    if ( !v0[4682] )
    {
      v18 = *((_DWORD *)v0 + 9362);
      if ( v18 )
      {
        memset(v0 + 3, 0, 16LL * v18);
        *((_DWORD *)v0 + 9362) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0 + 4683);
    KeAbPostRelease((ULONG_PTR)(v0 + 4683));
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
