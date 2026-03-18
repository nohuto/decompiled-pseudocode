/*
 * XREFs of EtwpCoverageSamplerStop @ 0x140942C54
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x140941A40 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeStopProfile @ 0x1405161E0 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A8E0C (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140907E20 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x140940EF0 (EtwpCovSampProcessCleanup.c)
 */

void __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v2; // r15
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // rax
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *i; // rcx
  __int64 v14; // rbp
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 NextProcess; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C19848 = (__int64)KeGetCurrentThread();
  if ( qword_140C19858 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1216);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1216) = v4 | 2;
      qword_140C19848 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C19860);
      ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C19860);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v9 = KeGetCurrentThread();
      v2 = (struct _DMA_ADAPTER *)qword_140C19858;
      qword_140C19858 = 0LL;
      v10 = qword_140C19868;
      qword_140C19848 = (__int64)v9;
      v11 = *(_DWORD *)(a1 + 1148);
      if ( (v11 & 8) != 0 )
      {
        KeStopProfile(qword_140C19868 + 16);
        *(_DWORD *)(a1 + 1148) &= ~8u;
        v11 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v11 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1148) &= ~2u;
        v11 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v11 & 4) != 0 )
      {
        v12 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4552) &= 0xFFFFFDFB;
        *(_DWORD *)(v12 + 4548) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v12, 0, 9u);
        *(_DWORD *)(a1 + 1148) &= ~4u;
      }
      for ( i = 0LL; ; i = v20 )
      {
        NextProcess = PsGetNextProcess(i);
        v20 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v14 = *(_QWORD *)(NextProcess + 2544);
        if ( v14 )
        {
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v14 + 8, 0LL);
          *(_QWORD *)(v14 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v14, 1);
          *(_QWORD *)(v14 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14 + 8);
          KeAbPostRelease(v14 + 8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
        }
      }
      EtwpCovSampCaptureContextStop(v10);
      *(_DWORD *)(a1 + 1148) &= ~1u;
    }
  }
  if ( (struct _KTHREAD *)qword_140C19848 == KeGetCurrentThread() )
  {
    qword_140C19848 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  if ( v2 )
    HalPutDmaAdapter(v2);
}
