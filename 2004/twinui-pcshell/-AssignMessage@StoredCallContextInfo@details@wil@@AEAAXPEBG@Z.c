/*
 * XREFs of ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1801899D8
 * Callers:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180013480 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     _lambda_9d47f3ca24650e09de4b87214d29e4d8_::operator() @ 0x180013500 (_lambda_9d47f3ca24650e09de4b87214d29e4d8_--operator().c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x1803508E8 (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 * Callees:
 *     memcpy_s_1 @ 0x18018B40C (memcpy_s_1.c)
 */

void __fastcall wil::details::StoredCallContextInfo::AssignMessage(
        wil::details::StoredCallContextInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 )
  {
    v5 = 2 * v2 + 2;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      *((_BYTE *)this + 24) = 1;
      memcpy_s_1(v7, v5, a2, v5);
    }
  }
}
