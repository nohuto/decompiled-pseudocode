/*
 * XREFs of HalInitializeOnResume @ 0x140389140
 * Callers:
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1404BEAF4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
