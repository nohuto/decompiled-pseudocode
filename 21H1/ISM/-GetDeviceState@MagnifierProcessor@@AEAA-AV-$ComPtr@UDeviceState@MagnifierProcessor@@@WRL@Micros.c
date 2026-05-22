/*
 * XREFs of ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x18017D21C
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017D400 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??1?$MakeAllocator@VInputSiteHierarchyManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006B420 (--1-$MakeAllocator@VInputSiteHierarchyManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18017CA40 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micro.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x18017CD44 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall MagnifierProcessor::GetDeviceState(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  MagnifierProcessor::DeviceState *v6; // rbx
  __int64 v7; // r11
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rax
  MagnifierProcessor::DeviceState *v11; // rax
  __int64 v12; // r9
  MagnifierProcessor::DeviceState *v13; // rbx
  __int64 v14; // rbx
  MagnifierProcessor::DeviceState *v15; // rsi
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  MagnifierProcessor::DeviceState *v19; // [rsp+60h] [rbp+30h] BYREF
  MagnifierProcessor::DeviceState *v20; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+48h] BYREF

  v5 = a1 + 16;
  v6 = (MagnifierProcessor::DeviceState *)*(unsigned int *)(a3 + 4);
  v19 = v6;
  v7 = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v19, 8uLL) & *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           v5,
           &v19,
           v7);
    if ( v9 == *v8 )
      break;
    if ( *(MagnifierProcessor::DeviceState **)(v9 + 16) == v6 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      goto LABEL_6;
    }
  }
  v9 = *(_QWORD *)(v5 + 8);
  v10 = v9;
LABEL_6:
  if ( v9 == v10 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
    v19 = 0LL;
    v11 = (MagnifierProcessor::DeviceState *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v11;
    v21 = (unsigned __int64)v11;
    if ( v11 )
    {
      v17[0] = v11;
      v13 = MagnifierProcessor::DeviceState::DeviceState(v11);
      v20 = v13;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v20);
      v19 = v13;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
      v12 = 0LL;
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<InputSiteHierarchyManager>::~MakeAllocator<InputSiteHierarchyManager>((void **)&v20);
      v12 = 2147942414LL;
    }
    if ( (int)v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        191LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magni"
                 "fierprocessor.cpp",
        (const char *)v12);
      __debugbreak();
    }
    v21 = *(unsigned int *)(a3 + 4);
    std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::_Try_emplace<unsigned __int64 const &,>(
      v5,
      (__int64)v17,
      (const unsigned __int8 *)&v21);
    v14 = v17[0];
    v15 = v19;
    if ( *(MagnifierProcessor::DeviceState **)(v17[0] + 24LL) != v19 )
    {
      v20 = v19;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v20);
      v20 = *(MagnifierProcessor::DeviceState **)(v14 + 24);
      *(_QWORD *)(v14 + 24) = v15;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
  }
  v19 = (MagnifierProcessor::DeviceState *)*(unsigned int *)(a3 + 4);
  std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::_Try_emplace<unsigned __int64 const &,>(
    v5,
    (__int64)v17,
    (const unsigned __int8 *)&v19);
  *a2 = *(_QWORD *)(v17[0] + 24LL);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
