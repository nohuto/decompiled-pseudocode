/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801C1710
 * Callers:
 *     ?ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ @ 0x1801A1EA0 (-ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801C10D8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801C6B94 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801C6FFC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801C7360 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801C77C0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801C810C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z @ 0x180112F02 (--$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 446); i = (unsigned int)(i + 1) )
    ReleaseInterfaceNoNULL<IRenderTargetBitmap>(*(_QWORD *)(*((_QWORD *)this + 220) + 8 * i));
  *((_DWORD *)this + 446) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1760, 8u);
}
