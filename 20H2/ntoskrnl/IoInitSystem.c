/*
 * XREFs of IoInitSystem @ 0x140A4899C
 * Callers:
 *     Phase1Initialization @ 0x140793E90 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403CE0A0 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140793F80 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C9060 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1409F29AC (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(_QWORD *a1)
{
  if ( !IoInitSystemPreDrivers(a1) )
    return 0;
  WerLiveKernelInitSystem();
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
      HdlspKernelAddLogEntry(0xBu, 0LL);
    IopInitFailCode = 8;
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
