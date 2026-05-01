/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180072DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180056B60 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56____::Invoke(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  CImmersiveApp *v4; // rdi
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL) + 408LL))(*(_QWORD *)(a1 + 48) + 112LL);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(CImmersiveApp **)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v5 + 176) )
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(v5 + 168) + 32LL))(**(_QWORD **)(v5 + 168), 0LL);
    v7 = 8;
    v8 = v3;
    CImmersiveApp::_ScheduleApplicationNotifications(v4, (const struct APP_CHANGE_INFO *const)&v7, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
