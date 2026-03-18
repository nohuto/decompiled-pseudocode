/*
 * XREFs of PiDmGetCacheKeys @ 0x1406A8F1C
 * Callers:
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406A8E04 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406A8FCC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DEFC0 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14072E1E8 (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
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
