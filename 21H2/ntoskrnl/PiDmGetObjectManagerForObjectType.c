/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x14062BBA0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140629EF8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmListRemoveList @ 0x140730AF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730C1C (PiDmListRemoveObject.c)
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14076EBA4 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1408A35EC (PiDmGetObjectCount.c)
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
