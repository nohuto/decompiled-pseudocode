/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18006CE10
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18006CF14 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x1800D48E8 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D4990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180168C68 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180187EAC (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180187F4C (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180187F90 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180188368 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801885FC (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180188640 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801887F8 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::ApplyConfiguration(COverlayContext *this, __int64 a2, char *a3, _BYTE *a4)
{
  char v6; // r12
  __int64 v7; // rbx
  char v8; // r15
  __int64 v9; // rbp
  int v10; // ebp
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v16; // rax
  __int64 v17; // rsi
  void (__fastcall *v18)(__int64, __int64, _QWORD, __int64); // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // eax
  CDirectFlipInfo *v31; // rax
  __int64 v32; // rcx
  CDirectFlipInfo *v33; // rax
  __int64 v34; // rcx
  int v35; // r9d
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int *v43; // rcx
  int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-78h]
  __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v47[88]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v48; // [rsp+A0h] [rbp+8h] BYREF
  char *v49; // [rsp+B0h] [rbp+18h]
  _BYTE *v50; // [rsp+B8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v6 = 0;
  if ( *((_BYTE *)this + 11430) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 56LL))(v16, *((unsigned int *)this + 3));
  }
  v7 = *((_QWORD *)this + 914);
  v8 = 1;
  v9 = *((_QWORD *)this + 915);
  while ( v7 != v9 )
  {
    v17 = *(_QWORD *)(v7 + 16);
    v18 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v17 + 184LL);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v47);
    LOBYTE(v20) = 1;
    v18(v17, v20, *v19, 1LL);
    if ( !*(_BYTE *)(v7 + 217)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 16) + 248LL))(
             *(_QWORD *)(v7 + 16),
             0LL)
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 256LL))(*(_QWORD *)(v7 + 16))) )
    {
      v21 = *(_QWORD **)(a2 + 8);
      v22 = *(_QWORD *)(v7 + 8);
      v46 = v22;
      if ( *(_QWORD **)(a2 + 16) == v21 )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(a2, v21, &v46);
      }
      else
      {
        *v21 = v22;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v7 += 224LL;
  }
  v10 = 0;
  if ( *((int *)this + 2806) <= 0 )
  {
    v11 = 0;
    goto LABEL_7;
  }
  v23 = *((_QWORD *)this + 1412);
  v6 = 1;
  if ( v23
    && *(_QWORD *)(v23 + 8) == *((_QWORD *)this + 1398)
    && *(_QWORD *)(v23 + 16) == *((_QWORD *)this + 1399)
    && *(_QWORD *)(v23 + 24) == *((_QWORD *)this + 1400)
    && (*(_DWORD *)(v23 + 52) == 1) == (*((_DWORD *)this + 2807) == 1) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1399) + 120LL))(*((_QWORD *)this + 1399)) )
      goto LABEL_56;
  }
  if ( !((*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL)
    && !*((_DWORD *)this + 2852)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1399) + 144LL))(
          *((_QWORD *)this + 1399),
          0LL) )
  {
    v24 = *((_QWORD *)this + 1399);
    v48 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
    v26 = v25;
    if ( v25 )
    {
      v27 = v25 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL);
      if ( v48 )
      {
        v28 = *(int *)(*(_QWORD *)(v48 + 8) + 4LL) + v48 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))(v27 + 8))(
        v27 + 8,
        &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
        &v48);
    }
    if ( v48 && (**(unsigned __int8 (__fastcall ***)(__int64, __int64))v48)(v48, v26) )
    {
      v6 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v29 = 0LL;
LABEL_54:
        McTemplateU0xq_EventWriteTransfer(
          *(unsigned int *)(*((_QWORD *)this + 1399) + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
          *(unsigned int *)(*((_QWORD *)this + 1399) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 1399) + 40LL)) << 32),
          v29);
      }
    }
    else
    {
      if ( *((int *)this + 2807) < 3
        || v11 && !CDirectFlipInfo::IsIndependentFlip(*((CDirectFlipInfo **)this + 1412))
        || !*((_BYTE *)this + 11423) )
      {
        if ( !v11 )
          goto LABEL_55;
        if ( CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1412)) )
          goto LABEL_55;
        v30 = *((_DWORD *)this + 2807);
        if ( v30 < 3 )
          goto LABEL_55;
        if ( v30 == 4 )
          goto LABEL_55;
        v6 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
          goto LABEL_55;
        v29 = 1LL;
        goto LABEL_54;
      }
      v6 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v29 = 2LL;
        goto LABEL_54;
      }
    }
