/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C
 * Callers:
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C01AAD10 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C039D724 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C001EC18 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01AA288 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // r12
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 Container; // rax
  D3DKMDT_HVIDPN v12; // rsi
  __int64 v13; // rdi
  D3DKMDT_HVIDPN v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  ADAPTER_DISPLAY *v17; // rcx
  int IsSupportedVidPn; // eax
  __int64 v19; // r9
  D3DKMDT_HVIDPN v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  ADAPTER_DISPLAY *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-59h]
  __int64 v38; // [rsp+40h] [rbp-39h]
  __int64 v39; // [rsp+48h] [rbp-31h]
  __int64 v40; // [rsp+50h] [rbp-29h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v41; // [rsp+58h] [rbp-21h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v42; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v43[80]; // [rsp+80h] [rbp+7h] BYREF
  DXGK_ENUM_PIVOT v44; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+77h]
  char v46; // [rsp+F8h] [rbp+7Fh]

  v46 = a4;
  v45 = a3;
  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  v40 = *((_QWORD *)a2 + 18);
  v7 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v29 = *((_QWORD *)this + 1);
    if ( !v29 )
    {
      WdLogSingleEntry0(1LL);
      v29 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry4(2LL, v4, a2, *(_QWORD *)(v29 + 16), v8);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)a2 + 14);
  v38 = v9;
  if ( !v9 )
    WdLogSingleEntry0(1LL);
  v10 = *(_QWORD *)(v9 + 40);
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *(_QWORD *)(v9 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v10 + 64);
  v44.VidPnSourceId = *(_DWORD *)(v9 + 24);
  v39 = Container;
  v44.VidPnTargetId = -1;
  if ( Container == -88 )
  {
    v12 = 0LL;
    goto LABEL_50;
  }
  v12 = (D3DKMDT_HVIDPN)Container;
  if ( !Container )
  {
LABEL_50:
    WdLogSingleEntry0(1LL);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(Container + 64) != 1833172997 )
  {
LABEL_51:
    v13 = 0LL;
    goto LABEL_14;
  }
  v13 = Container;
LABEL_14:
  v14 = v12;
  if ( !*(_BYTE *)(v13 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v13 + 96)) )
  {
    WdLogSingleEntry1(2LL, v12);
LABEL_56:
    v31 = *((_QWORD *)this + 1);
    if ( !v31 )
    {
      WdLogSingleEntry0(1LL);
      v31 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry2(7LL, v12, *(_QWORD *)(v31 + 16));
    LODWORD(v8) = -1071774970;
    v32 = (unsigned int)v4;
    goto LABEL_59;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v13 + 172)) - 1) & *(_WORD *)(v13 + 174)) != 0 )
    WdLogSingleEntry0(1LL);
  v15 = *((_QWORD *)this + 1);
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    v15 = *((_QWORD *)this + 1);
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  *(_QWORD *)&v41.IsVidPnSupported = 0LL;
  v41.hDesiredVidPn = v12;
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v17, &v41);
  v8 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, v12, v16, IsSupportedVidPn);
    v30 = *((_QWORD *)this + 1);
    if ( !v30 )
    {
      WdLogSingleEntry0(1LL);
      v30 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry3(2LL, v12, *(_QWORD *)(v30 + 16), v8);
  }
  else
  {
    if ( !v41.IsVidPnSupported )
    {
      LODWORD(v4) = v45;
      goto LABEL_56;
    }
    if ( !v46 )
    {
      WdLogSingleEntry4(7LL, 3LL, v12, v44.VidPnSourceId, v44.VidPnTargetId);
      return 0LL;
    }
    if ( !v12 || (v20 = v12, *((_DWORD *)v12 + 16) != 1833172997) )
      v20 = 0LL;
    if ( ((unsigned __int16)((2 << *((_BYTE *)v20 + 172)) - 1) & *((_WORD *)v20 + 87)) != 0 )
      WdLogSingleEntry0(1LL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v43,
      (__int64)(v20 + 38),
      3u,
      v19,
      v37,
      *((_QWORD *)v20 + 17));
    v21 = *((_QWORD *)this + 1);
    if ( !v21 )
    {
      WdLogSingleEntry0(1LL);
      v21 = *((_QWORD *)this + 1);
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v23 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    *((_DWORD *)&v42.EnumPivot + 2) = 0;
    v42.hConstrainingVidPn = v12;
    v42.EnumPivotType = D3DKMDT_EPT_VIDPNSOURCE;
    v42.EnumPivot = v44;
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      v23 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    }
    v24 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v23, &v42);
    LODWORD(v8) = v24;
    if ( v24 < 0 )
      WdLogSingleEntry4(2LL, v12, v42.EnumPivot.VidPnSourceId, v42.EnumPivot.VidPnTargetId, v24);
    else
      LODWORD(v8) = 0;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v43, v25);
    if ( (int)v8 >= 0 )
      return 0LL;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
    v34[3] = v14;
    v34[4] = 3LL;
    v34[5] = &v44;
    v35 = *((_QWORD *)this + 1);
    if ( !v35 )
    {
      WdLogSingleEntry0(1LL);
      v35 = *((_QWORD *)this + 1);
    }
    v34[6] = *(_QWORD *)(v35 + 16);
    v34[7] = (int)v8;
  }
  v32 = v45;
  if ( (_DWORD)v8 == -1071774970 )
  {
LABEL_59:
    WdLogSingleEntry2(3LL, v32, a2);
    goto LABEL_60;
  }
  WdLogSingleEntry3(2LL, v45, a2, (int)v8);
LABEL_60:
  v33 = *((_QWORD *)this + 1);
  if ( !v33 )
  {
    WdLogSingleEntry0(1LL);
    v33 = *((_QWORD *)this + 1);
  }
  WdLogSingleEntry4(7LL, v32, *(unsigned int *)(v38 + 24), v39, *(_QWORD *)(v33 + 16));
  if ( !v40 )
  {
    if ( (int)DMMVIDPNSOURCEMODESET::UnpinMode(a2, v36) >= 0 )
      return (unsigned int)v8;
    goto LABEL_71;
  }
  if ( (int)DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v40 + 24)) < 0 )
LABEL_71:
    WdLogSingleEntry0(1LL);
  return (unsigned int)v8;
}
