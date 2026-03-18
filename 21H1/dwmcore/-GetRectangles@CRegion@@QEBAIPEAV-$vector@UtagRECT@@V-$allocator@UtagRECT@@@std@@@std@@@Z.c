/*
 * XREFs of ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E7944
 * Callers:
 *     ?GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E7930 (-GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?GetDirtyRects@CLegacySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EB334 (-GetDirtyRects@CLegacySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180250958 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007ACF4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007AD58 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BB450 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E4860 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1800E77F8 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ?_Reallocate_exactly@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x1800E7CA0 (-_Reallocate_exactly@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall CRegion::GetRectangles(int **a1, _QWORD *a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // edi
  unsigned __int64 v6; // rdx
  FastRegion::Internal::CRgnData *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  _BYTE *v10; // rdx
  _BYTE v12[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-48h]
  _DWORD *v14; // [rsp+30h] [rbp-40h]
  FastRegion::Internal::CRgnData *v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = RectangleCount;
  if ( RectangleCount )
  {
    v6 = RectangleCount + ((__int64)(a2[1] - *a2) >> 4);
    if ( v6 > (__int64)(a2[2] - *a2) >> 4 )
    {
      if ( v6 > 0xFFFFFFFFFFFFFFFLL )
        std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
      std::vector<tagRECT>::_Reallocate_exactly(a2);
    }
    FastRegion::Internal::CRgnData::BeginIterator(
      (FastRegion::Internal::CRgnData *)*a1,
      (struct FastRegion::CRegion::Iterator *)v12);
    while ( (unsigned __int64)v14 < v13 )
    {
      DWORD1(v17) = *v14;
      v7 = v15;
      HIDWORD(v17) = v14[2];
      v8 = 2 * v16;
      LODWORD(v17) = *((_DWORD *)v15 + v8);
      v9 = *((_DWORD *)v15 + v8 + 1);
      v10 = (_BYTE *)a2[1];
      DWORD2(v17) = v9;
      if ( (_BYTE *)a2[2] == v10 )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a2, v10, &v17);
      }
      else
      {
        *(_OWORD *)v10 = v17;
        a2[1] += 16LL;
      }
      FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v12);
    }
  }
  return v5;
}
