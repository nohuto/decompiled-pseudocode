/*
 * XREFs of HalInitializeOnResume @ 0x14038A1B0
 * Callers:
 *     PopHiberCheckResume @ 0x140995550 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1404BF1F4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
