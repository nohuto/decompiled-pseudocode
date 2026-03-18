/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C0029300
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     NtUserSetWindowFNID @ 0x1C002A3F0 (NtUserSetWindowFNID.c)
 *     _GhostWindowFromHungWindow @ 0x1C002C5D0 (_GhostWindowFromHungWindow.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C004B038 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxCreateCaret @ 0x1C005DC34 (xxxCreateCaret.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BF7B0 (NtUserSetBrokeredForeground.c)
 *     _HungWindowFromGhostWindow @ 0x1C00E79E8 (_HungWindowFromGhostWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00E8350 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010BA78 (UserDetachQueueFromInputWindow.c)
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C01536E0 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F8640 (NtUserDisableImmersiveOwner.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A8AC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C020A9A8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C020ABB0 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C020AC04 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020AD30 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( *(char *)(v1 + 19) < 0 )
    return 1;
  if ( *(char *)(v1 + 20) < 0 )
    return 1;
  if ( *(__int16 *)(v1 + 42) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 480) & 1) != 0 )
      return 1;
  }
  return v2;
}
