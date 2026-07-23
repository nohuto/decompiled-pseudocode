/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x1408B2CE0
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x1408B529C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopQueryBusResourceUpdateInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _OWORD *PoolWithTag; // rbx
  int Interface; // edi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  Interface = PnpQueryInterface(
                DeviceObject,
                (ULONG_PTR)&GUID_BUS_RESOURCE_UPDATE_INTERFACE,
                0,
                0x28u,
                0LL,
                (USHORT *)PoolWithTag);
  if ( Interface >= 0 )
  {
    *a2 = PoolWithTag;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)Interface;
  }
}
