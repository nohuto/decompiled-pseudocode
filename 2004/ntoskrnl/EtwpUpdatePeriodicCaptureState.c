/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x14093C064
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExCancelTimer @ 0x140275200 (ExCancelTimer.c)
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x140275AF0 (ExAllocateTimer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     EtwpCheckNotificationAccess @ 0x140636558 (EtwpCheckNotificationAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(unsigned int a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  __int64 v4; // r12
  int v5; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  void *v11; // rcx
  PVOID PoolWithTag; // rax
  _WORD *v13; // rax
  ULONG_PTR v14; // rcx
  signed __int64 v15; // rdx
  __int16 v17; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF

  v4 = a3;
  v20 = 0LL;
  v5 = 0;
  v17 = a1;
  v19 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v8 = EtwpAcquireLoggerContextByLoggerId(v19, a1, 0);
  v9 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 832) & 0x40) != 0 )
    {
      v5 = -1073741162;
LABEL_24:
      EtwpReleaseLoggerContext((unsigned int *)v9, 0);
      return (unsigned int)v5;
    }
    v10 = 0;
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v5 = EtwpCheckNotificationAccess(&a4[2 * v10], v9 + 292);
        if ( v5 < 0 )
          break;
        if ( ++v10 >= (int)v4 )
          goto LABEL_8;
      }
      v5 = -1073741790;
      goto LABEL_24;
    }
LABEL_8:
    ExAcquirePushLockExclusiveEx(v9 + 704, 0LL);
    v11 = *(void **)(v9 + 1080);
    if ( v11 )
    {
      if ( *(_QWORD *)(v9 + 1088) )
      {
        ExCancelTimer(*(_QWORD *)(v9 + 1088), 0LL);
        v11 = *(void **)(v9 + 1080);
        *(_DWORD *)(v9 + 1096) = 0;
      }
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(v9 + 1080) = 0LL;
      *(_WORD *)(v9 + 1072) = 0;
    }
    if ( !(_WORD)v4 )
    {
LABEL_21:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 704));
      KeAbPostRelease(v9 + 704);
      goto LABEL_24;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v4, 0x55777445u);
    *(_QWORD *)(v9 + 1080) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_14:
      v5 = -1073741801;
      goto LABEL_21;
    }
    *(_WORD *)(v9 + 1072) = v4;
    memmove(PoolWithTag, a4, 16 * v4);
    if ( !*(_QWORD *)(v9 + 1088) )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x55777445u);
      if ( !v13 )
      {
        ExFreePoolWithTag(*(PVOID *)(v9 + 1080), 0);
        *(_QWORD *)(v9 + 1080) = 0LL;
        *(_WORD *)(v9 + 1072) = 0;
        goto LABEL_14;
      }
      v13[20] = v17;
      *((_QWORD *)v13 + 4) = v19;
      *((_QWORD *)v13 + 2) = SendCaptureStateNotificationsWorker;
      *((_QWORD *)v13 + 3) = v13;
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v9 + 1088) = ExAllocateTimer((__int64)&PeriodicCaptureStateTimerCallback, (__int64)v13, 8u);
    }
    *((_QWORD *)&v20 + 1) = -1LL;
    v14 = *(_QWORD *)(v9 + 1088);
    v15 = -10000000LL * a2;
    *(_QWORD *)(v9 + 1064) = v15;
    ExSetTimer(v14, v15, 0LL, (__int64)&v20);
    *(_DWORD *)(v9 + 1096) = 1;
    goto LABEL_21;
  }
  return (unsigned int)-1073741811;
}
