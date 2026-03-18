/*
 * XREFs of MiGetSubsectionFromPte @ 0x140549C68
 * Callers:
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C4DE80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DE80;
  return a1 >> 16;
}
