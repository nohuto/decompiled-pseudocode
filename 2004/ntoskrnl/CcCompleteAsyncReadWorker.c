/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x14035A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     CcFindNextWorkQueueEntry @ 0x1402C7538 (CcFindNextWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  __int64 v4; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15
  _QWORD *v6; // rdx

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    v4 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 896, 0LL);
      v6 = (_QWORD *)(16 * v4 + *(_QWORD *)(v3 + 872));
      if ( (_QWORD *)*v6 == v6 )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 856) + 4 * v4);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3, v6);
      }
      ExReleasePushLockEx(v3 + 896, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v3);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
