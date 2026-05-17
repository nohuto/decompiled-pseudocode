/*
 * XREFs of DebugPrompt @ 0x1800A11D0
 * Callers:
 *     DbgPrompt @ 0x1800E0A30 (DbgPrompt.c)
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
