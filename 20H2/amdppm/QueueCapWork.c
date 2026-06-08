/*
 * XREFs of QueueCapWork @ 0x1C00091F0
 * Callers:
 *     LongCapTraceDpc @ 0x1C0009180 (LongCapTraceDpc.c)
 *     QuickCapTraceDpc @ 0x1C00092B0 (QuickCapTraceDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueCapWork(PVOID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v8; // eax
  char *PoolWithTag; // rax
  char *v10; // rdi

  v8 = IoSizeofWorkItem();
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 32, 0x72637250u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 1) = a2;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 2) = a3;
    *((_QWORD *)PoolWithTag + 3) = a4;
    IoInitializeWorkItem(*a1, (PIO_WORKITEM)(PoolWithTag + 32));
    IoQueueWorkItem((PIO_WORKITEM)(v10 + 32), CapLogWorker, DelayedWorkQueue, v10);
  }
}
