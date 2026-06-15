/*
 * XREFs of ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1400252BC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CAXPEAX@Z @ 0x14001EC40 (-_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CAXPEAX@Z.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x140022A38 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1400253B8 (-OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A634 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003ED44 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x140041038 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details_abi::SubscriptionList::OnSignaled(
        wil::details_abi::SubscriptionList *this,
        RTL_SRWLOCK *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rbp
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm0
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF

  AcquireSRWLockShared(a2);
  v4 = (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4;
  if ( a2 )
    ReleaseSRWLockShared(a2);
  v5 = 0LL;
  while ( v5 < v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    wil::critical_section::lock(this, &v13);
    wil::srwlock::lock_exclusive(a2, &v12);
    if ( v5 < v4 )
    {
      v8 = *((_QWORD *)this + 5);
      v9 = (_QWORD *)(v8 + 16 * v5);
      while ( 1 )
      {
        v10 = v5 + 1;
        if ( *v9 )
          break;
        v9 += 2;
        ++v5;
        if ( v10 >= v4 )
          goto LABEL_10;
      }
      v11 = *(_OWORD *)(v8 + 16 * v5++);
      v7 = *((_QWORD *)&v11 + 1);
      v6 = (void (__fastcall *)(__int64))v11;
    }
LABEL_10:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
    if ( v6 )
      v6(v7);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
}
