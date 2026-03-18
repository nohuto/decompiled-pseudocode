/*
 * XREFs of IopGetNumaNodeInformation @ 0x1408982D8
 * Callers:
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopGetDevicePDO @ 0x1403618D8 (IopGetDevicePDO.c)
 *     IoGetDeviceNumaNode @ 0x14076F810 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall IopGetNumaNodeInformation(__int64 a1, USHORT *a2)
{
  __int64 v2; // rcx
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DMA_ADAPTER *v5; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  NodeNumber = 0;
  DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v2);
  v5 = (struct _DMA_ADAPTER *)DevicePDO;
  if ( !DevicePDO )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(DevicePDO, &NodeNumber);
  HalPutDmaAdapter(v5);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}
