/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x14089E57C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E47E4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F8918 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
