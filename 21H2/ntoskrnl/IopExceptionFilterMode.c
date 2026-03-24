/*
 * XREFs of IopExceptionFilterMode @ 0x140500AA4
 * Callers:
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopExceptionFilterMode(char a1)
{
  return a1 != 0;
}
