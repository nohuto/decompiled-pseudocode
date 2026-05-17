/*
 * XREFs of _vDbgPrintExWithPrefix@20 @ 0x4B33EEF0
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

int __stdcall vDbgPrintExWithPrefix(void *a1, int a2, int a3, char *a4, va_list a5)
{
  return vDbgPrintExWithPrefixInternal(a1, a2, a3, a4, a5, 1);
}
