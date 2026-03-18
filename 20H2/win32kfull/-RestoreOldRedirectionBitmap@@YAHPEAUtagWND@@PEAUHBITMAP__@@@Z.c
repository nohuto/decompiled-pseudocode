/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E715C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C003C5D8 (GetRedirectionFlags.c)
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0091758 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(void **a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, a2, 1);
    ChangeRedirectionParentInDCEs((struct tagWND *)a1, 1u);
  }
  return v4;
}
