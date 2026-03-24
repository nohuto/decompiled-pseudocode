/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1406344E4
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140264460 (PsGetServerSiloServiceSessionId.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
