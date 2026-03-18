/*
 * XREFs of __WindowFromDC@4 @ 0x9A764
 * Callers:
 *     _NtUserWindowFromDC@4 @ 0x9A730 (_NtUserWindowFromDC@4.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _SfnINLPDRAWITEMSTRUCT@32 @ 0x18CF89 (_SfnINLPDRAWITEMSTRUCT@32.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     _SfnINPAINTCLIPBRD@32 @ 0x18F764 (_SfnINPAINTCLIPBRD@32.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YGPAUtagWND@@QAUHDC__@@@Z @ 0x9A796 (-PwndFromHDC@@YGPAUtagWND@@QAUHDC__@@@Z.c)
 */

struct tagWND *_WindowFromDC()
{
  struct tagWND *v0; // esi
  HDC v2; // [esp+0h] [ebp-4h]

  GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
  v0 = PwndFromHDC(v2);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v0;
}
