/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800AFBE0
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800AFFA8 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B105C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B1BE4 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18000A3F0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_KU-$hash.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018FF0 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023E24 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800242FC (--$emplace@AEA_KUTargetingInfo@Win32kInterop@@@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kIn.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x180041950 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 *     ??8?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x180047BC0 (--8-$_List_const_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAULegacyDeviceInfo@@.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180086D10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x18008722C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800AE7C0 (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VInputContext@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVInputContext@@XZ @ 0x1800AEB60 (--B-$ComPtrRef@V-$ComPtr@VInputContext@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVInput.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800AEC40 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x1800B3E20 (-erase@-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CB_KUTarg.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800B3E9C (-find@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // r12
  char v17; // r15
  unsigned int v18; // eax
  _BYTE *v19; // rdx
  __int64 v20; // r8
  char v21; // cl
  char v22; // cl
  __int64 v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 appended; // rax
  _QWORD *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v35[2]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v36; // [rsp+68h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  _QWORD *v39; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v40; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v41; // [rsp+E8h] [rbp+77h]
  __int64 v42; // [rsp+F0h] [rbp+7Fh]

  v42 = a4;
  v41 = a3;
  v39 = (_QWORD *)a1;
  v8 = InputTraceLogging::Provider(a1);
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1024LL) )
  {
    LODWORD(v40) = a2[1];
    v34 = (__int64)InputTraceLogging::InputTypeToString(*a2);
    v33 = *((_QWORD *)a2 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v9,
      byte_1801CA46E,
      v9,
      v10,
      (__int64)&v33,
      (const unsigned __int16 **)&v34,
      (__int64)&v40);
  }
  v40 = (unsigned int)a2[1] | (unsigned __int64)((__int64)*a2 << 32);
  std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::lower_bound(
    (_QWORD *)(a1 + 192),
    &v34,
    (unsigned __int8 *)&v40);
  v33 = a1 + 200;
  v11 = v34;
  if ( v34 == *(_QWORD *)(a1 + 200) )
  {
    if ( *a2 != 4096 )
      goto LABEL_16;
    v37 = 0LL;
    v36 = 0LL;
    v11 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::emplace<unsigned __int64 &,Win32kInterop::TargetingInfo>(
                       a1 + 192,
                       (__int64)v35);
    Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::TargetingInfo *)&v36);
    *(_WORD *)(v11 + 40) = 257;
  }
  if ( !*(_BYTE *)(v11 + 41) || !*(_BYTE *)(v11 + 40) )
    goto LABEL_14;
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry((__int64 *)(v11 + 32));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v11 + 24));
  std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::find(
    a1 + 64,
    &v34,
    a2 + 1);
  v35[0] = *(__int64 **)(a1 + 72);
  if ( std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>::operator==(
         &v34,
         v35) )
  {
LABEL_16:
    std::_Func_class<void,IInputTarget *>::operator()(a4, 0LL);
    goto LABEL_41;
  }
  v35[0] = (__int64 *)(v11 + 24);
  v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<InputContext>>::operator InputContext * *(v35);
  v13 = InputContext::Create((struct InputContext **)v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1678LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v40 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 48) + 64LL))(
         *(_QWORD *)(a1 + 48),
         *(_QWORD *)(v34 + 24),
         *(_QWORD *)(v11 + 24),
         a1 + 8,
         &v40) >= 0 )
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(v11 + 32), &v40);
  *(_BYTE *)(v11 + 40) = 0;
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(&v40);
LABEL_14:
  v40 = *(_QWORD *)(v11 + 24);
  v14 = *(_QWORD *)(a3 + 56);
  if ( !v14 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 16LL))(v14, &v40);
  v16 = 0;
  v17 = 0;
  if ( (*a2 & 0x200003B) != 0 )
  {
    v16 = 1;
    v17 = 1;
    v18 = a2[53];
    if ( v18 )
    {
      v19 = a2 + 57;
      v20 = v18;
      do
      {
        v21 = 0;
        if ( (*v19 & 4) == 0 )
          v21 = v17;
        v17 = v21;
        v22 = 0;
        if ( (*v19 & 2) == 0 )
          v22 = v16;
        v16 = v22;
        v19 += 144;
        --v20;
      }
      while ( v20 );
    }
  }
  v23 = *(_QWORD *)(v11 + 32);
  if ( v23 )
  {
    v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 24LL))(v23, a2);
    if ( v24 != -2147417853 )
    {
      v25 = retaddr;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1736LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
    }
  }
  else
  {
    std::_Func_class<void,IInputTarget *>::operator()(a4, *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL));
  }
  if ( v16 )
  {
    appended = std::_Fnv1a_append_bytes((__int64)v25, (const unsigned __int8 *const)(v11 + 16), 8uLL);
    v27 = v39;
    v28 = 2 * (appended & v39[30]);
    v29 = v39[27];
    if ( *(_QWORD *)(v29 + 16 * (appended & v39[30]) + 8) == v11 )
    {
      if ( *(_QWORD *)(v29 + 16 * (appended & v39[30])) == v11 )
      {
        v30 = (__int64)(v39 + 25);
        *(_QWORD *)(v29 + 16 * (appended & v39[30])) = v39[25];
        *(_QWORD *)(v27[27] + 8 * v28 + 8) = v27[25];
LABEL_38:
        std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::erase(v30, &v39, v11);
        goto LABEL_41;
      }
      *(_QWORD *)(v29 + 16 * (appended & v39[30]) + 8) = *(_QWORD *)(v11 + 8);
    }
    else if ( *(_QWORD *)(v29 + 16 * (appended & v39[30])) == v11 )
    {
      *(_QWORD *)(v29 + 16 * (appended & v39[30])) = *(_QWORD *)v11;
    }
    v30 = v33;
    goto LABEL_38;
  }
  if ( v17 )
    *(_BYTE *)(v11 + 40) = 1;
LABEL_41:
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a3, v15);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4, v31);
}
