/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00E1110
 * Callers:
 *     <none>
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0008C0C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A41C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011D21C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011D638 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0128540 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 Container; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  D3DKMDT_HVIDPN v24; // rdi
  D3DKMDT_HVIDPN v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  ADAPTER_DISPLAY *v29; // rcx
  int IsSupportedVidPn; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  BOOLEAN IsVidPnSupported; // al
  D3DKMDT_HVIDPN v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  ADAPTER_DISPLAY *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  DXGK_ENUM_PIVOT v86; // [rsp+50h] [rbp-49h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v87; // [rsp+58h] [rbp-41h]
  DMMVIDPNPRESENTPATH *v88; // [rsp+60h] [rbp-39h]
  int v89; // [rsp+68h] [rbp-31h] BYREF
  __int64 v90; // [rsp+70h] [rbp-29h]
  char v91; // [rsp+78h] [rbp-21h]
  _DXGKARG_ISSUPPORTEDVIDPN v92; // [rsp+80h] [rbp-19h] BYREF
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v93; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v94[32]; // [rsp+A8h] [rbp+Fh] BYREF

  v89 = -1;
  v90 = 0LL;
  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v91 = 1;
    v89 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v91 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v89, 6028LL);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = v9;
  if ( !v9 )
  {
    v53 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v53 + 24) = v5;
    WdLogEvent5_WdError(v53);
    LODWORD(v5) = -1071774976;
    goto LABEL_44;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v54[3] = 254LL;
    v54[4] = v8;
    v54[5] = v7;
    v54[6] = v5;
    WdLogEvent5_WdError(v54);
    LODWORD(v5) = -1071774907;
    goto LABEL_44;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v88 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v55[3] = v8;
    v55[4] = v7;
    v55[5] = v5;
    WdLogEvent5_WdWarning(v55);
    LODWORD(v5) = -1071774937;
    goto LABEL_44;
  }
  v87 = *((_DWORD *)Path + 29);
  v17 = DMMVIDPNPRESENTPATH::PinContentRotation(
          (DMMVIDPNPRESENTPATH *)Path,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
  v5 = v17;
  if ( v17 < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v56[3] = v6;
    v56[4] = v8;
    v56[5] = v7;
    v56[6] = v5;
    WdLogEvent5_WdError(v56);
    goto LABEL_44;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v12 + 160, v18);
  v86 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v22 = *(_QWORD *)(Container + 48);
  v23 = -(Container + 88);
  v24 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v24 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v57);
LABEL_55:
    v25 = 0LL;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v24 + 16) != 1833172997 )
    goto LABEL_55;
  v25 = v24;
LABEL_11:
  if ( !*((_BYTE *)v25 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v25 + 24)) )
  {
    v58 = WdLogNewEntry5_WdError(v23, v21);
    *(_QWORD *)(v58 + 24) = v24;
    WdLogEvent5_WdError(v58);
    goto LABEL_56;
  }
  LOBYTE(v23) = *((_BYTE *)v25 + 172);
  if ( ((unsigned __int16)((2 << v23) - 1) & *((_WORD *)v25 + 87)) != 0 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v64);
  }
  v26 = *(_QWORD *)(v22 + 8);
  if ( !v26 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v65);
    v26 = *(_QWORD *)(v22 + 8);
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v28, v21);
    WdLogEvent5_WdAssertion(v66);
  }
  v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  *(_QWORD *)&v92.IsVidPnSupported = 0LL;
  v92.hDesiredVidPn = v24;
  if ( !v29 )
  {
    v67 = WdLogNewEntry5_WdAssertion(0LL, v21);
    WdLogEvent5_WdAssertion(v67);
    v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v29, &v92);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v68[3] = v24;
    v68[4] = v27;
    v68[5] = v5;
    WdLogEvent5_WdError(v68);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v92.IsVidPnSupported;
    LODWORD(v5) = 0;
  }
  if ( (int)v5 < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v71[3] = v24;
    v72 = *(_QWORD *)(v22 + 8);
    if ( !v72 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v70, v69);
      WdLogEvent5_WdAssertion(v73);
      v72 = *(_QWORD *)(v22 + 8);
    }
    v71[4] = *(_QWORD *)(v72 + 16);
    v71[5] = (int)v5;
    WdLogEvent5_WdError(v71);
  }
  else
  {
    if ( !IsVidPnSupported )
    {
LABEL_56:
      v5 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v5 + 24) = v24;
      v61 = *(_QWORD *)(v22 + 8);
      if ( !v61 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v60, v59);
        WdLogEvent5_WdAssertion(v62);
        v61 = *(_QWORD *)(v22 + 8);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v61 + 16);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
      goto LABEL_59;
    }
    if ( !(_BYTE)a5 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v52[3] = 9LL;
      v52[4] = v24;
      v52[5] = v86.VidPnSourceId;
      v52[6] = v86.VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v52);
