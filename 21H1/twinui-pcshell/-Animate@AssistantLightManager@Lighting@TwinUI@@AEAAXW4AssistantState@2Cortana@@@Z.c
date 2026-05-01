/*
 * XREFs of ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x18042B140
 * Callers:
 *     _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x180429F40 (_lambda_b1f3f535d4f0ba887956551c7aafec2d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A9AC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180200770 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??0?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18042A818 (--0-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::Animate(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  char v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  std::_Ref_count_base *v25; // [rsp+30h] [rbp-10h]
  __int64 v26; // [rsp+70h] [rbp+30h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v4 = *(__int64 **)(a1 + 40);
  v5 = *v4;
  v26 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v23,
      (_QWORD *)(v5 + 32));
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 16LL))(v24, v6);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &v26,
      v7,
      v8,
      v9);
    v5 = v26;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  v10 = 0;
  v11 = 0;
  do
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v12 = *(__int64 **)(a1 + 40);
    v13 = *v12;
    v26 = *v12;
    while ( (__int64 *)v13 != v12 )
    {
      std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        &v23,
        (_QWORD *)(v13 + 32));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 8LL))(v24, (unsigned int)v10, (unsigned int)a2);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v26,
        v14,
        v15,
        v16);
      v13 = v26;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
    ++v10;
    if ( !a2 )
    {
LABEL_17:
      v11 = 1;
      continue;
    }
    if ( a2 > 0 )
    {
      if ( a2 <= 3 )
      {
        v22 = 0;
        if ( v10 <= 600 )
          v22 = a2;
        a2 = v22;
      }
      else if ( a2 == 4 )
      {
        a2 = 0;
        if ( v10 <= 200 )
          a2 = 4;
      }
      else if ( a2 == 5 )
      {
        goto LABEL_17;
      }
    }
  }
  while ( !(unsigned __int8)wil::handle_wait(*(wil **)(a1 + 64), (void *)0x32) && !v11 );
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v17 = *(__int64 **)(a1 + 40);
  v18 = *v17;
  v26 = *v17;
  while ( (__int64 *)v18 != v17 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v23,
      (_QWORD *)(v18 + 32));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 16LL))(v24, 0LL);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &v26,
      v19,
      v20,
      v21);
    v18 = v26;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
}
