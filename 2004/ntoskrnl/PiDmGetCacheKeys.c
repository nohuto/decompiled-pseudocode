/*
 * XREFs of PiDmGetCacheKeys @ 0x1405DA8EC
 * Callers:
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405DA7D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140701D50 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1407356CC (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectCreate @ 0x140735CE8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140736424 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
