/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x14093F834
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     ExCancelTimer @ 0x14026DAD0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x14026E650 (ExAllocateTimer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x1406BA4F4 (EtwpCheckNotificationAccess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(__int64 a1, __int64 a2, unsigned __int16 a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v5; // esi
  unsigned int v7; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v9; // rax
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rdi
  PVOID PoolWithTag; // rax
  void *v14; // rcx
  PVOID v15; // rax
  __int64 Timer; // rax
  ULONG_PTR v17; // rcx
  signed __int64 v18; // rdx
  unsigned int v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+28h] [rbp-50h] BYREF

  v4 = a3;
  v20 = a2;
  v21 = 0LL;
  v5 = 0;
  v7 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  v9 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v7, 0);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (v9[208] & 0x40) != 0 )
    {
      v5 = -1073741162;
LABEL_28:
      EtwpReleaseLoggerContext((unsigned int *)v10, 0);
      return (unsigned int)v5;
    }
    v11 = 0;
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v5 = EtwpCheckNotificationAccess(&a4[2 * v11], v10 + 292);
        if ( v5 < 0 )
          break;
        if ( ++v11 >= (int)v4 )
          goto LABEL_8;
      }
      v5 = -1073741790;
      goto LABEL_28;
    }
LABEL_8:
    ExAcquirePushLockExclusiveEx(v10 + 704, 0LL);
    v12 = *(_QWORD *)(v10 + 1064);
    if ( !v12 )
    {
      if ( !(_WORD)v4 )
      {
LABEL_25:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 704);
        KeAbPostRelease(v10 + 704);
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x55777445u);
      *(_QWORD *)(v10 + 1064) = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_11:
        v5 = -1073741801;
        goto LABEL_25;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v12 = *(_QWORD *)(v10 + 1064);
    }
    v14 = *(void **)(v12 + 24);
    if ( v14 )
    {
      if ( *(_QWORD *)(v12 + 8) )
      {
        ExCancelTimer(*(_QWORD *)(v12 + 8), 0LL);
        v14 = *(void **)(v12 + 24);
        *(_DWORD *)(v12 + 64) = 0;
      }
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_WORD *)(v12 + 16) = 0;
    }
    if ( !(_WORD)v4 )
      goto LABEL_25;
    v15 = ExAllocatePoolWithTag(PagedPool, 16 * v4, 0x55777445u);
    *(_QWORD *)(v12 + 24) = v15;
    if ( !v15 )
      goto LABEL_11;
    *(_WORD *)(v12 + 16) = v4;
    memmove(v15, a4, 16 * v4);
    if ( !*(_QWORD *)(v12 + 8) )
    {
      Timer = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, v10, 8u);
      *(_QWORD *)(v12 + 8) = Timer;
      if ( !Timer )
      {
        ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
        *(_QWORD *)(v12 + 24) = 0LL;
        *(_WORD *)(v12 + 16) = 0;
        goto LABEL_11;
      }
      *(_QWORD *)(v12 + 56) = v10;
      *(_QWORD *)(v12 + 48) = SendCaptureStateNotificationsWorker;
      *(_QWORD *)(v12 + 32) = 0LL;
    }
    *((_QWORD *)&v21 + 1) = -1LL;
    v17 = *(_QWORD *)(v12 + 8);
    v18 = -10000000LL * v20;
    *(_QWORD *)v12 = v18;
    ExSetTimer(v17, v18, 0LL, (__int64)&v21);
    *(_DWORD *)(v12 + 64) = 1;
    goto LABEL_25;
  }
  return (unsigned int)-1073741811;
}
