/*
 * XREFs of PpResetProblemDevices @ 0x1408A5320
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x1408A4420 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140720438 (PipForDeviceNodeSubtree.c)
 */

void PpResetProblemDevices()
{
  PVOID v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)v0, (__int64)PiResetProblemDevicesWorker, (__int64)v1);
  PpDevNodeUnlockTree(1);
}
