/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140636D90
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1406350E8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x140636A6C (PiDmGetObject.c)
 *     PiDmListRemoveList @ 0x14073092C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730A50 (PiDmListRemoveObject.c)
 *     PiDmListAddObject @ 0x1407354D4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407488F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407489A8 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14076E9E4 (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x1408A348C (PiDmGetObjectCount.c)
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
