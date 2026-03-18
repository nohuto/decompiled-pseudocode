/*
 * XREFs of SeImpersonateClient @ 0x14091DF50
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x14067D1E0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
