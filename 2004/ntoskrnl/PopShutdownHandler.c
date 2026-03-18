/*
 * XREFs of PopShutdownHandler @ 0x1409AF780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x1404F9AA0 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1405BED8C (BgDisplaySafeToPowerOffScreen.c)
 */

void __noreturn PopShutdownHandler()
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership();
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    off_140C005D8();
}
