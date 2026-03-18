/*
 * XREFs of HalpTimerClockInitialize @ 0x14035A600
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1404BA620 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpTimerSetProblemEx @ 0x1404BB52C (HalpTimerSetProblemEx.c)
 */

__int64 HalpTimerClockInitialize()
{
  ULONG_PTR v0; // rbx
  __int64 InternalData; // rax
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r8

  v0 = HalpClockTimer;
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  result = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(InternalData);
  if ( (int)result < 0 )
  {
    HalpTimerSetProblemEx(v0, 15, result, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 1465);
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, HalpTimerLastProblem, BugCheckParameter4);
  }
  return result;
}
