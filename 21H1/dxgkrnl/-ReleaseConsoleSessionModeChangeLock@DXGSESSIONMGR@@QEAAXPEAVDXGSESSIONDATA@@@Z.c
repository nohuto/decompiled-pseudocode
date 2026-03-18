/*
 * XREFs of ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C015D2DC
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C015CB40 (DxgkGetDisplayModeList.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020E320 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0019128 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(
        struct DXGSESSIONDATA **this,
        struct DXGSESSIONDATA *a2)
{
  __int64 v3; // rax

  if ( !a2 || a2 != this[15] )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 5565LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGSESSIONDATA::ReleaseSessionModeChangeLock(this[15]);
}
