/*
 * XREFs of _lambda_44ac52284afab4209afe1ba1ddd42b4f_::operator() @ 0x1800D60C8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_44ac52284afab4209afe1ba1ddd42b4f__long_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice___::_Do_call @ 0x1800DAAA0 (std--_Func_impl_no_alloc__lambda_44ac52284afab4209afe1ba1ddd42b4f__long_Windows--In_ea_1800DAAA0.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800C5284 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D1A2C (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ??$emplace@U?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$00@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@1@@Z @ 0x1800D54A4 (--$emplace@U-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$ComPtr@VS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_44ac52284afab4209afe1ba1ddd42b4f_::operator()(__int64 **a1, void *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-19h] BYREF
  void *v12[3]; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+Fh]
  __int64 v14[4]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v11[0] = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
  v4 = (RTL_SRWLOCK *)(*a1 + 77);
  AcquireSRWLockExclusive(v4);
  v11[1] = (__int64)v4;
  std::wstring::wstring(v12, *a1[1]);
  v14[0] = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
  std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,1>>::emplace<std::pair<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
    *a1 + 75,
    (__int64)v10,
    (__int64)v12);
  v5 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v13 >= 8 )
    std::_Deallocate<16,0>(v12[0], (const struct std::nothrow_t *)(2 * v13 + 2));
  v6 = *a1;
  v10[0] = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10);
  v12[0] = off_1801AB4A0;
  v12[1] = a2;
  v12[2] = v6;
  v14[3] = (__int64)v12;
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
         (RTL_SRWLOCK *)*a1,
         (__int64)v12);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( a2 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL))(a2);
  return v8;
}
