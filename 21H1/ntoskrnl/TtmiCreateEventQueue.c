/*
 * XREFs of TtmiCreateEventQueue @ 0x140900D38
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1408FC46C (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x1408FEBE8 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, PADAPTER_OBJECT *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  POBJECT_TYPE v6; // rdx
  char PreviousMode; // r9
  int inserted; // eax
  unsigned int v10; // ebx
  int v11; // edx
  PADAPTER_OBJECT v12; // rbx
  PADAPTER_OBJECT v13; // rdi
  _DMA_OPERATIONS *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-60h]
  _QWORD v17[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+70h] [rbp-10h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v6 = TtmpQueueObjectType;
  PreviousMode = CurrentThread->PreviousMode;
  *a3 = 0LL;
  v20 = 0LL;
  DmaAdapter = 0LL;
  v17[0] = 48LL;
  v17[3] = 32LL;
  v17[1] = 0LL;
  v17[2] = 0LL;
  v18 = 0LL;
  inserted = ObCreateObjectEx(0, v6, (__int64)v17, PreviousMode, v16, 176, 0, 0, &DmaAdapter, 0LL);
  v10 = inserted;
  if ( inserted >= 0 )
  {
    v12 = DmaAdapter;
    memset(DmaAdapter, 0, 0xB0uLL);
    *(_QWORD *)&v12[10].Version = (char *)v12 + 152;
    v12[9].DmaOperations = (_DMA_OPERATIONS *)&v12[9].DmaOperations;
    ExInitializeResourceLite((PERESOURCE)&v12[1].DmaOperations);
    KeInitializeEvent((PRKEVENT)&v12[8], NotificationEvent, 0);
    LOBYTE(v12[10].DmaOperations) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v13 = DmaAdapter;
    *(_QWORD *)&DmaAdapter[1].Version = a1;
    v14 = *(_DMA_OPERATIONS **)(a1 + 88);
    if ( *(_QWORD *)&v14->Size != a1 + 80 )
      __fastfail(3u);
    *(_QWORD *)&v13->Version = a1 + 80;
    v13->DmaOperations = v14;
    *(_QWORD *)&v14->Size = v13;
    *(_QWORD *)(a1 + 88) = v13;
    inserted = ObInsertObjectEx(v13, 0LL, 0x1F0000u, 0, 0, 0LL, &v20);
    v10 = inserted;
    if ( inserted >= 0 )
    {
      TtmiLogQueueCreated((__int64)v13);
      v10 = 0;
      *a3 = v20;
      *a2 = v13;
      return v10;
    }
    v11 = 605;
  }
  else
  {
    v11 = 572;
  }
  TtmiLogError("TtmiCreateEventQueue", v11, inserted, inserted);
  return v10;
}
