/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02EB118
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0149E80 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029624C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02F10E8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned int v2; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // rcx

  v2 = a2;
  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  v6 = (unsigned __int16)v5;
  while ( v6 )
  {
    v9 = CCD_TOPOLOGY::GetPathDescriptor(this, --v6);
    if ( (*(_QWORD *)v9 & 0x4000000000000LL) == 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = 4432LL;
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_QWORD *)this + 8);
    v12 = 0;
    if ( *(_WORD *)(v11 + 20) )
    {
      v13 = (_DWORD *)(v11 + 232);
      while ( *v13 != *(_DWORD *)(272LL * v6 + v11 + 232) )
      {
        ++v12;
        v13 += 68;
        if ( v12 >= *(unsigned __int16 *)(v11 + 20) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v12 = -559038737;
    }
    *((_DWORD *)v9 + 46) = v12 | 0xFE550000;
  }
}
