/*
 * XREFs of RtlAddAuditAccessAce @ 0x14090DDC0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403BF73C (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
