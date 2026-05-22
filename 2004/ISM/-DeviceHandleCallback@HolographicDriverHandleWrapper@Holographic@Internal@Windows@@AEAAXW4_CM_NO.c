/*
 * XREFs of ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B1B8
 * Callers:
 *     ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x18015B2E0 (-DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandleStatus@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJXZ @ 0x180159C80 (-CheckHandleStatus@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJXZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180159DE8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x1801601AC (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1801603B4 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x1801613E4 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x1801666E0 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        int a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  HolographicDriverClientTrace *v7; // rcx
  const wchar_t *v8; // r8
  signed int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HolographicDriverClientTrace *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  HolographicDriverClientTrace *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned int)(a2 - 2);
  if ( !(_DWORD)v3 )
  {
    if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, v3) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v14,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::Log_Information_(v15, 0, L"Device Query Remove");
    }
    v9 = 4319;
    goto LABEL_19;
  }
  v4 = (unsigned int)(v3 - 1);
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
        return;
      if ( !HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, v5) )
        goto LABEL_8;
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v6,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      v8 = L"Device Remove Complete";
    }
    else
    {
      if ( !HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, v5) )
        goto LABEL_8;
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v10,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      v8 = L"Device Remove Pending";
    }
    HolographicDriverClientTrace::Log_Information_(v7, 0, v8);
LABEL_8:
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(a1, 1);
    v9 = 1617;
LABEL_19:
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle((RTL_SRWLOCK *)a1, v9);
    return;
  }
  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, v4) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v11,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::Log_Information_(v12, 0, L"Device Query Remove Failed");
  }
  if ( (unsigned int)Windows::Internal::Holographic::HolographicDriverHandleWrapper::CheckHandleStatus((RTL_SRWLOCK *)a1) == -2147020577 )
  {
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(a1, 1);
    v13 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(a1);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        794LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        (const char *)(unsigned int)v13);
      goto LABEL_8;
    }
  }
}
