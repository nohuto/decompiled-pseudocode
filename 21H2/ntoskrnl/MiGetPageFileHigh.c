/*
 * XREFs of MiGetPageFileHigh @ 0x1402D2A3C
 * Callers:
 *     MiFreeReservationRun @ 0x140645CA8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C4DF40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DF40;
  return HIDWORD(a1);
}
