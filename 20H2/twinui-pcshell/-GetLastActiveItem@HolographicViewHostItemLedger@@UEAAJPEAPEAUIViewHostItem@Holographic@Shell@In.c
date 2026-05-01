/*
 * XREFs of ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180247F50
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@WBA@EAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800F63F0 (-GetLastActiveItem@HolographicViewHostItemLedger@@WBA@EAAJPEAPEAUIViewHostItem@Holographic@Shell.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180082FB4 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801671E0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180192548 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18024623C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     _LogEventWithViewHostItemData___0 @ 0x180247798 (_LogEventWithViewHostItemData___0.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@QEAV12@I@Z @ 0x180247AC4 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_ret.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@AEAAXXZ @ 0x180247E98 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicatio.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802484A0 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 *     ?attach@?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802488D0 (-attach@-$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wi.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicViewHostItemLedger::GetLastActiveItem(
        HolographicViewHostItemLedger *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  unsigned __int64 v4; // r14
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rdx
  HolographicViewHelpers *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v15; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  HolographicViewHelpers *v22; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  int v25; // [rsp+50h] [rbp-19h]
  unsigned int v26; // [rsp+58h] [rbp-11h] BYREF
  HolographicViewHelpers *v27[2]; // [rsp+60h] [rbp-9h] BYREF
  int v28; // [rsp+70h] [rbp+7h] BYREF
  __int64 v29[9]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v31; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+6Fh] BYREF
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v33; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 9);
  v6 = *v5;
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 24))(v5, &v34);
  v8 = v7;
  if ( v7 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v24,
      v34);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v26,
      (__int64)&v24,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::Iterator(
      (__int64)&v28,
      (__int64)&v24,
      v25);
    while ( v26 != v28 || v27[1] != (HolographicViewHelpers *)v29[1] )
    {
      v10 = v27[0];
      v22 = v27[0];
      if ( v27[0] )
        (*(void (__fastcall **)(HolographicViewHelpers *))(*(_QWORD *)v27[0] + 8LL))(v27[0]);
      if ( HolographicViewHelpers::IsApplicationViewHolographic(v10, v9) )
      {
        HolographicViewHostItemLedger::TryFindViewHostItem((char *)this + 16, &v21, v10);
        v11 = v21;
        if ( v21 )
        {
          v12 = v21;
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 80LL))(v21, &v31) >= 0 )
          {
            if ( (_BYTE)v31 )
            {
              if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 120LL))(v11, &v32) >= 0
                && (_DWORD)v32 == 1 )
              {
                wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>::attach(
                  &v33,
                  v11);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
                break;
              }
              if ( (*(int (__fastcall **)(HolographicViewHelpers *, unsigned __int64 *))(*(_QWORD *)v10 + 184LL))(
                     v10,
                     &v23) >= 0
                && v23 > v4 )
              {
                v4 = v23;
                v11 = 0LL;
                v21 = 0LL;
                wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>::attach(
                  &v33,
                  v12);
              }
            }
          }
        }
        if ( v11 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      ++v26;
      details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::GetCurrentObject(&v26);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v29);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v15 = v33;
    if ( v33 )
    {
      LogEventWithViewHostItemData___0((__int64)v33, v13);
      v33 = 0LL;
      *a2 = v15;
    }
    else
    {
      v16 = (_DWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                        v14,
                        _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)[1];
      if ( *v16 > 4u && tlgKeywordOn((__int64)v16, 0x400000000000LL) )
      {
        LODWORD(v31) = 0;
        v32 = (__int64)L"<none>";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v17,
          (unsigned __int8 *)dword_180509A6B,
          v18,
          v19,
          (const WCHAR **)&v32,
          (__int64)&v31);
      }
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
  return v8;
}
