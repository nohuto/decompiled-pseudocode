/*
 * XREFs of ?UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ @ 0x180092A8C
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180092098 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 * Callees:
 *     ?HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ @ 0x180092AB0 (-HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ.c)
 */

char __fastcall CLegacyRenderTarget::UseSuperSample(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // r10
  char v4; // al

  if ( CLegacyRenderTarget::HasVirtualModeScale(this) )
  {
    v4 = v2;
    if ( *(_BYTE *)(v1 + 11505) == v2 )
      return 1;
    return v4;
  }
  return v2;
}
