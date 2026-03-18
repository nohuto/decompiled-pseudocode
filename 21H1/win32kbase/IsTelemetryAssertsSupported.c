/*
 * XREFs of IsTelemetryAssertsSupported @ 0x1C0051868
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTelemetryAssertsSupported()
{
  if ( qword_1C0258DA8 )
    return qword_1C0258DA8();
  else
    return 3221225659LL;
}
