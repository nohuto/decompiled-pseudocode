/*
 * XREFs of ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800EC140
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BF188 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018C750 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x18002FD84 (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800E0638 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EC2B8 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1800ECB6C (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Present(
        COverlayContext *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6)
{
  CDirectFlipInfo *v6; // rsi
  unsigned int v7; // r10d
  COverlayContext *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx

  v6 = (CDirectFlipInfo *)*((_QWORD *)this + 1412);
  v7 = a3;
  if ( v6 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    v17 = CDirectFlipInfo::Present(v6, v16);
    v13 = v17;
    if ( v17 >= 0 || (MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x98Eu, 0LL), v13 == -2003304309) )
    {
      *((_BYTE *)this + 11424) = 1;
    }
    else
    {
      COverlayContext::ClearDirectFlip(this);
      *((_BYTE *)this + 11432) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 11424) = 0;
    if ( a6 || COverlayContext::LegacyPresentRequired(this) )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 1LL, v7);
      v13 = v14;
      if ( v14 >= 0 )
      {
        *((_DWORD *)this + 2852) = 0;
        *((_BYTE *)this + 11416) = 1;
        *((_BYTE *)this + 11425) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x977u, 0LL);
      }
    }
    else
    {
      v11 = COverlayContext::PresentMPO(v10);
      v13 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x96Du, 0LL);
    }
  }
  return v13;
}
