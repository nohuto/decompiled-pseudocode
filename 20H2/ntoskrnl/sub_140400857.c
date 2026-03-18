/*
 * XREFs of sub_140400857 @ 0x140400857
 * Callers:
 *     sub_140400740 @ 0x140400740 (sub_140400740.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_140400857()
{
  __int64 v0; // rbp
  int result; // eax

  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
