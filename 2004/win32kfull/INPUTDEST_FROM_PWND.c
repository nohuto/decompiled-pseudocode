/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C01270A0
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionMouseSpeedHitTest @ 0x1C00B0A10 (EditionMouseSpeedHitTest.c)
 *     xxxSpeedHitTest @ 0x1C00B0B54 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DAC84 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F0110 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F1A80 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F1B64 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01F27E0 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F305C (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C02084EC (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     GetPTPShellTarget @ 0x1C02145F0 (GetPTPShellTarget.c)
 *     EditionPointerWindowHitTest @ 0x1C0217B70 (EditionPointerWindowHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C021843C (xxxPointerSpeedHitTest.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0224110 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0242898 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  memset(a1, 0, 0x70uLL);
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
    a1[27] = *(_DWORD *)(*(_QWORD *)(v4 + 416) + 1088LL);
  }
  return a1;
}
