/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x1408FC880
 * Callers:
 *     TtmDispatchApi @ 0x1408FBFC4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1408FF24C (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  DmaAdapter = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 0, &v7, (__int64 *)&DmaAdapter);
  v4 = v7;
  v5 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16) != 0;
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFF7FF | ((unsigned __int8)v3 << 11);
    TtmiLogSessionDeviceAssignmentPolicySet(v3);
    v5 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 685LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v4 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v5;
}
