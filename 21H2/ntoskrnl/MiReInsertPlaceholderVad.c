/*
 * XREFs of MiReInsertPlaceholderVad @ 0x14055533C
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 * Callees:
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3LL, a4);
}
