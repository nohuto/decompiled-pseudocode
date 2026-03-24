/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0178E6C
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014F988 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C019D6B0 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C8C24 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0001B04 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  PERESOURCE v7; // rcx
  PERESOURCE v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = 0;
  v3 = a2;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v11);
    }
    v7 = a1[337];
    if ( v7 && LODWORD(v7->Reserved2) )
    {
      do
      {
        v8 = v7;
        if ( _bittest(&v3, v2) )
        {
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v7, v2, 1);
          v8 = a1[337];
        }
        ++v2;
        v7 = v8;
      }
      while ( v2 < LODWORD(v8->Reserved2) );
    }
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
}
