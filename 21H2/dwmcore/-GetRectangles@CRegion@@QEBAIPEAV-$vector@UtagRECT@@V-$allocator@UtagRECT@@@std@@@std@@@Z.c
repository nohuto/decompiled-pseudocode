/*
 * XREFs of ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180069110 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetDirtyRects@CLegacySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E628C (-GetDirtyRects@CLegacySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801AF69C (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801C86D0 (-GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801E1250 (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180292AA8 (-GetDirtyRects@CConversionSwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x1800B851C (-reserve@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801AEF84 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 */

__int64 __fastcall CRegion::GetRectangles(FastRegion::CRegion *a1, _QWORD *a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // edi
  FastRegion::Internal::CRgnData *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  _OWORD *v9; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-48h]
  _DWORD *v13; // [rsp+30h] [rbp-40h]
  FastRegion::Internal::CRgnData *v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = RectangleCount;
  if ( RectangleCount )
  {
    std::vector<tagRECT>::reserve(a2, RectangleCount + ((__int64)(a2[1] - *a2) >> 4));
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)a1,
      (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      DWORD1(v16) = *v13;
      v6 = v14;
      HIDWORD(v16) = v13[2];
      v7 = 2 * v15;
      LODWORD(v16) = *((_DWORD *)v14 + v7);
      v8 = *((_DWORD *)v14 + v7 + 1);
      v9 = (_OWORD *)a2[1];
      DWORD2(v16) = v8;
      if ( v9 == (_OWORD *)a2[2] )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a2, v9, &v16);
      }
      else
      {
        *v9 = v16;
        a2[1] += 16LL;
      }
      FastRegion::Internal::CRgnData::StepIterator(v6, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return v5;
}
