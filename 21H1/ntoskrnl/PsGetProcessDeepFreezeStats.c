/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x1405EF3AC
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(signed __int64 *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
  v10 = a2[3];
  result = *a2 - v6;
  a2[1] = result;
  if ( v10 )
  {
    result -= v10;
    a2[2] += result;
  }
  return result;
}
