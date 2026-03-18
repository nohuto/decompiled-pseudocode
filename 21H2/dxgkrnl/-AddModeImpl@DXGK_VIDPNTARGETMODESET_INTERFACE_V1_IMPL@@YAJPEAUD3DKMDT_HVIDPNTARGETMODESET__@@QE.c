/*
 * XREFs of ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1C01A92EC
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A92D0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03A68F0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0010FC8 (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C00111A8 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01A9544 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A957C (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C01A95D4 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddModeImpl(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        enum _DXGK_VIDPN_INTERFACE_VERSION a4)
{
  int v4; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  struct _D3DDDI_RATIONAL *v18; // r12
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v19; // rdx
  __int64 v20; // r9
  DMMVIDPNTARGETMODE *v21; // rax
  DMMVIDPNTARGETMODE *v22; // r15
  DMMVIDPNTARGETMODE *v23; // rbx
  __int64 v24; // rcx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v25; // r8d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v36; // eax
  int v37; // ebx
  _QWORD *v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  bool v42; // zf
  _QWORD *v43; // rax
  int v44; // [rsp+40h] [rbp-48h] BYREF
  __int64 v45; // [rsp+48h] [rbp-40h]
  char v46; // [rsp+50h] [rbp-38h]
  DMMVIDPNTARGETMODE *v47; // [rsp+90h] [rbp+8h] BYREF

  v44 = -1;
  v45 = 0LL;
  v4 = (int)a3;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 7014);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v36 = -1071774959;
LABEL_88:
    v37 = v36;
    goto LABEL_89;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v36 = -1071774967;
    goto LABEL_88;
  }
  v10 = *((_QWORD *)this + 14);
  v11 = *(_QWORD *)(v10 + 40);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *(_QWORD *)(v10 + 40);
  }
  v12 = *(_QWORD *)(v11 + 72);
  if ( !v12 )
  {
    WdLogSingleEntry0(1LL);
    v12 = *(_QWORD *)(v11 + 72);
  }
  v13 = *(_QWORD *)(v12 + 48);
  v14 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    WdLogSingleEntry0(1LL);
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
      WdLogSingleEntry0(1LL);
  }
  v15 = *((unsigned int *)a2 + 7);
  if ( *(_QWORD *)(a2 + 7) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v16 = *(_QWORD *)(v14 + 16);
    if ( (*(_DWORD *)(v16 + 436) & 0x100) == 0 && !*(_QWORD *)(v16 + 688) )
      goto LABEL_49;
    if ( *((_DWORD *)a2 + 9) == -2 && *((_DWORD *)a2 + 10) == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_54;
      *((_DWORD *)a2 + 9) = 1000;
      *((_DWORD *)a2 + 10) = 1;
    }
    if ( *((_QWORD *)a2 + 6) != 4294967294LL )
      goto LABEL_16;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      *((_QWORD *)a2 + 6) = 1000000LL;
      goto LABEL_16;
    }
LABEL_54:
    WdLogSingleEntry4(2LL, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 6), v15, *((unsigned int *)a2 + 8));
    v37 = -1071774966;
    goto LABEL_89;
  }
  if ( *((_DWORD *)a2 + 9) != -2 || *((_DWORD *)a2 + 10) != -2 || *((_QWORD *)a2 + 6) != 4294967294LL )
    goto LABEL_46;
  v16 = *(_QWORD *)(v14 + 16);
  if ( *(_QWORD *)(v16 + 688) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_49;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v16) + 24) = *(_QWORD *)(v14 + 16);
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v16);
    v38[3] = *((unsigned int *)a2 + 5);
    v38[4] = *((unsigned int *)a2 + 6);
    v38[5] = *((unsigned int *)a2 + 7);
    v38[6] = *((unsigned int *)a2 + 8);
  }
LABEL_16:
  v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL) + 84LL);
  if ( v17 >= 0xF && v17 <= 0x11 || (v16 = *(_QWORD *)(v14 + 16), (*(_DWORD *)(v16 + 436) & 0x200) != 0) )
  {
    v39 = *((unsigned int *)a2 + 14);
    if ( (v39 & 0x1F8) != 0
      && (*(_QWORD *)(a2 + 7) == 0xFFFFFFFEFFFFFFFEuLL
       || 10 * (unsigned __int64)*((unsigned int *)a2 + 7) / (*((unsigned int *)a2 + 8) * ((v39 >> 3) & 0x3F)) >= 0xEF) )
    {
      goto LABEL_19;
    }
LABEL_46:
    v16 = *(_QWORD *)(v14 + 16);
    goto LABEL_49;
  }
  if ( ((_DWORD)a2[14] & 0x1F8) != 0 )
    goto LABEL_49;
LABEL_19:
  v18 = 0LL;
  v19 = a2 + 17;
  v20 = 2LL;
  if ( v4 >= 2 )
  {
    v40 = *(_DWORD *)v19;
    if ( (*(_DWORD *)(v14 + 24) & 0x20) != 0 )
    {
      if ( (_DWORD)v40 != -1 )
      {
        v41 = *((unsigned int *)a2 + 18);
        if ( (_DWORD)v41 != -1 )
        {
          if ( (_DWORD)v40 == -2 && (_DWORD)v41 == -2 )
            goto LABEL_22;
          v18 = (struct _D3DDDI_RATIONAL *)(a2 + 17);
          if ( (_DWORD)v40 != -2
            && (_DWORD)v41 != -2
            && (!(_DWORD)v40 || (_DWORD)v41)
            && (unsigned __int64)*((unsigned int *)a2 + 7) * v41 >= v40 * (unsigned __int64)*((unsigned int *)a2 + 8) )
          {
            if ( !(_DWORD)v41 )
              *((_DWORD *)a2 + 18) = 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_VirtualRefreshRate__private_reporting,
              0x1D929DAu,
              v41,
              2LL,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
              1);
            goto LABEL_22;
          }
        }
      }
      goto LABEL_48;
    }
    if ( (_DWORD)v40 == -1 )
    {
      v42 = *((_DWORD *)a2 + 18) == -1;
    }
    else
    {
      if ( (_DWORD)v40 != -2 )
      {
LABEL_48:
        v16 = *(_QWORD *)(v14 + 16);
LABEL_49:
        v37 = -1071774966;
        WdLogSingleEntry2(2LL, v16, -1071774966LL);
LABEL_89:
        LODWORD(v29) = v37;
        goto LABEL_29;
      }
      v42 = *((_DWORD *)a2 + 18) == -2;
    }
    if ( v42 )
      goto LABEL_22;
    goto LABEL_48;
  }
  if ( *(_DWORD *)v19 != -1 || *((_DWORD *)a2 + 18) != -1 )
  {
    LODWORD(v29) = -1073741819;
    WdLogSingleEntry5(0LL, 275LL, 7LL, *(_QWORD *)(v14 + 16), -1073741819LL, 0LL);
    goto LABEL_29;
  }
LABEL_22:
  v21 = (DMMVIDPNTARGETMODE *)operator new[](0xA8uLL, 0x4E506456u, 256LL, v20);
  if ( !v21 )
  {
    v23 = 0LL;
    goto LABEL_85;
  }
  v22 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v21, *(_DWORD *)a2);
  v23 = v22;
  if ( !v22 )
  {
LABEL_85:
    WdLogSingleEntry1(6LL, this);
    LODWORD(v29) = -1073741801;
    goto LABEL_33;
  }
  if ( !DXGADAPTER::DriverSupportSetTimingsFromVidPn(*(DXGADAPTER **)(v14 + 16))
    || (*(_DWORD *)(*(_QWORD *)(v24 + 2792) + 512LL) & 1) != 0 )
  {
    v25.Value = *(_BYTE *)&v25.0 & 3;
  }
  v26 = DMMVIDPNTARGETMODE::Initialize(v22, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2), v25, v18);
  v29 = v26;
  if ( v26 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
    v43[3] = v22;
  }
  else
  {
    v47 = v22;
    v23 = 0LL;
    v30 = DMMVIDPNTARGETMODESET::AddMode(this, &v47);
    v29 = v30;
    if ( v30 >= 0 )
    {
      LODWORD(v29) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(this, (const struct _D3DKMDT_VIDPN_TARGET_MODE *)a2);
      goto LABEL_29;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31);
    v43[3] = a2;
  }
  v43[4] = this;
  v43[5] = v29;
LABEL_33:
  if ( v23 )
    (**(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v23)(v23, 1LL);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v44);
  return (unsigned int)v29;
}
