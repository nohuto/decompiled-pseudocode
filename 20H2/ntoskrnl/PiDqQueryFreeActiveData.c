/*
 * XREFs of PiDqQueryFreeActiveData @ 0x1406D806C
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x140645B50 (PiDqQueryAppendActionEntry.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryRelease @ 0x1406D7FF0 (PiDqQueryRelease.c)
 *     PiDqIrpQueryGetResult @ 0x1406D8984 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x14023F7A0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140645FA8 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x140646194 (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406D80D8 (PiDqQueryDeleteObjectFromResultSet.c)
 */

void __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); !RtlIsGenericTableEmptyAvl(i); i = (_RTL_AVL_TABLE *)(a1 + 72) )
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  v3 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    PiDqQueryActionQueueEntryFree(v4);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v5 = *(void **)(a1 + 184);
  if ( v5 )
  {
    PiDqActionDataFree(v5);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
}