LABEL_41:
      LODWORD(v5) = 0;
      goto LABEL_42;
    }
    if ( v24 && *((_DWORD *)v24 + 16) == 1833172997 )
      v35 = v24;
    else
      v35 = 0LL;
    LOBYTE(v32) = *((_BYTE *)v35 + 172);
    if ( ((unsigned __int16)((2 << v32) - 1) & *((_WORD *)v35 + 87)) != 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v74);
    }
    LOBYTE(v33) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v94, v35 + 38, v33);
    v38 = *(_QWORD *)(v22 + 8);
    if ( !v38 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v75);
      v38 = *(_QWORD *)(v22 + 8);
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v39 + 168)) )
    {
      v76 = WdLogNewEntry5_WdAssertion(v40, v36);
      WdLogEvent5_WdAssertion(v76);
    }
    *((_DWORD *)&v93.EnumPivot + 2) = 0;
    v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    v93.hConstrainingVidPn = v24;
    v93.EnumPivotType = D3DKMDT_EPT_ROTATION;
    v93.EnumPivot = v86;
    if ( !v41 )
    {
      v77 = WdLogNewEntry5_WdAssertion(0LL, v36);
      WdLogEvent5_WdAssertion(v77);
      v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    }
    v42 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v41, &v93);
    v5 = v42;
    if ( v42 < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v78[3] = v24;
      v78[4] = v93.EnumPivot.VidPnSourceId;
      v78[5] = v93.EnumPivot.VidPnTargetId;
      v78[6] = v5;
      WdLogEvent5_WdError(v78);
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v94);
    if ( (int)v5 >= 0 )
      goto LABEL_41;
    v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
    v79[3] = v24;
    v79[4] = 9LL;
    v79[5] = &v86;
    v80 = *(_QWORD *)(v22 + 8);
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v46, v45);
      WdLogEvent5_WdAssertion(v81);
      v80 = *(_QWORD *)(v22 + 8);
    }
    v79[6] = *(_QWORD *)(v80 + 16);
    v79[7] = (int)v5;
  }
LABEL_42:
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_44;
  }
LABEL_59:
  if ( (_DWORD)v5 == -1071774970 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
    v63[3] = v8;
    v63[4] = v7;
    v63[5] = a4;
    WdLogEvent5_WdWarning(v63);
  }
  else
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
    v82[6] = (int)v5;
    v82[3] = a4;
    v82[4] = v8;
    v82[5] = v7;
    WdLogEvent5_WdError(v82);
  }
  if ( v87 == D3DKMDT_VPPR_UNPINNED )
    v83 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v88);
  else
    v83 = DMMVIDPNPRESENTPATH::PinContentRotation(v88, v87);
  if ( v83 < 0 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v84, v45);
    WdLogEvent5_WdAssertion(v85);
  }
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v89, v45);
  if ( v91 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v89);
  return (unsigned int)v5;
}
