/*
 * XREFs of sub_180063538 @ 0x180063538
 * Callers:
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 */

_QWORD *__fastcall sub_180063538(_QWORD *Block)
{
  void *v2; // r8
  void *v3; // r8
  _QWORD *v4; // rcx

  if ( *((_DWORD *)Block + 32) > 1u )
  {
    v2 = (void *)Block[14];
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v3 = (void *)Block[15];
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  v4 = (_QWORD *)Block[1];
  if ( v4 != Block + 3 )
    j_j_free(v4);
  j_free(Block);
  return Block;
}
