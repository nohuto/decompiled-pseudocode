/*
 * XREFs of PopFxIdleComponent @ 0x1402371A0
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x1402370B4 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140237150 (PoFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x1402377E0 (PopFxResidentTimeoutRoutine.c)
 * Callees:
 *     PopFxIdleWorker @ 0x140236D54 (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140237320 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x14023A38C (PopFxArmResidentTimer.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     PopFxQueueWorkOrder @ 0x14037E838 (PopFxQueueWorkOrder.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  LARGE_INTEGER v3; // r11
  unsigned int v4; // esi
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3.QuadPart = 0LL;
  v4 = BugCheckParameter3;
  v12 = 0LL;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v12);
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !v3.QuadPart )
      v3 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v9 = *(unsigned int *)(v7 + 92);
    if ( (v9 & 2) == 0 && !PopFxLowPowerEpoch )
    {
      v9 = (unsigned int)PopFxActiveIdleThreshold;
      if ( v3.QuadPart - v12 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
      {
        v9 = 2147483649LL;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(v7 + 88),
                                 -2147483647,
                                 0x80000000);
        if ( (_DWORD)result != 0x80000000 )
          return result;
        result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
        if ( (_DWORD)result == 1 )
        {
          if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
            return PopFxArmResidentTimer(0LL);
          return result;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
      }
    }
    if ( PopFxActiveIdleLevel == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v7 + 144,
        (LARGE_INTEGER)v3.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(v9, v7 + 24, BugCheckParameter2);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v4);
  }
  return result;
}
