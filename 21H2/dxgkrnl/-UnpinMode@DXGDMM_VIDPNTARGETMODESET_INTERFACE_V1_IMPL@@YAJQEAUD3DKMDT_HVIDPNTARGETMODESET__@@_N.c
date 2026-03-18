/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C01AA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0011AC8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r12
  DMMVIDPNTARGETMODESET *v5; // rax
  DMMVIDPNTARGETMODESET *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 Container; // rax
  __int64 v14; // r9
  unsigned int VidPnSourceId; // edx
  __int64 v16; // r13
  __int64 v17; // r14
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // r8d
  D3DKMDT_HVIDPN v19; // rdi
  D3DKMDT_HVIDPN v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  ADAPTER_DISPLAY *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // [rsp+28h] [rbp-39h]
  int v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+50h] [rbp-11h]
  char v37; // [rsp+58h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v38; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v39[32]; // [rsp+78h] [rbp+17h] BYREF
  DXGK_ENUM_PIVOT v40; // [rsp+D8h] [rbp+77h] BYREF

  v35 = -1;
  v3 = (char)a2;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v6 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v10) = -1071774967;
    goto LABEL_28;
  }
  v7 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v10 = v7;
  if ( v7 < 0 )
  {
    v31 = WdLogNewEntry5_WdTrace(v9, v8);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v10;
    goto LABEL_28;
  }
  v11 = *((_QWORD *)v6 + 14);
  if ( !v11 )
    WdLogSingleEntry0(1LL);
  v12 = *(_QWORD *)(v11 + 40);
  if ( !v12 )
  {
    WdLogSingleEntry0(1LL);
    v12 = *(_QWORD *)(v11 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v12 + 64);
  VidPnSourceId = -1;
  v16 = Container;
  v17 = *(_QWORD *)(Container + 48);
  v40.VidPnSourceId = -1;
  VidPnTargetId = *(_DWORD *)(v11 + 24);
  v40.VidPnTargetId = VidPnTargetId;
  if ( Container == -88 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = (D3DKMDT_HVIDPN)Container;
    if ( Container )
      goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
  VidPnTargetId = v40.VidPnTargetId;
  VidPnSourceId = v40.VidPnSourceId;
LABEL_11:
  if ( !v3 )
  {
    WdLogSingleEntry4(7LL, 6LL, v19, VidPnSourceId, VidPnTargetId);
LABEL_27:
    LODWORD(v10) = 0;
    goto LABEL_28;
  }
  if ( v19 && *((_DWORD *)v19 + 16) == 1833172997 )
    v20 = v19;
  else
    v20 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v20 + 172)) - 1) & *((_WORD *)v20 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v39,
    (__int64)(v20 + 38),
    3u,
    v14,
    v34,
    *((_QWORD *)v20 + 17));
  v21 = *(_QWORD *)(v17 + 8);
  if ( !v21 )
  {
    WdLogSingleEntry0(1LL);
    v21 = *(_QWORD *)(v17 + 8);
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v38.EnumPivot + 2) = 0;
  v23 = *(ADAPTER_DISPLAY **)(v17 + 8);
  v38.hConstrainingVidPn = v19;
  v38.EnumPivotType = D3DKMDT_EPT_VIDPNTARGET;
  v38.EnumPivot = v40;
  if ( !v23 )
  {
    WdLogSingleEntry0(1LL);
    v23 = *(ADAPTER_DISPLAY **)(v17 + 8);
  }
  v24 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v23, &v38);
  LODWORD(v10) = v24;
  if ( v24 < 0 )
    WdLogSingleEntry4(2LL, v19, v38.EnumPivot.VidPnSourceId, v38.EnumPivot.VidPnTargetId, v24);
  else
    LODWORD(v10) = 0;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v39, v25);
  if ( (int)v10 >= 0 )
    goto LABEL_27;
  v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
  v32[3] = v19;
  v32[4] = 6LL;
  v32[5] = &v40;
  v33 = *(_QWORD *)(v17 + 8);
  if ( !v33 )
  {
    WdLogSingleEntry0(1LL);
    v33 = *(_QWORD *)(v17 + 8);
  }
  v32[6] = *(_QWORD *)(v33 + 16);
  v32[7] = (int)v10;
  WdLogSingleEntry3(2LL, *(unsigned int *)(v11 + 24), v16, (int)v10);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v35);
  }
  return (unsigned int)v10;
}
