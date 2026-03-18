/*
 * XREFs of UnsetRedirectedWindow @ 0x1C004F050
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E8650 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01E8730 (xxxPrintWindow.c)
 * Callees:
 *     HintSpriteShape @ 0x1C001F104 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C0020AD8 (UnredirectDCEs.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00229F0 (DeleteOldRedirectionBitmap.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  int v6; // edx
  BOOL v7; // eax
  __int64 RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v6 = *(_DWORD *)(Prop + 32) & ~a2;
  *(_DWORD *)(Prop + 32) = v6;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0);
    v6 = *(_DWORD *)(Prop + 32);
    v3 = v7;
  }
  if ( !v6 )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap((__int64)a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v3;
}
