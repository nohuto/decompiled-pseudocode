/*
 * XREFs of _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C0167580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0137340 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01379F8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0167604 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  void **ModalitySetId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // rdi
  int v12; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v16);
  v7 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v11 = ModalitySetId;
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v12 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(a1, ModalitySetId, v16);
    v7 = v12;
    if ( v12 >= 0 )
      return (unsigned int)v7;
LABEL_6:
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v15[3] = v7;
    v15[4] = a2;
    v15[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v15);
    return (unsigned int)v7;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v14[3] = a2;
  v14[4] = *((_QWORD *)a2 + 8);
  v14[5] = *(int *)v11;
  WdLogEvent5_WdError(v14);
  return 3221225473LL;
}
