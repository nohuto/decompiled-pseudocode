/*
 * XREFs of SepReferenceLogonSession @ 0x1406740A8
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14033FEA0 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x1403403B8 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x1406740E0 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
