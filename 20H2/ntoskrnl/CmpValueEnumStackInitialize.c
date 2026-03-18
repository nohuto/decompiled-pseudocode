/*
 * XREFs of CmpValueEnumStackInitialize @ 0x14072671C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404EB598 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x140331554 (CmpValueEnumStackEntryInitialize.c)
 *     memset @ 0x140411300 (memset.c)
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