LABEL_55:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v48);
    goto LABEL_7;
  }
LABEL_56:
  v6 = 0;
LABEL_7:
  v12 = *((_QWORD *)this + 1412);
  if ( !v12 )
    goto LABEL_8;
  if ( *(_DWORD *)(v12 + 48) != 4 || !v6 || !v11 )
  {
    COverlayContext::ClearDirectFlip(this);
    v12 = *((_QWORD *)this + 1412);
    *((_BYTE *)this + 11431) = 1;
  }
  if ( !v12 )
  {
LABEL_8:
    if ( v6 )
    {
      *((_QWORD *)this + 1412) = 0LL;
      v31 = (CDirectFlipInfo *)DefaultHeap::Alloc(0x78uLL);
      if ( v31 )
        v33 = CDirectFlipInfo::CDirectFlipInfo(v31, (COverlayContext *)((char *)this + 11176));
      else
        v33 = 0LL;
      if ( !v33 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0x15u, 0LL);
        v45 = 633;
LABEL_69:
        v35 = v10;
LABEL_70:
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v35, v45, 0LL);
        goto LABEL_14;
      }
      *((_DWORD *)v33 + 12) = 2;
      *((_QWORD *)this + 1412) = v33;
      v10 = 0;
      if ( *((_DWORD *)v33 + 13) == 1 )
        goto LABEL_9;
      v36 = CDirectFlipInfo::EnsurePinnedResources(v33);
      v10 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v36, 0x27Du, 0LL);
      if ( v10 == -2005532292 )
      {
        COverlayContext::ClearDirectFlip(this);
        v10 = 0;
      }
      else if ( v10 < 0 )
      {
        v45 = 649;
        goto LABEL_69;
      }
      v38 = *((_QWORD *)this + 1412);
      if ( v38 )
      {
        LOBYTE(v37) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v38 + 16) + 304LL))(
          *(_QWORD *)(v38 + 16),
          1LL,
          v37);
        v39 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v47);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq_EventWriteTransfer(
            v40,
            &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
            *(unsigned int *)(v39 + 8),
            1LL);
      }
    }
  }
LABEL_9:
  v13 = *((_QWORD *)this + 1412);
  if ( v13 )
  {
    v41 = *((_DWORD *)this + 2807);
    *(_DWORD *)(v13 + 52) = v41;
    v42 = v13 + 32;
    if ( v41 < 3 )
      std::shared_ptr<CRegion>::reset(v42);
    else
      std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v42, (char *)this + 11208);
    v43 = (int *)*((_QWORD *)this + 1412);
    if ( v43[13] >= 3 )
      *((_BYTE *)this + 11431) = 1;
    v44 = CDirectFlipInfo::Activate((CDirectFlipInfo *)v43);
    v10 = v44;
    if ( v44 < 0 )
    {
      v35 = v44;
      v45 = 674;
      goto LABEL_70;
    }
  }
  v14 = *((_BYTE *)this + 11430);
  if ( !*((_BYTE *)this + 11431) && !v14 )
  {
    v14 = 0;
    v8 = 0;
  }
  *v49 = v8;
  *v50 = v14;
LABEL_14:
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11176));
  if ( v10 < 0 )
    COverlayContext::Reset(this);
  *((_WORD *)this + 5715) = 0;
  return (unsigned int)v10;
}
