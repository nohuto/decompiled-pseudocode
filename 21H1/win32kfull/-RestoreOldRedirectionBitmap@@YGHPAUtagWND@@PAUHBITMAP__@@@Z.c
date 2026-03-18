/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB
 * Callers:
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 * Callees:
 *     _GetRedirectionFlags@4 @ 0x20168 (_GetRedirectionFlags@4.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     _ChangeRedirectionParentInDCEs@8 @ 0x7324A (_ChangeRedirectionParentInDCEs@8.c)
 */

int __fastcall RestoreOldRedirectionBitmap(_DWORD *a1, int a2)
{
  int v4; // edi
  HBITMAP v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  v4 = SetRedirectionBitmap(a2, a1, 0, v6, v7);
  if ( v4 )
  {
    if ( (GetRedirectionFlags() & 1) != 0 )
      HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, a2, 1);
    ChangeRedirectionParentInDCEs((int)a1, 1);
  }
  return v4;
}
