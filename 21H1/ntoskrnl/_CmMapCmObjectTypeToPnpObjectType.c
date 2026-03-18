/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x1406A8348
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1406A810C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406A825C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmGetCmObjectListFromCache @ 0x1406E9F04 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseDeleteEvent @ 0x140719F30 (_CmRaiseDeleteEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x140729A64 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x140752B34 (_CmRaiseCreateEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140977830 (_PnpCmMatchCallbackRoutine.c)
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
