/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0111FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000636C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C0111F04 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0112254 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01123A4 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  char v23; // al
  int v24; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 Id; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rsi
  void (__fastcall ***v31)(_QWORD, __int64); // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  UINT Numerator; // edx
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  int v61; // [rsp+20h] [rbp-48h] BYREF
  __int64 v62; // [rsp+28h] [rbp-40h]
  char v63; // [rsp+30h] [rbp-38h]
  unsigned int *v64; // [rsp+70h] [rbp+8h] BYREF

  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 7014LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    v47 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v47 + 24) = 0LL;
    *(_QWORD *)(v47 + 32) = this;
    WdLogEvent5_WdError(v47);
    LODWORD(v37) = -1071774959;
    goto LABEL_34;
  }
  if ( !this || (v14 = this, *((_DWORD *)this + 32) != 1833173005) )
    v14 = 0LL;
  if ( !v14 )
  {
    v48 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v48 + 24) = this;
    WdLogEvent5_WdError(v48);
    LODWORD(v37) = -1071774967;
    goto LABEL_34;
  }
  v15 = *((_QWORD *)v14 + 14);
  v16 = *(_QWORD *)(v15 + 40);
  if ( !v16 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v49);
    v16 = *(_QWORD *)(v15 + 40);
  }
  v17 = *(_QWORD *)(v16 + 72);
  if ( !v17 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v50);
    v17 = *(_QWORD *)(v16 + 72);
  }
  v18 = *(_QWORD *)(v17 + 48);
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v51);
    v19 = *(_QWORD *)(v18 + 8);
    if ( !v19 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v52);
    }
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v11 = *(_QWORD *)(v19 + 16);
    if ( (*(_DWORD *)(v11 + 348) & 0x100) == 0 && !*(_QWORD *)(v11 + 600) )
      goto LABEL_63;
    if ( a2->VideoSignalInfo.HSyncFreq.Numerator == -2 && a2->VideoSignalInfo.HSyncFreq.Denominator == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_57;
      a2->VideoSignalInfo.HSyncFreq.Numerator = 1000;
      a2->VideoSignalInfo.HSyncFreq.Denominator = 1;
    }
    if ( a2->VideoSignalInfo.PixelRate != 4294967294 )
      goto LABEL_17;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      a2->VideoSignalInfo.PixelRate = 1000000LL;
      goto LABEL_17;
    }
LABEL_57:
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v54[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v54[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v54[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v54[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v54);
    LODWORD(v37) = -1071774966;
    goto LABEL_34;
  }
  if ( a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    goto LABEL_63;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v19 + 16) + 600LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_63;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = *(_QWORD *)(v19 + 16);
  }
  else
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v53[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v53[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v53[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v53[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_17:
  v11 = *(_QWORD *)(*((_QWORD *)v14 + 14) + 96LL);
  v20 = *(_DWORD *)(v11 + 84);
  if ( (v20 < 0xF || v20 > 0x11) && (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 348LL) & 0x200) == 0 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_20;
LABEL_63:
    v57 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v37) = -1071774966;
    *(_QWORD *)(v57 + 24) = *(_QWORD *)(v19 + 16);
    *(_QWORD *)(v57 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v57);
    goto LABEL_34;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_63;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v11 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    v56 = 10 * Numerator;
    v10 = 10 * Numerator % (unsigned int)v11;
    if ( v56 / (unsigned int)v11 < 0xEF )
      goto LABEL_63;
  }
LABEL_20:
  if ( !DXGADAPTER::DriverSupportSetTimingsFromVidPn(*(DXGADAPTER **)(v19 + 16))
    || (v23 = 1, (*(_DWORD *)(*(_QWORD *)(v22 + 2696) + 448LL) & 1) != 0) )
  {
    v23 = 0;
  }
  v24 = v21 & 3;
  if ( v23 )
    v24 = v21;
  v25 = operator new[](0x90uLL, 0x4E506456u, PagedPool);
  v30 = v25;
  if ( v25 )
  {
    Id = a2->Id;
    v25[1] = 0LL;
    v25[2] = 0LL;
    *v25 = &SetElement::`vftable';
    *((_DWORD *)v25 + 6) = Id;
    if ( (_DWORD)Id == -1 )
    {
      v58 = WdLogNewEntry5_WdAssertion(Id, v26);
      *(_QWORD *)(v58 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v58);
    }
    *(_QWORD *)((char *)v30 + 76) = -1LL;
    *(_QWORD *)((char *)v30 + 84) = -1LL;
    *(_QWORD *)((char *)v30 + 92) = -1LL;
    *v30 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_DWORD *)v30 + 18) = 0;
    v30[14] = 0xFFFFFFFFLL;
    *((_DWORD *)v30 + 30) = 8;
    v30[5] = 0LL;
    *((_DWORD *)v30 + 14) = 1833173007;
    v30[4] = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    v30[6] = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    v30[8] = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *((_DWORD *)v30 + 32) = v24;
    *((_DWORD *)v30 + 33) = 0;
    *((_DWORD *)v30 + 34) = 4;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = (void (__fastcall ***)(_QWORD, __int64))v30;
  if ( v30 )
  {
    v32 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDEOSIGNALMODE *)(v30 + 9), &a2->VideoSignalInfo);
    v37 = v32;
    if ( v32 < 0 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
      v60[3] = v30;
    }
    else
    {
      v64 = (unsigned int *)v30;
      v31 = 0LL;
      v38 = DMMVIDPNTARGETMODESET::AddMode((__int64)v14, &v64);
      v37 = v38;
      if ( v38 >= 0 )
      {
        LODWORD(v37) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v14, a2);
        goto LABEL_32;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
      v60[3] = a2;
    }
    v60[5] = v37;
    v60[4] = this;
  }
  else
  {
    v59 = WdLogNewEntry5_WdLowResource(Id, v26, v28, v29);
    *(_QWORD *)(v59 + 24) = this;
    WdLogEvent5_WdLowResource(v59);
    LODWORD(v37) = -1073741801;
  }
LABEL_32:
  if ( v31 )
    (**v31)(v31, 1LL);
LABEL_34:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v43);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v61);
  return (unsigned int)v37;
}
