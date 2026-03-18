/*
 * XREFs of MiReInsertPlaceholderVad @ 0x14054F84C
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 * Callees:
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 */

void __fastcall MiReInsertPlaceholderVad(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  MiInsertVad(a1, (__int64)KeGetCurrentThread()->ApcState.Process, 3LL, a4);
}
