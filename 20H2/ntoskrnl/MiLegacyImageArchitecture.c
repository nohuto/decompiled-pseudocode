/*
 * XREFs of MiLegacyImageArchitecture @ 0x140356A14
 * Callers:
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x14070C25C (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
