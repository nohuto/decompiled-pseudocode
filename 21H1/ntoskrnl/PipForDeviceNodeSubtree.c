/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1406E3860
 * Callers:
 *     PpProcessClearProblem @ 0x14037EFF0 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x1406E3760 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140731E08 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x14078A78C (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x14089CE60 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x14089E4D0 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408A6D10 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x1406E38E8 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0LL);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0LL);
  return (unsigned int)a1;
}
