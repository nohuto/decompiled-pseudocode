/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x14077B33C
 * Callers:
 *     PiDmListAddList @ 0x1406E4980 (PiDmListAddList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14076A134 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140779850 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmGetObjectCount @ 0x140948F60 (PiDmGetObjectCount.c)
 *     PiDmListRemoveList @ 0x140948FB8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140949104 (PiDmListRemoveObject.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v4 = v2 - 1;
  if ( !v4 )
    return &PiDmDeviceInstallerClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return &PiDmDeviceInterfaceManager;
  v6 = v5 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDmDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDmDevicePanelManager;
  return (void *)v1;
}
