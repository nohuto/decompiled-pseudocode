/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C00CFD90
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00D0C38 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(__int64 a1)
{
  char result; // al

  result = VidSchIsTDRPending(a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
