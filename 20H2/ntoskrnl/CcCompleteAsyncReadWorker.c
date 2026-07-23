/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x14032ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x140249F98 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14029EBDC (CcDereferencePartition.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 v6; // rdi
  __int64 v7; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15
  _QWORD *v9; // rdx

  v4 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v6 = P[7];
    v7 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry, a2, a3, a4);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v6 + 896, 0LL);
      v9 = (_QWORD *)(16 * v7 + *(_QWORD *)(v6 + 872));
      if ( (_QWORD *)*v9 == v9 )
      {
        v4 = 1;
        --*(_DWORD *)(*(_QWORD *)(v6 + 856) + 4 * v7);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v6, v9);
      }
      ExReleasePushLockEx(v6 + 896, 0LL);
    }
    while ( !v4 );
    CcDereferencePartition(v6);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
