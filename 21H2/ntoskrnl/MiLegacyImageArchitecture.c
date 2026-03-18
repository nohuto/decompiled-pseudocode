/*
 * XREFs of MiLegacyImageArchitecture @ 0x14029E74C
 * Callers:
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x140708DA8 (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
