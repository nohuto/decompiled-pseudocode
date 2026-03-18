/*
 * XREFs of IopExceptionFilterMode @ 0x1404FAFFC
 * Callers:
 *     IopQueryNameInternal @ 0x1405DABE4 (IopQueryNameInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopExceptionFilterMode(char a1)
{
  return a1 != 0;
}
