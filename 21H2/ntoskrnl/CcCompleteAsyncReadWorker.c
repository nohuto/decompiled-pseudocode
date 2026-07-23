/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x14024A930
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x1402FE848 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     CcCompleteAsyncRead @ 0x140302390 (CcCompleteAsyncRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  __int64 v4; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    v4 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    do
    {
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 896, 0LL);
      if ( *(_QWORD *)(16 * v4 + *(_QWORD *)(v3 + 872)) == 16 * v4 + *(_QWORD *)(v3 + 872) )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 856) + 4 * v4);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3);
      }
      ExReleasePushLockEx(v3 + 896, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v3);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
