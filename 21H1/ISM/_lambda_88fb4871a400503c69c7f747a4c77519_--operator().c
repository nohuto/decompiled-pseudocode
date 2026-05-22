/*
 * XREFs of _lambda_88fb4871a400503c69c7f747a4c77519_::operator() @ 0x1800D6914
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_88fb4871a400503c69c7f747a4c77519__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800DB030 (std--_Func_impl_no_alloc__lambda_88fb4871a400503c69c7f747a4c77519__void_std--shared_ea_1800DB030.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069708 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAJ@Z @ 0x1800D4F70 (--$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialIn.c)
 *     ??$Write@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D4FB4 (--$Write@U-$_tlgWrapSz@_W@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_88fb4871a400503c69c7f747a4c77519_::operator()(RTL_SRWLOCK **a1, __int64 a2)
{
  RTL_SRWLOCK *v3; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // r15d
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v20; // [rsp+88h] [rbp+58h]

  v18 = a2;
  v3 = *a1 + 77;
  AcquireSRWLockExclusive(v3);
  v20 = v3;
  Ptr = (*a1)[75].Ptr;
  v5 = (_QWORD *)*Ptr;
  v17 = (_QWORD *)*Ptr;
  while ( v5 != Ptr )
  {
    v6 = (_QWORD *)v5[8];
    v18 = (__int64)v6;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v18);
    v7 = *v6;
    if ( LOBYTE((*a1)[89].Ptr) )
    {
      LODWORD(v18) = (*(__int64 (__fastcall **)(_QWORD *))(v7 + 80))(v6);
      v8 = v6 + 10;
      if ( v6[13] >= 8uLL )
        v8 = (_QWORD *)*v8;
      v19 = (__int64)v8;
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects<wchar_t const *,long &>(
        (const wchar_t **)&v19,
        (int *)&v18);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *))(v7 + 88))(v6);
      v11 = v6 + 10;
      if ( v6[13] >= 8uLL )
        v11 = (_QWORD *)*v11;
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v9) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v12,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        v14 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                v13,
                _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        if ( *(_DWORD *)v14[1] > 4u && tlgKeywordOn(v14[1], 2LL) )
        {
          LODWORD(v18) = v10;
          v19 = (__int64)v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
            v15,
            (unsigned __int8 *)dword_1801CCC58,
            v15,
            v16,
            (const wchar_t **)&v19,
            (__int64)&v18);
        }
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v17);
    v5 = v17;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
