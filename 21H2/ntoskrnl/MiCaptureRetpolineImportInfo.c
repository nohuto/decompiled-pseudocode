/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x14077DF0C
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiIsRetpolineEnabled @ 0x1402A3834 (MiIsRetpolineEnabled.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140397D38 (RtlCaptureRetpolineImportRvas.c)
 */

__int64 __fastcall MiCaptureRetpolineImportInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *Pool; // rsi
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int (*v8)(void); // rdi
  __int64 result; // rax
  char v10; // di
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Pool = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  v11 = 0;
  v6 = *(_QWORD *)(v4 + 32);
  v8 = (unsigned int (*)(void))((unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)MiIsRetpolineEnabled());
  result = RtlCaptureRetpolineImportRvas(
             *(char **)(v7 + 48),
             *(_QWORD *)(v7 + 48),
             *(unsigned int *)(a1 + 64),
             v8,
             0LL,
             &v11);
  if ( (int)result >= 0 )
    goto LABEL_5;
  if ( (_DWORD)result == -1073741789 )
  {
    Pool = MiAllocatePool(256, v11, 0x69526D4Du);
    if ( !Pool )
      return 3221225495LL;
    result = RtlCaptureRetpolineImportRvas(
               *(char **)(a1 + 48),
               *(_QWORD *)(a1 + 48),
               *(unsigned int *)(a1 + 64),
               v8,
               Pool,
               &v11);
    if ( (int)result >= 0 )
    {
LABEL_5:
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 24, 0LL);
      *(_QWORD *)(*(_QWORD *)(v6 + 96) + 16LL) = Pool;
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
        ExfTryToWakePushLock(v6 + 24);
      KeAbPostRelease(v6 + 24);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
  }
  return result;
}
