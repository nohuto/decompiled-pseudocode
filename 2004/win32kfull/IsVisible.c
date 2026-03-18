/*
 * XREFs of IsVisible @ 0x1C0069C04
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F12F4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C021A8B4 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     RestoreSpb @ 0x1C021AF30 (RestoreSpb.c)
 *     SpbCheckRect @ 0x1C021B284 (SpbCheckRect.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0245A1C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0261750 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char v3; // al

  v1 = a1;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 40);
    v3 = *(_BYTE *)(v2 + 31);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && v1 != a1 )
      break;
    if ( (*(_WORD *)(v2 + 42) & 0x3FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 104);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
