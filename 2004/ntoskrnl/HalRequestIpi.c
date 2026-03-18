/*
 * XREFs of HalRequestIpi @ 0x1402FD740
 * Callers:
 *     PoIdle @ 0x140216D90 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x14021CBF0 (PoExecuteIdleCheck.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     PoInitiateProcessorWake @ 0x140560060 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140562848 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140212190 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(int a1, _WORD *a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 0xE1u);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
