/*
 * XREFs of PopAvlComparePowerRequestKeys @ 0x14070C640
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405E66D0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopAvlComparePowerRequestKeys(_RTL_AVL_TABLE *a1, char *a2, char *a3)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString((PCUNICODE_STRING)(a2 + 8), (PCUNICODE_STRING)(a3 + 8), 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
