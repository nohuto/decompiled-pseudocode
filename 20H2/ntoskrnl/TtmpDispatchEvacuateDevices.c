/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1409035B4
 * Callers:
 *     TtmDispatchApi @ 0x140902EE4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     TtmiEvacuateDevices @ 0x1408FEAF8 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x140901990 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140903184 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
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
    TtmiLogError("TtmpDispatchEvacuateDevices", 615LL, (unsigned int)v2, (unsigned int)v2);
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
