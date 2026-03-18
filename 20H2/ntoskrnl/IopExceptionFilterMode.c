/*
 * XREFs of IopExceptionFilterMode @ 0x1404FEF20
 * Callers:
 *     IopQueryNameInternal @ 0x1406361C4 (IopQueryNameInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopExceptionFilterMode(char a1)
{
  return a1 != 0;
}
