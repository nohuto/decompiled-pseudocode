/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408C8434
 * Callers:
 *     KeRegisterBoundCallback @ 0x140514AE0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A8CC0 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
