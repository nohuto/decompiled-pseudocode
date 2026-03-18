/*
 * XREFs of IsVisible @ 0x1C0041324
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0037408 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00EC180 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0219A24 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     RestoreSpb @ 0x1C021A0A0 (RestoreSpb.c)
 *     SpbCheckRect @ 0x1C021A3F4 (SpbCheckRect.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0260130 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
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
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 104);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
