/*
 * XREFs of ?InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D7CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D2078 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevices(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2,
        int (***a3)(void))
{
  _DWORD *v5; // rdi
  void *v6; // rcx
  char *v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10[2]; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v11[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v14; // [rsp+A0h] [rbp+18h] BYREF

  try
  {
    *((_BYTE *)this + 688) = (**a3)() >= 0;
    v5 = operator new(0x3FCuLL);
    *v5 = 0;
    memset_0(v5 + 1, 0, 0x3B8uLL);
    memset_0(v5 + 239, 0, 0x40uLL);
    v6 = (void *)*((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = v5;
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x3FC);
    v14 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
    *(_OWORD *)v11 = 0LL;
    v10[0] = (__int64)a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10);
    v7 = (char *)this - 8;
    v10[1] = (__int64)v7;
    v12[0] = off_1801AC440;
    v12[1] = a2;
    v10[0] = 0LL;
    v12[2] = v7;
    v12[7] = v12;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v10);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
      (__int64)v7,
      v11,
      (__int64)v12,
      1);
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x133,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
                     v8);
    return (unsigned int)v14;
  }
  return result;
}
