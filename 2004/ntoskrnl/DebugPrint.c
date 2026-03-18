/*
 * XREFs of DebugPrint @ 0x1403FEF80
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrint()
{
  __int64 result; // rax

  result = 1LL;
  __asm { int     2Dh; Windows NT - eax = 1: debug print }
  __debugbreak();
  return result;
}
