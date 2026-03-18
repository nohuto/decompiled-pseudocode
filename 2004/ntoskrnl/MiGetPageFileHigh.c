/*
 * XREFs of MiGetPageFileHigh @ 0x1403203C4
 * Callers:
 *     MiFreeReservationRun @ 0x14069BFF8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C4DD40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DD40;
  return HIDWORD(a1);
}
