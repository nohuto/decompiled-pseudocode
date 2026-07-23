/*
 * XREFs of _RtlpDereferenceAtom@12 @ 0x4B2A78A1
 * Callers:
 *     _RtlDeleteAtomFromAtomTable@8 @ 0x4B2A7820 (_RtlDeleteAtomFromAtomTable@8.c)
 * Callees:
 *     _RtlpFreeAllAtom@8 @ 0x4B2A78D7 (_RtlpFreeAllAtom@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

char __fastcall RtlpDereferenceAtom(int a1, _BYTE *a2, int a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != (_BYTE *)(a1 + 8) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  RtlpFreeAllAtom();
  return 1;
}
