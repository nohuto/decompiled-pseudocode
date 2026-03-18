/*
 * XREFs of ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180106230 (-Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC030 (-Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800DE61C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z @ 0x1801C8584 (-CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(struct IOverlaySwapChain **this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  struct IOverlaySwapChain **v5; // rsi
  char v6; // r14
  bool v7; // cl
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(this - 2307) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&v16);
    v5 = this - 24;
    v6 = CTargetStats::Ready((CTargetStats *)(this - 24), v16, *(this - 2307));
    v7 = *((_BYTE *)this - 56)
      || !*(_DWORD *)*(this - 16) && COverlayContext::NeedsPresent((COverlayContext *)(this - 2306));
    if ( a2 | *((_BYTE *)this - 55) || v6 && v7 )
    {
      v8 = (__int64)*(this - 2307);
      v15 = 0LL;
      v14 = 0LL;
      CRegion::GetRectangles((FastRegion::CRegion *)(v8 + 360), &v14);
      v9 = COverlayContext::Present(
             (COverlayContext *)(this - 2306),
             *(this - 2307),
             0LL,
             (__int64)&v14,
             *((_DWORD *)this - 47) + 1 + *((_DWORD *)this - 46),
             0);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1ECu);
      }
      else
      {
        *((_WORD *)this - 28) = 0;
        v11 = CDDisplayRenderTarget::CheckForOcclusionChange((CDDisplayRenderTarget *)(this - 2329), v9);
        ++*(_DWORD *)v5;
        v2 = v11;
        v12 = v16;
        ++*((_DWORD *)v5 + 1);
        v5[6] = (struct IOverlaySwapChain *)v12;
        v5[7] = GetCurrentFrameId();
      }
      if ( (_QWORD)v14 )
        std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else if ( v7 )
    {
      ScheduleCompositionPass(0, 2u);
    }
  }
  if ( *((_BYTE *)this - 54) )
    return 142213121;
  return v2;
}
