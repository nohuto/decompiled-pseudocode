/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x1408A0E4C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140567BB4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E6E84 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408FB010 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  if ( a1 )
    PpDevNodeLockTree(0);
  else
    PpDevNodeUnlockTree(0);
}
