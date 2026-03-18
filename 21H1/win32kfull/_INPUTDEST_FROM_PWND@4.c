/*
 * XREFs of _INPUTDEST_FROM_PWND@4 @ 0x9B69A
 * Callers:
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _EditionMouseSpeedHitTest@48 @ 0xF14D0 (_EditionMouseSpeedHitTest@48.c)
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     ?DeferPointerCursorOperation@@YGXPBUtagPOINTER_INFO@@ABUtagPOINTERCURSORDATA@@@Z @ 0x1486B3 (-DeferPointerCursorOperation@@YGXPBUtagPOINTER_INFO@@ABUtagPOINTERCURSORDATA@@@Z.c)
 *     _PrepareSentPointerMessageForClient@16 @ 0x15A03D (_PrepareSentPointerMessageForClient@16.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 *     ?MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x15B0D0 (-MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YGHGKPAUtagDELEGATEPOINTERMAP@@@Z @ 0x15B142 (-PointerDelegateGetClient@@YGHGKPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _EditionIsPointerInputRedirected@12 @ 0x15BA09 (_EditionIsPointerInputRedirected@12.c)
 *     _xxxDoDeferredPointerActivate@4 @ 0x15BEFB (_xxxDoDeferredPointerActivate@4.c)
 *     ?_AdjustFrameHwnd@Edgy@@YGXQAXPAUHWND__@@@Z @ 0x16E290 (-_AdjustFrameHwnd@Edgy@@YGXQAXPAUHWND__@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _GetPTPShellTarget@0 @ 0x178B8D (_GetPTPShellTarget@0.c)
 *     _EditionPointerWindowHitTest@52 @ 0x17B823 (_EditionPointerWindowHitTest@52.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 *     ?DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z @ 0x185481 (-DelegateMoveSizeToShell@@YGXPAUtagWND@@I@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

_DWORD *__thiscall INPUTDEST_FROM_PWND(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx

  memset(a2, 0, 0x68u);
  if ( this )
  {
    v3 = this[2];
    *a2 = 4;
    a2[20] = this;
    a2[22] = 2;
    a2[25] = *(_DWORD *)(*(_DWORD *)(v3 + 232) + 668);
  }
  return a2;
}
