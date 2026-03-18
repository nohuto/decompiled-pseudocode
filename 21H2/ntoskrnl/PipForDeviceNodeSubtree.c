/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140764CE4
 * Callers:
 *     PpProcessClearProblem @ 0x1403DB668 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140764AE0 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140764C94 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x140946400 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x140947C9C (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14094F920 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140764D6C (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
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
