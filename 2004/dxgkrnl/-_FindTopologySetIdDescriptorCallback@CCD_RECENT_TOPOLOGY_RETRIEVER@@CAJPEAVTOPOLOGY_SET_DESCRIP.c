/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C015B840
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C0132BD8 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C012CC44 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C012CD34 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C012CDF0 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C012CE30 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C012E5CC (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C012F5D4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0133EF4 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0134358 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0134454 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C015B9A8 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C015BA70 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C02F06D4 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  CCD_SET_STRING_ID *v9; // rdi
  __int64 v10; // r14
  void **v11; // rsi
  int SetIdFromRegistry; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  void **OverflowTopology; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct CCD_TOPOLOGY *v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  CCD_SET_STRING_ID *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v31; // r8
  __int64 v32; // rbp
  char IsSimilarTopology; // al
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  int TopologyClass; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  _QWORD *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rax
  int v51; // eax
  int v52; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v9 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v35 + 24) = v9;
    if ( v9 )
      v51 = *(_DWORD *)v9;
    else
      v51 = -1073741823;
    *(_QWORD *)(v35 + 32) = v51;
    goto LABEL_37;
  }
  v10 = *((unsigned __int16 *)SetId + 16);
  if ( !(_WORD)v10 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v34[3] = this;
    v34[4] = v9;
    v34[5] = *(_QWORD *)a2;
    v35 = (__int64)v34;
    v34[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v35);
    return 0LL;
  }
  v11 = (void **)*((_QWORD *)a2 + 22);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(v11[12], (__int64)L"SetId", (__int64)v11);
  v15 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v36[3] = v15;
    v36[4] = v11;
    v36[5] = v11[12];
    WdLogEvent5_WdError(v36);
    v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38, v37);
    v39[3] = this;
    v39[4] = v9;
    v39[5] = *(_QWORD *)a2;
    v39[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v39[7] = *((_QWORD *)a2 + 22);
    WdLogEvent5_WdAssertion(v39);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v9, (const struct CCD_SET_STRING_ID *)v11) )
    return 0LL;
  OverflowTopology = (void **)CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v10);
  v21 = (struct CCD_TOPOLOGY *)OverflowTopology;
  if ( !OverflowTopology )
  {
    v40 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v40 + 24) = v10;
    WdLogEvent5_WdLowResource(v40);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v9);
  v22 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(v21, 0);
  v26 = v22;
  if ( v22 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v42[3] = v26;
    v42[4] = v21;
    v42[5] = *(_QWORD *)a2;
    v42[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v42[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v42);
    return 0LL;
  }
  v27 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 23);
  if ( v27 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v27, v9);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16), (__int64)v9);
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 22),
                                                 0xFu);
    if ( RecentTopologySetId )
      goto LABEL_13;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v41[3] = this;
    v41[4] = *((_QWORD *)a2 + 22);
    v41[5] = *(_QWORD *)a2;
    v41[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  v52 = 0;
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v21, (enum CCD_TOPOLOGY_CLASS *)&v52);
  v46 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
    v47[3] = v46;
    v47[4] = v21;
    v47[5] = *((_QWORD *)a2 + 22);
    v47[6] = *(_QWORD *)a2;
    v47[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v47);
    return (unsigned int)v46;
  }
  v48 = v52;
  if ( !v52 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45, v44);
    WdLogEvent5_WdAssertion(v49);
  }
  if ( ((unsigned int)v48 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 22),
                                               v48);
  if ( !RecentTopologySetId )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v41[3] = v48;
    v41[4] = this;
    v41[5] = *((_QWORD *)a2 + 22);
    v41[6] = *(_QWORD *)a2;
    v41[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v41);
    return 3221225495LL;
  }
LABEL_13:
  v32 = *(int *)RecentTopologySetId;
  if ( (int)v32 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v9);
    goto LABEL_15;
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v31);
  v50[3] = v32;
  v50[4] = RecentTopologySetId;
  v50[5] = *(_QWORD *)a2;
  v50[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v50);
  return (unsigned int)v32;
}
