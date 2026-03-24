/*
 * XREFs of ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800F1FC0
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180239320 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180249420 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802496C0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_P.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     memcmp_0 @ 0x1800F47CF (memcmp_0.c)
 */

char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 *v4; // rbx
  __int64 *v6; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi

  v4 = (__int64 *)*((_QWORD *)this + 171);
  v6 = (__int64 *)*((_QWORD *)this + 172);
  if ( v4 == v6 )
    return 0;
  v8 = a3;
  while ( 1 )
  {
    v9 = *v4;
    if ( v8 == (*(_QWORD *)(*v4 + 8) - *(_QWORD *)*v4) / 144LL && !memcmp_0(a2, *(const void **)v9, 144 * v8) )
      break;
    if ( ++v4 == v6 )
      return 0;
  }
  *a4 = *(_BYTE *)(v9 + 896);
  *(_QWORD *)(v9 + 888) = GetCurrentFrameId();
  return 1;
}
