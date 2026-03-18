/*
 * XREFs of ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18016D1C0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016D010 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18026663C (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180266E90 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x18026713C (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C9A60 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

CMILPoolResource *__fastcall wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(
        CMILPoolResource **a1)
{
  CMILPoolResource *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CMILPoolResource *)CMILPoolResource::Release(result);
  return result;
}
