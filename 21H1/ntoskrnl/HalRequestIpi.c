/*
 * XREFs of HalRequestIpi @ 0x140359720
 * Callers:
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x140275C40 (PoExecuteIdleCheck.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     PoInitiateProcessorWake @ 0x14055FA10 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14026B1E0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
