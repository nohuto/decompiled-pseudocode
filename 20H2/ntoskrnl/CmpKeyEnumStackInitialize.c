/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x1406BDDE4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072656C (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087CD90 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1406BDE34 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128;
    --v3;
  }
  while ( v3 );
  return result;
}
