/*
 * XREFs of IopGetNumaNodeInformation @ 0x140891338
 * Callers:
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopGetDevicePDO @ 0x14033DEB8 (IopGetDevicePDO.c)
 *     IoGetDeviceNumaNode @ 0x14075EE00 (IoGetDeviceNumaNode.c)
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
