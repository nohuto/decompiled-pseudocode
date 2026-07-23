/*
 * XREFs of CmRegisterCallback @ 0x1407D5740
 * Callers:
 *     <none>
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1405FC558 (CmpRegisterCallbackInternal.c)
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
