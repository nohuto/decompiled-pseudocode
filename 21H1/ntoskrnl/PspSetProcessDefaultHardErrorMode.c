/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x14069A150
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x14069A028 (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v6; // rdi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( *(_DWORD *)(a1 + 1528) != a3 )
  {
    *(_DWORD *)(a1 + 1528) = a3;
    v7 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1408) )
      v7 = 1;
    KeSetAutoAlignmentProcess(a1, v7);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2, v8, v9, v10);
}
