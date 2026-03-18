/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0129794
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0128D1C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0129070 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E3330 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000DC60 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010750 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0010788 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00107C0 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 Container; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r10
  DMMVIDPNTOPOLOGY *v23; // rbx
  char *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  DMMVIDPNTOPOLOGY *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v31);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v8 = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[4] = v8;
  v7[5] = *((int *)a2 + 26);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20), v8);
  LOBYTE(v10) = 1;
  v7[6] = Container;
  v7[7] = v4;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((ProtectableFromChange *)(this + 7), v10) )
  {
    v32 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    return 3221225506LL;
  }
  v13 = *((_QWORD *)a2 + 12);
  v14 = *(_DWORD *)(v13 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), v14) )
  {
    v33 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v33 + 24) = a2;
    *(_QWORD *)(v33 + 32) = this;
    WdLogEvent5_WdWarning(v33);
    return 3223192339LL;
  }
  v18 = *(_BYTE *)(*(_QWORD *)(v13 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v14) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20);
    v28[3] = a2;
    v28[4] = this;
    v28[5] = *(unsigned int *)(v13 + 24);
    WdLogEvent5_WdDmmEvent(v28);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v22 + 112) )
  {
    v29 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v29);
      *(_QWORD *)(v30 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v30 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
        v35[3] = a2;
        v35[4] = this;
        v35[5] = *(unsigned int *)(v13 + 24);
        WdLogEvent5_WdDmmEvent(v35);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v29, v19);
        WdLogEvent5_WdAssertion(v34);
      }
    }
  }
  v23 = this[3];
  if ( v23 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v24 = (char *)v23 - 8) == 0LL )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( *((_QWORD *)a2 + 6) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v42);
    }
    *((_QWORD *)a2 + 6) = this;
    LOBYTE(v25) = 1;
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), v25);
    return 0LL;
  }
  while ( 1 )
  {
    v36 = *((_QWORD *)v24 + 11);
    v37 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v36 + 24) != (_DWORD)v37 )
      goto LABEL_27;
    if ( v18 )
      break;
    v37 = *(_QWORD *)(*((_QWORD *)v24 + 12) + 96LL);
    if ( *(_BYTE *)(v37 + 406) )
    {
      v38 = WdLogNewEntry5_WdWarning(v37, v36, v21);
      *(_QWORD *)(v38 + 24) = *((_QWORD *)v24 + 12);
      goto LABEL_34;
    }
LABEL_27:
    if ( *((_DWORD *)v24 + 26) == *((_DWORD *)a2 + 26) )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v21);
      v39[3] = a2;
      v39[4] = *((int *)a2 + 26);
      v39[5] = v13;
      v39[6] = this;
      WdLogEvent5_WdWarning(v39);
    }
    v40 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v24 + 1);
    v24 = (char *)v40 - 8;
    if ( v40 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v24 = 0LL;
    if ( !v24 )
      goto LABEL_9;
  }
  v38 = WdLogNewEntry5_WdWarning(v37, v36, v21);
  *(_QWORD *)(v38 + 24) = v13;
LABEL_34:
  *(_QWORD *)(v38 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v38);
  return 3223192321LL;
}
