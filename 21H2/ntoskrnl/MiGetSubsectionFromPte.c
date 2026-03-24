/*
 * XREFs of MiGetSubsectionFromPte @ 0x14054F788
 * Callers:
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C4DF40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DF40;
  return a1 >> 16;
}
