/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@0AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180239D8C
 * Callers:
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18023B1F0 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@PEAU1@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAPEAUDDisplayPrimaryBufferResources@@QEAU1@0PEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180242800 (--$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@PEAU1@V-$allocator@UDDisplayPrimaryBu.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802433FC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?_Change_array@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEAAXQEAUDDisplayPrimaryBufferResources@@_K1@Z @ 0x180248B9C (-_Change_array@-$vector@UDDisplayPrimaryBufferResources@@V-$allocator@UDDisplayPrimaryBufferReso.c)
 * Callees:
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x180239F68 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
        DDisplayPrimaryBufferResources *this,
        DDisplayPrimaryBufferResources *a2)
{
  DDisplayPrimaryBufferResources *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources(v3);
      v3 = (DDisplayPrimaryBufferResources *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
