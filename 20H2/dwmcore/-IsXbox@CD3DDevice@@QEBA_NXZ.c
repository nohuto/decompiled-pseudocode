/*
 * XREFs of ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180045CB4
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180031EB8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045C08 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::IsXbox(const wchar_t *this)
{
  return wcsstr(this + 320, L"SraKmd") != 0LL;
}
