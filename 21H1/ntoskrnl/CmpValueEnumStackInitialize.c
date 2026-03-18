/*
 * XREFs of CmpValueEnumStackInitialize @ 0x1407163CC
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E76D8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x140322D04 (CmpValueEnumStackEntryInitialize.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  _OWORD *v3; // rbx
  __int64 result; // rax

  memset(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = a1 + 4;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
