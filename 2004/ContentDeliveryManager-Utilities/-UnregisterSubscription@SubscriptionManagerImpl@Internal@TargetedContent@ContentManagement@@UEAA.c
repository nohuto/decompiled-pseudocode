/*
 * XREFs of ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800459E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180038928 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180046BE4 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180046C9C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180046E28 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *a3)
{
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v3; // r14
  RTL_SRWLOCK *v6; // r15
  char *StringRawBuffer; // rax
  unsigned __int64 v8; // r8
  RTL_SRWLOCK *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  char *v12; // rbx
  char *v13; // rdi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v14; // rcx
  int v15; // eax
  char v16; // si
  char *i; // rsi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v18; // rcx
  int v19; // eax
  bool v20; // zf
  char v21; // r14
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  const char *v25; // r9
  __int64 result; // rax
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v27; // [rsp+20h] [rbp-88h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v28; // [rsp+28h] [rbp-80h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v29; // [rsp+30h] [rbp-78h]
  char v30[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v31; // [rsp+40h] [rbp-68h]
  RTL_SRWLOCK *v32; // [rsp+48h] [rbp-60h]
  void *v33[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v34; // [rsp+60h] [rbp-48h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v31 = -2LL;
  v3 = a3;
  v29 = a3;
  v6 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  v32 = v6;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v35 = 7LL;
  v34 = 0LL;
  LOWORD(v33[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&StringRawBuffer[2 * v8] );
  }
  else
  {
    v8 = 0LL;
  }
  try
  {
    std::wstring::assign(v33, StringRawBuffer, v8);
    v9 = this + 11;
    v10 = std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
            &this[11],
            v33);
    v11 = *(_QWORD *)v10;
    v12 = *(char **)(*(_QWORD *)v10 + 16LL);
    v13 = *(char **)(*(_QWORD *)v10 + 8LL);
    if ( v13 != v12 )
    {
      do
      {
        v14 = 0LL;
        v27 = 0LL;
        if ( *(_QWORD *)v13
          && (v15 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(**(_QWORD **)v13 + 24LL))(
                      *(_QWORD *)v13,
                      &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                      &v27),
              v14 = v27,
              v15 < 0)
          || (v16 = 1, v3 != v14) )
        {
          v16 = 0;
        }
        if ( v14 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( v16 )
          break;
        v13 += 8;
      }
      while ( v13 != v12 );
      if ( v13 != v12 )
      {
        for ( i = v13 + 8; i != v12; i += 8 )
        {
          v18 = 0LL;
          v28 = 0LL;
          if ( *(_QWORD *)i
            && (v19 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(**(_QWORD **)i + 24LL))(
                        *(_QWORD *)i,
                        &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                        &v28),
                v18 = v28,
                v19 < 0)
            || (v20 = v3 == v18, v21 = 1, !v20) )
          {
            v21 = 0;
          }
          if ( v18 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v18 + 16LL))(v18);
          }
          if ( !v21 )
          {
            v22 = (__int64 *)v13;
            v13 += 8;
            if ( v30 == i )
            {
              v23 = 0LL;
            }
            else
            {
              v23 = *(_QWORD *)i;
              *(_QWORD *)i = 0LL;
            }
            v24 = *v22;
            *v22 = v23;
            if ( v24 )
              (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v24 + 16LL))(v24, v22, 0LL);
          }
          v3 = v29;
        }
      }
    }
    std::vector<Microsoft::WRL::WeakRef>::erase(v11 + 8, v30, v13, v12);
    if ( ((*(_QWORD *)(v11 + 16) - *(_QWORD *)(v11 + 8)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v9,
        v33);
    if ( v35 >= 8 )
      operator delete(v33[0]);
    v35 = 7LL;
    v34 = 0LL;
    LOWORD(v33[0]) = 0;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x99,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v25);
  }
  return result;
}
