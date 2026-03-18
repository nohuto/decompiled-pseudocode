/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x1404F59E0
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1404F4E20 (HvlSvmAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F5BEC (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038FE30 (HvcallFastExtended.c)
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
