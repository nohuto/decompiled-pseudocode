/*
 * XREFs of _IsWindowBeingDestroyed@4 @ 0x1F28E
 * Callers:
 *     _NtUserSetWindowFNID@8 @ 0x1F1C6 (_NtUserSetWindowFNID@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     __HungWindowFromGhostWindow@4 @ 0x72334 (__HungWindowFromGhostWindow@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     _UserDetachQueueFromInputWindow@8 @ 0xA9A54 (_UserDetachQueueFromInputWindow@8.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _UserRemoveWindowedSwapChain@8 @ 0xC2A82 (_UserRemoveWindowedSwapChain@8.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 *     ?ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xE0D4A (-ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     _NtUserSetBrokeredForeground@4 @ 0xE7570 (_NtUserSetBrokeredForeground@4.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     _NtUserDisableImmersiveOwner@4 @ 0x160BAA (_NtUserDisableImmersiveOwner@4.c)
 *     ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F (-_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E (-_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     __RegisterErrorReportingDialog@8 @ 0x1704ED (__RegisterErrorReportingDialog@8.c)
 *     _xxxFrostCrashedWindow@8 @ 0x170644 (_xxxFrostCrashedWindow@8.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 * Callees:
 *     <none>
 */

int __thiscall IsWindowBeingDestroyed(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = this[5];
  result = 0;
  if ( *(char *)(v1 + 11) < 0 )
    return 1;
  if ( *(char *)(v1 + 12) < 0 )
    return 1;
  if ( *(__int16 *)(v1 + 30) < 0 )
    return 1;
  v3 = this[2];
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 264) & 1) != 0 )
      return 1;
  }
  return result;
}
