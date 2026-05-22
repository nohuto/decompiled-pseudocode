/*
 * XREFs of ?UnregisterCallback@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x18016FF80
 * Callers:
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18016E99C (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback(
        Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_BYTE *)this + 104) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *, Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *))(**((_QWORD **)this + 12) + 56LL))(
           *((_QWORD *)this + 12),
           (char *)this + 64,
           this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        128LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v3);
    *((_BYTE *)this + 104) = 0;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
