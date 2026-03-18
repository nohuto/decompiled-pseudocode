/*
 * XREFs of ValidateHwnd @ 0x1C004C310
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00C0400 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C0B90 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL, 0LL);
}
