/*
 * XREFs of _RtlpExecuteHandlerForException@20 @ 0x4B308740
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlpExecuteHandlerForException(int a1, int a2, int a3, int a4, int a5)
{
  return ExecuteHandler(a1, a2, a3, a4, a5);
}
