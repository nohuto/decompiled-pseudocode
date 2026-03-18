/*
 * XREFs of ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03A97A4
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01B7AFC (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01D7008 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsSameCloneGroup(CCD_TOPOLOGY *this, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r10

  v4 = *((_QWORD *)this + 8);
  v5 = 0LL;
  v6 = a3;
  v8 = a2;
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *((_QWORD *)this + 8);
    if ( !v4 )
      goto LABEL_14;
  }
  v10 = *(unsigned __int16 *)(v4 + 20);
  if ( (unsigned int)v8 >= v10 || (unsigned int)v6 >= v10 )
  {
    v5 = *(unsigned __int16 *)(v4 + 20);
LABEL_14:
    WdLogSingleEntry5(1LL, v8, v6, this, v4, v5);
    return 0;
  }
  v11 = 296 * v8;
  v12 = 296 * v6;
  if ( !a4 )
    return *(_DWORD *)(v11 + v4 + 240) == *(_DWORD *)(v12 + v4 + 240);
  if ( !CCD_TOPOLOGY::IsMatchingSource(
          (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v4 + v11 + 56),
          (const struct _LUID *)(v4 + v12 + 72),
          *(_DWORD *)(v12 + v4 + 80)) )
    return 0;
  if ( *(_DWORD *)(v11 + v13 + 240) != *(_DWORD *)(v12 + v13 + 240) )
  {
    WdLogSingleEntry0(1LL);
    v13 = *((_QWORD *)this + 8);
  }
  if ( *(_DWORD *)(v11 + v13 + 84) == *(_DWORD *)(v12 + v13 + 84) )
    WdLogSingleEntry0(1LL);
  return 1;
}
