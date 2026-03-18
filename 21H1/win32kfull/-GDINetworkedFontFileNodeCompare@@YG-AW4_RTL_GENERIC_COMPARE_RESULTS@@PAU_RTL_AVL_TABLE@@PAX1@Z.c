/*
 * XREFs of ?GDINetworkedFontFileNodeCompare@@YG?AW4_RTL_GENERIC_COMPARE_RESULTS@@PAU_RTL_AVL_TABLE@@PAX1@Z @ 0x1E87CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall GDINetworkedFontFileNodeCompare(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v3; // eax

  v3 = RtlCompareUnicodeString(FirstStruct + 1, SecondStruct + 1, 0);
  if ( v3 )
    return v3 > 0;
  else
    return 2;
}
