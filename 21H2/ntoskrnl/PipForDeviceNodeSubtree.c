/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140617970
 * Callers:
 *     PpProcessClearProblem @ 0x140381960 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140617870 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14076DAC4 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x1407A34BC (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A13E0 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x1408A2A50 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408AB290 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x1406179F8 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
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
