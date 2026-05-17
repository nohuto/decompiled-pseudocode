/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D0920
 * Callers:
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
