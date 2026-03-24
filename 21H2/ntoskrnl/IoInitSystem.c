/*
 * XREFs of IoInitSystem @ 0x140A66E8C
 * Callers:
 *     Phase1Initialization @ 0x1407B3AA0 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403CEA90 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x1407B3B90 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6050 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1409EF9AC (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140A5D754 (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(__int64 a1)
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
