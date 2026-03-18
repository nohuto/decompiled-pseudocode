/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x14063EFC0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x14063D318 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14063EC9C (PiDmGetObject.c)
 *     PiDmListRemoveObject @ 0x14072D924 (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x14072EB74 (PiDmListRemoveList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407448FC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1407449AC (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140744C54 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14076A704 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1408A5EBC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

void *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return &PiDmDeviceInstallerClassManager;
  v4 = v3 - 1;
  if ( !v4 )
    return &PiDmDeviceInterfaceManager;
  v6 = v4 - 1;
  if ( !v6 )
    return &PiDmDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDmDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDmDevicePanelManager;
  return (void *)v1;
}
