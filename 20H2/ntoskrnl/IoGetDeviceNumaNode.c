/*
 * XREFs of IoGetDeviceNumaNode @ 0x14076F810
 * Callers:
 *     IopGetNumaNodeInformation @ 0x1408982D8 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x14033F570 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  PVOID DeviceNode; // rcx

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
    return -1073741811;
  if ( *((_DWORD *)DeviceNode + 165) <= 0xFFFFFFFD )
  {
    *NodeNumber = *((_WORD *)DeviceNode + 330);
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}
