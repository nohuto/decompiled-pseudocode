/*
 * XREFs of MiReInsertPlaceholderVad @ 0x14055386C
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 * Callees:
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 */

__int64 __fastcall MiReInsertPlaceholderVad(__int64 a1)
{
  return MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3LL);
}
