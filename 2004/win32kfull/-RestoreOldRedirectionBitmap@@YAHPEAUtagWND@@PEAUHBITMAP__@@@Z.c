/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     HintSpriteShape @ 0x1C001F104 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00206AC (ChangeRedirectionParentInDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionFlags @ 0x1C0024D40 (GetRedirectionFlags.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1u);
  }
  return v4;
}
