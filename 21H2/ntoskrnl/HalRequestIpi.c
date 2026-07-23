/*
 * XREFs of HalRequestIpi @ 0x140268E40
 * Callers:
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x140565750 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567F38 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140269380 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 225LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
