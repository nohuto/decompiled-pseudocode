/*
 * XREFs of HalpTimerClockArm @ 0x140354380
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x14050C138 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     HalpSetTimer @ 0x140354420 (HalpSetTimer.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpTimerSwitchToNormalClock @ 0x14050C138 (HalpTimerSwitchToNormalClock.c)
 */

__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v5; // ebx
  ULONG_PTR v6; // rdi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a2;
  v6 = HalpClockTimer;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  result = HalpSetTimer(v6, 3 - (unsigned int)(a1 != 1), v5, 1, a3);
  HalpTimerClockStatePeriodic = a1 != 1;
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v6, HalpTimerLastProblem, (int)result);
  return result;
}
