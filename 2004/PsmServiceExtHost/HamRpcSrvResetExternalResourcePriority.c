/*
 * XREFs of HamRpcSrvResetExternalResourcePriority @ 0x180080440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvResetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        unsigned __int8 a3)
{
  return HamSrvResetExternalResourcePriority(a1, a2, a3);
}
