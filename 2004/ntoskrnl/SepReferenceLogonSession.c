/*
 * XREFs of SepReferenceLogonSession @ 0x14062F868
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     SepDuplicateLogonSessionReference @ 0x14026F614 (SepDuplicateLogonSessionReference.c)
 *     SepLinkLogonSessions @ 0x140360104 (SepLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     SepReferenceLogonSessionSilo @ 0x14062F8A0 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepReferenceLogonSession(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return SepReferenceLogonSessionSilo(a1, CurrentServerSilo, a2);
}
