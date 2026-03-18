/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01A9F94
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0399D00 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A85C4 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        char a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // esi
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 Container; // r13
  int v15; // eax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  _BYTE v22[88]; // [rsp+40h] [rbp-58h] BYREF
  DXGK_ENUM_PIVOT v24; // [rsp+A8h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v25; // [rsp+B0h] [rbp+18h] BYREF

  v5 = (int)a4;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v8 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v22, (__int64)a2 + 56, 1u, a4, v20, 1LL);
  v10 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)a2, a3, v5);
  v13 = v10;
  if ( v10 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
    v17[3] = v8;
    v17[4] = v9;
    v17[5] = a2;
    v17[6] = v13;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v22, v11);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v24.VidPnSourceId = -1;
    v24.VidPnTargetId = -1;
    v15 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            1LL,
            a5,
            &v24);
    LODWORD(v13) = v15;
    if ( v15 >= 0 )
      return 0LL;
    if ( v15 == -1071774975 )
      WdLogSingleEntry2(7LL, v8, v9);
    else
      WdLogSingleEntry4(2LL, v8, v9, Container & -(__int64)(Container != -88), v15);
    if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
      WdLogSingleEntry0(1LL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v22, (__int64)a2 + 56, 2u, v19, v21, 1LL);
    v25 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v8, v9, &v25) < 0 || v25 != a3 )
      WdLogSingleEntry0(1LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v22, v18);
  return (unsigned int)v13;
}
