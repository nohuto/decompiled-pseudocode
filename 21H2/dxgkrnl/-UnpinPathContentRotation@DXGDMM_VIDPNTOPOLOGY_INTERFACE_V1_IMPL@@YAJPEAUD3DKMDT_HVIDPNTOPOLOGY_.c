/*
 * XREFs of ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C01E9210
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001F1E4 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentRotation(
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
  __int64 v11; // rdx
  __int64 Container; // rax
  __int64 v13; // r9
  unsigned int VidPnSourceId; // edx
  __int64 v15; // r15
  unsigned int VidPnTargetId; // r8d
  __int64 v17; // r14
  D3DKMDT_HVIDPN v18; // rdi
  D3DKMDT_HVIDPN v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // [rsp+28h] [rbp-49h]
  DXGK_ENUM_PIVOT v34; // [rsp+58h] [rbp-19h] BYREF
  int v35; // [rsp+60h] [rbp-11h] BYREF
  __int64 v36; // [rsp+68h] [rbp-9h]
  char v37; // [rsp+70h] [rbp-1h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v38; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v39[24]; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v40; // [rsp+E0h] [rbp+6Fh]

  v40 = (unsigned int)a2;
  v35 = -1;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 6029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6029);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 6029);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v25 = -1071774976;
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
    v25 = -1071774937;
    goto LABEL_26;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v11) < 0 )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v9 + 160);
  VidPnSourceId = v6;
  v15 = Container;
  v34 = (DXGK_ENUM_PIVOT)__PAIR64__(v5, v6);
  VidPnTargetId = v5;
  v17 = *(_QWORD *)(Container + 48);
  if ( Container == -88 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = (D3DKMDT_HVIDPN)Container;
    if ( Container )
      goto LABEL_9;
  }
  WdLogSingleEntry0(1LL);
  VidPnTargetId = v34.VidPnTargetId;
  VidPnSourceId = v34.VidPnSourceId;
LABEL_9:
  if ( !a4 )
  {
    WdLogSingleEntry4(7LL, 10LL, v18, VidPnSourceId, VidPnTargetId);
LABEL_25:
    v25 = 0;
    goto LABEL_26;
  }
  if ( v18 && *((_DWORD *)v18 + 16) == 1833172997 )
    v19 = v18;
  else
    v19 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v19 + 172)) - 1) & *((_WORD *)v19 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v39,
    (__int64)(v19 + 38),
    3u,
    v13,
    v33,
    *((_QWORD *)v19 + 17));
  v20 = *(_QWORD *)(v17 + 8);
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    v20 = *(_QWORD *)(v17 + 8);
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v21 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v21 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v38.EnumPivot + 2) = 0;
  v22 = *(ADAPTER_DISPLAY **)(v17 + 8);
  v38.hConstrainingVidPn = v18;
  v38.EnumPivotType = D3DKMDT_EPT_ROTATION;
  v38.EnumPivot = v34;
  if ( !v22 )
  {
    WdLogSingleEntry0(1LL);
    v22 = *(ADAPTER_DISPLAY **)(v17 + 8);
  }
  v23 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v22, &v38);
  v25 = v23;
  if ( v23 < 0 )
    WdLogSingleEntry4(2LL, v18, v38.EnumPivot.VidPnSourceId, v38.EnumPivot.VidPnTargetId, v23);
  else
    v25 = 0;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v39, v24);
  if ( v25 >= 0 )
    goto LABEL_25;
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
  v31[3] = v18;
  v31[4] = 10LL;
  v31[5] = &v34;
  v32 = *(_QWORD *)(v17 + 8);
  if ( !v32 )
  {
    WdLogSingleEntry0(1LL);
    v32 = *(_QWORD *)(v17 + 8);
  }
  v31[6] = *(_QWORD *)(v32 + 16);
  v31[7] = v25;
  WdLogSingleEntry4(2LL, v40, v5, v15, v25);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v35);
  }
  return (unsigned int)v25;
}
