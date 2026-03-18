/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C010DF38
 * Callers:
 *     UmfdSessionInitialize @ 0x1C010DE50 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CEventPool@@SAQEAV1@XZ @ 0x1C010E040 (-Create@CEventPool@@SAQEAV1@XZ.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C010E0F0 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0123634 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C0123674 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DF6C8 (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 */

__int64 UmfdCallSessionInitialize(void)
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // r14
  union _SLIST_HEADER **v3; // rax
  union _SLIST_HEADER **v4; // rsi
  union _SLIST_HEADER *v5; // rax
  union _SLIST_HEADER *v6; // rbx
  struct CManualResetEvent *v7; // rax
  struct CEventPool *v8; // rax
  __int64 v10; // rsi
  void *v11; // rcx
  union _SLIST_HEADER **v12; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( v0 >= 0 )
  {
    v3 = (union _SLIST_HEADER **)EngAllocMem(0, 0x10u, 0x676D6466u);
    v4 = v3;
    if ( !v3 )
      goto LABEL_15;
    v12 = v3;
    v5 = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
    v6 = v5;
    if ( !v5 )
      goto LABEL_12;
    InitializeSListHead(v5 + 1);
    LOBYTE(v6->Alignment) = 0;
    v7 = CManualResetEvent::Create();
    v6->Region = (ULONGLONG)v7;
    if ( !v7 )
    {
      CWorkItemQueue::Destroy(v6);
LABEL_12:
      v6 = 0LL;
    }
    *v4 = v6;
    if ( !v6 || (v8 = CEventPool::Create(), (v4[1] = (union _SLIST_HEADER *)v8) == 0LL) )
    {
      CAutoDestroy<CMultipleConsumerWorkQueue>::~CAutoDestroy<CMultipleConsumerWorkQueue>(&v12);
LABEL_15:
      v0 = -1073741801;
      goto LABEL_9;
    }
    g_pUmfdServerPort[v2] = v4;
    v0 = 0;
    g_pUmfdClientPort[v2] = v4;
LABEL_9:
    v1 = (unsigned int)(v1 + 1);
    ++v2;
    if ( (unsigned int)v1 >= 4 )
    {
      if ( v0 >= 0 )
        return (unsigned int)v0;
      break;
    }
  }
  if ( (_DWORD)v1 )
  {
    v10 = 0LL;
    do
    {
      v11 = (void *)g_pUmfdServerPort[v10];
      g_pUmfdClientPort[v10] = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v11);
      g_pUmfdServerPort[v10++] = 0LL;
      --v1;
    }
    while ( v1 );
  }
  return (unsigned int)v0;
}
