/*
 * XREFs of ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C00E0410
 * Callers:
 *     UmfdQueryFontData @ 0x1C00E0040 (UmfdQueryFontData.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C010E08C (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0123724 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

struct CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(
        CMultipleConsumerWorkQueue *this,
        unsigned __int8 *a2)
{
  __int64 v2; // rdi
  PSLIST_ENTRY v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rbx
  void *v9; // rcx
  struct _SLIST_ENTRY *v11; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 1);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v2 + 16));
  if ( v5 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v2);
  }
  else
  {
    v5 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
    if ( !v5 )
      return 0LL;
  }
  v11 = v5;
  v6 = EngAllocMem(0, 0x40u, 0x676D6466u);
  v7 = v6;
  if ( !v6 )
  {
    v9 = 0LL;
LABEL_16:
    v7 = 0LL;
    goto LABEL_7;
  }
  v6[6] = 8;
  *((_QWORD *)v6 + 5) = v5;
  v6[7] = 8;
  *((_QWORD *)v6 + 2) = v6 + 14;
  *((_QWORD *)v6 + 7) = *(_QWORD *)a2;
  v6[2] = 0;
  v8 = *(_QWORD *)this;
  if ( **(_BYTE **)this )
  {
    v5 = v11;
    v9 = v6;
    goto LABEL_16;
  }
  v6[2] = 1;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), (PSLIST_ENTRY)v6);
  KeSetEvent(**(PRKEVENT **)(v8 + 8), 1, 0);
  v5 = 0LL;
  v9 = 0LL;
LABEL_7:
  if ( v9 )
    EngFreeMem(v9);
  if ( v5 )
    CEventPool::CEventPoolEntry::Destroy(v5);
  return (struct CMultipleConsumerWorkQueue::CWaitableWorkItem *)v7;
}
