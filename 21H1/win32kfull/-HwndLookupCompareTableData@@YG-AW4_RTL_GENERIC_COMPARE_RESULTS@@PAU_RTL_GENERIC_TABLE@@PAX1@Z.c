/*
 * XREFs of ?HwndLookupCompareTableData@@YG?AW4_RTL_GENERIC_COMPARE_RESULTS@@PAU_RTL_GENERIC_TABLE@@PAX1@Z @ 0x92032
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_GENERIC_COMPARE_RESULTS __stdcall HwndLookupCompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  RTL_GENERIC_COMPARE_RESULTS result; // eax

  result = GenericLessThan;
  if ( *FirstStruct >= *SecondStruct )
  {
    LOBYTE(result) = *FirstStruct == *SecondStruct;
    ++result;
  }
  return result;
}
