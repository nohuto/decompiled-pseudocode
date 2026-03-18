/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x1406F3B80
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x1406F3C80 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PspSetProcessPriorityByClass @ 0x1403369D8 (PspSetProcessPriorityByClass.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  BOOL v8; // r12d
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // ecx

  CurrentThread = KeGetCurrentThread();
  v7 = a3 != 0 ? 0x20000 : 0x10000;
  v8 = 1;
  --CurrentThread->KernelApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2172), v7);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 2172);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), ~v7);
    v8 = (v14 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v8);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
}
