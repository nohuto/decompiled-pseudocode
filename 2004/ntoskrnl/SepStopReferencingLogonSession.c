/*
 * XREFs of SepStopReferencingLogonSession @ 0x1406BB708
 * Callers:
 *     SepLinkLogonSessions @ 0x140360104 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     SepSetLogonSessionToken @ 0x14071097C (SepSetLogonSessionToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1402FED40 (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1402FED78 (SepConvertToOwnTokenClaims.c)
 */

__int64 __fastcall SepStopReferencingLogonSession(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi

  result = SepConvertToOwnTokenClaims(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_DWORD *)(a1 + 200) |= 0x20u;
    return v3;
  }
  return result;
}
