/*
 * XREFs of MiLegacyImageArchitecture @ 0x1402E96DC
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x1406D5E2C (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
