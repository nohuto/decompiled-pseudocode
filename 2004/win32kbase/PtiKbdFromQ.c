/*
 * XREFs of PtiKbdFromQ @ 0x1C01ADF88
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0069990 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     GetCurrentKbdTables @ 0x1C01AD4B0 (GetCurrentKbdTables.c)
 *     ProcessKeyboardInputWorker @ 0x1C01AD720 (ProcessKeyboardInputWorker.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01BCC28 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 96);
}
