/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x14078A620
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140A4A498 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
