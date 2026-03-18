/*
 * XREFs of IsTelemetryAssertsSupported @ 0x1C005F3C0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTelemetryAssertsSupported()
{
  if ( qword_1C0252DE8 )
    return qword_1C0252DE8();
  else
    return 3221225659LL;
}
