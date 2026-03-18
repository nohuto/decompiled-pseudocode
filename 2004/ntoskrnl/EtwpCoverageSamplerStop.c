/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140943EC8
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x140942CC0 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409443AC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     KeStopProfile @ 0x140516830 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A94FC (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409090D0 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x140942170 (EtwpCovSampProcessCleanup.c)
 */

void __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v2; // r15
  int v4; // eax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *i; // rcx
  __int64 v11; // rbp
  struct _KTHREAD *v12; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v14; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C196C8 = (__int64)KeGetCurrentThread();
  if ( qword_140C196D8 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1216);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1216) = v4 | 2;
      qword_140C196C8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C196E0);
      ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C196E0);
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v6 = KeGetCurrentThread();
      v2 = (struct _DMA_ADAPTER *)qword_140C196D8;
      qword_140C196D8 = 0LL;
      v7 = qword_140C196E8;
      qword_140C196C8 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1148);
      if ( (v8 & 8) != 0 )
      {
        KeStopProfile(qword_140C196E8 + 16);
        *(_DWORD *)(a1 + 1148) &= ~8u;
        v8 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v8 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1148) &= ~2u;
        v8 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v8 & 4) != 0 )
      {
        v9 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4552) &= 0xFFFFFDFB;
        *(_DWORD *)(v9 + 4548) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v9, 0, 9u);
        *(_DWORD *)(a1 + 1148) &= ~4u;
      }
      for ( i = 0LL; ; i = v14 )
      {
        NextProcess = PsGetNextProcess(i);
        v14 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v11 = *(_QWORD *)(NextProcess + 2544);
        if ( v11 )
        {
          v12 = KeGetCurrentThread();
          --v12->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
          *(_QWORD *)(v11 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v11, 1);
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 8));
          KeAbPostRelease(v11 + 8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v7);
      *(_DWORD *)(a1 + 1148) &= ~1u;
    }
  }
  if ( (struct _KTHREAD *)qword_140C196C8 == KeGetCurrentThread() )
  {
    qword_140C196C8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    HalPutDmaAdapter(v2);
}
