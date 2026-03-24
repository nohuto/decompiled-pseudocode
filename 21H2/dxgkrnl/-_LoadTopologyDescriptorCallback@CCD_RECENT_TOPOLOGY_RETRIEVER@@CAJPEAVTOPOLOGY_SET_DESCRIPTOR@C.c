/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01461B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C0130490 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01359F0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0146248 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        _WORD *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const struct CCD_SET_STRING_ID *v9; // rbx
  __int16 v10; // ax
  CCD_TOPOLOGY *v11; // rcx
  unsigned __int16 v12; // bx
  int Topology; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v9 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v19 + 24) = v9;
    if ( v9 )
      v21 = *(_DWORD *)v9;
    else
      v21 = -1073741823;
    *(_QWORD *)(v19 + 32) = v21;
    goto LABEL_14;
  }
  v10 = *((_WORD *)SetId + 16);
  if ( !v10 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v18[3] = this;
    v18[4] = v9;
    v18[5] = *(_QWORD *)a2;
    v19 = (__int64)v18;
    v18[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_14:
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
  v11 = *(CCD_TOPOLOGY **)a2;
  a2[6] = v10;
  v12 = *((_WORD *)v9 + 16);
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(v11, v12, v7, v8) < v12 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *(struct CCD_TOPOLOGY **)a2);
  v16 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  v20 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
  v20[3] = v16;
  v20[4] = this;
  v20[5] = *(_QWORD *)a2;
  v20[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  WdLogEvent5_WdError(v20);
  return (unsigned int)v16;
}
