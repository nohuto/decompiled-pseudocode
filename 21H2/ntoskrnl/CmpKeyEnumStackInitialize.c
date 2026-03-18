/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x14069F1F4
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14069F244 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpInitializeKeyNodeStack @ 0x14069F2B4 (CmpInitializeKeyNodeStack.c)
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
