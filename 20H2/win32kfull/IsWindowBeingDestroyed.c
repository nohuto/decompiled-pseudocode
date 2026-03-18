/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C00C65B8
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0003A30 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C0038DE0 (_GhostWindowFromHungWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0043840 (GreUpdateSpriteVisRgn.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0080498 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserSetWindowFNID @ 0x1C00C5070 (NtUserSetWindowFNID.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C00C736C (_HungWindowFromGhostWindow.c)
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010D5F8 (UserDetachQueueFromInputWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011EC38 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C0128E40 (NtUserSetBrokeredForeground.c)
 *     UserSetWindowedSwapChain @ 0x1C01532E8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0156010 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F77D0 (NtUserDisableImmersiveOwner.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209A2C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209B28 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C0209D30 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C0209D84 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0209EB0 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
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
    if ( (*(_DWORD *)(v3 + 488) & 1) != 0 )
      return 1;
  }
  return v2;
}
