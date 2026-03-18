/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01A9F94 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        __int64 a1,
        D3DKMDT_HVIDPN a2,
        __int64 a3,
        char a4,
        DXGK_ENUM_PIVOT *a5)
{
  __int64 v5; // rbx
  D3DKMDT_HVIDPN v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  ADAPTER_DISPLAY *v12; // rcx
  int IsSupportedVidPn; // eax
  __int64 v14; // rsi
  D3DKMDT_HVIDPN v15; // rsi
  D3DKMDT_HVIDPN v16; // r13
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // r8
  __int64 v26; // r8
  _QWORD *v27; // r15
  __int64 v28; // rcx
  struct _DXGKARG_ISSUPPORTEDVIDPN v29; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v30; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v31[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = (int)a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_20;
    if ( (_DWORD)v5 != 1 )
    {
      if ( (_DWORD)v5 == 2 )
        goto LABEL_20;
      if ( (_DWORD)v5 != 3 )
      {
        if ( (_DWORD)v5 == 4 )
          goto LABEL_20;
        if ( (_DWORD)v5 != 5 )
        {
LABEL_61:
          WdLogSingleEntry1(2LL, v5);
          goto LABEL_20;
        }
      }
    }
  }
  else if ( (_DWORD)v5 != 7 )
  {
    if ( (_DWORD)v5 == 8 )
      goto LABEL_20;
    if ( (_DWORD)v5 != 9 )
    {
      if ( (int)v5 <= 11 )
        goto LABEL_20;
      goto LABEL_61;
    }
  }
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v9 = a2;
  else
    v9 = 0LL;
  if ( !*((_BYTE *)v9 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v9 + 24)) )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_68;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)v9 + 172)) - 1) & *((_WORD *)v9 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *(_QWORD *)(a1 + 8);
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v12 = *(ADAPTER_DISPLAY **)(a1 + 8);
  *(_QWORD *)&v29.IsVidPnSupported = 0LL;
  v29.hDesiredVidPn = a2;
  if ( !v12 )
  {
    WdLogSingleEntry0(1LL);
    v12 = *(ADAPTER_DISPLAY **)(a1 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v12, &v29);
  v14 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, a2, v11, IsSupportedVidPn);
    v25 = *(_QWORD *)(a1 + 8);
    if ( !v25 )
    {
      WdLogSingleEntry0(1LL);
      v25 = *(_QWORD *)(a1 + 8);
    }
    WdLogSingleEntry3(2LL, a2, *(_QWORD *)(v25 + 16), v14);
    return (unsigned int)v14;
  }
  if ( v29.IsVidPnSupported )
  {
LABEL_20:
    if ( !a4 )
    {
      WdLogSingleEntry4(7LL, v5, a2, a5->VidPnSourceId, a5->VidPnTargetId);
      return 0LL;
    }
    if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
      v15 = a2;
    else
      v15 = 0LL;
    v16 = v15 + 38;
    if ( ((unsigned __int16)((2 << *((_BYTE *)v15 + 172)) - 1) & *((_WORD *)v15 + 87)) != 0 )
      WdLogSingleEntry0(1LL);
    v17 = D3DKMDT_EPT_SCALING;
    LOBYTE(a3) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v31, v16, a3);
    v18 = *(_QWORD *)(a1 + 8);
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      v18 = *(_QWORD *)(a1 + 8);
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    *(_QWORD *)&v30.EnumPivot.VidPnTargetId = 0LL;
    v30.hConstrainingVidPn = a2;
    if ( (int)v5 > 8 )
    {
      if ( (int)v5 <= 10 )
      {
        v17 = D3DKMDT_EPT_ROTATION;
        goto LABEL_33;
      }
      if ( (_DWORD)v5 == 11 )
        goto LABEL_60;
    }
    else
    {
      if ( (int)v5 >= 7 )
      {
LABEL_33:
        v30.EnumPivotType = v17;
        if ( a5 )
        {
          v30.EnumPivot = *a5;
        }
        else
        {
          v30.EnumPivot.VidPnSourceId = -1;
          v30.EnumPivot.VidPnTargetId = -1;
        }
        v20 = *(ADAPTER_DISPLAY **)(a1 + 8);
        if ( !v20 )
        {
          WdLogSingleEntry0(1LL);
          v20 = *(ADAPTER_DISPLAY **)(a1 + 8);
        }
        v21 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v20, &v30);
        LODWORD(v14) = v21;
        if ( v21 < 0 )
          WdLogSingleEntry4(2LL, a2, v30.EnumPivot.VidPnSourceId, v30.EnumPivot.VidPnTargetId, v21);
        else
          LODWORD(v14) = 0;
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v31);
        if ( (int)v14 >= 0 )
          return 0LL;
        v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
        v27[3] = a2;
        v27[4] = v5;
        v27[5] = a5;
        v28 = *(_QWORD *)(a1 + 8);
        if ( !v28 )
        {
          WdLogSingleEntry0(1LL);
          v28 = *(_QWORD *)(a1 + 8);
        }
        v27[6] = *(_QWORD *)(v28 + 16);
        v27[7] = (int)v14;
        return (unsigned int)v14;
      }
      if ( (int)v5 > 0 )
      {
        if ( (int)v5 > 2 )
        {
          v17 = ((int)v5 > 4) + 1;
          goto LABEL_33;
        }
LABEL_60:
        v17 = D3DKMDT_EPT_NOPIVOT;
        goto LABEL_33;
      }
    }
    WdLogSingleEntry1(2LL, v5);
    v17 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_33;
  }
LABEL_68:
  v26 = *(_QWORD *)(a1 + 8);
  if ( !v26 )
  {
    WdLogSingleEntry0(1LL);
    v26 = *(_QWORD *)(a1 + 8);
  }
  WdLogSingleEntry2(7LL, a2, *(_QWORD *)(v26 + 16));
  result = 3223192321LL;
  if ( (_DWORD)v5 != 1 )
    return 3223192326LL;
  return result;
}
