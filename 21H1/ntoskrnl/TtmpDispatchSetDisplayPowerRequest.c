/*
 * XREFs of TtmpDispatchSetDisplayPowerRequest @ 0x1408FC93C
 * Callers:
 *     TtmDispatchApi @ 0x1408FBFC4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FAB70 (TtmiSetDisplayPowerRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayPowerRequest(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  DmaAdapter = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, (__int64 *)&DmaAdapter);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiSetDisplayPowerRequest(
           v6,
           (unsigned int *)&DmaAdapter->Version,
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetDisplayPowerRequest", 838LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v3;
}
