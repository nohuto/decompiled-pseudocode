/*
 * XREFs of ?IsTopmostRealApp@@YGHPAUtagWND@@@Z @ 0x196218
 * Callers:
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 */

BOOL __thiscall IsTopmostRealApp(_DWORD *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)(this[3] + 4) + 84);
  return v1
      && *(_DWORD *)(*(_DWORD *)(v1 + 8) + 236) == _gpqForeground
      && this == FindNextTopWindow::NextTopWindow(0, 0, 2);
}
