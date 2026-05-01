/*
 * XREFs of HamRpcSrvDisconnectServicing @ 0x180007090
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800085CC (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvDisconnectServicing(struct _HAM_CLIENT_CONTEXT **a1)
{
  HamSrvDisconnect(*a1);
  *a1 = 0LL;
  return 0LL;
}
