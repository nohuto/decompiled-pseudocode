/*
 * XREFs of ValidateHwnd @ 0x1C0091FD0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}
