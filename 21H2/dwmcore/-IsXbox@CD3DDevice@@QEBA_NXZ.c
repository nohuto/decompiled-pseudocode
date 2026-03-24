/*
 * XREFs of ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180039114
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800252B8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180039068 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::IsXbox(const wchar_t *this)
{
  return wcsstr(this + 320, L"SraKmd") != 0LL;
}
