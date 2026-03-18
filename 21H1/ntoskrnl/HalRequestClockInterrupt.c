/*
 * XREFs of HalRequestClockInterrupt @ 0x14030E5A0
 * Callers:
 *     KiSendClockInterruptToClockOwner @ 0x14030E514 (KiSendClockInterruptToClockOwner.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD190 (HalpTimerWatchdogTriggerSystemReset.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14026B1E0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestClockInterrupt(int a1, _WORD *a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 0xD2u);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
