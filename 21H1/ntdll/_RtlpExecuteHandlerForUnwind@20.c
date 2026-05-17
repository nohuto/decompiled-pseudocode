/*
 * XREFs of _RtlpExecuteHandlerForUnwind@20 @ 0x4B308748
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlpExecuteHandlerForUnwind(int a1, int a2, int a3, int a4, int a5)
{
  return ExecuteHandler(a1, a2, a3, a4, a5);
}
