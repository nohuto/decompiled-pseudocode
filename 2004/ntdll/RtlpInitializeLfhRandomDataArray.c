/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x18000A020
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x1800086EC (RtlpHpLfhContextInitialize.c)
 *     RtlpCreateLowFragHeap @ 0x1800447D8 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000A068 (RtlpHeapGenerateRandomValue64.c)
 */

__int64 RtlpInitializeLfhRandomDataArray()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  v0 = &RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *v0++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
