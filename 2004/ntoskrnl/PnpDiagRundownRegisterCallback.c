/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x14089E180
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140707250 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentPdoForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentDevNode) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
