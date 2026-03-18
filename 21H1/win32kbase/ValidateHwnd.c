/*
 * XREFs of ValidateHwnd @ 0x1C008BD60
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C006E610 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00C14A0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}
