/*
 * XREFs of PushFrame @ 0x1C0018660
 * Callers:
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 *     SleepQueueRequest @ 0x1C0068970 (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C00691D8 (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall PushFrame(struct _SLIST_ENTRY *a1, int a2, unsigned int a3, __int64 a4, _SLIST_ENTRY **a5)
{
  unsigned int v8; // ebx
  _SLIST_ENTRY *v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 30, 1297237576, a3);
  if ( v9 )
  {
    *((_QWORD *)&v9->Next + 1) = a1[26].Next;
    a1[26].Next = v9;
    LODWORD(v9->Next) = a2;
    *((_QWORD *)&v9[1].Next + 1) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
