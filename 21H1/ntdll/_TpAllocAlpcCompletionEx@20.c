/*
 * XREFs of _TpAllocAlpcCompletionEx@20 @ 0x4B2E9A70
 * Callers:
 *     <none>
 * Callees:
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 */

int __stdcall TpAllocAlpcCompletionEx(int a1, int a2, int a3, int a4, int a5)
{
  return TppAllocAlpcCompletion(a3, a4, a5, 1);
}
