/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00C11EC
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01E7A70 (xxxPrintWindow.c)
 * Callees:
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnredirectDCEs @ 0x1C0091808 (UnredirectDCEs.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C12CC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
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
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap((void **)a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v3;
}
