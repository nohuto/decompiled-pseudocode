/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A85C4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01A9F94 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C001125C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00112D0 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  char v11; // r12
  __int64 v12; // r10
  char *v13; // r11
  DMMVIDPNTOPOLOGY *v14; // rbx
  char *v15; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  DMMVIDPNTOPOLOGY *v19; // rax

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v6[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v6[5] = *((int *)a2 + 26);
  v6[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20));
  v6[7] = v3;
  if ( *((_BYTE *)this + 76) <= 1u )
    WdLogSingleEntry0(1LL);
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225506LL;
  }
  v7 = *((_QWORD *)a2 + 11);
  v8 = *((_QWORD *)a2 + 12);
  v9 = *(unsigned int *)(v7 + 24);
  v10 = *(unsigned int *)(v8 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(v7 + 24), *(_DWORD *)(v8 + 24)) )
  {
    WdLogSingleEntry2(3LL, a2, this);
    return 3223192339LL;
  }
  v11 = *(_BYTE *)(*(_QWORD *)(v8 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v10) )
  {
    v17 = -1071774976;
    goto LABEL_20;
  }
  if ( *(char **)(v12 + 112) == v13 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      WdLogSingleEntry2(7LL, v9, v10);
LABEL_18:
      v13 = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)v3 != 2 )
    {
      if ( (unsigned int)(v3 - 1) <= 1 )
        goto LABEL_9;
      WdLogSingleEntry0(1LL);
      goto LABEL_18;
    }
    v17 = -1071774920;
LABEL_20:
    WdLogSingleEntry3(7LL, a2, this, v10);
    return v17;
  }
LABEL_9:
  v14 = this[3];
  if ( v14 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v15 = (char *)v14 - 8) == 0LL )
  {
LABEL_11:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
      WdLogSingleEntry0(1LL);
    if ( *((_QWORD *)a2 + 6) )
      WdLogSingleEntry0(1LL);
    *((_QWORD *)a2 + 6) = this;
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v15 + 11) + 24LL) != *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) )
      goto LABEL_30;
    if ( v11 )
      break;
    v18 = *((_QWORD *)v15 + 12);
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 96) + 406LL) != (_BYTE)v13 )
      goto LABEL_37;
LABEL_30:
    if ( *((_DWORD *)v15 + 26) == *((_DWORD *)a2 + 26) )
    {
      WdLogSingleEntry4(3LL, a2, *((int *)a2 + 26), v8, this);
      v13 = 0LL;
    }
    v19 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v15 + 1);
    v15 = (char *)v19 - 8;
    if ( v19 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v15 = v13;
    if ( !v15 )
      goto LABEL_11;
  }
  v18 = v8;
LABEL_37:
  v17 = -1071774975;
  WdLogSingleEntry2(3LL, v18, -1071774975LL);
  return v17;
}
