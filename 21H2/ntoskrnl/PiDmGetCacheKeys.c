/*
 * XREFs of PiDmGetCacheKeys @ 0x14062BDAC
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x140611F80 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14062BC94 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140735760 (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectCreate @ 0x140749ED0 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
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
