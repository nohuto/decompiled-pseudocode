/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1406A8D10
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiDmListRemoveList @ 0x14071CAF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14071CC1C (PiDmListRemoveObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14072DF88 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14072E038 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14072E2E0 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14075A20C (PiDmListAddList.c)
 *     PiDmGetObjectCount @ 0x14089F06C (PiDmGetObjectCount.c)
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
