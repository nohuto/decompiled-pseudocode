/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C039DE58
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C0069094 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3)
{
  __int64 v3; // r13
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 Container; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  D3DKMDT_HVIDPN v14; // rsi
  __int64 v15; // rbx
  D3DKMDT_HVIDPN v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // rcx
  int IsSupportedVidPn; // eax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r8
  D3DKMDT_HVIDPN v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // [rsp+28h] [rbp-39h]
  __int64 v35; // [rsp+48h] [rbp-19h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v36; // [rsp+50h] [rbp-11h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v37; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v38[32]; // [rsp+78h] [rbp+17h] BYREF
  DXGK_ENUM_PIVOT v39; // [rsp+D0h] [rbp+6Fh] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v3);
  LODWORD(v7) = v6;
  if ( v6 < 0 )
  {
    v8 = v6;
    v9 = v3;
LABEL_8:
    WdLogSingleEntry3(2LL, v9, a2, v8);
    return (unsigned int)v7;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v12 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v13 = *((_QWORD *)a2 + 12);
  v39.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v39.VidPnTargetId = *(_DWORD *)(v13 + 24);
  if ( v12 == -88 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = (D3DKMDT_HVIDPN)v12;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 64) == 1833172997 )
        goto LABEL_17;
      goto LABEL_16;
    }
  }
  WdLogSingleEntry0(1LL);
LABEL_16:
  v12 = 0LL;
LABEL_17:
  v15 = v12 + 96;
  v16 = v14;
  if ( !*(_BYTE *)(v12 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v12 + 96)) )
  {
    WdLogSingleEntry1(2LL, v14);
LABEL_34:
    v23 = *((_QWORD *)this + 1);
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      v23 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry2(7LL, v14, *(_QWORD *)(v23 + 16));
    v9 = v3;
    LODWORD(v7) = -1071774970;
    goto LABEL_58;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v15 + 76)) - 1) & *(_WORD *)(v15 + 78)) != 0 )
    WdLogSingleEntry0(1LL);
  v17 = *((_QWORD *)this + 1);
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = *((_QWORD *)this + 1);
  }
  v18 = *(_QWORD *)(v17 + 16);
  v35 = v18;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v19 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  *(_QWORD *)&v36.IsVidPnSupported = 0LL;
  v36.hDesiredVidPn = v14;
  if ( !v19 )
  {
    WdLogSingleEntry0(1LL);
    v19 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v19, &v36);
  v7 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, v14, v35, IsSupportedVidPn);
    v22 = *((_QWORD *)this + 1);
    if ( !v22 )
    {
      WdLogSingleEntry0(1LL);
      v22 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry3(2LL, v14, *(_QWORD *)(v22 + 16), v7);
    goto LABEL_57;
  }
  if ( !v36.IsVidPnSupported )
    goto LABEL_34;
  if ( v14 && *((_DWORD *)v14 + 16) == 1833172997 )
    v24 = v14;
  else
    v24 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v24 + 172)) - 1) & *((_WORD *)v24 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v38,
    (__int64)(v24 + 38),
    3u,
    v21,
    v34,
    *((_QWORD *)v24 + 17));
  v25 = *((_QWORD *)this + 1);
  if ( !v25 )
  {
    WdLogSingleEntry0(1LL);
    v25 = *((_QWORD *)this + 1);
  }
  v26 = *(_QWORD *)(v25 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v26 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v37.EnumPivot + 2) = 0;
  v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  v37.hConstrainingVidPn = v14;
  v37.EnumPivotType = D3DKMDT_EPT_SCALING;
  v37.EnumPivot = v39;
  if ( !v27 )
  {
    WdLogSingleEntry0(1LL);
    v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  }
  v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v37);
  LODWORD(v7) = v28;
  if ( v28 >= 0 )
    LODWORD(v7) = 0;
  else
    WdLogSingleEntry4(2LL, v14, v37.EnumPivot.VidPnSourceId, v37.EnumPivot.VidPnTargetId, v28);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v38, v29);
  if ( (int)v7 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30);
    v32[3] = v16;
    v32[4] = 7LL;
    v32[5] = &v39;
    v33 = *((_QWORD *)this + 1);
    if ( !v33 )
    {
      WdLogSingleEntry0(1LL);
      v33 = *((_QWORD *)this + 1);
    }
    v32[6] = *(_QWORD *)(v33 + 16);
    v32[7] = (int)v7;
LABEL_57:
    v9 = v3;
    if ( (_DWORD)v7 != -1071774970 )
    {
      v8 = (int)v7;
      goto LABEL_8;
    }
LABEL_58:
    WdLogSingleEntry2(3LL, v9, a2);
    return (unsigned int)v7;
  }
  return 0LL;
}
