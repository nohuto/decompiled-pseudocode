/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1406C7270
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
