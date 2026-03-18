/*
 * XREFs of PiDqQueryEnumObject @ 0x1407792B4
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x140779290 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryAddObjectToResultSet @ 0x1406DF8F0 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140777C60 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x140777CF0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1407796C4 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14077D454 (PiPnpRtlApplyMandatoryFilters.c)
 */

__int64 __fastcall PiDqQueryEnumObject(__int64 a1, __int64 a2)
{
  unsigned int AddObjectToResultSet; // ebx
  char v4; // cl
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  char v9; // al
  char v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+50h] [rbp+18h] BYREF

  AddObjectToResultSet = 0;
  v12 = 0LL;
  v4 = 1;
  v11 = 1;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v6 + 20) )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 16) - 1) <= 2 )
    {
      v7 = PiPnpRtlApplyMandatoryFilters(
             PiPnpRtlCtx,
             *(_QWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 28),
             0,
             (int)a1 + 32,
             (__int64)&v11);
      AddObjectToResultSet = v7;
      if ( v7 == -1073741772 || v7 == -1073741275 )
      {
        v4 = 0;
        v11 = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        if ( v7 < 0 )
          return AddObjectToResultSet;
        v4 = v11;
      }
    }
    if ( !v4 )
      return AddObjectToResultSet;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) )
  {
    v8 = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v11);
    AddObjectToResultSet = v8;
    if ( v8 == -1073741772 )
    {
      v9 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v8 < 0 )
        return AddObjectToResultSet;
      v9 = v11;
    }
    if ( !v9 )
      return AddObjectToResultSet;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0
    || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), (AddObjectToResultSet & 0x80000000) == 0) )
  {
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1, a2, 0LL, (__int64 *)&v12);
    if ( (AddObjectToResultSet & 0x80000000) == 0 )
      PiDqQueryAppendActionEntry(a1, v12);
  }
  return AddObjectToResultSet;
}
