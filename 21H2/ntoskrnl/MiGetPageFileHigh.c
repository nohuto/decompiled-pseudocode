/*
 * XREFs of MiGetPageFileHigh @ 0x14025ECDC
 * Callers:
 *     MiFreeReservationRun @ 0x1406EC2D4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C50780;
  return HIDWORD(a1);
}
