/*
 * XREFs of CmRegisterCallback @ 0x1408651C0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x140605F20 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140690198 (CmpRegisterCallbackInternal.c)
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
