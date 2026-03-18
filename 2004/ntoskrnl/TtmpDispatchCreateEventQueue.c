/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1408FD75C
 * Callers:
 *     TtmDispatchApi @ 0x1408FD2B4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FC104 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FD554 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 *     TtmiCreateEventQueue @ 0x140902028 (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v10 = 0LL;
  v12 = 0LL;
  DmaAdapter = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  v5 = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v12, (__int64 *)&DmaAdapter);
  v6 = v5;
  if ( v5 < 0 )
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 306LL, (unsigned int)v5, (unsigned int)v5);
    goto LABEL_9;
  }
  v7 = TtmiCreateEventQueue(v12, &v10, &v11);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 312LL;
LABEL_5:
    TtmiLogError("TtmpDispatchCreateEventQueue", v8, (unsigned int)v7, (unsigned int)v7);
    v4 = v11;
    goto LABEL_9;
  }
  v7 = TtmiWriteEnumerationEventsToQueue(v12, v10);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 322LL;
    goto LABEL_5;
  }
  v6 = 0;
  *a2 = v11;
LABEL_9:
  if ( v12 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v4 )
    ObCloseHandle(DmaAdapter, KeGetCurrentThread()->PreviousMode);
  return v6;
}
