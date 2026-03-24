/*
 * XREFs of HalRequestIpi @ 0x14027AEA0
 * Callers:
 *     PoIdle @ 0x140221ED0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x140227E50 (PoExecuteIdleCheck.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     PoInitiateProcessorWake @ 0x140565510 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567CF8 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14027B3E0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
