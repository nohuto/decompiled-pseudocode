/*
 * XREFs of ??$try_copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEBA_NPEAPEAUIApplicationView@@@Z @ 0x180295660
 * Callers:
 *     ?GetPendingSelectedView@ViewGroup@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180296920 (-GetPendingSelectedView@ViewGroup@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetSelectedView@ViewGroup@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1802969E0 (-GetSelectedView@ViewGroup@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::try_copy_to<IApplicationView>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    return 1;
  }
  else
  {
    *a2 = 0LL;
    return 0;
  }
}
