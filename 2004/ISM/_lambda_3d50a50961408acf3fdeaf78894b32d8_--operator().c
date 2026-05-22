/*
 * XREFs of _lambda_3d50a50961408acf3fdeaf78894b32d8_::operator() @ 0x1800D5F6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x1800DAA80 (std--_Func_impl_no_alloc__lambda_3d50a50961408acf3fdeaf78894b32d8__void_Windows--In_ea_1800DAA80.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1BB8 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)_::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)___lambda_6e79e13491ebcbf70f655adacfcc6688__void_ @ 0x1800D4518 (std--function_void___cdecl(std--shared_ptr_Windows--Internal--SpatialInteractions--SpatialIntera.c)
 *     ?SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800D88E4 (-SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3d50a50961408acf3fdeaf78894b32d8_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  const wchar_t *v6; // rbx
  __int64 v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  int v12; // eax
  int v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  std::_Ref_count_base *v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, a2);
  v6 = (const wchar_t *)(*a1 + 80);
  if ( *(_QWORD *)(*a1 + 104) >= 8uLL )
    v6 = *(const wchar_t **)v6;
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v4) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v7,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceInitializationDone_(v8, v6, v5);
  }
  v9 = (RTL_SRWLOCK *)(a1[1] + 704);
  AcquireSRWLockShared(v9);
  v10 = a1[1];
  if ( *(_BYTE *)(v10 + 712) )
  {
    *(_OWORD *)v15 = 0LL;
    *(_QWORD *)v13 = *a1;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v13);
    v14 = v10;
    v11 = std::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const____::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const______lambda_6e79e13491ebcbf70f655adacfcc6688__void_(
            v16,
            v13);
    v12 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
            a1[1],
            v15,
            (__int64)v11,
            1);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        388LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v12);
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
  }
  if ( v9 )
    ReleaseSRWLockShared(v9);
}
