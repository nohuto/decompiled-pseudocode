/*
 * XREFs of PiCompareDDBCacheEntries @ 0x1406DAD90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiCompareDDBCacheEntries(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v6; // eax
  unsigned int v8; // eax

  v6 = RtlCompareUnicodeString(FirstStruct + 1, SecondStruct + 1, 1u);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 > 0 )
    return 1LL;
  if ( Table->TableContext )
    return 2LL;
  v8 = *(_DWORD *)&FirstStruct[2].Length;
  if ( v8 < *(_DWORD *)&SecondStruct[2].Length )
    return 0LL;
  if ( v8 <= *(_DWORD *)&SecondStruct[2].Length )
    return 2LL;
  else
    return 1LL;
}
