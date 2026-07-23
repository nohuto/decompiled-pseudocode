/*
 * XREFs of PspPicoGetContextThreadEx @ 0x14090EB50
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 */

int __fastcall PspPicoGetContextThreadEx(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
