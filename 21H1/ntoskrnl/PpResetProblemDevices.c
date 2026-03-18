/*
 * XREFs of PpResetProblemDevices @ 0x14089E4D0
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x14089D5D0 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PipForDeviceNodeSubtree @ 0x1406E3860 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
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
