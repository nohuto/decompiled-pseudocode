/*
 * XREFs of IsUserkTraceLoggingSupported @ 0x1C0051894
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserkTraceLoggingSupported()
{
  if ( qword_1C0258D90 )
    return qword_1C0258D90();
  else
    return 3221225659LL;
}
