/*
 * XREFs of ?RuntimeClassInitialize@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18031E5E4
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIApplicationViewChangeListener@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x1803180E8 (--$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAU.c)
 *     ??$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveShellHookNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x18031819C (--$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveS.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x180318D9C (--$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 */

__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::RuntimeClassInitialize(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  try
  {
    v3 = wil::com_weak_query<IApplicationViewChangeListener * &>(&v10, &v9);
    v4 = *v3;
    *v3 = 0LL;
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           v6);
  }
  return result;
}
