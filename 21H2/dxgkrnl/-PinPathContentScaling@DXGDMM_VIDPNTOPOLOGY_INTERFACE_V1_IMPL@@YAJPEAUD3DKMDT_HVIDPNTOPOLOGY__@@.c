/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A77A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0010B6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v9; // rbx
  DMMVIDPNPRESENTPATH *v10; // rbx
  int v11; // eax
  __int64 v12; // r15
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rcx
  __int64 v14; // rsi
  D3DKMDT_HVIDPN v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbx
  ADAPTER_DISPLAY *v19; // rcx
  int IsSupportedVidPn; // eax
  __int64 v21; // r8
  D3DKMDT_HVIDPN v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r8
  _QWORD *v35; // rbx
  __int64 v36; // rax
  DXGK_ENUM_PIVOT v37; // [rsp+50h] [rbp-51h] BYREF
  DMMVIDPNPRESENTPATH *v38; // [rsp+58h] [rbp-49h]
  int v39; // [rsp+60h] [rbp-41h] BYREF
  __int64 v40; // [rsp+68h] [rbp-39h]
  char v41; // [rsp+70h] [rbp-31h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v42; // [rsp+78h] [rbp-29h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v43; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v44[80]; // [rsp+A0h] [rbp-1h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v45; // [rsp+100h] [rbp+5Fh]

  v39 = -1;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v40 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(1LL, &EventProfilerEnter, a3, 6026);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 6026);
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v12) = -1071774976;
    goto LABEL_45;
  }
  if ( (_DWORD)v6 == 254 )
  {
    WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
    LODWORD(v12) = -1071774907;
    goto LABEL_45;
  }
  v9 = this[3];
  if ( v9 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
    goto LABEL_48;
  v10 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v9 - 8);
  if ( !v10 )
    goto LABEL_48;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v10 + 11) + 24LL) == (_DWORD)v8
      && *(_DWORD *)(*((_QWORD *)v10 + 12) + 24LL) == (_DWORD)v7 )
    {
      break;
    }
    v32 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v10 + 1);
    v10 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v32 - 8);
    if ( v32 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
      v10 = 0LL;
  }
  while ( v10 );
  v38 = v10;
  if ( !v10 )
  {
LABEL_48:
    WdLogSingleEntry3(3LL, v8, v7, this);
    LODWORD(v12) = -1071774937;
    goto LABEL_45;
  }
  v45 = *((_DWORD *)v10 + 28);
  v11 = DMMVIDPNPRESENTPATH::PinContentScaling(v10, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v6);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, v8, v7, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to pin scaling transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
      v6,
      v8,
      v7,
      v12,
      0LL);
    goto LABEL_45;
  }
  v13 = this[21];
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    v13 = this[21];
  }
  v14 = *((_QWORD *)v13 + 6);
  v37 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v15 = (D3DKMDT_HVIDPN)((unsigned __int64)v13 & -(__int64)((DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v13 + 88) != 0LL));
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_60;
  }
  if ( *(_DWORD *)(((unsigned __int64)v13 & -(__int64)((DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v13 + 88) != 0LL))
                 + 0x40) != 1833172997 )
  {
LABEL_60:
    v16 = 0LL;
    goto LABEL_17;
  }
  v16 = (unsigned __int64)v13 & -(__int64)((DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v13 + 88) != 0LL);
LABEL_17:
  if ( !*(_BYTE *)(v16 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v16 + 96)) )
  {
    WdLogSingleEntry1(2LL, v15);
    goto LABEL_61;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v16 + 172)) - 1) & *(_WORD *)(v16 + 174)) != 0 )
    WdLogSingleEntry0(1LL);
  v17 = *(_QWORD *)(v14 + 8);
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = *(_QWORD *)(v14 + 8);
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v19 = *(ADAPTER_DISPLAY **)(v14 + 8);
  v42.hDesiredVidPn = v15;
  *(_QWORD *)&v42.IsVidPnSupported = 0LL;
  if ( !v19 )
  {
    WdLogSingleEntry0(1LL);
    v19 = *(ADAPTER_DISPLAY **)(v14 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v19, &v42);
  v12 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, v15, v18, IsSupportedVidPn);
    v34 = *(_QWORD *)(v14 + 8);
    if ( !v34 )
    {
      WdLogSingleEntry0(1LL);
      v34 = *(_QWORD *)(v14 + 8);
    }
    WdLogSingleEntry3(2LL, v15, *(_QWORD *)(v34 + 16), v12);
  }
  else
  {
    v10 = v38;
    if ( !v42.IsVidPnSupported )
    {
LABEL_61:
      v33 = *(_QWORD *)(v14 + 8);
      if ( !v33 )
      {
        WdLogSingleEntry0(1LL);
        v33 = *(_QWORD *)(v14 + 8);
      }
      WdLogSingleEntry2(7LL, v15, *(_QWORD *)(v33 + 16));
      LODWORD(v12) = -1071774970;
      goto LABEL_73;
    }
    if ( !(_BYTE)a5 )
    {
      WdLogSingleEntry4(7LL, 7LL, v15, v37.VidPnSourceId, v37.VidPnTargetId);
LABEL_44:
      LODWORD(v12) = 0;
      goto LABEL_45;
    }
    if ( !v15 || (v22 = v15, *((_DWORD *)v15 + 16) != 1833172997) )
      v22 = 0LL;
    if ( ((unsigned __int16)((2 << *((_BYTE *)v22 + 172)) - 1) & *((_WORD *)v22 + 87)) != 0 )
      WdLogSingleEntry0(1LL);
    LOBYTE(v21) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v44, v22 + 38, v21);
    v23 = *(_QWORD *)(v14 + 8);
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      v23 = *(_QWORD *)(v14 + 8);
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v24 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v25 = *(ADAPTER_DISPLAY **)(v14 + 8);
    *((_DWORD *)&v43.EnumPivot + 2) = 0;
    v43.hConstrainingVidPn = v15;
    v43.EnumPivotType = D3DKMDT_EPT_SCALING;
    v43.EnumPivot = v37;
    if ( !v25 )
    {
      WdLogSingleEntry0(1LL);
      v25 = *(ADAPTER_DISPLAY **)(v14 + 8);
    }
    v26 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v25, &v43);
    LODWORD(v12) = v26;
    if ( v26 < 0 )
      WdLogSingleEntry4(2LL, v15, v43.EnumPivot.VidPnSourceId, v43.EnumPivot.VidPnTargetId, v26);
    else
      LODWORD(v12) = 0;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v44);
    if ( (int)v12 >= 0 )
      goto LABEL_44;
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
    v35[3] = v15;
    v35[4] = 7LL;
    v35[5] = &v37;
    v36 = *(_QWORD *)(v14 + 8);
    if ( !v36 )
    {
      WdLogSingleEntry0(1LL);
      v36 = *(_QWORD *)(v14 + 8);
    }
    v35[6] = *(_QWORD *)(v36 + 16);
    v35[7] = (int)v12;
  }
  v10 = v38;
LABEL_73:
  if ( (_DWORD)v12 == -1071774970 )
    WdLogSingleEntry3(3LL, v8, v7, a4);
  else
    WdLogSingleEntry4(2LL, a4, v8, v7, (int)v12);
  if ( v45 != D3DKMDT_VPPS_UNPINNED )
  {
    if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(v10, v45) >= 0 )
      goto LABEL_45;
    goto LABEL_78;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(v10) < 0 )
LABEL_78:
    WdLogSingleEntry0(1LL);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 )
  {
    LOBYTE(v29) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v39);
  }
  return (unsigned int)v12;
}
