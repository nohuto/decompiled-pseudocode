/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C01E8020
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0011B2C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C001EC18 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r12
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rdx
  DMMVIDPNSOURCEMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 Container; // rax
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // r13
  __int64 v19; // r14
  D3DKMDT_HVIDPN v20; // rdi
  D3DKMDT_HVIDPN v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  ADAPTER_DISPLAY *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // [rsp+28h] [rbp-39h]
  int v36; // [rsp+48h] [rbp-19h] BYREF
  __int64 v37; // [rsp+50h] [rbp-11h]
  char v38; // [rsp+58h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v39; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v40[32]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v41; // [rsp+D8h] [rbp+77h] BYREF

  v36 = -1;
  v3 = (char)a2;
  v37 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v38 = 1;
    v36 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 6008);
  v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v11) = -1071774968;
    goto LABEL_28;
  }
  v8 = DMMVIDPNSOURCEMODESET::UnpinMode(v5, v6);
  v11 = v8;
  if ( v8 < 0 )
  {
    v32 = WdLogNewEntry5_WdTrace(v10, v9);
    *(_QWORD *)(v32 + 24) = this;
    *(_QWORD *)(v32 + 32) = v11;
    goto LABEL_28;
  }
  v12 = *((_QWORD *)v7 + 14);
  if ( !v12 )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(v12 + 40);
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    v13 = *(_QWORD *)(v12 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v13 + 64);
  v16 = *(_DWORD *)(v12 + 24);
  v17 = -1;
  v18 = Container;
  v19 = *(_QWORD *)(Container + 48);
  v41 = v16 | 0xFFFFFFFF00000000uLL;
  if ( Container == -88 )
  {
    v20 = 0LL;
  }
  else
  {
    v20 = (D3DKMDT_HVIDPN)Container;
    if ( Container )
      goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
  v17 = HIDWORD(v41);
  v16 = v41;
LABEL_11:
  if ( !v3 )
  {
    WdLogSingleEntry4(7LL, 4LL, v20, v16, v17);
LABEL_27:
    LODWORD(v11) = 0;
    goto LABEL_28;
  }
  if ( v20 && *((_DWORD *)v20 + 16) == 1833172997 )
    v21 = v20;
  else
    v21 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v21 + 172)) - 1) & *((_WORD *)v21 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v40,
    (__int64)(v21 + 38),
    3u,
    v15,
    v35,
    *((_QWORD *)v21 + 17));
  v22 = *(_QWORD *)(v19 + 8);
  if ( !v22 )
  {
    WdLogSingleEntry0(1LL);
    v22 = *(_QWORD *)(v19 + 8);
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v39.EnumPivot + 2) = 0;
  v24 = *(ADAPTER_DISPLAY **)(v19 + 8);
  v39.hConstrainingVidPn = v20;
  v39.EnumPivotType = D3DKMDT_EPT_VIDPNSOURCE;
  v39.EnumPivot = (DXGK_ENUM_PIVOT)v41;
  if ( !v24 )
  {
    WdLogSingleEntry0(1LL);
    v24 = *(ADAPTER_DISPLAY **)(v19 + 8);
  }
  v25 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v24, &v39);
  LODWORD(v11) = v25;
  if ( v25 < 0 )
    WdLogSingleEntry4(2LL, v20, v39.EnumPivot.VidPnSourceId, v39.EnumPivot.VidPnTargetId, v25);
  else
    LODWORD(v11) = 0;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40, v26);
  if ( (int)v11 >= 0 )
    goto LABEL_27;
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
  v33[3] = v20;
  v33[4] = 4LL;
  v33[5] = &v41;
  v34 = *(_QWORD *)(v19 + 8);
  if ( !v34 )
  {
    WdLogSingleEntry0(1LL);
    v34 = *(_QWORD *)(v19 + 8);
  }
  v33[6] = *(_QWORD *)(v34 + 16);
  v33[7] = (int)v11;
  WdLogSingleEntry3(2LL, *(unsigned int *)(v12 + 24), v18, (int)v11);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 )
  {
    LOBYTE(v29) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v36);
  }
  return (unsigned int)v11;
}
