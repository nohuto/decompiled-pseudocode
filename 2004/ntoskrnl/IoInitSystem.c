/*
 * XREFs of IoInitSystem @ 0x140A426FC
 * Callers:
 *     Phase1Initialization @ 0x140786180 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403CB480 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140786270 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3040 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
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
