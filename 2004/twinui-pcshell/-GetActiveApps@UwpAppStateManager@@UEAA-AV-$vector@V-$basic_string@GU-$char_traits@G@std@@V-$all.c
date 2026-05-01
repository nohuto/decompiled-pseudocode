/*
 * XREFs of ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1804598E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006869C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18008CA6C (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x180458A10 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpAppStateManager::GetActiveApps(RTL_SRWLOCK *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  RTL_SRWLOCK *v6; // r14
  __int64 *Ptr; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-18h]
  _QWORD *v15; // [rsp+30h] [rbp-10h]
  _QWORD *v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = a2;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v6 = a1 + 6;
  AcquireSRWLockShared(a1 + 6);
  Ptr = (__int64 *)a1[7].Ptr;
  v8 = *Ptr;
  v16 = (_QWORD *)*Ptr;
  while ( (__int64 *)v8 != Ptr )
  {
    if ( v5 == v4 )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&v13, v4);
      v5 = v15;
      v4 = v14;
    }
    else
    {
      std::wstring::wstring((__int64)v4);
      v4 += 4;
      v14 = v4;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&v16,
      v9,
      v10,
      v11);
    v8 = (__int64)v16;
  }
  *a2 = v13;
  a2[1] = v4;
  a2[2] = v5;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  std::vector<std::wstring>::_Tidy(&v13);
  return a2;
}
