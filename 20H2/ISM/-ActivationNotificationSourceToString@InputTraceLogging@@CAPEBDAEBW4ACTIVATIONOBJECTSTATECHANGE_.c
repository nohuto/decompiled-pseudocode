/*
 * XREFs of ?ActivationNotificationSourceToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180045EA0
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A5E0 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
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
