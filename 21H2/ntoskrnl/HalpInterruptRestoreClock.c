/*
 * XREFs of HalpInterruptRestoreClock @ 0x140386A18
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 *v5; // rdi
  _QWORD *Lines; // rax
  ULONG_PTR *v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v0 = 0;
  v1 = HalpTimerCriticalClockSourceCount;
  if ( HalpTimerCriticalClockSourceCount )
  {
    v5 = &HalpTimerCriticalClockSource;
    while ( 1 )
    {
      v10 = *v5;
      HalpInterruptApplyOverrides((unsigned int *)&v10, 0LL, 0LL);
      Lines = HalpInterruptFindLines((unsigned int *)&v10);
      if ( !Lines )
        break;
      v7 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
      if ( !v7 )
      {
        HalpInterruptLastProblem = 17;
LABEL_11:
        v9 = -1073741810;
LABEL_12:
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v9);
      }
      v9 = HalpInterruptSetLineStateInternal((__int64)v7, (__int64)&v10, *(_QWORD *)(v8 + 40));
      if ( v9 < 0 )
        goto LABEL_12;
      ++v0;
      ++v5;
      if ( v0 >= v1 )
        goto LABEL_2;
    }
    HalpInterruptLastProblem = 18;
    goto LABEL_11;
  }
LABEL_2:
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return (*(__int64 (__fastcall **)(__int64))(v3 + 120))(InternalData);
}
