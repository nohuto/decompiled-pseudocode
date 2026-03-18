/*
 * XREFs of ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C7218
 * Callers:
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x1801C6F44 (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C68F4 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx

  v1 = 0;
  if ( !*((_BYTE *)this + 1928) )
  {
    *((_BYTE *)this + 1928) = 1;
    v2 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x1BAu);
  }
  return v1;
}
