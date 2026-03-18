/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140776E5C
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x1407735A0 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryRelease @ 0x140775854 (PiDqQueryRelease.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140775990 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x1407768EC (PiDqIrpQueryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x140777CF0 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1402DECE0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407734A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407780BC (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x140778370 (PiDqActionDataFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (RTL_AVL_TABLE *)(a1 + 72); ; i = (RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    result = PiDqQueryActionQueueEntryFree(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v6 = *(void **)(a1 + 184);
  if ( v6 )
  {
    result = PiDqActionDataFree(v6);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
