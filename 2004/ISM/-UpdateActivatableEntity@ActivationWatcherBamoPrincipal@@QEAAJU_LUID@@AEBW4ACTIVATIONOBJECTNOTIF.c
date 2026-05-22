/*
 * XREFs of ?UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@@Z @ 0x180105198
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A5B0 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800462F0 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBamoPrincipal@@_K@Z @ 0x180105124 (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationWatcherBamoPrincipal::UpdateActivatableEntity(
        ActivationWatcherBamoPrincipal *this,
        struct _LUID a2,
        const enum ACTIVATIONOBJECTNOTIFICATION_ACTION *a3)
{
  const char *v4; // r9
  __int64 v5; // rdx
  ActivationWatcherBamoPrincipal *v6; // rcx
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct ActivatableEntityBamoPrincipal *v10; // [rsp+78h] [rbp+10h] BYREF

  v8[0] = off_1801B2C70;
  v8[1] = a2;
  v8[7] = v8;
  ActivationWatcherBamoPrincipal::find_and_return_if((__int64)this, &v10, (__int64)v8);
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      48LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
      v4);
    __debugbreak();
  }
  v5 = (unsigned int)(*(_DWORD *)a3 - 7);
  if ( *(_DWORD *)a3 == 7 )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    if ( *(_DWORD *)a3 != 8 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        59LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        (const char *)0x80004001LL);
      __debugbreak();
    }
    v5 = 0LL;
  }
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v10 + 1) + 112LL))((char *)v10 + 8, v5);
  ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(v6, v10, *((_QWORD *)v10 + 12));
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v10);
  return 0LL;
}
