/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x1403CFA50
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
