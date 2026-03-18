/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140920FCC
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140920F1C (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x14065C8A4 (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(
        __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart((__int64)a1, *a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
