/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01F2B3C
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0389018 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F014 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  PERESOURCE v5; // rcx
  PERESOURCE v6; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
      WdLogSingleEntry0(1LL);
    v5 = a1[349];
    if ( v5 && LODWORD(v5->SpinLock) )
    {
      do
      {
        v6 = v5;
        if ( _bittest(&a2, v2) )
        {
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v5, v2, 1);
          v6 = a1[349];
        }
        ++v2;
        v5 = v6;
      }
      while ( v2 < LODWORD(v6->SpinLock) );
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
