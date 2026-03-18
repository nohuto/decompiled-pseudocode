/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408CAB14
 * Callers:
 *     KeRegisterBoundCallback @ 0x140512D60 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403ADF80 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
