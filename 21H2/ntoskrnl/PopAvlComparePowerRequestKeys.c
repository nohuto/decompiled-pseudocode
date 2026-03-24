/*
 * XREFs of PopAvlComparePowerRequestKeys @ 0x1406BE780
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405EE320 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopAvlComparePowerRequestKeys(struct _RTL_AVL_TABLE *Table, char *FirstStruct, char *SecondStruct)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString((PCUNICODE_STRING)(FirstStruct + 8), (PCUNICODE_STRING)(SecondStruct + 8), 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
