/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x1403CC350
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098CF00 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
