/*
 * XREFs of sub_18002B870 @ 0x18002B870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002B870(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 256) )
    return *(_QWORD *)(a1 + 264) != 0LL;
  return result;
}
