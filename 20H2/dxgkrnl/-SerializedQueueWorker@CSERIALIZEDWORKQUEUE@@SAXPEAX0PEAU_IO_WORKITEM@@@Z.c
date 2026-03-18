/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0196F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdx
  void **v6; // rsi
  void ***v7; // rdi
  void **v8; // rax
  __int64 v9; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 56) )
    {
      *((_BYTE *)Context + 56) = 1;
      v6 = (void **)((char *)Context + 40);
      while ( 1 )
      {
        v7 = (void ***)*v6;
        if ( *v6 == v6 )
          break;
        if ( v7[1] != v6 || (v8 = *v7, (*v7)[1] != v7) )
          __fastfail(3u);
        *v6 = v8;
        v8[1] = v6;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context, v5);
        ((void (__fastcall *)(void **))v7[2])(v7[3]);
        operator delete(v7);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 56) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context, v5);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(IoObject, 0LL);
    *(_QWORD *)(v9 + 24) = 1615LL;
    WdLogEvent5_WdError(v9);
  }
}
