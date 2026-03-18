/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408C3984
 * Callers:
 *     KeRegisterBoundCallback @ 0x14050EDE0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AF6D0 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
