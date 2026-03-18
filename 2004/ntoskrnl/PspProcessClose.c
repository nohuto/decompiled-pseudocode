/*
 * XREFs of PspProcessClose @ 0x1406E4E40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x140907E7C (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v7; // ebp
  volatile signed __int64 *v8; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a4 > 1 || (result = *(unsigned int *)(a2 + 1520), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(a2 + 2172) & 0x8000) == 0 )
    {
      result = *(_QWORD *)(a2 + 1352);
      if ( *(_QWORD *)(a1 + 1088) == result )
      {
        result = *(unsigned int *)(a1 + 1124);
        if ( (result & 0x40000008) != 0 )
          return PsTerminateProcess(a2);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    v8 = (volatile signed __int64 *)(a2 + 1080);
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( !*(_DWORD *)(a2 + 1520) )
    {
      _m_prefetchw((const void *)(a2 + 1124));
      v7 = _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v7 & 0x2000000) == 0 )
      return PspRundownProcess((PVOID)a2);
  }
  return result;
}
