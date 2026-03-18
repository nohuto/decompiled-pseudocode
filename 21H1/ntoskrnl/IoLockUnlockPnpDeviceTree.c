/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140899FFC
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140563B84 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408DFDC4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F4110 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
