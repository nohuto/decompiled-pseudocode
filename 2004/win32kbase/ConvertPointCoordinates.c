/*
 * XREFs of ConvertPointCoordinates @ 0x1C01B0520
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C006B6FC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0173F70 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C0188860 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     SynthesizeMitTouchInput @ 0x1C01B05AC (SynthesizeMitTouchInput.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C01B03C0 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int v9; // [rsp+54h] [rbp+Ch]
  __int64 plResult; // [rsp+58h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  plResult = 0LL;
  result = ConvertCoordinatesWithRoundingNoBounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  v8 = result;
  if ( (_DWORD)result )
  {
    ConvertCoordinatesWithRoundingNoBounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    *a4 = plResult;
    return v8;
  }
  return result;
}
