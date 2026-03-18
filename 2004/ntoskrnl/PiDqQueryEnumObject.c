/*
 * XREFs of PiDqQueryEnumObject @ 0x1405D73F4
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1405D73D0 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryAppendActionEntry @ 0x1405D1FE8 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1405D2038 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryEvaluateFilter @ 0x1405D6FE0 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405D7C84 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14070B030 (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(__int64 a1, __int64 a2)
{
  int AddObjectToResultSet; // ebx
  char v4; // cl
  __int64 v6; // rax
  int v7; // eax
  char v8; // al
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+50h] [rbp+18h] BYREF

  AddObjectToResultSet = 0;
  v11 = 0LL;
  v4 = 1;
  v10 = 1;
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_12;
  if ( (unsigned int)(*(_DWORD *)(v6 + 16) - 1) <= 2 )
  {
    v7 = PiPnpRtlApplyMandatoryFilters(
           PiPnpRtlCtx,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 28),
           0,
           (int)a1 + 32,
           (__int64)&v10);
    v4 = v10;
    AddObjectToResultSet = v7;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v4 = 0;
    v10 = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v4 )
  {
LABEL_12:
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), (bool *)&v10),
           AddObjectToResultSet == -1073741772)
        ? (v8 = 0, AddObjectToResultSet = 0)
        : (v8 = v10),
          AddObjectToResultSet >= 0 && v8) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1, a2, 0LL, &v11);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry(a1, v11);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
