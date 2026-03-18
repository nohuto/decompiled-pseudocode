/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x1406C8DAC
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x14071621C (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140875F24 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14087BC9C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1406C8DFC (CmpKeyEnumStackEntryInitialize.c)
 *     CmpInitializeKeyNodeStack @ 0x1406C8E60 (CmpInitializeKeyNodeStack.c)
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
