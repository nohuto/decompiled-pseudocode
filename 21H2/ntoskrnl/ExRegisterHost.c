/*
 * XREFs of ExRegisterHost @ 0x14079DC20
 * Callers:
 *     IopInitializeIoRate @ 0x1403B4758 (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x14079D998 (EtwpInitializeProcessorTrace.c)
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 *     VmInitSystem @ 0x140A48B1C (VmInitSystem.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140A48BDC (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140A48C3C (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140A48C94 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140A48CF4 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140A48D54 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140A48DAC (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140A48E04 (PspInitializeNetRateControl.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140A48E64 (SepInitializeAuthorizationCallbacks.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExpFindHost @ 0x14079DD78 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140956CBC (ExpDereferenceHost.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *v9; // rax
  signed __int8 v10; // cf
  _RTL_BALANCED_NODE *v11; // rbp
  __int64 Host; // rbp
  _QWORD *v13; // rax
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (ULONG_PTR)&ExpHostListLock);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_140D2EBD8;
    if ( *(__int64 **)qword_140D2EBD8 != &ExpHostList )
      __fastfail(3u);
    *v7 = &ExpHostList;
    v7[1] = v13;
    *v13 = v7;
    qword_140D2EBD8 = (__int64)v7;
    *a1 = v7;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  return v6;
}
