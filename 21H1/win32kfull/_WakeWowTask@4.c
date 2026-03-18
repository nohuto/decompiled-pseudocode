/*
 * XREFs of _WakeWowTask@4 @ 0x155BA7
 * Callers:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     ?SetWakeBitInterMoveSize@@YGXPAUtagTHREADINFO@@I@Z @ 0xEFBC6 (-SetWakeBitInterMoveSize@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 * Callees:
 *     <none>
 */

LONG __thiscall WakeWowTask(int this)
{
  LONG result; // eax

  result = *(_DWORD *)(*(_DWORD *)(this + 232) + 200);
  if ( result )
  {
    if ( !*(_DWORD *)(result + 4) )
      return KeSetEvent(*(PRKEVENT *)(this + 400), 1, 0);
  }
  return result;
}
