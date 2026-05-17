/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D08E0
 * Callers:
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1EC0 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009DAE0 (ZwQueryInformationThread.c)
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
