/*
 * XREFs of ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A3964
 * Callers:
 *     ?GetDeviceTexture@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010C9B0 (-GetDeviceTexture@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetDeviceTexture(
        CDecodeBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  if ( *((_BYTE *)this - 96) )
    return CRenderTargetBitmap::GetDeviceTexture((CDecodeBitmap *)((char *)this - 8), a2, a3);
  *a3 = 0LL;
  return 2291674884LL;
}
