/*
 * XREFs of ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x180135300
 * Callers:
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800742B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x180135480 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     _AtmosCheck::PerformLicenseCheckHelperLegacy_::_1_::dtor$0 @ 0x180137858 (_AtmosCheck--PerformLicenseCheckHelperLegacy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (void)>::~function<void (void)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
