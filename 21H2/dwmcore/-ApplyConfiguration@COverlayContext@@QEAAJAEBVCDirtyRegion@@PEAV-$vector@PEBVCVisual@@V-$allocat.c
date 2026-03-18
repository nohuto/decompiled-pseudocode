/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18000EC4C (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ??$_Emplace_reallocate@AEBQEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@AEBQEBV2@@Z @ 0x180012BDC (--$_Emplace_reallocate@AEBQEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@s.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800BCA94 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCAD8 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800C6990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?IsEnteringIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x180103C78 (-IsEnteringIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180113274 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801132D6 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x1801B7990 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B8964 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801DEDAC (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x1801DEE58 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ApplyConfiguration(
        COverlayContext *this,
        __int64 a2,
        _QWORD *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  _BYTE *v5; // r13
  char v8; // r14
  char v9; // r12
  __int64 v11; // rax
  char DoesIntersect; // al
  _BYTE *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  _QWORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // bl
  __int64 v31; // rax
  int v32; // r13d
  CDirectFlipInfo *v33; // rax
  __int64 v34; // rcx
  CDirectFlipInfo *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // r13d
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // r12
  __int64 v46; // rcx
  char v47; // r15
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 i; // rax
  int v52; // eax
  __int64 v53; // rcx
  int *v54; // rcx
  struct IOverlaySwapChain *v55; // rax
  int v57; // [rsp+30h] [rbp-30h]
  __int64 v58; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v59[32]; // [rsp+40h] [rbp-20h] BYREF
  CDirectFlipInfo *v60; // [rsp+A0h] [rbp+40h] BYREF
  _BYTE *v61; // [rsp+B8h] [rbp+58h]

  v61 = a4;
  v5 = a5;
  v57 = 0;
  v8 = 0;
  v9 = 0;
  *a4 = 0;
  *v5 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
  DoesIntersect = CDirtyRegion::DoesIntersect(a2, v11 + 4);
  v14 = *((_QWORD *)this + 913);
  v15 = *((_QWORD *)this + 914);
  LOBYTE(v60) = DoesIntersect;
  while ( v14 != v15 )
  {
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v14 + 16) + 216LL))(*(_QWORD *)(v14 + 16), v13);
    if ( !*(_BYTE *)(v14 + 181)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 312LL))(*(_QWORD *)(v14 + 16))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 320LL))(*(_QWORD *)(v14 + 16))) )
    {
      v13 = (_BYTE *)a3[1];
      v16 = (_QWORD *)(v14 + 8);
      if ( v13 == (_BYTE *)a3[2] )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const * const &>(a3, v13, v16);
      }
      else
      {
        *(_QWORD *)v13 = *v16;
        a3[1] += 8LL;
      }
    }
    v14 += 224LL;
  }
  v17 = *((_QWORD *)this + 1379);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 744);
    if ( !*(_QWORD *)(v18 + 256) && !*(_BYTE *)(v18 + 107) )
    {
      v19 = (_QWORD *)a3[1];
      v58 = *((_QWORD *)this + 1379);
      if ( v19 == (_QWORD *)a3[2] )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(a3, v19, &v58);
      }
      else
      {
        *v19 = v17;
        a3[1] += 8LL;
      }
    }
  }
  if ( *((int *)this + 2772) > 0 )
  {
    v20 = *((_QWORD *)this + 1396);
    v8 = 1;
    if ( v20
      && *(_QWORD *)(v20 + 8) == *((_QWORD *)this + 1381)
      && *(_QWORD *)(v20 + 16) == *((_QWORD *)this + 1382)
      && *(_QWORD *)(v20 + 24) == *((_QWORD *)this + 1383)
      && (*(_DWORD *)(v20 + 52) == 1) == (*((_DWORD *)this + 2773) == 1) )
    {
      v9 = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1382) + 128LL))(*((_QWORD *)this + 1382)) )
    {
      goto LABEL_50;
    }
    if ( *((_QWORD *)this + 914) == *((_QWORD *)this + 913)
      && !*((_DWORD *)this + 2820)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1382) + 152LL))(*((_QWORD *)this + 1382)) )
    {
      v21 = *((_QWORD *)this + 1382);
      v58 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
      v23 = v22;
      if ( v22 )
      {
        v24 = v22 + *(int *)(*(_QWORD *)(v22 + 8) + 4LL);
        if ( v58 )
        {
          v25 = v58 + 8 + *(int *)(*(_QWORD *)(v58 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))(v24 + 8))(
          v24 + 8,
          &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
          &v58);
      }
      if ( v58 && (**(unsigned __int8 (__fastcall ***)(__int64))v58)(v58) )
      {
        v8 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
          goto LABEL_48;
        v26 = 0LL;
        goto LABEL_47;
      }
      if ( *((int *)this + 2773) >= 3 )
      {
        if ( v9
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 1396) + 16LL) + 312LL))(
                *(_QWORD *)(*((_QWORD *)this + 1396) + 16LL),
                v23) )
        {
LABEL_42:
          if ( CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1396))
            || (v27 = *((_DWORD *)this + 2773), v27 < 3)
            || v27 == 4
            || (v8 = 0, (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0) )
          {
LABEL_48:
            if ( v58 )
            {
              v28 = *(int *)(*(_QWORD *)(v58 + 8) + 4LL) + v58 + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            goto LABEL_51;
          }
          v26 = 1LL;
LABEL_47:
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(*((_QWORD *)this + 1382) + 40LL),
            &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
            *(unsigned int *)(*((_QWORD *)this + 1382) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 1382) + 40LL)) << 32),
            v26);
          goto LABEL_48;
        }
        if ( *((_BYTE *)this + 11304) )
        {
          v8 = 0;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
            goto LABEL_48;
          v26 = 2LL;
          goto LABEL_47;
        }
      }
      if ( !v9 )
        goto LABEL_48;
      goto LABEL_42;
    }
