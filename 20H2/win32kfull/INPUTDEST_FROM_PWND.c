/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C0128DE0
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionMouseSpeedHitTest @ 0x1C003F470 (EditionMouseSpeedHitTest.c)
 *     xxxSpeedHitTest @ 0x1C003F5B4 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C003F74C (xxxDCompSpeedHitTest.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D9FC4 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EF4A0 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F0E10 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F0EF4 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01F1B70 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F23EC (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C020767C (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     GetPTPShellTarget @ 0x1C0213770 (GetPTPShellTarget.c)
 *     EditionPointerWindowHitTest @ 0x1C0216CE0 (EditionPointerWindowHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02175AC (xxxPointerSpeedHitTest.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0223280 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C02415F8 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
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
    a1[27] = *(_DWORD *)(*(_QWORD *)(v4 + 424) + 1088LL);
  }
  return a1;
}
