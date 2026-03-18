/*
 * XREFs of _IsVisible@4 @ 0x2D3FC
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z @ 0x17E08B (-FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 *     ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E (-xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z.c)
 *     ?EnumPwndDlgChildProc@@YGHPAUtagWND@@J@Z @ 0x1B982C (-EnumPwndDlgChildProc@@YGHPAUtagWND@@J@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsVisible(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // esi
  char v3; // al

  v1 = this;
  if ( !this )
    return 1;
  while ( 1 )
  {
    v2 = v1[5];
    v3 = *(_BYTE *)(v2 + 23);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && v1 != this )
      break;
    if ( (*(_WORD *)(v2 + 30) & 0x3FFF) != 0x29D )
    {
      v1 = (_DWORD *)v1[14];
      if ( v1 )
        continue;
    }
    return 1;
  }
  return 0;
}
