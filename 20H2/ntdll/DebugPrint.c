/*
 * XREFs of DebugPrint @ 0x1800A0BE0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
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
