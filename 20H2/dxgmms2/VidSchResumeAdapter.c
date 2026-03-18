/*
 * XREFs of VidSchResumeAdapter @ 0x1C0088180
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0011350 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
