/*
 * XREFs of MiGetPageFileHigh @ 0x1403221FC
 * Callers:
 *     MiFreeReservationRun @ 0x1407048F4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C4DE80 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C4DE80;
  return HIDWORD(a1);
}
