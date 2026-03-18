/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x140698FA0
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x140698F70 (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PspSetProcessPriorityByClass @ 0x1402E8F8C (PspSetProcessPriorityByClass.c)
 */

_QWORD *__fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  BOOL v8; // r12d
  volatile signed __int64 *v9; // rbp
  int v11; // ecx

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
    v11 = *(_DWORD *)(a1 + 2172);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), ~v7);
    v8 = (v11 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v8);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
