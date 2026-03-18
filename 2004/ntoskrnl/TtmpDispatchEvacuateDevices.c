/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1408FD960
 * Callers:
 *     TtmDispatchApi @ 0x1408FD2B4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmiEvacuateDevices @ 0x1408F8EE8 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x1408FBD68 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FD554 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  void *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(void **)(a1 + 8);
  v5 = 0LL;
  DmaAdapter = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(v1, 0, 1, &v5, (__int64 *)&DmaAdapter);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( TtmiEvacuateDevices(v5, (__int64)DmaAdapter) )
      TtmiScheduleSessionWorker(v5, 1);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 593LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v3;
}
