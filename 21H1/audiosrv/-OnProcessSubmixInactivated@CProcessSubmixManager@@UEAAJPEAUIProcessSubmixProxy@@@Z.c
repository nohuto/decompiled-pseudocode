/*
 * XREFs of ?OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F074C (_lambda_0f6133618d0c12f17131f09684aeafcf_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

__int64 __fastcall CProcessSubmixManager::OnProcessSubmixInactivated(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  const WCHAR *v6; // rdi
  const WCHAR *v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rdi
  struct IProcessSubmixProxy **v13; // [rsp+50h] [rbp+20h] BYREF
  struct IProcessSubmixProxy *v14; // [rsp+58h] [rbp+28h] BYREF

  v14 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v4 = (__int64 *)*((_QWORD *)this + 7);
  v13 = &v14;
  while ( v4 != *((__int64 **)this + 8) )
  {
    v5 = *v4;
    switch ( *(_DWORD *)(*v4 + 12) )
    {
      case 1:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14)
          && *(_DWORD *)(*v4 + 8) )
        {
          v11 = *v4;
          v9 = *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14);
LABEL_18:
          if ( !v9 )
            break;
LABEL_19:
          lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
            &v13,
            v4);
        }
        break;
      case 2:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14)
          && (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v14 + 112LL))(
               v14,
               *(unsigned int *)(*v4 + 8)) )
        {
          goto LABEL_19;
        }
        break;
      case 3:
        if ( *(_DWORD *)(v5 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14) )
        {
          v10 = *v4;
          if ( *(_DWORD *)(v10 + 8) != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14) )
          {
            v9 = (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v14 + 112LL))(
                   v14,
                   *(unsigned int *)(*v4 + 8)) == 0;
            goto LABEL_18;
          }
        }
        break;
      case 4:
        v6 = *(const WCHAR **)v5;
        v7 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 168LL))(v14);
        if ( CompareStringOrdinal(v6, -1, v7, -1, 1) == 2 )
        {
          v8 = *v4;
          v9 = *(_DWORD *)(v8 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 176LL))(v14);
          goto LABEL_18;
        }
        break;
    }
    ++v4;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
