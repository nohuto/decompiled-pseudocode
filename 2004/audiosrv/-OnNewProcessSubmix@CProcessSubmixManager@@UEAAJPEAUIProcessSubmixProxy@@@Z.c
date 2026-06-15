/*
 * XREFs of ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180036360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F090C (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixManager::OnNewProcessSubmix(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  const char *v3; // r9
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rsi
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rax
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IProcessSubmixProxy *v14; // [rsp+68h] [rbp+10h] BYREF
  struct IProcessSubmixProxy **v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v14 = a2;
  try
  {
    if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)a2 + 120LL))() )
      return 0LL;
    v16 = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, __int64 *))(*(_QWORD *)v14 + 80LL))(v14, &v16);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 232LL))(v16) )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      return 0LL;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v15 = &v14;
    v5 = (__int64 *)*((_QWORD *)this + 7);
    while ( v5 != *((__int64 **)this + 8) )
    {
      v6 = *v5;
      if ( *(_DWORD *)(*v5 + 12) == 1 )
      {
        if ( *(_DWORD *)(v6 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14) )
        {
          if ( *(_DWORD *)(*v5 + 8) )
          {
            v12 = *v5;
            if ( *(_DWORD *)(v12 + 8) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14) )
              lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
                &v15,
                v5);
          }
        }
        goto LABEL_26;
      }
      if ( *(_DWORD *)(*v5 + 12) == 2 )
      {
        if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14)
          || !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v14 + 112LL))(
                v14,
                *(unsigned int *)(*v5 + 8)) )
        {
          goto LABEL_26;
        }
LABEL_15:
        lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
          &v15,
          v5++);
      }
      else
      {
        if ( *(_DWORD *)(*v5 + 12) == 3 )
        {
          if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 176LL))(v14) )
            goto LABEL_26;
          v11 = *v5;
          if ( *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14) )
            goto LABEL_26;
          v10 = (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v14 + 112LL))(
                  v14,
                  *(unsigned int *)(*v5 + 8)) == 0;
        }
        else
        {
          if ( *(_DWORD *)(*v5 + 12) != 4 )
            goto LABEL_26;
          v7 = *(const WCHAR **)v6;
          v8 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 168LL))(v14);
          if ( CompareStringOrdinal(v7, -1, v8, -1, 1) != 2 )
            goto LABEL_26;
          v9 = *v5;
          v10 = *(_DWORD *)(v9 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 176LL))(v14);
        }
        if ( v10 )
          goto LABEL_15;
LABEL_26:
        ++v5;
      }
    }
    if ( this != (CProcessSubmixManager *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x266,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v3);
  }
  return result;
}
