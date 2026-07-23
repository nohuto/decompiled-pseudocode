/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x1404F7500
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1404F6940 (HvlSvmAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F770C (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvcallFastExtended(v5, a2, 40 * a1, 0, 0);
  *a3 = WORD2(result) & 0xFFF;
  return result;
}
