/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x140242F10
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x140275290 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(__int64 a1)
{
  char v1; // bp
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r14
  struct _SLIST_ENTRY *NextWorkQueueEntry; // r13
  __int64 v7; // rcx
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 v10; // rax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 32) == 4 )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v3 = *(unsigned int *)(a1 + 36);
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(_QWORD *)(a1 + 72);
    NextWorkQueueEntry = *(struct _SLIST_ENTRY **)(a1 + 48);
    do
    {
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v2 + 1160, 0LL);
      if ( *(_QWORD *)(16 * v3 + *(_QWORD *)(v5 + 264)) == 16 * v3 + *(_QWORD *)(v5 + 264) )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v5 + 248) + 4 * v3);
      }
      else
      {
        NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v7, v5);
      }
      ExReleasePushLockEx(v2 + 1160, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v2);
    if ( v4 )
    {
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v9 = v8 <= 1;
      v10 = v8 - 1;
      if ( v9 )
      {
        if ( v10 )
          __fastfail(0xEu);
        KeSetEvent((PRKEVENT)(v4 + 1200), 0, 0);
      }
    }
    ExFreePoolWithTag((PVOID)a1, 0x71576343u);
  }
}
