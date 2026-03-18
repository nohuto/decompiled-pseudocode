/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x1801C6F44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C7218 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((_DWORD *)this + 490) == *((_DWORD *)a3 + 4) && *((_DWORD *)this + 491) == *((_DWORD *)a3 + 5)
    || (v6 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v3 = v6, v6 >= 0) )
  {
    *((_DWORD *)this + 44) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 45) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 490) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 491) = *((_DWORD *)a3 + 5);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x7Eu);
  }
  return v3;
}
