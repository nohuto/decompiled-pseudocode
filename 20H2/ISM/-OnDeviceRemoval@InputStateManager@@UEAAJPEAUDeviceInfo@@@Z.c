/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180087480
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x18004A900 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800295F8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180086BFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180087EF4 (-clear@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180087F58 (-equal_range@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@Z @ 0x180088018 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  LPVOID v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  int v19; // eax
  _QWORD *v20; // r8
  _QWORD *v22; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v6 = wil::details::static_lazy<InputETW>::get(v5, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v6 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v6 + 1), 1LL) )
    {
      v25 = *((int *)a2 + 1);
      v26 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_1801C8CF3,
        v7,
        v8,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  for ( i = *((_QWORD *)this + 9); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 10) )
    {
      v11 = -2147467259;
      v12 = 2147500037LL;
      v13 = 398LL;
      goto LABEL_26;
    }
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
      break;
  }
  v4 = *(_QWORD *)(i + 8);
  v25 = v4;
  v10 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v4 + 40LL))(v4, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = *((_QWORD *)this + 10);
    while ( 1 )
    {
      i += 16LL;
      if ( i == v14 )
        break;
      *(_DWORD *)(i - 16) = *(_DWORD *)i;
      *(_QWORD *)(i - 8) = *(_QWORD *)(i + 8);
    }
    *((_QWORD *)this + 10) -= 16LL;
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::equal_range(
      (char *)this + 96,
      &v22,
      a2);
    v15 = v22;
    v16 = v22;
    v17 = v23;
    while ( v16 != v23 )
      v16 = (_QWORD *)*v16;
    v18 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v22 == (_QWORD *)*v18 && v23 == v18 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::clear((char *)this + 96);
    }
    else
    {
      while ( v15 != v17 )
      {
        v20 = v15;
        v15 = (_QWORD *)*v15;
        std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
          (char *)this + 96,
          &v26,
          v20);
      }
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            a2);
    v11 = v19;
    if ( v19 >= 0 )
    {
      v11 = 0;
      goto LABEL_27;
    }
    v12 = (unsigned int)v19;
    v13 = 391LL;
  }
  else
  {
    v12 = (unsigned int)v10;
    v13 = 379LL;
  }
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v12);
LABEL_27:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v11;
}
