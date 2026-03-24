/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1402CC2D0
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x1402F3AF8 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1402F6CBC (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402F6D2C (CcDereferencePartition.c)
 *     CcCompleteAsyncRead @ 0x1402F7640 (CcCompleteAsyncRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct _SLIST_ENTRY *NextWorkQueueEntry; // r15

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    v4 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (struct _SLIST_ENTRY *)P[6];
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
        NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3);
      }
      ExReleasePushLockEx(v3 + 896, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v3);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
