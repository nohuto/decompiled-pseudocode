/*
 * XREFs of ?ActivationNotificationSourceToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180046C6C
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A290 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ActivationNotificationSourceToString(
        const enum ACTIVATIONOBJECTSTATECHANGE_REASON *a1)
{
  if ( !*(_DWORD *)a1 )
    return "Programmatic";
  if ( *(_DWORD *)a1 == 1 )
    return "SpatialInput";
  return "UNKNOWN";
}
