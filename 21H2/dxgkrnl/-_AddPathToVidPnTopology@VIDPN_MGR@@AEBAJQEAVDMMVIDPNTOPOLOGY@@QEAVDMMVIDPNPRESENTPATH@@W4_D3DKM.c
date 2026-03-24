/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0124448
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C014B474 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018798 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0110FD4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0124768 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013BC8C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        char a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // esi
  VIDPN_MGR *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 Container; // rax
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-78h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  _BYTE v41[88]; // [rsp+40h] [rbp-58h] BYREF
  DXGK_ENUM_PIVOT v42; // [rsp+A8h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v43; // [rsp+B0h] [rbp+18h] BYREF

  v5 = (int)a4;
  v8 = this;
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
  }
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v41, (__int64)a2 + 56, 1u, a4, v39, 1LL);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, a3, v5);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17[3] = v9;
    v17[4] = v10;
    v17[5] = a2;
    v17[6] = v16;
LABEL_9:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v41,
      v18,
      v19,
      v20);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v41, v12, v14, v15);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v22);
  v42.VidPnSourceId = -1;
  v42.VidPnTargetId = -1;
  v24 = Container + 88;
  v43 = (struct DMMVIDPNPRESENTPATH *)Container;
  v25 = VIDPN_MGR::FormalizeVidPnChange(
          (__int64)v8,
          (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
          1LL,
          a5,
          &v42);
  v16 = v25;
  if ( v25 < 0 )
  {
    if ( v25 == -1071774975 )
    {
      v31 = WdLogNewEntry5_WdDmmEvent(v27, v26);
      *(_QWORD *)(v31 + 24) = v9;
      *(_QWORD *)(v31 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v31);
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v35[5] = (unsigned __int64)v43 & -(__int64)(v24 != 0);
      v35[3] = v9;
      v35[4] = v10;
      v35[6] = v16;
      WdLogEvent5_WdError(v35);
    }
    LOBYTE(v33) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v33) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v36);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v41, (__int64)a2 + 56, 2u, v34, v40, 1LL);
    v43 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v43) < 0 || v43 != a3 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37, v18);
      WdLogEvent5_WdAssertion(v38);
    }
    goto LABEL_9;
  }
  return 0LL;
}
