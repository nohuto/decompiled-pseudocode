/*
 * XREFs of ExInitLicenseData @ 0x14082D3F8
 * Callers:
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ClipInitHandles @ 0x1403C54B0 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406A71F0 (ExpSetKernelDataProtection.c)
 *     ExGetExpirationDate @ 0x14082D70C (ExGetExpirationDate.c)
 *     sub_14082E084 @ 0x14082E084 (sub_14082E084.c)
 *     ntoskrnl_24 @ 0x1409F9AA0 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B0E114 @ 0x140B0E114 (sub_140B0E114.c)
 */

char ExInitLicenseData()
{
  __int64 v0; // rdi
  char v1; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbx
  char v5; // al
  struct _KTHREAD *v6; // rax
  char v7; // al
  LARGE_INTEGER v8; // rax
  struct _KTHREAD *v9; // rax
  int v10; // r15d
  char v11; // r14
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // rdx
  __int128 *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  struct _KTHREAD *v18; // rax
  char v19; // al
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  char v22; // si
  int ExpirationDate; // ecx
  unsigned int v24; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v27[5]; // [rsp+28h] [rbp-48h] BYREF
  char v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+51h] [rbp-1Fh]
  __int16 v30; // [rsp+55h] [rbp-1Bh]
  char v31; // [rsp+57h] [rbp-19h]
  __int128 v32; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  v1 = *(_BYTE *)(v0 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140B0E114();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)(v0 + 46840);
  ExAcquirePushLockExclusiveEx(v0 + 46840, 0LL);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  memset(v27, 0, 32);
  v27[4] = 10800LL;
  v28 = 1;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    v28 = 0;
  ExpSetKernelDataProtection(v0, (__int64)v27, -1, 1);
  v5 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 46840);
  KeAbPostRelease(v0 + 46840);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v0 + 46840, 0LL);
  *(_DWORD *)(v0 + 8) = 0;
  v7 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 46840);
  KeAbPostRelease(v0 + 46840);
  LOBYTE(v8.LowPart) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)v0 )
  {
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v0 + 46840, 0LL);
    v10 = sub_14082E084(v0);
    if ( v10 == -1073741762 )
    {
      *(_BYTE *)(v0 + 46992) = 1;
      v11 = 1;
    }
    else
    {
      v11 = *(_BYTE *)(v0 + 46992);
    }
    v12 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 46840);
    KeAbPostRelease(v0 + 46840);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v1 && v11 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v10 >= 0 && !v11 )
    {
      v13 = *(_QWORD *)v0;
      v14 = *(unsigned int *)(*(_QWORD *)v0 + 81920LL);
      if ( qword_140D3B4D0 )
        qword_140D3B4D0(v0, v14, v13);
      else
        SLUpdateLicenseDataInternal(v0, v14, v13);
    }
    v15 = &v32;
    v16 = 16LL;
    do
    {
      v17 = __rdtsc();
      *(_BYTE *)v15 = v17;
      v15 = (__int128 *)((char *)v15 + 1);
      --v16;
    }
    while ( v16 );
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v0 + 46840, 0LL);
    *(_OWORD *)(v0 + 46993) = v32;
    v19 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 46840);
    KeAbPostRelease(v0 + 46840);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v0 + 46840, 0LL);
    v21 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v21) && *(_QWORD *)v0 )
      ExFreePoolWithTag(*(PVOID *)v0, 0x69534C53u);
    *(_QWORD *)v0 = 0LL;
    if ( !*(_QWORD *)(v0 + 46832) )
    {
      v24 = *(_DWORD *)(v0 + 46824);
      if ( v24 )
      {
        memset((void *)(v0 + 24), 0, 16LL * v24);
        *(_DWORD *)(v0 + 46824) = 0;
      }
    }
    v22 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 46840);
    KeAbPostRelease(v0 + 46840);
    LOBYTE(v8.LowPart) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v8 = Time;
    if ( ExpirationDate < 0 )
      v8.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = v8.QuadPart;
  }
  return v8.LowPart;
}
