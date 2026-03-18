/*
 * XREFs of _DeleteFadeSprite@0 @ 0x153705
 * Callers:
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 * Callees:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__stdcall DeleteFadeSprite()
{
  _DWORD *v0; // esi
  _DWORD *v1; // eax

  v0 = 0;
  if ( ((int)_gfade[9] & 8) != 0 )
  {
    v1 = (_DWORD *)HMValidateHandleNoSecure((unsigned int)_gfade[0], 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(v1[5] + 18) & 8) != 0 )
      UnsetLayeredWindow(v1, 0);
  }
  else
  {
    GreDeleteSprite(_gfade[0], (HWND)1);
  }
  _gfade[0] = 0;
  return v0;
}
