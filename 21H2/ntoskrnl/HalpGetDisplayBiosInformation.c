/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x1403CF8E0
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098FEF0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
