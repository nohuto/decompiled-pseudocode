/*
 * XREFs of MiCaptureRetpolineImportInfo @ 0x140779F6C
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiIsRetpolineEnabled @ 0x140357968 (MiIsRetpolineEnabled.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140397778 (RtlCaptureRetpolineImportRvas.c)
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
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 24));
      KeAbPostRelease(v6 + 24);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
  }
  return result;
}
