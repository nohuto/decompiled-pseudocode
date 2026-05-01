/*
 * XREFs of ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x18045D2C4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::Threading::ITimerElapsedHandler::_)(Windows::System::Threading::IThreadPoolTimer__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::Invoke @ 0x1800BB950 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--Threading_ea_1800BB950.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800505C4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@X@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BB72C (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 *     ??9?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x1800BB894 (--9-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F8394 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180455BCC (-Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x18045DBC4 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::OnTerminateTimer(Win32AppStateManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r14
  const struct _tlgProvider_t *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r9
  __int64 v20; // [rsp+48h] [rbp-10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+60h] BYREF

  v2 = AppUsageTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
  {
    v21 = (__int64)L"Termination timer event fired";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v2,
      (unsigned __int8 *)dword_1805267C5,
      0LL,
      v3,
      (const WCHAR **)&v21);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  v4 = (__int64 *)*((_QWORD *)this + 10);
  v5 = *v4;
  v22 = *v4;
  v21 = (__int64)v4;
  if ( !std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>::operator!=(
          &v22,
          &v21) )
  {
LABEL_20:
    if ( *((_QWORD *)this + 19) )
    {
      v18 = AppUsageTelemetry::Provider(v6);
      if ( *(_DWORD *)v18 > 5u )
      {
        v21 = (__int64)L"Canceling termination timer on completing callback";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v18,
          (unsigned __int8 *)dword_1805267C5,
          0LL,
          v19,
          (const WCHAR **)&v21);
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 19);
    }
    goto LABEL_24;
  }
  do
  {
    v8 = (_QWORD *)(v5 + 32);
    v9 = *(_DWORD *)(v5 + 64);
    *(_DWORD *)(v5 + 64) = v9 + 1;
    if ( v9 > *((_DWORD *)this + 41) )
    {
      v13 = 0;
      if ( *(_QWORD *)(v5 + 56) >= 8uLL )
        v8 = (_QWORD *)*v8;
      v14 = AppUsageTelemetry::Provider(v6);
      if ( *(_DWORD *)v14 <= 5u || !tlgKeywordOn((__int64)v14, 0x400000000000LL) )
        goto LABEL_17;
      v23 = 0x2000000LL;
      LODWORD(v21) = v9;
      v24 = (__int64)v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v15,
        (unsigned __int8 *)dword_180526B4D,
        v16,
        v17,
        (const WCHAR **)&v24,
        (__int64)&v21,
        (__int64)&v23);
    }
    else
    {
      LOBYTE(v7) = v9 == *((_DWORD *)this + 41) || *(_DWORD *)(v5 + 68) == 1;
      v13 = Win32AppStateManager::TerminateAppOnce(this, v5 + 32, v7);
    }
    if ( v13 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v22,
        v10,
        v11,
        v12);
      v5 = v22;
      goto LABEL_18;
    }
LABEL_17:
    v5 = *std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>,void>(
            (__int64)this + 80,
            &v20,
            v5);
    v22 = v5;
LABEL_18:
    v21 = *((_QWORD *)this + 10);
  }
  while ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>::operator!=(
            &v22,
            &v21) );
  if ( !v13 )
    goto LABEL_20;
LABEL_24:
  if ( this != (Win32AppStateManager *)-56LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
}
