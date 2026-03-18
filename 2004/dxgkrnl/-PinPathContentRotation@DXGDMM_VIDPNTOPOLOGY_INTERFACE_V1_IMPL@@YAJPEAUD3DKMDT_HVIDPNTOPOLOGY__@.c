/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0138EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B1A0 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017DF8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A35C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C010FC8C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010FF20 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0110048 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01100A8 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0123900 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
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
  __int64 v33; // r9
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
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // [rsp+28h] [rbp-71h]
  DXGK_ENUM_PIVOT v89; // [rsp+50h] [rbp-49h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v90; // [rsp+58h] [rbp-41h]
  DMMVIDPNPRESENTPATH *v91; // [rsp+60h] [rbp-39h]
  int v92; // [rsp+68h] [rbp-31h] BYREF
  __int64 v93; // [rsp+70h] [rbp-29h]
  char v94; // [rsp+78h] [rbp-21h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v95; // [rsp+80h] [rbp-19h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v96; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v97[32]; // [rsp+A8h] [rbp+Fh] BYREF

  v92 = -1;
  v93 = 0LL;
  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v94 = 1;
    v92 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v94 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 6028LL);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = v9;
  if ( !v9 )
  {
    v55 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v55 + 24) = v5;
    WdLogEvent5_WdError(v55);
    LODWORD(v5) = -1071774976;
    goto LABEL_44;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v56[3] = 254LL;
    v56[4] = v8;
    v56[5] = v7;
    v56[6] = v5;
    WdLogEvent5_WdError(v56);
    LODWORD(v5) = -1071774907;
    goto LABEL_44;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v91 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v57[3] = v8;
    v57[4] = v7;
    v57[5] = v5;
    WdLogEvent5_WdWarning(v57);
    LODWORD(v5) = -1071774937;
    goto LABEL_44;
  }
  v90 = *((_DWORD *)Path + 29);
  v17 = DMMVIDPNPRESENTPATH::PinContentRotation(
          (DMMVIDPNPRESENTPATH *)Path,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
  v5 = v17;
  if ( v17 < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v58[3] = v6;
    v58[4] = v8;
    v58[5] = v7;
    v58[6] = v5;
    WdLogEvent5_WdError(v58);
    goto LABEL_44;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v12 + 160, v18);
  v89 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v22 = *(_QWORD *)(Container + 48);
  v23 = -(Container + 88);
  v24 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v24 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v59);
LABEL_55:
    v25 = 0LL;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v24 + 16) != 1833172997 )
    goto LABEL_55;
  v25 = v24;
LABEL_11:
  if ( !*((_BYTE *)v25 + 296) && !DmmIsAllSourcesPixelFormatValid((__int64)(v25 + 24), v21) )
  {
    v60 = WdLogNewEntry5_WdError(v23, v21);
    *(_QWORD *)(v60 + 24) = v24;
    WdLogEvent5_WdError(v60);
    goto LABEL_56;
  }
  LOBYTE(v23) = *((_BYTE *)v25 + 172);
  if ( ((unsigned __int16)((2 << v23) - 1) & *((_WORD *)v25 + 87)) != 0 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v66);
  }
  v26 = *(_QWORD *)(v22 + 8);
  if ( !v26 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v67);
    v26 = *(_QWORD *)(v22 + 8);
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v28, v21);
    WdLogEvent5_WdAssertion(v68);
  }
  v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  *(_QWORD *)&v95.IsVidPnSupported = 0LL;
  v95.hDesiredVidPn = v24;
  if ( !v29 )
  {
    v69 = WdLogNewEntry5_WdAssertion(0LL, v21);
    WdLogEvent5_WdAssertion(v69);
    v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v29, &v95);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v70[3] = v24;
    v70[4] = v27;
    v70[5] = v5;
    WdLogEvent5_WdError(v70);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v95.IsVidPnSupported;
    LODWORD(v5) = 0;
  }
  if ( (int)v5 < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v73[3] = v24;
    v74 = *(_QWORD *)(v22 + 8);
    if ( !v74 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v72, v71);
      WdLogEvent5_WdAssertion(v75);
      v74 = *(_QWORD *)(v22 + 8);
    }
    v73[4] = *(_QWORD *)(v74 + 16);
    v73[5] = (int)v5;
    WdLogEvent5_WdError(v73);
  }
  else
  {
    if ( !IsVidPnSupported )
    {
LABEL_56:
      v5 = WdLogNewEntry5_WdDmmEvent(v32, v31);
      *(_QWORD *)(v5 + 24) = v24;
      v63 = *(_QWORD *)(v22 + 8);
      if ( !v63 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v62, v61);
        WdLogEvent5_WdAssertion(v64);
        v63 = *(_QWORD *)(v22 + 8);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v63 + 16);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
      goto LABEL_59;
    }
    if ( !(_BYTE)a5 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31);
      v54[3] = 9LL;
      v54[4] = v24;
      v54[5] = v89.VidPnSourceId;
      v54[6] = v89.VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v54);
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
      v76 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v76);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v97,
      (__int64)(v35 + 38),
      3u,
      v33,
      v88,
      *((_QWORD *)v35 + 17));
    v38 = *(_QWORD *)(v22 + 8);
    if ( !v38 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v77);
      v38 = *(_QWORD *)(v22 + 8);
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v39 + 168)) )
    {
      v78 = WdLogNewEntry5_WdAssertion(v40, v36);
      WdLogEvent5_WdAssertion(v78);
    }
    *((_DWORD *)&v96.EnumPivot + 2) = 0;
    v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    v96.hConstrainingVidPn = v24;
    v96.EnumPivotType = D3DKMDT_EPT_ROTATION;
    v96.EnumPivot = v89;
    if ( !v41 )
    {
      v79 = WdLogNewEntry5_WdAssertion(0LL, v36);
      WdLogEvent5_WdAssertion(v79);
      v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    }
    v42 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v41, &v96);
    v5 = v42;
    if ( v42 < 0 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v80[3] = v24;
      v80[4] = v96.EnumPivot.VidPnSourceId;
      v80[5] = v96.EnumPivot.VidPnTargetId;
      v80[6] = v5;
      WdLogEvent5_WdError(v80);
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v97,
      v43,
      v45,
      v46);
    if ( (int)v5 >= 0 )
      goto LABEL_41;
    v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v48, v47, v49, v50);
    v81[3] = v24;
    v81[4] = 9LL;
    v81[5] = &v89;
    v82 = *(_QWORD *)(v22 + 8);
    if ( !v82 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v48, v47);
      WdLogEvent5_WdAssertion(v83);
      v82 = *(_QWORD *)(v22 + 8);
    }
    v81[6] = *(_QWORD *)(v82 + 16);
    v81[7] = (int)v5;
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
    v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
    v65[3] = v8;
    v65[4] = v7;
    v65[5] = a4;
    WdLogEvent5_WdWarning(v65);
  }
  else
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
    v84[6] = (int)v5;
    v84[3] = a4;
    v84[4] = v8;
    v84[5] = v7;
    WdLogEvent5_WdError(v84);
  }
  if ( v90 == D3DKMDT_VPPR_UNPINNED )
    v85 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v91);
  else
    v85 = DMMVIDPNPRESENTPATH::PinContentRotation(v91, v90);
  if ( v85 < 0 )
  {
    v87 = WdLogNewEntry5_WdAssertion(v86, v47);
    WdLogEvent5_WdAssertion(v87);
  }
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v47);
  if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v92);
  return (unsigned int)v5;
}
