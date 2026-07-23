/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x140381660
 * Callers:
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1405A2428 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B6144 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v4; // rdx
  volatile LONG v5; // ecx
  bool v7; // zf
  unsigned __int32 v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v4 = *(unsigned int *)SpinLock;
  v5 = *SpinLock;
  v10 = 0;
  if ( (v5 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v4 & 0x40000000) == 0 )
      {
        v8 = _InterlockedCompareExchange(SpinLock, v4 | 0x40000000, v4);
        v7 = (_DWORD)v4 == v8;
        v4 = v8;
        if ( !v7 )
          continue;
      }
      KeYieldProcessorEx(&v10, v4, v1, v2);
      v4 = *(unsigned int *)SpinLock;
    }
    while ( (v4 & 0xBFFFFFFF) != 0x80000001 );
  }
  return 1;
}
