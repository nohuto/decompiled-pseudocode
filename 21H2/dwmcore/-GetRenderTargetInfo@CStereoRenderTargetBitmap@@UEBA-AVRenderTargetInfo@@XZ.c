/*
 * XREFs of ?GetRenderTargetInfo@CStereoRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1802A7920
 * Callers:
 *     ?GetRenderTargetInfo@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EBA?AVRenderTargetInfo@@XZ @ 0x18010CEF0 (-GetRenderTargetInfo@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800ED850 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 */

__int64 __fastcall CStereoRenderTargetBitmap::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  CRenderTargetBitmap::GetRenderTargetInfo(a1, a2);
  return a2;
}
