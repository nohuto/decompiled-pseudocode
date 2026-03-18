/*
 * XREFs of MiGetSubsectionFromPte @ 0x14054DC88
 * Callers:
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C4DDC0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DDC0;
  return a1 >> 16;
}
