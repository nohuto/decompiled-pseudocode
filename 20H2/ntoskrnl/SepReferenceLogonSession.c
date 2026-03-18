/*
 * XREFs of SepReferenceLogonSession @ 0x1406A9FF8
 * Callers:
 *     SepDuplicateLogonSessionReference @ 0x140202BAC (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1402FB3D4 (SepLinkLogonSessions.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1406AA030 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
