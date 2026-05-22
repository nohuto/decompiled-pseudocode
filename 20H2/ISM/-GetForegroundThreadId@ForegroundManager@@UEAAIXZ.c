/*
 * XREFs of ?GetForegroundThreadId@ForegroundManager@@UEAAIXZ @ 0x1801045F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800462A0 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ForegroundManager::GetForegroundThreadId(ForegroundManager *this)
{
  unsigned int v1; // ebx
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+70h] [rbp+8h] BYREF

  v3[0] = off_1801B2CA0;
  v3[7] = v3;
  ActivationWatcherBamoPrincipal::find_and_return_if(*((_QWORD *)this + 20), &v4, (__int64)v3);
  v1 = 0;
  if ( v4 )
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 88LL))(v4 + 8);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v4);
  return v1;
}
