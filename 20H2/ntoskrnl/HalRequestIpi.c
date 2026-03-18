/*
 * XREFs of HalRequestIpi @ 0x1402EAE80
 * Callers:
 *     PoExecuteIdleCheck @ 0x14027D7F0 (PoExecuteIdleCheck.c)
 *     PoIdle @ 0x140281800 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     PoInitiateProcessorWake @ 0x140563A40 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140566228 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14027E090 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
