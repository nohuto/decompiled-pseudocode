/*
 * XREFs of HalpTimerClockArm @ 0x1402FE470
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x1404BA788 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     HalpSetTimer @ 0x1402FE504 (HalpSetTimer.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BA788 (HalpTimerSwitchToNormalClock.c)
 */

__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  ULONG_PTR v7; // rdi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = HalpClockTimer;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  LOBYTE(a4) = 1;
  result = HalpSetTimer(v7, 3 - (unsigned int)(a1 != 1), a2, a4, a3);
  HalpTimerClockStatePeriodic = a1 != 1;
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v7, HalpTimerLastProblem, (int)result);
  return result;
}
