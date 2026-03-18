/*
 * XREFs of sub_1403F9C7B @ 0x1403F9C7B
 * Callers:
 *     sub_1403F9B64 @ 0x1403F9B64 (sub_1403F9B64.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1403F9C7B()
{
  __int64 v0; // rbp
  int result; // eax

  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
