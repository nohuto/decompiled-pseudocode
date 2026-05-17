/*
 * XREFs of _DbgPrintReturnControlC @ 0x4B33EE30
 * Callers:
 *     <none>
 * Callees:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 */

int DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&dword_4B2850A4, 101, 0, a1, va, 0);
}
