/*
 * XREFs of HamRpcSrvIsHostBeingDebugged @ 0x180080E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvIsHostBeingDebugged(
        struct _HOST_ACTIVITY_MANAGER **a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        bool *a8)
{
  return HamSrvIsHostBeingDebugged(a1, a2, a3, a4, a5, a6, a7, a8);
}
