/*
 * XREFs of ?CreateDevice@SpatialInteractionHeadObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800DBA6C
 * Callers:
 *     ?CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJ_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D7120 (-CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHeadObjectDevice::CreateDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionHeadObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax

  v2 = *(unsigned int *)this;
  if ( !(_DWORD)v2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 56LL))(a2);
    v2 = v5;
    *(_DWORD *)this = v5;
  }
  return (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64, __int64, char *))(*(_QWORD *)a2 + 72LL))(
           a2,
           0x20000LL,
           v2,
           (char *)this + 4);
}
