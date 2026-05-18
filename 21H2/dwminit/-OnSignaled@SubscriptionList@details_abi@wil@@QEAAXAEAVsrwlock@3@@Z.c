/*
 * XREFs of ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800056D8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800061C0 (-_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KP.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z @ 0x1800061F0 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CAXPEAX@Z @ 0x180006300 (-_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CAXPEAX@Z.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800064D0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180007D80 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::SubscriptionList::OnSignaled(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // r15
  __int64 v7; // r12
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  WORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm0
  LPCRITICAL_SECTION v12; // [rsp+60h] [rbp+30h] BYREF
  void *v13; // [rsp+68h] [rbp+38h] BYREF

  AcquireSRWLockShared(SRWLock);
  v4 = (*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
  if ( SRWLock )
  {
    v13 = ReleaseSRWLockShared;
    v12 = (LPCRITICAL_SECTION)SRWLock;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v13, &v12);
  }
  v5 = 0LL;
  while ( v5 < v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    EnterCriticalSection(lpCriticalSection);
    AcquireSRWLockExclusive(SRWLock);
    if ( v5 < v4 )
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      v9 = &DebugInfo->Type + 8 * v5;
      while ( 1 )
      {
        v10 = v5 + 1;
        if ( *(_QWORD *)v9 )
          break;
        v9 += 8;
        ++v5;
        if ( v10 >= v4 )
          goto LABEL_10;
      }
      v11 = *((_OWORD *)&DebugInfo->Type + v5++);
      v7 = *((_QWORD *)&v11 + 1);
      v6 = (void (__fastcall *)(__int64))v11;
    }
LABEL_10:
    if ( SRWLock )
    {
      v13 = ReleaseSRWLockExclusive;
      v12 = (LPCRITICAL_SECTION)SRWLock;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v13, &v12);
    }
    if ( v6 )
      v6(v7);
    if ( lpCriticalSection )
    {
      v13 = LeaveCriticalSection;
      v12 = lpCriticalSection;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v13, &v12);
    }
  }
}
