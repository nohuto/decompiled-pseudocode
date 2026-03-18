/*
 * XREFs of PiDqQueryEnumObject @ 0x140641DA4
 * Callers:
 *     PiDqEnumQueryObjectsCallback @ 0x140641D80 (PiDqEnumQueryObjectsCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14063BC00 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x140641B7C (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x140645B50 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140645BA0 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406DD328 (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2)
{
  int AddObjectToResultSet; // ebx
  char v4; // cl
  _DWORD *ProcessAuditId; // rax
  int v7; // eax
  char v8; // al
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  AddObjectToResultSet = 0;
  v11 = 0LL;
  v4 = 1;
  v10 = 1;
  ProcessAuditId = a1->ProcessAuditId;
  if ( ProcessAuditId[5] )
    goto LABEL_12;
  if ( (unsigned int)(ProcessAuditId[4] - 1) <= 2 )
  {
    v7 = PiPnpRtlApplyMandatoryFilters(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 28),
           0,
           a1 + 1,
           &v10);
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
    if ( !*((_QWORD *)a1->ProcessAuditId + 11)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter((__int64)a1, *(_QWORD *)(a2 + 16), (bool *)&v10),
           AddObjectToResultSet == -1073741772)
        ? (v8 = 0, AddObjectToResultSet = 0)
        : (v8 = v10),
          AddObjectToResultSet >= 0 && v8) )
    {
      if ( (*((_DWORD *)a1->ProcessAuditId + 10) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1LL, a2, 0LL, &v11);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry(a1, v11);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
