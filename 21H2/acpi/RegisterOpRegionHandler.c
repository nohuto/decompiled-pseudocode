/*
 * XREFs of RegisterOpRegionHandler @ 0x1C00B1C10
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00118BC (OSConvertDeviceHandleToNSHANDLE.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1CB0 (RegisterOperationRegionHandler.c)
 */

NTSTATUS __stdcall RegisterOpRegionHandler(
        PDEVICE_OBJECT DeviceObject,
        ULONG AccessType,
        ULONG RegionSpace,
        PACPI_OP_REGION_HANDLER Handler,
        PVOID Context,
        ULONG Flags,
        PVOID *OperationRegionObject)
{
  __int64 *v11; // rax

  if ( !DeviceObject )
    return -1073741811;
  v11 = (__int64 *)OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return RegisterOperationRegionHandler(
           v11,
           AccessType,
           RegionSpace,
           (__int64)Handler,
           (__int64)Context,
           (unsigned int **)OperationRegionObject);
}
