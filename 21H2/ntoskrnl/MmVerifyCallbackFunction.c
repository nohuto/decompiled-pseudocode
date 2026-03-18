/*
 * XREFs of MmVerifyCallbackFunction @ 0x14096C8B0
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056A800 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403C773C (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
