/*
 * XREFs of ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B9798
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B92E4 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801A0A6C (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1801B9184 (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801D645C (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801EB278 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  unsigned int v2; // edi
  CLinearGradientBrush *v3; // rax
  CLinearGradientBrush *v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  gsl::details *v18; // rcx
  void *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-30h]
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 31) )
    return v2;
  v3 = (CLinearGradientBrush *)DefaultHeap::AllocClear(0xF0uLL);
  if ( v3 )
    v4 = CLinearGradientBrush::CLinearGradientBrush(v3, *((struct CComposition **)this + 2));
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v4;
  if ( v4 )
    (*(void (__fastcall **)(CLinearGradientBrush *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( !*((_QWORD *)this + 31) )
  {
    v21 = 108;
LABEL_21:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, -2147024882, v21, 0LL);
    v10 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    return v2;
  }
  v6 = DefaultHeap::Alloc(0x50uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = *((_QWORD *)this + 2);
    *((_DWORD *)v6 + 2) = 0;
    v6[3] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *v6 = &CColorGradientStop::`vftable';
    v6[7] = 0LL;
    v6[8] = 0LL;
    *((_DWORD *)v6 + 18) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 32, v7);
  if ( !*((_QWORD *)this + 32) )
  {
    v21 = 110;
    goto LABEL_21;
  }
  v8 = DefaultHeap::Alloc(0x50uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = *((_QWORD *)this + 2);
    *((_DWORD *)v8 + 2) = 0;
    v8[3] = 0LL;
    v8[5] = 0LL;
    *((_DWORD *)v8 + 8) = 0;
    *v8 = &CColorGradientStop::`vftable';
    v8[7] = 0LL;
    v8[8] = 0LL;
    *((_DWORD *)v8 + 18) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 33, v9);
  if ( !*((_QWORD *)this + 33) )
  {
    v21 = 112;
    goto LABEL_21;
  }
  v24 = *((_QWORD *)this + 32);
  v23 = 0LL;
  v22 = 0LL;
  std::vector<CVisual *>::_Emplace_reallocate<CVisual *>((__int64 *)&v22, 0LL, &v24);
  v14 = *((_QWORD *)this + 33);
  v15 = v23;
  v16 = *((_QWORD *)&v22 + 1);
  v24 = v14;
  if ( v23 == *((_QWORD *)&v22 + 1) )
  {
    std::vector<CVisual *>::_Emplace_reallocate<CVisual *>((__int64 *)&v22, *((_BYTE **)&v22 + 1), &v24);
    v17 = *((_QWORD *)&v22 + 1);
    v15 = v23;
  }
  else
  {
    **((_QWORD **)&v22 + 1) = v14;
    v17 = v16 + 8;
  }
  v18 = (gsl::details *)*((_QWORD *)this + 31);
  v19 = (void *)v22;
  v20 = (v17 - (__int64)v22) >> 3;
  *(_QWORD *)&v22 = (int)v20;
  if ( (int)v20 < 0 || (*((_QWORD *)&v22 + 1) = v19) == 0LL && (_DWORD)v20 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v18);
    __debugbreak();
  }
  CGradientBrush::SetStops(v18);
  if ( v19 )
    std::_Deallocate<16,0>(v19, (v15 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
  return v2;
}
