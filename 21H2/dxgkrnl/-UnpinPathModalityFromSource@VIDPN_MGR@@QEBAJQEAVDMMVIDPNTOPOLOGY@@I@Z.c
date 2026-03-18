/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C039EE30
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5EA8 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // r12
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 Container; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r13
  D3DKMDT_HVIDPN v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r15
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v29; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v30[24]; // [rsp+58h] [rbp-18h] BYREF
  DXGK_ENUM_PIVOT v31; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v3 == -1 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = v3;
    v10[4] = a2;
    v10[5] = v9;
    return (unsigned int)v9;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v14 = Container;
  v31 = (DXGK_ENUM_PIVOT)-1LL;
  v15 = Container + 88;
  if ( Container == -88 )
  {
    v16 = 0LL;
    goto LABEL_12;
  }
  v16 = (D3DKMDT_HVIDPN)Container;
  if ( !Container )
  {
LABEL_12:
    WdLogSingleEntry0(1LL);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(Container + 64) != 1833172997 )
  {
LABEL_13:
    v17 = 0LL;
    goto LABEL_14;
  }
  v17 = Container;
LABEL_14:
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v17 + 172)) - 1) & *(_WORD *)(v17 + 174)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v30,
    v17 + 152,
    3u,
    v13,
    v28,
    *(_QWORD *)(v17 + 136));
  v18 = *((_QWORD *)this + 1);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    v18 = *((_QWORD *)this + 1);
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  *((_DWORD *)&v29.EnumPivot + 2) = 0;
  v20 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  v29.hConstrainingVidPn = v16;
  v29.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
  v29.EnumPivot = v31;
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    v20 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  }
  v21 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v20, &v29);
  v23 = v21;
  if ( v21 >= 0 )
    v23 = 0;
  else
    WdLogSingleEntry4(2LL, v16, v29.EnumPivot.VidPnSourceId, v29.EnumPivot.VidPnTargetId, v21);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v30, v22);
  if ( v23 >= 0 )
    return 0LL;
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
  v26[3] = v16;
  v26[4] = 11LL;
  v26[5] = &v31;
  v27 = *((_QWORD *)this + 1);
  if ( !v27 )
  {
    WdLogSingleEntry0(1LL);
    v27 = *((_QWORD *)this + 1);
  }
  v26[6] = *(_QWORD *)(v27 + 16);
  v26[7] = v23;
  WdLogSingleEntry3(2LL, v3, v14 & -(__int64)(v15 != 0), v23);
  return (unsigned int)v23;
}
