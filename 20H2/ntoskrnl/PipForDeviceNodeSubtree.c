/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140720438
 * Callers:
 *     PpProcessClearProblem @ 0x140381710 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x1407212B0 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14073F4B0 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x1408A3CB0 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x1408A5320 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408ADB60 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x1407204C0 (PipForAllChildDeviceNodes.c)
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
