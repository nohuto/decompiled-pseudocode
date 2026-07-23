/*
 * XREFs of ExInitLicenseData @ 0x1407AAF08
 * Callers:
 *     sub_1405B3078 @ 0x1405B3078 (sub_1405B3078.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     ClipInitHandles @ 0x1403B82F0 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1405E4F30 (ExpSetKernelDataProtection.c)
 *     ExGetExpirationDate @ 0x1407AAA20 (ExGetExpirationDate.c)
 *     sub_1407ABA18 @ 0x1407ABA18 (sub_1407ABA18.c)
 *     ntoskrnl_24 @ 0x14094D7B0 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     sub_140A5C300 @ 0x140A5C300 (sub_140A5C300.c)
 */

void __fastcall ExInitLicenseData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  char v3; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v6; // rdi
  struct _KTHREAD *v7; // rax
  struct _KTHREAD *v8; // rax
  int v9; // r15d
  char v10; // r14
  __int64 v11; // rdx
  __int128 *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  int ExpirationDate; // ecx
  LARGE_INTEGER v19; // rax
  unsigned int v20; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v22[5]; // [rsp+28h] [rbp-48h] BYREF
  char v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+51h] [rbp-1Fh]
  __int16 v25; // [rsp+55h] [rbp-1Bh]
  char v26; // [rsp+57h] [rbp-19h]
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v2 = (_QWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  v3 = *((_BYTE *)v2 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140A5C300();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = v2 + 5855;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(v22, 0, 32);
  v22[4] = 10800LL;
  v23 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v23 = 0;
  ExpSetKernelDataProtection((__int64)v2, (__int64)v22, -1, 1);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 5855);
  KeAbPostRelease((ULONG_PTR)(v2 + 5855));
  KeLeaveCriticalRegion();
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
  *((_DWORD *)v2 + 2) = 0;
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 5855);
  KeAbPostRelease((ULONG_PTR)(v2 + 5855));
  KeLeaveCriticalRegion();
  if ( *v2 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    v9 = sub_1407ABA18(v2);
    if ( v9 == -1073741762 )
    {
      *((_BYTE *)v2 + 46992) = 1;
      v10 = 1;
    }
    else
    {
      v10 = *((_BYTE *)v2 + 46992);
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
    if ( !v3 && v10 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v9 >= 0 && !v10 )
    {
      v11 = *(unsigned int *)(*v2 + 81920LL);
      if ( qword_140D2D500 )
        ((void (__fastcall *)(_QWORD *, __int64))qword_140D2D500)(v2, v11);
      else
        SLUpdateLicenseDataInternal(v2, v11, *v2);
    }
    v12 = &v27;
    v13 = 16LL;
    do
    {
      v14 = __rdtsc();
      *(_BYTE *)v12 = v14;
      v12 = (__int128 *)((char *)v12 + 1);
      --v13;
    }
    while ( v13 );
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    *(_OWORD *)((char *)v2 + 46993) = v27;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    v17 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v17) && *v2 )
      ExFreePoolWithTag((PVOID)*v2, 0x69534C53u);
    *v2 = 0LL;
    if ( !v2[5854] )
    {
      v20 = *((_DWORD *)v2 + 11706);
      if ( v20 )
      {
        memset(v2 + 3, 0, 16LL * v20);
        *((_DWORD *)v2 + 11706) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v19 = Time;
    if ( ExpirationDate < 0 )
      v19.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = v19.QuadPart;
  }
}
