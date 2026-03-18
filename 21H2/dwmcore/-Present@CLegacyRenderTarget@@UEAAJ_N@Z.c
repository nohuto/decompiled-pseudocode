/*
 * XREFs of ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4
 * Callers:
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180106270 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z @ 0x180106290 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC030 (-Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BD1A8 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800DE61C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(struct IOverlaySwapChain **this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *v5; // r14
  char v6; // r15
  bool v7; // cl
  FastRegion::CRegion *v8; // rcx
  char v9; // di
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD **v13; // rax
  unsigned int v14; // eax
  LARGE_INTEGER v15; // rax
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  if ( *(this - 2314) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v5 = (LARGE_INTEGER *)(this - 30);
    v6 = CTargetStats::Ready((CTargetStats *)(this - 30), PerformanceCount.QuadPart, *(this - 2314));
    v7 = *((_BYTE *)this - 77)
      || !*(_DWORD *)*(this - 20) && COverlayContext::NeedsPresent((COverlayContext *)(this - 2312));
    if ( *((_BYTE *)this - 76) | a2 || v6 && v7 )
    {
      v18 = 0LL;
      v8 = *(this - 11);
      v17 = 0LL;
      if ( v8 )
        CRegion::GetRectangles(v8, &v17);
      else
        (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*(this - 2314) + 40LL))(*(this - 2314), &v17);
      v9 = (*((__int64 (__fastcall **)(char *))*(this - 2336) + 30))((char *)this - 18688);
      v10 = *((_DWORD *)this - 59) + 1 + *((_DWORD *)this - 58);
      (*((void (__fastcall **)(char *))*(this - 2336) + 31))((char *)this - 18688);
      v11 = COverlayContext::Present((COverlayContext *)(this - 2312), *(this - 2314), v10, v9);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1D3u);
      }
      else
      {
        QueryPerformanceCounter(&PerformanceCount);
        v13 = (_DWORD **)*(this - 11);
        *(_WORD *)((char *)this - 77) = 0;
        if ( v13 )
          **v13 = 0;
        v14 = CLegacyRenderTarget::CheckForOcclusionChange((CLegacyRenderTarget *)(this - 2336), v2);
        ++v5->LowPart;
        v2 = v14;
        v15 = PerformanceCount;
        ++v5->HighPart;
        v5[6] = v15;
        v5[7].QuadPart = (LONGLONG)GetCurrentFrameId();
      }
      if ( (_QWORD)v17 )
        std::_Deallocate<16,0>(v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else if ( v7 )
    {
      ScheduleCompositionPass(0LL, 2LL);
    }
  }
  if ( *((_BYTE *)this - 75) )
    return 142213121;
  return v2;
}
