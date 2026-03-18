/*
 * XREFs of KeIsKernelCetEnabled @ 0x14025E490
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
 *     VslStartSecureProcessor @ 0x140932C50 (VslStartSecureProcessor.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
