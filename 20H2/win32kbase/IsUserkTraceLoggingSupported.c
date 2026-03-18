/*
 * XREFs of IsUserkTraceLoggingSupported @ 0x1C00BF758
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserkTraceLoggingSupported()
{
  if ( qword_1C0250DD0 )
    return qword_1C0250DD0();
  else
    return 3221225659LL;
}
