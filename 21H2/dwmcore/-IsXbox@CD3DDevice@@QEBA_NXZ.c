/*
 * XREFs of ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180066F20
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180005AD0 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x18001DB98 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180066E4C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::IsXbox(const wchar_t *this)
{
  return wcsstr(this + 300, L"SraKmd") != 0LL;
}
