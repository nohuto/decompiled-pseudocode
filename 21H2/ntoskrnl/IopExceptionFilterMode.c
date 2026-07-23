/*
 * XREFs of IopExceptionFilterMode @ 0x140500A24
 * Callers:
 *     IopQueryNameInternal @ 0x14068A174 (IopQueryNameInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopExceptionFilterMode(char a1)
{
  return a1 != 0;
}
