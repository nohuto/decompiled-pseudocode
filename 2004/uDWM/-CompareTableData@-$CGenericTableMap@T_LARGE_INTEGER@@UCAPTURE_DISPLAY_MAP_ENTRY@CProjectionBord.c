/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180085EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  __int64 result; // rax

  result = 0LL;
  if ( *FirstStruct >= *SecondStruct )
  {
    LOBYTE(result) = *FirstStruct == *SecondStruct;
    return (unsigned int)(result + 1);
  }
  return result;
}
