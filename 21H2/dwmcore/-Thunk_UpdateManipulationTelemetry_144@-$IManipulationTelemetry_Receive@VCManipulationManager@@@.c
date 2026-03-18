/*
 * XREFs of ?Thunk_UpdateManipulationTelemetry_144@?$IManipulationTelemetry_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180180750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulationTelemetry_Receive<CManipulationManager>::Thunk_UpdateManipulationTelemetry_144(
        __int64 a1,
        __int64 **a2)
{
  __int64 v2; // rbx

  v2 = **a2;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, a2[1]);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
