/*
 * XREFs of MiGetPageFileHigh @ 0x140250F88
 * Callers:
 *     MiFreeReservationRun @ 0x14063AA94 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C4DF80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DF80;
  return HIDWORD(a1);
}
