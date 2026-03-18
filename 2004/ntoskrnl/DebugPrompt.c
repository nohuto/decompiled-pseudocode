/*
 * XREFs of DebugPrompt @ 0x1403FEFA0
 * Callers:
 *     DbgPrompt @ 0x140580200 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrompt()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
