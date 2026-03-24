/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408C82D4
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405148A0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A7F30 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
