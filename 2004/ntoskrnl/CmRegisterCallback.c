/*
 * XREFs of CmRegisterCallback @ 0x1407C2950
 * Callers:
 *     <none>
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1406EE378 (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (__int64)Function,
           (__int64)Context,
           (const void **)&CmLegacyAltitude,
           1,
           0,
           Cookie);
}
