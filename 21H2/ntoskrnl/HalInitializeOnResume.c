/*
 * XREFs of HalInitializeOnResume @ 0x14038D330
 * Callers:
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1405105D4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
