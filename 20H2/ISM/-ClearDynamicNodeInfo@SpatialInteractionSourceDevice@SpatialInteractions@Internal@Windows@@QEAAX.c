/*
 * XREFs of ?ClearDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x1800D6B5C
 * Callers:
 *     ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800D9FC0 (-StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTr.c)
 *     ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x18016F660 (-StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4St.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::ClearDynamicNodeInfo(
        RTL_SRWLOCK *this)
{
  (*((void (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 12))(this);
  AcquireSRWLockExclusive(this + 6);
  *(_OWORD *)&this[7].Ptr = 0LL;
  LODWORD(this[9].Ptr) = 0;
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  BYTE1(this[13].Ptr) = 1;
}
