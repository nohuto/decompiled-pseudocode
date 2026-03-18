/*
 * XREFs of ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C034A6D8
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C034A2DC (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C034B894 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C034BC44 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C034A404 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainLocalClient(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  unsigned int i; // edi

  v6 = (void *)*((_QWORD *)a2 + 4);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
      (__int64)v6,
      *((unsigned int *)a2 + 7),
      *((_QWORD *)this + 8) + 112LL * i,
      a4);
  *((_QWORD *)a2 + 2) = 0LL;
}
