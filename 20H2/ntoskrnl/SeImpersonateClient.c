/*
 * XREFs of SeImpersonateClient @ 0x140924E80
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140717A40 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
