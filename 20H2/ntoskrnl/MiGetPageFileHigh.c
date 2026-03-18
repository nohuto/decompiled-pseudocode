/*
 * XREFs of MiGetPageFileHigh @ 0x14033A134
 * Callers:
 *     MiFreeReservationRun @ 0x1406F0C14 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C4DDC0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DDC0;
  return HIDWORD(a1);
}
