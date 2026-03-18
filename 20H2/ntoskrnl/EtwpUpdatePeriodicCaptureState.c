/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x140941E94
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExCancelTimer @ 0x14033BF90 (ExCancelTimer.c)
 *     ExSetTimer @ 0x14033C8D0 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x14033CA60 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x1407196FC (EtwpCheckNotificationAccess.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(unsigned int a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v5; // esi
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
  __int64 v18; // rdx
  __int128 v21; // [rsp+28h] [rbp-50h] BYREF

  v4 = a3;
  v21 = 0LL;
  v5 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], a1, 0);
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
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 704));
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
    v18 = -10000000LL * a2;
    *(_QWORD *)v12 = v18;
    ExSetTimer(v17, v18, 0LL, (__int64)&v21);
    *(_DWORD *)(v12 + 64) = 1;
    goto LABEL_25;
  }
  return (unsigned int)-1073741811;
}
