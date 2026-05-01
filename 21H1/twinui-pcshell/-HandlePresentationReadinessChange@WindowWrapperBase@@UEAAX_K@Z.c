/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x18005BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005BD6C (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18005BF38 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005BF6C (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x1800746B0 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1802BA200 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this, __int64 a2)
{
  __int64 v4; // rdx
  char *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &SRWLock);
  v5 = (char *)this + 352;
  if ( *(_QWORD *)v5 && !*((_DWORD *)v5 + 2) )
    goto LABEL_14;
  if ( a2 != 31 )
  {
    if ( a2 == 36 )
    {
      v8 = 4LL;
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_8;
      v8 = 2LL;
    }
LABEL_7:
    WindowReadyState::WaitFlags::Clear(v5 + 8, v5, v8);
    goto LABEL_8;
  }
  v6 = v5 + 16;
  v7 = *((_QWORD *)v5 + 2);
  if ( v7 )
  {
    *v6 = v7 - 1;
    ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
      v5,
      v5 + 16);
    if ( *v6 )
      goto LABEL_8;
    v8 = 8LL;
    goto LABEL_7;
  }
  ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v5);
LABEL_8:
  v9 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    if ( !*((_DWORD *)v5 + 2) )
    {
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v5);
      v9 = *(_QWORD *)v5;
    }
    if ( v9 && !*((_DWORD *)v5 + 2) )
    {
      LOBYTE(v4) = 1;
      std::_Func_class<void,bool>::operator()(v5 + 40, v4);
    }
  }
LABEL_14:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
