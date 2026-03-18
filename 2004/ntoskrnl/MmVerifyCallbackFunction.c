/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408C4CD4
 * Callers:
 *     KeRegisterBoundCallback @ 0x14050F430 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AB9B0 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
