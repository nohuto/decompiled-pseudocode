/*
 * XREFs of MiLegacyImageArchitecture @ 0x14029AA2C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x1406AD10C (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
