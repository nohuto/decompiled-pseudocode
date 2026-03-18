/*
 * XREFs of MiLegacyImageArchitecture @ 0x1402C0D10
 * Callers:
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x140644C2C (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
