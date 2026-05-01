/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18005AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005911C (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18005AFE0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18005BF38 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005BF6C (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 */

void __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v4; // di
  int *v5; // rcx
  char v6; // bp
  int v7; // r8d
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 + 368;
  v4 = 1;
  if ( !*(_QWORD *)(a1 + 368) )
  {
    v5 = (int *)(a1 + 376);
    goto LABEL_3;
  }
  v5 = (int *)(a1 + 376);
  if ( *(_DWORD *)(v3 + 8) )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_4:
  if ( a3 != 1 )
  {
    if ( !(_DWORD)a2 )
      goto LABEL_9;
    v7 = 1;
    goto LABEL_17;
  }
  if ( !(_DWORD)a2 )
  {
    if ( !*(_BYTE *)(v3 + 24) )
      goto LABEL_9;
    v5 = (int *)(v3 + 8);
    if ( (*(_BYTE *)(v3 + 8) & 1) == 0 )
      goto LABEL_9;
    v7 = 2;
LABEL_17:
    WindowReadyState::WaitFlags::Set(v5, v3, v7);
    goto LABEL_9;
  }
  v8 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v8 & 0xFFFFFFFE;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v3,
    &v8,
    v3 + 8);
  if ( *(_QWORD *)v3 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v3);
LABEL_9:
    if ( *(_QWORD *)v3 && !*(_DWORD *)(v3 + 8) )
      goto LABEL_12;
  }
  v4 = 0;
LABEL_12:
  if ( v6 != v4 )
  {
    LOBYTE(a2) = v4;
    std::_Func_class<void,bool>::operator()(v3 + 40, a2);
  }
}
