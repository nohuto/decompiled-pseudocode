/*
 * XREFs of VidSchResumeAdapter @ 0x1C00A72F0
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x1C001C3A0 (VidSchiDeferredVisibilityThread.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0013860 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
