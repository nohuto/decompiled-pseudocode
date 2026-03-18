/*
 * XREFs of SepStopReferencingLogonSession @ 0x1406AA888
 * Callers:
 *     SepLinkLogonSessions @ 0x1402FB3D4 (SepLinkLogonSessions.c)
 *     SepSetLogonSessionToken @ 0x1405D6E10 (SepSetLogonSessionToken.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1402FCEBC (SepDeReferenceLogonSessionDirect.c)
 *     SepConvertToOwnTokenClaims @ 0x1402FCEF4 (SepConvertToOwnTokenClaims.c)
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
