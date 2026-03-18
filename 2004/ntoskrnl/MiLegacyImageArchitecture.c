/*
 * XREFs of MiLegacyImageArchitecture @ 0x140267CE0
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x14060F9FC (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
