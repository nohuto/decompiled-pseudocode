/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0154D44
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029187C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02E9B88 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EA6C4 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02EBFFC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00E8F7C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EC34C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00ECEE8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0154E24 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int i; // edi
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned __int16 v30; // ax

  CCD_TOPOLOGY::Clear(this);
  v6 = *((_QWORD *)a2 + 8);
  v7 = 0;
  if ( v6 )
    v8 = *(_WORD *)(v6 + 20);
  else
    v8 = 0;
  if ( v6 )
    v9 = *(_WORD *)(v6 + 20);
  else
    v9 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v8, v4, v5) < v9 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v26 + 24) = this;
    v27 = *((_QWORD *)a2 + 8);
    if ( v27 )
      v7 = *(_WORD *)(v27 + 20);
    *(_QWORD *)(v26 + 32) = v7;
    WdLogEvent5_WdLowResource(v26);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v14) = 0;
    for ( i = 0; ; ++i )
    {
      v16 = *((_QWORD *)a2 + 8);
      v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
      if ( i >= v17 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v20 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v19);
      v14 = v20;
      if ( v20 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v21);
        v28[3] = v14;
        v28[4] = i;
        v28[5] = this;
        v29 = *((_QWORD *)a2 + 8);
        if ( v29 )
          v30 = *(_WORD *)(v29 + 20);
        else
          v30 = 0;
        v28[6] = v30;
        WdLogEvent5_WdAssertion(v28);
        break;
      }
    }
    if ( (int)v14 >= 0 )
    {
      v23 = *((_QWORD *)this + 8);
      if ( v23 )
      {
        v24 = *((_QWORD *)a2 + 8);
        if ( v24 )
        {
          *(_OWORD *)v23 = *(_OWORD *)v24;
          *(_DWORD *)(v23 + 16) = *(_DWORD *)(v24 + 16);
        }
      }
    }
    return (unsigned int)v14;
  }
}
