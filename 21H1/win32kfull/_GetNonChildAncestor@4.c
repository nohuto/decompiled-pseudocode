/*
 * XREFs of _GetNonChildAncestor@4 @ 0x1C9AA
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787 (_EditionChangeForegroundQueueForMouseInput@8.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE (-xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetNonChildAncestor(int a1)
{
  if ( a1 )
  {
    while ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0) == 0x40 )
      a1 = *(_DWORD *)(a1 + 56);
  }
  return a1;
}
