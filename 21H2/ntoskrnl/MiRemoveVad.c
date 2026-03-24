/*
 * XREFs of MiRemoveVad @ 0x1405555C0
 * Callers:
 *     MiRemovePlaceholderVad @ 0x140555368 (MiRemovePlaceholderVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 */

__int64 __fastcall MiRemoveVad(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 2008);
  RtlAvlRemoveNode((unsigned __int64 *)(a2 + 2008), (unsigned __int64 *)a1);
  if ( *(_QWORD *)(a2 + 2016) == a1 )
    *(_QWORD *)(a2 + 2016) = *v2;
  --*(_QWORD *)(a2 + 2024);
  *(_QWORD *)(a1 + 16) = -2LL;
  result = MiIsVadLargePrivate(a1);
  if ( (_DWORD)result )
  {
    result = (*(_DWORD *)(a1 + 48) >> 18) & 3;
    if ( (unsigned __int64)MiVadPageSizes[result] >= 0x200 )
      --*(_DWORD *)(a2 + 2140);
  }
  return result;
}
