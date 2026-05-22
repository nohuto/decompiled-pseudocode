/*
 * XREFs of ?Stop@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x1800D2728
 * Callers:
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D1130 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::Stop(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 3);
  v4 = *v3;
  v5 = *((_QWORD *)this + 5);
  if ( *((_BYTE *)this + 16) )
    (*(void (__fastcall **)(__int64 *, __int64))(v4 + 64))(v3, v5);
  else
    (*(void (__fastcall **)(__int64 *, __int64))(v4 + 80))(v3, v5);
  if ( v2 )
    LeaveCriticalSection(v2);
}
