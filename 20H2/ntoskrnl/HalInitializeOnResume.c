/*
 * XREFs of HalInitializeOnResume @ 0x14038C450
 * Callers:
 *     PopHiberCheckResume @ 0x14099B6B0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1404C2714 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
