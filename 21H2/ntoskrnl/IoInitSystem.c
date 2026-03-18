/*
 * XREFs of IoInitSystem @ 0x140B21B40
 * Callers:
 *     Phase1Initialization @ 0x14084C160 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403DCD34 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14084C25C (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x140AA9A28 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
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
    LODWORD(IopInitFailCode) = 8;
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
