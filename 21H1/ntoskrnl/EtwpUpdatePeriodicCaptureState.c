/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x14093ADC4
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExCancelTimer @ 0x14035B3B0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x14035BCA0 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckNotificationAccess @ 0x14067F064 (EtwpCheckNotificationAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(unsigned int a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  int v4; // ebp
  __int64 v5; // r12
  int v6; // esi
  void *v7; // r14
  char v8; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  volatile signed __int64 *v13; // rbp
  void *v14; // rcx
  PVOID PoolWithTag; // rax
  _QWORD *v16; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  __int16 v21; // [rsp+24h] [rbp-74h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int128 v24; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v5 = a3;
  v24 = 0LL;
  v6 = 0;
  v21 = a1;
  v7 = 0LL;
  v8 = 0;
  v23 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v11 = EtwpAcquireLoggerContextByLoggerId(v23, a1, 0);
  v12 = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 832) & 0x40) != 0 )
    {
      v6 = -1073741162;
LABEL_21:
      v19 = *(void **)(v12 + 1080);
      if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
        *(_QWORD *)(v12 + 1080) = 0LL;
        *(_WORD *)(v12 + 1072) = 0;
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      if ( !v8 )
        goto LABEL_30;
      v13 = (volatile signed __int64 *)(v12 + 704);
LABEL_27:
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
LABEL_30:
      EtwpReleaseLoggerContext((unsigned int *)v12, 0);
      return (unsigned int)v6;
    }
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v6 = EtwpCheckNotificationAccess(&a4[2 * v4], v12 + 292);
        if ( v6 < 0 )
          break;
        if ( ++v4 >= (int)v5 )
          goto LABEL_8;
      }
      v6 = -1073741790;
      v8 = 0;
      goto LABEL_21;
    }
LABEL_8:
    v13 = (volatile signed __int64 *)(v12 + 704);
    ExAcquirePushLockExclusiveEx(v12 + 704, 0LL);
    v14 = *(void **)(v12 + 1080);
    if ( v14 )
    {
      if ( !*(_QWORD *)(v12 + 1088) )
      {
        ExCancelTimer(0LL, 0LL);
        *(_DWORD *)(v12 + 1096) = 0;
        v14 = *(void **)(v12 + 1080);
      }
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v12 + 1080) = 0LL;
      *(_WORD *)(v12 + 1072) = 0;
    }
    if ( !(_WORD)v5 )
      goto LABEL_27;
    *(_WORD *)(v12 + 1072) = v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v5, 0x55777445u);
    *(_QWORD *)(v12 + 1080) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_14:
      v8 = 1;
      v6 = -1073741801;
      goto LABEL_21;
    }
    memmove(PoolWithTag, a4, 16 * v5);
    if ( !*(_QWORD *)(v12 + 1088) )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x55777445u);
      v7 = v16;
      if ( !v16 )
        goto LABEL_14;
      *((_WORD *)v16 + 20) = v21;
      v16[4] = v23;
      v16[2] = SendCaptureStateNotificationsWorker;
      v16[3] = v16;
      *v16 = 0LL;
      *(_QWORD *)(v12 + 1088) = ExAllocateTimer((__int64)&PeriodicCaptureStateTimerCallback, (__int64)v16, 8u);
    }
    *((_QWORD *)&v24 + 1) = -1LL;
    v17 = *(_QWORD *)(v12 + 1088);
    v18 = -10000000LL * a2;
    *(_QWORD *)(v12 + 1064) = v18;
    ExSetTimer(v17, v18, 0LL, (__int64)&v24);
    *(_DWORD *)(v12 + 1096) = 1;
    goto LABEL_27;
  }
  return (unsigned int)-1073741811;
}
