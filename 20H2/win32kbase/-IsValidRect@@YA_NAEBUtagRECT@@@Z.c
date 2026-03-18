/*
 * XREFs of ?IsValidRect@@YA_NAEBUtagRECT@@@Z @ 0x1C00B51BC
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003570 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B5100 (-SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00CB420 (-SetBufferProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidRect(const struct tagRECT *a1)
{
  return a1->right >= a1->left && a1->bottom >= a1->top;
}
