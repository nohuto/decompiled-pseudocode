/*
 * XREFs of EtwpCoverageSamplerStop @ 0x1409F39DC
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1409F27B0 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeStopProfile @ 0x1405716A4 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x140635EEC (EtwpCovSampCaptureContextStop.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x1409F1CB0 (EtwpCovSampProcessCleanup.c)
 */

char __fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // r15
  int v4; // eax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 *i; // rcx
  __int64 v11; // rbp
  struct _KTHREAD *v12; // rcx
  __int64 *NextProcess; // rax
  __int64 *v14; // rsi
  struct _KTHREAD *v15; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C15D68 = (__int64)KeGetCurrentThread();
  if ( qword_140C15D78 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1216);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1216) = v4 | 2;
      qword_140C15D68 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&EtwpCovSampGlobals);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease(&stru_140C15D80);
      ExRundownCompleted(&stru_140C15D80);
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v6 = KeGetCurrentThread();
      v2 = (void *)qword_140C15D78;
      qword_140C15D78 = 0LL;
      v7 = qword_140C15D88;
      qword_140C15D68 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1148);
      if ( (v8 & 8) != 0 )
      {
        KeStopProfile(qword_140C15D88 + 16);
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
        *(_DWORD *)(EtwpHostSiloState + 4576) &= 0xFFFFFDFB;
        *(_DWORD *)(v9 + 4572) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v9, 0, 9u);
        *(_DWORD *)(a1 + 1148) &= ~4u;
      }
      for ( i = 0LL; ; i = v14 )
      {
        NextProcess = PsGetNextProcess(i);
        v14 = NextProcess;
        if ( !NextProcess )
          break;
        v11 = NextProcess[318];
        if ( v11 )
        {
          v12 = KeGetCurrentThread();
          --v12->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
          *(_QWORD *)(v11 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v11, 1);
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11 + 8);
          KeAbPostRelease(v11 + 8);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v7);
      *(_DWORD *)(a1 + 1148) &= ~1u;
    }
  }
  v15 = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_140C15D68 == v15 )
  {
    qword_140C15D68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    LOBYTE(v15) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    LOBYTE(v15) = ObfDereferenceObject(v2);
  return (char)v15;
}
