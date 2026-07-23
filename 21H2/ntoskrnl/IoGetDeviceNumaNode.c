/*
 * XREFs of IoGetDeviceNumaNode @ 0x1407738E0
 * Callers:
 *     IopGetNumaNodeInformation @ 0x140895A08 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1402942B0 (KeQueryHighestNodeNumber.c)
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
