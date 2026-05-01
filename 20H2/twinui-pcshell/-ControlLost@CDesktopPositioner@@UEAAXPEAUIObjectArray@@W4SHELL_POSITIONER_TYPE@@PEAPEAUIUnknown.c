/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803EACA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BD778 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802537FC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EFD68 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int i; // edi
  void (__fastcall *v9)(__int64, _QWORD, GUID *, struct IApplicationView **); // rbx
  const char *v10; // r9
  __int64 v11; // r8
  unsigned __int8 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rbx
  unsigned int v23; // [rsp+30h] [rbp-58h] BYREF
  struct IApplicationView *v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25[9]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  *a4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  for ( i = 0; i < v23; ++i )
  {
    v24 = 0LL;
    v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v9(v5, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v24);
    CDesktopPositioner::_PersistPosition((CDesktopPositioner *)(v6 - 136), v24);
    v11 = *(_QWORD *)(v6 + 176);
    if ( v11 )
    {
      v12 = 0;
      if ( v4 == 1 || v4 == 3 )
        v12 = 1;
      if ( !v12 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(*(_QWORD *)v11 + 88LL))(
                *(_QWORD *)(v6 + 176),
                v24);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x315,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v13);
      }
      try
      {
        v18 = **(_QWORD **)(v6 + 200);
        v25[0] = v18;
        while ( v18 != *(_QWORD *)(v6 + 200) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(v18 + 48) + 64LL))(
                 *(_QWORD *)(v18 + 48),
                 v24) )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD))(**(_QWORD **)(v18 + 48) + 32LL))(
                    *(_QWORD *)(v18 + 48),
                    v24,
                    v12 ^ 1u);
            if ( v17 >= 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 48) + 72LL))(*(_QWORD *)(v18 + 48)) )
              {
                v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 192) + 32LL))(
                        *(_QWORD *)(v6 + 192),
                        *(_QWORD *)(v18 + 48));
                if ( v19 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x325,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v19);
                v22 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
                        (_QWORD *)(v6 + 200),
                        v18,
                        v20,
                        v21);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22 + 6);
                std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)0x38);
                goto LABEL_23;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x323,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v17);
            }
          }
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
            v25,
            v14,
            v15,
            v16);
          v18 = v25[0];
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x32C,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          v10);
        v6 = a1;
        v4 = a3;
        v5 = a2;
        goto LABEL_19;
      }
LABEL_23:
      ;
    }
LABEL_19:
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  return result;
}
