/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x1402FED40
 * Callers:
 *     SepLinkLogonSessions @ 0x140360104 (SepLinkLogonSessions.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SepStopReferencingLogonSession @ 0x1406BB708 (SepStopReferencingLogonSession.c)
 *     SeShutdownServerSilo @ 0x140918DB4 (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140919510 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14091982C (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x14091F440 (SeGetLinkedToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rdx
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v3 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v4 = a1[20];
  v5 = a1[1];
  return SepDeReferenceLogonSession(&v5, v4);
}
