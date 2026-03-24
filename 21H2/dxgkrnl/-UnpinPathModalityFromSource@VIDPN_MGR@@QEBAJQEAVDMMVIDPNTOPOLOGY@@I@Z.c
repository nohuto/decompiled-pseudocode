/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02E1194
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DC200 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018798 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01115B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01116D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C0111738 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C02E72A8 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rcx
  D3DKMDT_HVIDPN v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  ADAPTER_DISPLAY *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  ADAPTER_DISPLAY *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rsi
  ADAPTER_DISPLAY *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v50; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v51[24]; // [rsp+58h] [rbp-18h] BYREF
  DXGK_ENUM_PIVOT v52; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v3 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v13 = v8;
  if ( v8 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = v3;
    v14[4] = a2;
    v14[5] = v13;
    return (unsigned int)v13;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v9);
  v19 = Container;
  v52 = (DXGK_ENUM_PIVOT)-1LL;
  v20 = Container + 88;
  v21 = -(Container + 88);
  v22 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( v22 )
  {
    if ( *(_DWORD *)((Container & -(__int64)(Container != -88)) + 0x40) == 1833172997 )
    {
      v24 = Container & -(__int64)(Container != -88);
      goto LABEL_10;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdAssertion(v21, v17);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = 0LL;
LABEL_10:
  LOBYTE(v21) = *(_BYTE *)(v24 + 172);
  if ( ((unsigned __int16)((2 << v21) - 1) & *(_WORD *)(v24 + 174)) != 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v21, v17);
    WdLogEvent5_WdAssertion(v25);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v51,
    v24 + 152,
    3u,
    v18,
    v49,
    *(_QWORD *)(v24 + 136));
  v27 = this[1];
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, v26);
    WdLogEvent5_WdAssertion(v28);
    v27 = this[1];
  }
  v29 = *((_QWORD *)v27 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 168)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30, v26);
    WdLogEvent5_WdAssertion(v31);
  }
  *((_DWORD *)&v50.EnumPivot + 2) = 0;
  v32 = this[1];
  v50.hConstrainingVidPn = v22;
  v50.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
  v50.EnumPivot = v52;
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL, v26);
    WdLogEvent5_WdAssertion(v33);
    v32 = this[1];
  }
  v34 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v32, &v50);
  v39 = v34;
  if ( v34 >= 0 )
  {
    LODWORD(v39) = 0;
  }
  else
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v40[3] = v22;
    v40[4] = v50.EnumPivot.VidPnSourceId;
    v40[5] = v50.EnumPivot.VidPnTargetId;
    v40[6] = v39;
    WdLogEvent5_WdError(v40);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51, v35, v37, v38);
  if ( (int)v39 >= 0 )
  {
    LODWORD(v39) = 0;
  }
  else
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
    v45[3] = v22;
    v45[4] = 11LL;
    v45[5] = &v52;
    v46 = this[1];
    if ( !v46 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v42, v41);
      WdLogEvent5_WdAssertion(v47);
      v46 = this[1];
    }
    v45[6] = *((_QWORD *)v46 + 2);
    v45[7] = (int)v39;
  }
  if ( (int)v39 >= 0 )
    return 0LL;
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
  v48[3] = v3;
  v48[4] = v19 & -(__int64)(v20 != 0);
  v48[5] = (int)v39;
  WdLogEvent5_WdError(v48);
  return (unsigned int)v39;
}
