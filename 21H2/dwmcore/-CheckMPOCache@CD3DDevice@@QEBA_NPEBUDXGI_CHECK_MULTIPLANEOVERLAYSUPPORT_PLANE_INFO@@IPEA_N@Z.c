/*
 * XREFs of ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001244C
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001232C (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18027A060 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18028AB2C (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 */

char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 *v4; // rbx
  __int64 *v6; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi

  v4 = (__int64 *)*((_QWORD *)this + 181);
  v6 = (__int64 *)*((_QWORD *)this + 182);
  if ( v4 == v6 )
    return 0;
  v9 = a3;
  while ( 1 )
  {
    v10 = *v4;
    if ( v9 == 0x8E38E38E38E38E39uLL * ((__int64)(*(_QWORD *)(*v4 + 8) - *(_QWORD *)*v4) >> 4)
      && !memcmp_0(a2, *(const void **)v10, 144 * v9) )
    {
      break;
    }
    if ( ++v4 == v6 )
      return 0;
  }
  *a4 = *(_BYTE *)(v10 + 896);
  *(_QWORD *)(v10 + 888) = GetCurrentFrameId();
  return 1;
}
