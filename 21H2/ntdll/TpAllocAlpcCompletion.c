/*
 * XREFs of TpAllocAlpcCompletion @ 0x18007A6E0
 * Callers:
 *     <none>
 * Callees:
 *     TppAllocAlpcCompletion @ 0x18007A804 (TppAllocAlpcCompletion.c)
 */

NTSTATUS __cdecl TpAllocAlpcCompletion(
        PTP_ALPC *AlpcReturn,
        HANDLE AlpcPort,
        PTP_ALPC_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  return TppAllocAlpcCompletion(AlpcReturn, AlpcPort, Callback, Context, CallbackEnviron, v6);
}
