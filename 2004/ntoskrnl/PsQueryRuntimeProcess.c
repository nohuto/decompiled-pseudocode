/*
 * XREFs of PsQueryRuntimeProcess @ 0x140661D50
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     PspSetJobTimeLimitCallback @ 0x1409064B0 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v5; // rbp
  unsigned int v6; // edi
  int v7; // esi
  _QWORD **v8; // rbx
  _QWORD *i; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_DWORD *)(a1 + 892);
  v7 = *(_DWORD *)(a1 + 896);
  v8 = (_QWORD **)(a1 + 1504);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v6 += *((_DWORD *)i - 151);
    v7 += *((_DWORD *)i - 131);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = v6;
  *a2 = v7;
  return result;
}
