/*
 * XREFs of SeImpersonateClient @ 0x14091F200
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1406CAD40 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
