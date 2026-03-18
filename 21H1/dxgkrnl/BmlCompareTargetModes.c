/*
 * XREFs of BmlCompareTargetModes @ 0x1C00E17D8
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00E1440 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1C00DF6C8 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00E1920 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00E5B8C (BmlCompareRegionsWithPivot.c)
 *     BmlCompareMonitorRegions @ 0x1C02E70CC (BmlCompareMonitorRegions.c)
 *     BmlCompareWireFormat @ 0x1C02E7224 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v6 = a3;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a4 == a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(104 * v6 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(104 * v6 + a1 + 16) + 28LL));
  if ( !Path )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v18);
  }
  v13 = *((_QWORD *)Path + 12);
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL, v10);
    WdLogEvent5_WdAssertion(v19);
    v13 = *((_QWORD *)Path + 12);
  }
  if ( !*(_QWORD *)(v13 + 96) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  result = BmlCompareTargetModesWithConstraint(a1, (unsigned __int16)v6, a4, a5);
  if ( !(_DWORD)result )
  {
    result = BmlCompareTargetModesWithMonitor(a4, a5, a6, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(104 * v6 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareMonitorRegions(a4, a5);
        if ( !(_DWORD)result )
          return BmlCompareWireFormat(a4, a5);
      }
    }
  }
  return result;
}
