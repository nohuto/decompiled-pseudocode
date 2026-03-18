/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C01A6AE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0010B6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  DMMVIDPNTOPOLOGY *v8; // rax
  DMMVIDPNTOPOLOGY *v9; // rbx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 Container; // rax
  unsigned int VidPnSourceId; // edx
  __int64 v13; // r15
  __int64 VidPnTargetId; // r8
  __int64 v15; // r14
  D3DKMDT_HVIDPN v16; // rdi
  D3DKMDT_HVIDPN v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v28; // rsi
  __int64 v29; // rax
  DXGK_ENUM_PIVOT v30; // [rsp+58h] [rbp-19h] BYREF
  int v31; // [rsp+60h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-9h]
  char v33; // [rsp+70h] [rbp-1h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v34; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v35[24]; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v36; // [rsp+E0h] [rbp+6Fh]

  v36 = (unsigned int)a2;
  v31 = -1;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 6027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6027);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 6027);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v22 = -1071774976;
    goto LABEL_26;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v8, v6, v5);
  if ( !Path )
  {
    WdLogSingleEntry3(2LL, v6, v5, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Specified path (0x%I64x, 0x%I64x) does not exist in topology 0x%I64x",
      v6,
      v5,
      (__int64)this,
      0LL,
      0LL);
    v22 = -1071774937;
    goto LABEL_26;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v9 + 160);
  VidPnSourceId = v6;
  v13 = Container;
  v30 = (DXGK_ENUM_PIVOT)__PAIR64__(v5, v6);
  VidPnTargetId = (unsigned int)v5;
  v15 = *(_QWORD *)(Container + 48);
  if ( Container == -88 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = (D3DKMDT_HVIDPN)Container;
    if ( Container )
      goto LABEL_9;
  }
  WdLogSingleEntry0(1LL);
  VidPnTargetId = v30.VidPnTargetId;
  VidPnSourceId = v30.VidPnSourceId;
LABEL_9:
  if ( !a4 )
  {
    WdLogSingleEntry4(7LL, 8LL, v16, VidPnSourceId, (unsigned int)VidPnTargetId);
LABEL_25:
    v22 = 0;
    goto LABEL_26;
  }
  if ( v16 && *((_DWORD *)v16 + 16) == 1833172997 )
    v17 = v16;
  else
    v17 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v17 + 172)) - 1) & *((_WORD *)v17 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  LOBYTE(VidPnTargetId) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v35, v17 + 38, VidPnTargetId);
  v18 = *(_QWORD *)(v15 + 8);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    v18 = *(_QWORD *)(v15 + 8);
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v34.EnumPivot + 2) = 0;
  v20 = *(ADAPTER_DISPLAY **)(v15 + 8);
  v34.hConstrainingVidPn = v16;
  v34.EnumPivotType = D3DKMDT_EPT_SCALING;
  v34.EnumPivot = v30;
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    v20 = *(ADAPTER_DISPLAY **)(v15 + 8);
  }
  v21 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v20, &v34);
  v22 = v21;
  if ( v21 < 0 )
    WdLogSingleEntry4(2LL, v16, v34.EnumPivot.VidPnSourceId, v34.EnumPivot.VidPnTargetId, v21);
  else
    v22 = 0;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
  if ( v22 >= 0 )
    goto LABEL_25;
  v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
  v28[3] = v16;
  v28[4] = 8LL;
  v28[5] = &v30;
  v29 = *(_QWORD *)(v15 + 8);
  if ( !v29 )
  {
    WdLogSingleEntry0(1LL);
    v29 = *(_QWORD *)(v15 + 8);
  }
  v28[6] = *(_QWORD *)(v29 + 16);
  v28[7] = v22;
  WdLogSingleEntry4(2LL, v36, v5, v13, v22);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v31);
  }
  return (unsigned int)v22;
}