LABEL_50:
    v8 = 0;
  }
LABEL_51:
  v29 = *((_QWORD *)this + 1396);
  v30 = (char)v60;
  if ( v29 )
  {
    if ( *(_DWORD *)(v29 + 48) == 3 && (!(_BYTE)v60 || v8 && v9) )
      goto LABEL_70;
    COverlayContext::ClearDirectFlip(this);
    v31 = *((_QWORD *)this + 1396);
    *((_BYTE *)this + 11310) = 1;
    if ( v31 )
      goto LABEL_70;
  }
  if ( !v8 )
    goto LABEL_70;
  v57 = 0;
  v32 = 0;
  *((_QWORD *)this + 1396) = 0LL;
  v33 = (CDirectFlipInfo *)DefaultHeap::Alloc(0x80uLL);
  if ( !v33 )
  {
    v60 = 0LL;
    goto LABEL_62;
  }
  v35 = CDirectFlipInfo::CDirectFlipInfo(v33, (COverlayContext *)((char *)this + 11040));
  v60 = v35;
  if ( !v35 )
  {
LABEL_62:
    v32 = -2147024882;
    v57 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, -2147024882, 0x16u);
    goto LABEL_63;
  }
  *((_DWORD *)v35 + 12) = 2;
  *((_QWORD *)this + 1396) = v35;
  v60 = 0LL;
LABEL_63:
  std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(&v60);
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v32, 0x2B2u);
    goto LABEL_116;
  }
  v38 = *((_QWORD *)this + 1396);
  if ( v38 )
  {
    if ( *(int *)(v38 + 52) >= 3 )
      *((_BYTE *)this + 11310) = 1;
    LOBYTE(v37) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v38 + 16) + 400LL))(
      *(_QWORD *)(v38 + 16),
      1LL,
      v37);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 96LL))(*(_QWORD *)this, v59);
      McTemplateU0xq_EventWriteTransfer(
        v40,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        *(unsigned int *)(v39 + 8),
        1LL);
    }
  }
  v5 = a5;
LABEL_70:
  v41 = *((_QWORD *)this + 1396);
  if ( v41 )
  {
    if ( v8 )
    {
      v52 = *((_DWORD *)this + 2773);
      *(_DWORD *)(v41 + 52) = v52;
      v53 = v41 + 32;
      if ( v52 < 3 )
        std::shared_ptr<CRegion>::reset(v53);
      else
        std::shared_ptr<CCursorState::ShapeData>::operator=(v53, (char *)this + 11072);
    }
    v54 = (int *)*((_QWORD *)this + 1396);
    if ( v54[13] >= 3 && v30 )
      *((_BYTE *)this + 11310) = 1;
    if ( (int)CDirectFlipInfo::Activate((CDirectFlipInfo *)v54) < 0 )
    {
      COverlayContext::ClearDirectFlip(this);
    }
    else
    {
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1396)) )
        goto LABEL_116;
      v55 = (struct IOverlaySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
      if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(*((CDirectFlipInfo **)this + 1396), v55) )
      {
        *v61 = 1;
LABEL_111:
        *v5 = 1;
        goto LABEL_116;
      }
      if ( CDirectFlipInfo::IsEnteringIndependentFlip(*((CDirectFlipInfo **)this + 1396)) )
        goto LABEL_111;
      if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this) != 1 )
        goto LABEL_116;
    }
    *((_BYTE *)this + 11310) = 1;
    goto LABEL_116;
  }
  v42 = 0;
  v43 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5);
  if ( (_DWORD)v43 )
  {
    v44 = 0LL;
    v45 = 0LL;
    do
    {
      v46 = *(_QWORD *)(*((_QWORD *)this + 913) + v44 + 16);
      v47 = 1;
      v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 328LL))(v46);
      LOBYTE(v60) = 0;
      v49 = *((_QWORD *)this + 913);
      if ( *(_DWORD *)(v49 + v44 + 208) == ++v42
        && (!*(_BYTE *)(v49 + v44 + 181) || v48 >= 3 && *(_BYTE *)(v49 + v44 + 182)) )
      {
        if ( v48 != -1 && !CCommonRegistryData::m_fDisableIndependentFlip )
          goto LABEL_83;
      }
      else
      {
        LOBYTE(v60) = 1;
      }
      v47 = 0;
LABEL_83:
      COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)(v49 + v45), v47);
      if ( v47 && v48 == 2 )
        *a5 = 1;
      if ( (_BYTE)v60
        || (!v47 || v48 < 3)
        && (v50 = *((_QWORD *)this + 913),
            *(_DWORD *)(v50 + v44 + 216) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v50 + v44 + 16)
                                                                                   + 280LL))(*(_QWORD *)(v50 + v44 + 16))) )
      {
        *(_BYTE *)(*((_QWORD *)this + 913) + v44 + 184) = 1;
      }
      v45 += 224LL;
      v44 += 224LL;
    }
    while ( v42 < (unsigned int)v43 );
  }
  if ( *a5 && *((_BYTE *)this + 11024) )
  {
    for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
    {
      if ( *(_BYTE *)(i + 181) )
      {
        *v61 = 1;
        break;
      }
    }
  }
LABEL_116:
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11040));
  if ( v57 < 0 )
    COverlayContext::Reset(this);
  return (unsigned int)v57;
}
