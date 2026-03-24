/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1406B8550
 * Callers:
 *     PpProcessClearProblem @ 0x140381E10 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x1406B8450 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14076D904 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x1407A32BC (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A1280 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x1408A28F0 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408AB130 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x1406B85D8 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0);
  return (unsigned int)a1;
}
