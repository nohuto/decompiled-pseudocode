/*
 * XREFs of ExDestroyPool @ 0x14063A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolDestroy @ 0x14063F6D4 (ExpSecurePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(ULONG_PTR a1)
{
  return ExpSecurePoolDestroy(a1);
}
