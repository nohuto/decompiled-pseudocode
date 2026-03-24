/*
 * XREFs of ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018C750
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F5250 (-Present@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DumpVisualTree@CDebugTreeDumper@@SAJPEAVCVisualTree@@PEAVIDeviceTarget@@@Z @ 0x1800BF408 (-DumpVisualTree@CDebugTreeDumper@@SAJPEAVCVisualTree@@PEAVIDeviceTarget@@@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D8C44 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800EC140 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAXJ@Z @ 0x1800EE4A8 (-CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAXJ@Z.c)
 *     ?GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EE4F0 (-GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016BBF0 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x18016FC40 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18017C29C (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018C4E4 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18018C5B0 (-GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetOutstandingFrameCount@CDDisplayRenderTarget@@UEBAIPEAI@Z @ 0x18018C5E0 (-GetOutstandingFrameCount@CDDisplayRenderTarget@@UEBAIPEAI@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(CDDisplayRenderTarget *this, char a2)
{
  signed int v4; // edi
  CDDisplayRenderTarget *v5; // rbp
  unsigned int OutstandingFrameCount; // r14d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IDeviceTarget *v11; // rdx
  struct CVisualTree *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this - 2314) )
  {
    v5 = (CDDisplayRenderTarget *)((char *)this - 18544);
    v16 = 0;
    OutstandingFrameCount = CDDisplayRenderTarget::GetOutstandingFrameCount(
                              (CDDisplayRenderTarget *)((char *)this - 18544),
                              (unsigned int *)&v16);
    if ( *((_BYTE *)this - 58)
      || CDDisplayRenderTarget::IsPrimaryMonitor(v5)
      && !*((_BYTE *)this - 56)
      && (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this - 18504) != 1 )
    {
      a2 = 1;
    }
    if ( a2 || *((_BYTE *)this - 59) )
      goto LABEL_31;
    if ( !*((_BYTE *)this - 60) )
      goto LABEL_21;
    if ( OutstandingFrameCount < 2 )
    {
LABEL_31:
      if ( *((_BYTE *)this - 57) )
        CDDisplayRenderTarget::FlushAndWaitAtPresent((CDDisplayRenderTarget *)((char *)this - 18680));
      if ( !*((_BYTE *)this - 60) && !*((_BYTE *)this - 58) )
        v4 = 2;
      v7 = *((_QWORD *)this - 2314);
      v15 = 0LL;
      v14 = 0LL;
      CDDisplaySwapChain::GetDirtyRects(v7 + 64);
      v8 = COverlayContext::Present(
             (CDDisplayRenderTarget *)((char *)this - 18504),
             (*((_QWORD *)this - 2314) + 64LL) & -(__int64)(*((_QWORD *)this - 2314) != 0LL),
             v4,
             (__int64)&v14,
             v16,
             0);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x200u, 0LL);
      }
      else
      {
        *((_WORD *)this - 30) = 0;
        *((_BYTE *)this - 58) = 0;
        CDDisplayRenderTarget::CheckForOcclusionChange((CDDisplayRenderTarget *)((char *)this - 18680), v8);
      }
      std::vector<tagRECT>::~vector<tagRECT>((__int64)&v14);
    }
    else
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
  }
LABEL_21:
  if ( *((_BYTE *)this - 56) )
    v4 = 142213121;
  if ( v4 >= 0 )
  {
    if ( *((_QWORD *)this - 2322) )
    {
      v10 = *((_QWORD *)this - 2314);
      if ( v10 )
      {
        if ( CDDisplaySwapChain::GetCurrentBackBuffer((CDDisplaySwapChain *)(v10 + 64)) )
          CDebugTreeDumper::DumpVisualTree(v12, v11);
      }
    }
  }
  return (unsigned int)v4;
}
