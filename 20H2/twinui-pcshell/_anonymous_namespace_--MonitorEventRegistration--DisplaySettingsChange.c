/*
 * XREFs of _anonymous_namespace_::MonitorEventRegistration::DisplaySettingsChange @ 0x180300F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::MonitorEventRegistration::DisplaySettingsChange(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  return 0LL;
}
