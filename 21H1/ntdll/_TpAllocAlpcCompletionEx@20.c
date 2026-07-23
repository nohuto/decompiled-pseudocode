/*
 * XREFs of _TpAllocAlpcCompletionEx@20 @ 0x4B2E9A70
 * Callers:
 *     <none>
 * Callees:
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletionEx(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK_EX Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  return TppAllocAlpcCompletion(Callback, Context, CallbackEnviron, 1);
}
