/*
 * XREFs of _DbgPrintReturnControlC @ 0x4B33EE30
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

int __cdecl DbgPrintReturnControlC(int a1, int a2)
{
  return vDbgPrintExWithPrefixInternal(&dword_4B2850A4, 0x65u, 0, a1, (char *)&a2, 0);
}
