/*
 * XREFs of RtlAddAuditAccessAce @ 0x14090F160
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403B9984 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
