/*
 * XREFs of RtlAddAuditAccessAce @ 0x140914CA0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403BBE04 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
