/*
 * XREFs of ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CFC64
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D393C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CE964 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
        struct _RTL_CRITICAL_SECTION *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  char *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  HANDLE OwningThread; // r14
  __int64 *p_LockSemaphore; // rbp
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = this + 4;
  v4 = (char *)this[4].DebugInfo - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v4 )
    v4 = (char *)(*(_QWORD *)&this[4].LockCount - *(_QWORD *)GUID_NULL.Data4);
  if ( !v4 || !this[3].SpinCount )
    return 0LL;
  v5 = this + 9;
  EnterCriticalSection(this + 9);
  OwningThread = this[3].OwningThread;
  if ( !OwningThread || (p_LockSemaphore = (__int64 *)&this[10].LockSemaphore, this[10].LockSemaphore) )
  {
LABEL_12:
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
  v8 = (*(__int64 (__fastcall **)(HANDLE, ULONG_PTR, struct _RTL_CRITICAL_SECTION *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))(*(_QWORD *)OwningThread + 24LL))(
         OwningThread,
         this[3].SpinCount,
         v3,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
      p_LockSemaphore,
      (__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31C,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v9;
}
