/*
 * XREFs of ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180133394
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180132C70 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 *     ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180134420 (-SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Ro.c)
 *     ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x1801346E4 (-SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(PenEventsDispatcherPrincipal *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 196) )
    return *((_DWORD *)this + 50) != 0;
  return result;
}
