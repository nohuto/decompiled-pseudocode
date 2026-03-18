/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x140659BDC
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14064EA70 (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(signed __int64 *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = a1 + 135;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 135), 0LL);
  a2[2] = a1[290];
  a2[3] = a1[278];
  do
  {
    v6 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v6 != MEMORY[0xFFFFF780000003B0] );
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v7 = a2[3];
  result = *a2 - v6;
  a2[1] = result;
  if ( v7 )
  {
    result -= v7;
    a2[2] += result;
  }
  return result;
}
