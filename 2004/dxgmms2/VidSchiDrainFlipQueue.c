/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C00D11C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6C0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00D2068 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(__int64 a1)
{
  char result; // al

  result = VidSchIsTDRPending(a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
