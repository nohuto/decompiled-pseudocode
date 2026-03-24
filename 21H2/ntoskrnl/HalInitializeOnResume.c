/*
 * XREFs of HalInitializeOnResume @ 0x14038CBA0
 * Callers:
 *     PopHiberCheckResume @ 0x1409988A0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1404C40E4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
