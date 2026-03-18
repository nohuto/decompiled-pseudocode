/*
 * XREFs of RtlCopyRangeList @ 0x14074DF90
 * Callers:
 *     ArbTestAllocation @ 0x14074DCB0 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x14079FB50 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x140863B90 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140863F20 (ArbRetestAllocation.c)
 *     RtlMergeRangeLists @ 0x14090CA10 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x14074E020 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14074E320 (RtlFreeRangeList.c)
 */

__int64 __fastcall RtlCopyRangeList(__int64 a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  if ( *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  for ( i = (__int64 *)*a2; ; i = (__int64 *)v5[5] )
  {
    v5 = i - 5;
    if ( a2 == i )
      return 0LL;
    v6 = RtlpCopyRangeListEntry(i - 5);
    if ( !v6 )
      break;
    v7 = *(_QWORD **)(a1 + 8);
    v8 = (_QWORD *)(v6 + 40);
    if ( *v7 != a1 )
      __fastfail(3u);
    *v8 = a1;
    v8[1] = v7;
    *v7 = v8;
    *(_QWORD *)(a1 + 8) = v8;
  }
  RtlFreeRangeList(a1);
  return 3221225626LL;
}
