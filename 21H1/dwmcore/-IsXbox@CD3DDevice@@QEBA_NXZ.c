/*
 * XREFs of ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x18002F3D0
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18002F324 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800D5948 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::IsXbox(const wchar_t *this)
{
  return wcsstr(this + 320, L"SraKmd") != 0LL;
}
