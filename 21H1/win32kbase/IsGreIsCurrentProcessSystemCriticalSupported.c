/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C000B000
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C000A878 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x1C000AC40 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  if ( qword_1C0257910 )
    return qword_1C0257910();
  else
    return 3221225659LL;
}
