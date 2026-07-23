/*
 * XREFs of HalInitializeOnResume @ 0x14038CCF0
 * Callers:
 *     PopHiberCheckResume @ 0x1409998A0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1404C4324 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
