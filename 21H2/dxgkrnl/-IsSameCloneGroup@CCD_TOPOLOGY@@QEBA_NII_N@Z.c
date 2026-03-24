/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02EADF8
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133190 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01379F8 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0147ECC (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000C868 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx

  v4 = *((_QWORD *)this + 8);
  v5 = 0LL;
  v6 = a3;
  v8 = (unsigned int)a2;
  if ( !v4
    && (v10 = WdLogNewEntry5_WdAssertion(this, a2), WdLogEvent5_WdAssertion(v10), (v4 = *((_QWORD *)this + 8)) == 0)
    || (v11 = *(unsigned __int16 *)(v4 + 20), (unsigned int)v8 >= v11)
    || (unsigned int)v6 >= v11 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
    v20[3] = v8;
    v20[4] = v6;
    v20[5] = this;
    v20[6] = *((_QWORD *)this + 8);
    v21 = *((_QWORD *)this + 8);
    if ( v21 )
      v5 = *(unsigned __int16 *)(v21 + 20);
    v20[7] = v5;
    WdLogEvent5_WdAssertion(v20);
    return 0;
  }
  v12 = 272 * v8;
  v13 = 272 * v6;
  if ( !a4 )
    return *(_DWORD *)(v12 + v4 + 232) == *(_DWORD *)(v13 + v4 + 232);
  if ( !CCD_TOPOLOGY::IsMatchingSource(
          (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v4 + v12 + 48),
          (const struct _LUID *)(v4 + v13 + 64),
          *(_DWORD *)(v13 + v4 + 72)) )
    return 0;
  if ( *(_DWORD *)(v12 + v16 + 232) != *(_DWORD *)(v13 + v16 + 232) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v17);
    v16 = *((_QWORD *)this + 8);
  }
  if ( *(_DWORD *)(v12 + v16 + 76) == *(_DWORD *)(v13 + v16 + 76) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v18);
  }
  return 1;
}
