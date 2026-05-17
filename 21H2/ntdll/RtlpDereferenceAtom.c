/*
 * XREFs of RtlpDereferenceAtom @ 0x1800591F8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180059150 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180059D80 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
