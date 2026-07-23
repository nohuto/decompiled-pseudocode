/*
 * XREFs of IoInitSystem @ 0x140A67E8C
 * Callers:
 *     Phase1Initialization @ 0x1407B3C40 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403CEC00 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x1407B3D30 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
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
