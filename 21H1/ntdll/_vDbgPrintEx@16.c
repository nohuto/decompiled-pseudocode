/*
 * XREFs of _vDbgPrintEx@16 @ 0x4B33EEC0
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

int __stdcall vDbgPrintEx(int a1, int a2, char *a3, va_list a4)
{
  return vDbgPrintExWithPrefixInternal(&dword_4B2850A4, a1, a2, a3, a4, 1);
}
