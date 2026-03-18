/*
 * XREFs of ?GDITrustedFontFileCompare@@YG?AW4_RTL_GENERIC_COMPARE_RESULTS@@PAU_RTL_AVL_TABLE@@PAX1@Z @ 0x1EB729
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall GDITrustedFontFileCompare(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v3; // eax

  v3 = RtlCompareUnicodeString(FirstStruct, SecondStruct, 0);
  if ( v3 )
    return v3 > 0;
  else
    return 2;
}
