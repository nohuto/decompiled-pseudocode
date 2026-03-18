/*
 * XREFs of ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18010A730 (-PresentMPO@CConversionSwapChain@@$4PPPPPPPM@A@EAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRE.c)
 * Callees:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18001BE80 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B8414 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18028B78C (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x180290FD8 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x1802913AC (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802916D4 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180291F60 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x1802920CC (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180292C78 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::PresentMPO(
        CConversionSwapChain *this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  __int64 v7; // r14
  __int64 v13; // rdx
  char *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h]
  _DWORD v44[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  int *v48; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+98h] [rbp-68h] BYREF
  void *v50[10]; // [rsp+E0h] [rbp-20h] BYREF
  const void *retaddr; // [rsp+188h] [rbp+88h]

  LODWORD(v7) = 0;
  v43 = 0LL;
  v42 = 0LL;
  if ( a7 )
  {
    v7 = a7;
    do
    {
      v13 = *(unsigned int *)a6;
      v14 = (char *)this + 136 * v13 - 456;
      *(_OWORD *)v14 = *(_OWORD *)a6;
      *((_OWORD *)v14 + 1) = *((_OWORD *)a6 + 1);
      *((_OWORD *)v14 + 2) = *((_OWORD *)a6 + 2);
      *((_OWORD *)v14 + 3) = *((_OWORD *)a6 + 3);
      *((_OWORD *)v14 + 4) = *((_OWORD *)a6 + 4);
      *((_OWORD *)v14 + 5) = *((_OWORD *)a6 + 5);
      *((_OWORD *)v14 + 6) = *((_OWORD *)a6 + 6);
      *((_OWORD *)v14 + 7) = *((_OWORD *)a6 + 7);
      *((_QWORD *)v14 + 16) = *((_QWORD *)a6 + 16);
      if ( *((_DWORD *)this + 34 * v13 - 113)
        && !CConversionSwapChain::IsDesktopPlane(
              (CConversionSwapChain *)((char *)this - 824),
              (CConversionSwapChain *)((char *)this + 136 * v13 - 456)) )
      {
        *((_BYTE *)this - 80) = 1;
        a3 &= ~2u;
      }
      a6 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
      --v7;
    }
    while ( v7 );
  }
  if ( (a3 & 2) != 0 )
  {
    v15 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v42, v7);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x1AFu);
    goto LABEL_38;
  }
  v18 = CConversionSwapChain::CalcPresentMode((CConversionSwapChain *)((char *)this - 824), &v41);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x14Fu);
    return v17;
  }
  v20 = *((_DWORD *)this - 115);
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( !v21 )
    {
      v32 = CConversionSwapChain::ConvertSingleAppPlane(
              (CConversionSwapChain *)((char *)this - 824),
              (CConversionSwapChain *)((char *)this + 136 * v41 - 456));
      v17 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x162u);
        return v17;
      }
      std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((__int64 *)&v42, 0LL, (_OWORD *)this - 6);
      v34 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v42, 0);
      v17 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x168u);
        goto LABEL_38;
      }
      goto LABEL_36;
    }
    v22 = (unsigned int)(v21 - 1);
    if ( !(_DWORD)v22 )
    {
      v29 = 136LL * v41;
      v45 = *(_QWORD *)((char *)this + v29 - 428);
      v46 = *(_DWORD *)((char *)this + v29 - 420);
      v47 = *(_DWORD *)((char *)this + v29 - 416);
      v44[0] = *(_DWORD *)((char *)this + v29 - 412);
      v44[1] = *((_DWORD *)this + 34 * v41 - 102);
      v44[2] = *(_DWORD *)((char *)this + v29 - 404);
      v44[3] = *(_DWORD *)((char *)this + v29 - 400);
      v30 = CLegacySwapChain::PresentDFlip(
              (__int64)this - 424,
              a2,
              a3,
              0LL,
              *(_QWORD *)((char *)this + v29 - 448),
              (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)((char *)this + v29 - 356),
              a4,
              (__int64)a5,
              &v45,
              v44);
      v17 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x186u);
        return v17;
      }
      goto LABEL_36;
    }
    if ( (_DWORD)v22 != 1 )
    {
      v17 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2003292412, 0x1A2u);
      return v17;
    }
    v49 = 0;
    v48 = &v49;
    v23 = FastRegion::CRegion::Copy(&v48, (int **)this - 23);
    if ( v23 < 0 )
      ModuleFailFastForHRESULT(v23, retaddr);
    if ( *((_BYTE *)this - 80) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v50, (const struct tagRECT *)this - 6);
      v24 = FastRegion::CRegion::Union(
              (const struct FastRegion::Internal::CRgnData **)&v48,
              (const struct FastRegion::Internal::CRgnData **)v50);
      if ( v24 < 0 )
        ModuleFailFastForHRESULT(v24, retaddr);
      FastRegion::CRegion::FreeMemory(v50);
    }
    CRegion::GetRectangles((FastRegion::CRegion *)&v48, &v42);
    v25 = CConversionSwapChain::ConvertDesktopAndAppPlanes(
            (CConversionSwapChain *)((char *)this - 824),
            (CConversionSwapChain *)((char *)this - 456),
            (CConversionSwapChain *)((char *)this - 320));
    v17 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x198u);
    }
    else
    {
      v27 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v42, 0);
      v17 = v27;
      if ( v27 >= 0 )
      {
        FastRegion::CRegion::FreeMemory((void **)&v48);
LABEL_36:
        **((_DWORD **)this - 23) = 0;
        *((_BYTE *)this - 80) = 0;
        goto LABEL_38;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x19Du);
    }
    FastRegion::CRegion::FreeMemory((void **)&v48);
    goto LABEL_38;
  }
  v36 = CConversionSwapChain::ConvertSingleDesktopPlane((CConversionSwapChain *)((char *)this - 824));
  v17 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, v36, 0x157u);
    return v17;
  }
  CRegion::GetRectangles((CConversionSwapChain *)((char *)this - 184), &v42);
  v38 = CLegacySwapChain::Present((__int64)this - 424, a2, a3, (__int64)&v42, 0);
  v17 = v38;
  if ( v38 >= 0 )
    goto LABEL_36;
  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0x15Eu);
LABEL_38:
  if ( (_QWORD)v42 )
    std::_Deallocate<16,0>((void *)v42, (v43 - v42) & 0xFFFFFFFFFFFFFFF0uLL);
  return v17;
}
