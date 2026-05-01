/*
 * XREFs of HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18003C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(struct _HAM_CLIENT_CONTEXT *a1)
{
  HamSrvDisconnect(a1);
}
