/*
 * XREFs of MiReInsertPlaceholderVad @ 0x14054FE9C
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 * Callees:
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3LL, a4);
}
