/*
 * XREFs of ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180133BF8
 * Callers:
 *     ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180133FC0 (-SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Ro.c)
 *     ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801341A0 (-SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Rout.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PenPolicyToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "ExclusiveToShell";
  v1 = a1 - 1;
  if ( !v1 )
    return "YieldToForegroundOnly";
  if ( v1 == 1 )
    return "MulticastToForegroundAndShell";
  return "UNKNOWN";
}
