/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x1405D9D18
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1405D9ADC (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405D9C2C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmGetCmObjectListFromCache @ 0x1406C61CC (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseDeleteEvent @ 0x14071C2C0 (_CmRaiseDeleteEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x1407248A4 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x140736DC4 (_CmRaiseCreateEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140978BD0 (_PnpCmMatchCallbackRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 5LL;
  if ( v6 == 1 )
    return 6LL;
  return 0LL;
}
