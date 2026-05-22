/*
 * XREFs of ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A031C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019F6E4 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C334 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A130 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18009E78C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B2A8 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801489BC (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x18019CF28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4455@Z @ 0x18019D2A4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@U3@@-$_tlgW.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019D84C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18019E548 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18019E548.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18019EAEC (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A018C (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredHotKey(
        HotKeyProcessor *this,
        int a2,
        int a3,
        int a4,
        int a5,
        _QWORD *a6,
        __int64 **a7,
        struct HotkeyClientRegistration **a8)
{
  int v8; // ebx
  __int64 **v9; // r13
  int v10; // edi
  HotKeyProcessor *v11; // r15
  int RegisteredClient; // r12d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 *v17; // r10
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rcx
  _QWORD **v21; // rax
  _QWORD *v22; // rdi
  volatile signed __int32 *v23; // r14
  __int64 v24; // rax
  __int16 v25; // r13
  std::_Ref_count_base *v26; // rsi
  _QWORD *v27; // rax
  __int16 v28; // r13
  _QWORD *v29; // rbx
  volatile signed __int32 *v30; // r15
  const struct MessageObjectID *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rcx
  char v34; // si
  struct HotkeyClientRegistration *v35; // rbx
  std::_Ref_count_base *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct HotkeyClientRegistration *v46; // [rsp+70h] [rbp-98h] BYREF
  int v47; // [rsp+78h] [rbp-90h]
  unsigned int v48; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v49; // [rsp+80h] [rbp-88h]
  std::_Ref_count_base *v50[2]; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+98h] [rbp-70h] BYREF
  int v52; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v53; // [rsp+A0h] [rbp-68h]
  int v54; // [rsp+A4h] [rbp-64h] BYREF
  int v55; // [rsp+A8h] [rbp-60h] BYREF
  int v56; // [rsp+ACh] [rbp-5Ch] BYREF
  int v57; // [rsp+B0h] [rbp-58h] BYREF
  int v58; // [rsp+B4h] [rbp-54h] BYREF
  HotKeyProcessor *v59; // [rsp+B8h] [rbp-50h]
  struct MessageObjectID *v60; // [rsp+C0h] [rbp-48h] BYREF
  std::_Ref_count_base *v61; // [rsp+C8h] [rbp-40h]
  _QWORD **v62; // [rsp+D0h] [rbp-38h] BYREF
  __int64 **v63; // [rsp+E0h] [rbp-28h]
  __int64 *v64; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int *v65; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD *v66; // [rsp+F8h] [rbp-10h]
  _QWORD **v67; // [rsp+100h] [rbp-8h]
  struct HotkeyClientRegistration **v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h] BYREF
  __int64 v70; // [rsp+118h] [rbp+10h] BYREF
  __int64 v71; // [rsp+120h] [rbp+18h] BYREF
  const char *v72; // [rsp+128h] [rbp+20h] BYREF
  __int64 v73; // [rsp+130h] [rbp+28h] BYREF
  __int64 v74; // [rsp+138h] [rbp+30h] BYREF
  __int64 v75; // [rsp+140h] [rbp+38h] BYREF
  const char *v76; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v77[2]; // [rsp+150h] [rbp+48h] BYREF
  std::_Ref_count_base *v78[2]; // [rsp+160h] [rbp+58h] BYREF
  std::_Ref_count_base *v79[2]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v80; // [rsp+180h] [rbp+78h] BYREF
  __int64 v81; // [rsp+188h] [rbp+80h]
  ULONG_PTR retaddr; // [rsp+1C0h] [rbp+B8h]

  v8 = a3;
  v9 = a7;
  v10 = a2;
  v68 = a8;
  v11 = this;
  v49 = a2;
  v59 = this;
  v48 = a2 & 0xF | ((unsigned __int16)a3 << 16);
  v53 = a4;
  v47 = a3;
  v63 = a7;
  RegisteredClient = 0;
  *(_OWORD *)v78 = 0LL;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    a7,
    (__int64 *)v78);
  if ( v78[1] )
    std::_Ref_count_base::_Decref(v78[1]);
  if ( (unsigned int)dword_180205478 > 5 && tlgKeywordOn((__int64)&dword_180205478, 0x40000LL) )
  {
    v74 = *((_QWORD *)v11 + 6);
    v75 = *((_QWORD *)v11 + 8);
    v76 = "Searching for hotkey";
    v51 = v10;
    v52 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v13,
      byte_1801D2364,
      v14,
      v15,
      (const unsigned __int16 **)&v76,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v75,
      (__int64)&v74);
  }
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    (__int64 **)v11 + 5,
    &v64,
    &v48);
  v18 = (__int64 *)*v17;
  if ( v64 == (__int64 *)*v17 )
    goto LABEL_92;
  v19 = v18[1];
  v20 = (__int64 *)*v17;
  if ( !*(_BYTE *)(v19 + 25) )
  {
    do
    {
      if ( *(_DWORD *)(v19 + 32) >= v48 )
      {
        v18 = (__int64 *)v19;
        v19 = *(_QWORD *)v19;
      }
      else
      {
        v19 = *(_QWORD *)(v19 + 16);
      }
    }
    while ( !*(_BYTE *)(v19 + 25) );
    v20 = (__int64 *)*v17;
  }
  if ( v18 == v20 || v48 < *((_DWORD *)v18 + 8) )
  {
    v65 = &v48;
    v18 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                        v17,
                        &v80,
                        v18,
                        v16,
                        &v65);
  }
  std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v62, (_QWORD ***)v18 + 5);
  v21 = v62;
  v46 = 0LL;
  v67 = v62;
  v22 = *v62;
  while ( 1 )
  {
    if ( v22 == v21 )
    {
      v9 = v63;
      v8 = v47;
      goto LABEL_91;
    }
    v23 = (volatile signed __int32 *)v22[3];
    if ( v23 )
    {
      _InterlockedIncrement(v23 + 2);
      v23 = (volatile signed __int32 *)v22[3];
    }
    v24 = v22[2];
    v81 = v24;
    *(_OWORD *)v50 = 0LL;
    if ( v23 )
    {
      _InterlockedIncrement(v23 + 2);
      v24 = v81;
    }
    v25 = *(_WORD *)(v24 + 24);
    v60 = (struct MessageObjectID *)v24;
    v26 = (std::_Ref_count_base *)v23;
    v61 = (std::_Ref_count_base *)v23;
    if ( (v25 & 0x200) != 0 )
      break;
LABEL_54:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v46);
    RegisteredClient = HotKeyProcessor::FindRegisteredClient(v11, v60, &v46);
    if ( RegisteredClient < 0 )
    {
      if ( RegisteredClient == -2147024882 )
        FailFastWithHR(-2147024882, retaddr, 0x203uLL);
      FailFastWithHR(RegisteredClient, retaddr, 0x203uLL);
      if ( v26 )
      {
        v36 = v26;
LABEL_70:
        std::_Ref_count_base::_Decref(v36);
      }
      goto LABEL_71;
    }
    v35 = v46;
    if ( v46 && *((_QWORD *)v46 + 13) )
    {
      v9 = v63;
      std::shared_ptr<CustomCursorApplication>::operator=(v63, &v60);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v46);
      RegisteredClient = 0;
      *v68 = v35;
      if ( (unsigned int)dword_180205478 > 5 && tlgKeywordOn((__int64)&dword_180205478, 0x40000LL) )
      {
        v8 = v47;
        v40 = *((_DWORD *)*v9 + 2);
        v41 = **v9;
        v69 = *((_QWORD *)v11 + 6);
        v70 = *((_QWORD *)v11 + 8);
        v54 = v49;
        v72 = "Registered hotkey found";
        v56 = v40;
        v55 = v47;
        v71 = v41;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v41,
          byte_1801D1FC3,
          v38,
          v39,
          (const unsigned __int16 **)&v72,
          (__int64)&v56,
          (__int64)&v71,
          (__int64)&v55,
          (__int64)&v54,
          (__int64)&v70,
          (__int64)&v69);
      }
      else
      {
        v8 = v47;
      }
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      if ( v50[1] )
        std::_Ref_count_base::_Decref(v50[1]);
      if ( v23 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
LABEL_91:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v46);
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        v42,
        v62);
      std::_Deallocate<16,0>(v62, (const struct std::nothrow_t *)0x20);
      v10 = v49;
LABEL_92:
      if ( *v9 && *((_BYTE *)*v9 + 40) && (*((_BYTE *)v11 + 120) & 1) != 0 )
      {
        *(_OWORD *)v79 = 0LL;
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v9,
          (__int64 *)v79);
        if ( v79[1] )
          std::_Ref_count_base::_Decref(v79[1]);
        if ( (unsigned int)dword_180205478 > 5 && tlgKeywordOn((__int64)&dword_180205478, 0x20000LL) )
        {
          v57 = v8;
          v73 = (__int64)"Registered HotKey was found, but was ignored because of KeyProcessingFlag_NoHotkeys flag.";
          v58 = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_180205478,
            byte_1801D22BD,
            v43,
            v44,
            (const unsigned __int16 **)&v73,
            (__int64)&v58,
            (__int64)&v57);
        }
      }
      return (unsigned int)RegisteredClient;
    }
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( v50[1] )
      std::_Ref_count_base::_Decref(v50[1]);
    if ( v23 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
    v22 = (_QWORD *)*v22;
    v21 = v67;
  }
  v27 = *(_QWORD **)(v24 + 48);
  v28 = v25 & 0x100;
  v66 = v27;
  v29 = (_QWORD *)*v27;
  while ( 1 )
  {
    if ( v29 == v27 )
    {
      v34 = 0;
LABEL_49:
      if ( v28 && !v34 && v50[0] )
        std::shared_ptr<CustomCursorApplication>::operator=(&v60, v50);
      v11 = v59;
      v26 = v61;
      goto LABEL_54;
    }
    v30 = (volatile signed __int32 *)v29[3];
    if ( v30 )
    {
      _InterlockedIncrement(v30 + 2);
      v30 = (volatile signed __int32 *)v29[3];
    }
    v77[0] = v29[2];
    v31 = (const struct MessageObjectID *)v77[0];
    v77[1] = v30;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v46);
    RegisteredClient = HotKeyProcessor::FindRegisteredClient(v59, v31, &v46);
    if ( RegisteredClient < 0 )
      break;
    if ( !v46 || !*((_QWORD *)v46 + 13) )
      goto LABEL_43;
    if ( v53 && a5 )
    {
      if ( *((_DWORD *)v46 + 4) == v53 && *((_DWORD *)v46 + 5) == a5 )
        goto LABEL_46;
      v32 = *a6 - *(_QWORD *)&GUID_NULL.Data1;
      if ( *a6 == *(_QWORD *)&GUID_NULL.Data1 )
        v32 = a6[1] - *(_QWORD *)GUID_NULL.Data4;
      if ( v32 )
      {
        v33 = *a6 - *(_QWORD *)((char *)v46 + 84);
        if ( *a6 == *(_QWORD *)((char *)v46 + 84) )
          v33 = a6[1] - *(_QWORD *)((char *)v46 + 92);
        if ( !v33 )
        {
LABEL_46:
          v34 = 1;
          std::shared_ptr<CustomCursorApplication>::operator=(&v60, v77);
          if ( v30 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v30);
          goto LABEL_49;
        }
      }
    }
    if ( v28 && !v50[0] )
      std::shared_ptr<CustomCursorApplication>::operator=(v50, v77);
LABEL_43:
    if ( v30 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v30);
    v29 = (_QWORD *)*v29;
    v27 = v66;
  }
  if ( RegisteredClient == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, 0x1D4uLL);
  FailFastWithHR(RegisteredClient, retaddr, 0x1D4uLL);
  if ( v30 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v30);
  if ( v23 )
  {
    v36 = (std::_Ref_count_base *)v23;
    goto LABEL_70;
  }
LABEL_71:
  if ( v50[1] )
    std::_Ref_count_base::_Decref(v50[1]);
  if ( v23 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v46);
  std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
    v37,
    v62);
  std::_Deallocate<16,0>(v62, (const struct std::nothrow_t *)0x20);
  return (unsigned int)RegisteredClient;
}
