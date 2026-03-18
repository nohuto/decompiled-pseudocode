/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01DF790
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001DA54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001F1E4 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // rax
  DMMVIDPNPRESENTPATH *v11; // r13
  int v12; // eax
  __int64 v13; // r15
  __int64 Container; // rax
  __int64 v15; // rbx
  D3DKMDT_HVIDPN v16; // rdi
  __int64 v17; // r14
  D3DKMDT_HVIDPN v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r14
  ADAPTER_DISPLAY *v21; // rcx
  int IsSupportedVidPn; // eax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // [rsp+28h] [rbp-81h]
  DXGK_ENUM_PIVOT v40; // [rsp+58h] [rbp-51h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v41; // [rsp+60h] [rbp-49h]
  int v42; // [rsp+68h] [rbp-41h] BYREF
  __int64 v43; // [rsp+70h] [rbp-39h]
  char v44; // [rsp+78h] [rbp-31h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v45; // [rsp+80h] [rbp-29h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v46; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v47[80]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int v48; // [rsp+110h] [rbp+67h]

  v48 = (unsigned int)a2;
  v42 = -1;
  v43 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(1LL, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v13) = -1071774976;
    goto LABEL_38;
  }
  if ( (_DWORD)v6 == 254 )
  {
    WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
    LODWORD(v13) = -1071774907;
    goto LABEL_38;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v11 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    WdLogSingleEntry3(3LL, v8, v7, this);
    LODWORD(v13) = -1071774937;
    goto LABEL_38;
  }
  v41 = *((_DWORD *)Path + 29);
  v12 = DMMVIDPNPRESENTPATH::PinContentRotation(
          (DMMVIDPNPRESENTPATH *)Path,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, v8, v7, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to pin rotation transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
      v6,
      v8,
      v7,
      v13,
      0LL);
    goto LABEL_38;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v9 + 160);
  v40 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v15 = *(_QWORD *)(Container + 48);
  if ( Container == -88 )
  {
    v16 = 0LL;
    goto LABEL_50;
  }
  v16 = (D3DKMDT_HVIDPN)Container;
  if ( !Container )
  {
LABEL_50:
    WdLogSingleEntry0(1LL);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(Container + 64) != 1833172997 )
LABEL_51:
    Container = 0LL;
  v17 = Container + 96;
  v18 = v16;
  if ( *(_BYTE *)(Container + 296) || DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(Container + 96)) )
  {
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v17 + 76)) - 1) & *(_WORD *)(v17 + 78)) != 0 )
      WdLogSingleEntry0(1LL);
    v19 = *(_QWORD *)(v15 + 8);
    if ( !v19 )
    {
      WdLogSingleEntry0(1LL);
      v19 = *(_QWORD *)(v15 + 8);
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v21 = *(ADAPTER_DISPLAY **)(v15 + 8);
    *(_QWORD *)&v45.IsVidPnSupported = 0LL;
    v45.hDesiredVidPn = v16;
    if ( !v21 )
    {
      WdLogSingleEntry0(1LL);
      v21 = *(ADAPTER_DISPLAY **)(v15 + 8);
    }
    IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v21, &v45);
    v13 = IsSupportedVidPn;
    if ( IsSupportedVidPn < 0 )
    {
      WdLogSingleEntry3(2LL, v16, v20, IsSupportedVidPn);
      v35 = *(_QWORD *)(v15 + 8);
      if ( !v35 )
      {
        WdLogSingleEntry0(1LL);
        v35 = *(_QWORD *)(v15 + 8);
      }
      WdLogSingleEntry3(2LL, v16, *(_QWORD *)(v35 + 16), v13);
      goto LABEL_63;
    }
    if ( v45.IsVidPnSupported )
    {
      if ( (_BYTE)a5 )
      {
        if ( !v16 || *((_DWORD *)v16 + 16) != 1833172997 )
          v16 = 0LL;
        if ( ((unsigned __int16)((2 << *((_BYTE *)v16 + 172)) - 1) & *((_WORD *)v16 + 87)) != 0 )
          WdLogSingleEntry0(1LL);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v47,
          (__int64)(v16 + 38),
          3u,
          v23,
          v39,
          *((_QWORD *)v16 + 17));
        v24 = *(_QWORD *)(v15 + 8);
        if ( !v24 )
        {
          WdLogSingleEntry0(1LL);
          v24 = *(_QWORD *)(v15 + 8);
        }
        v25 = *(_QWORD *)(v24 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 184)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 168)) )
        {
          WdLogSingleEntry0(1LL);
        }
        *((_DWORD *)&v46.EnumPivot + 2) = 0;
        v26 = *(ADAPTER_DISPLAY **)(v15 + 8);
        v46.hConstrainingVidPn = v18;
        v46.EnumPivotType = D3DKMDT_EPT_ROTATION;
        v46.EnumPivot = v40;
        if ( !v26 )
        {
          WdLogSingleEntry0(1LL);
          v26 = *(ADAPTER_DISPLAY **)(v15 + 8);
        }
        v27 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v26, &v46);
        LODWORD(v13) = v27;
        if ( v27 < 0 )
          WdLogSingleEntry4(2LL, v18, v46.EnumPivot.VidPnSourceId, v46.EnumPivot.VidPnTargetId, v27);
        else
          LODWORD(v13) = 0;
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v47, v28);
        if ( (int)v13 < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29);
          v36[3] = v18;
          v36[4] = 9LL;
          v36[5] = &v40;
          v37 = *(_QWORD *)(v15 + 8);
          if ( !v37 )
          {
            WdLogSingleEntry0(1LL);
            v37 = *(_QWORD *)(v15 + 8);
          }
          v36[6] = *(_QWORD *)(v37 + 16);
          v36[7] = (int)v13;
          goto LABEL_63;
        }
      }
      else
      {
        WdLogSingleEntry4(7LL, 9LL, v16, v40.VidPnSourceId, v40.VidPnTargetId);
      }
      LODWORD(v13) = 0;
      goto LABEL_38;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v16);
  }
  v34 = *(_QWORD *)(v15 + 8);
  if ( !v34 )
  {
    WdLogSingleEntry0(1LL);
    v34 = *(_QWORD *)(v15 + 8);
  }
  WdLogSingleEntry2(7LL, v16, *(_QWORD *)(v34 + 16));
  LODWORD(v13) = -1071774970;
LABEL_63:
  if ( (_DWORD)v13 == -1071774970 )
    WdLogSingleEntry3(3LL, v48, v7, a4);
  else
    WdLogSingleEntry4(2LL, a4, v48, v7, (int)v13);
  if ( v41 != D3DKMDT_VPPR_UNPINNED )
  {
    if ( (int)DMMVIDPNPRESENTPATH::PinContentRotation(v11, v41) >= 0 )
      goto LABEL_38;
    goto LABEL_68;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(v11, v38) < 0 )
LABEL_68:
    WdLogSingleEntry0(1LL);
LABEL_38:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    LOBYTE(v31) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v42);
  }
  return (unsigned int)v13;
}
