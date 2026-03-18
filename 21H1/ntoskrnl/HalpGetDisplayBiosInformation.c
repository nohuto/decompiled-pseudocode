/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x1403CB590
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098B9E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
