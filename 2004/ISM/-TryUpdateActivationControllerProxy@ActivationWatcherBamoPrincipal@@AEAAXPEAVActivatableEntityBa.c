/*
 * XREFs of ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBamoPrincipal@@_K@Z @ 0x180105124
 * Callers:
 *     ?UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@@Z @ 0x180105198 (-UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIF.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800461B8 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(
        ActivationWatcherBamoPrincipal *this,
        struct ActivatableEntityBamoPrincipal *a2,
        unsigned __int64 a3)
{
  char v4; // r8
  __int64 v5; // rdx
  void (__fastcall *v6)(char *, __int64); // rax
  ActivationWatcherBamoPrincipal *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  ActivationControllerBamoProxy::FromCookie((__int64 *)&v7, a3);
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 104LL))((char *)a2 + 8);
    v5 = *((_QWORD *)v7 + 1);
    v6 = *(void (__fastcall **)(char *, __int64))(v5 + 32);
    LOBYTE(v5) = v4;
    v6((char *)v7 + 8, v5);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v7);
}
