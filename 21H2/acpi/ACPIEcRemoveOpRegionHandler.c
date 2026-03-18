/*
 * XREFs of ACPIEcRemoveOpRegionHandler @ 0x1C00AD814
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C00534F0 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C004998C (OSConvertDeviceHandleToNSHANDLE.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcRemoveOpRegionHandler(ULONG_PTR *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = OSConvertDeviceHandleToNSHANDLE(*a1);
  if ( v3 )
    return (unsigned int)UnRegisterOperationRegionHandler(v3, a1[10]);
  return v2;
}
