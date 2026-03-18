/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C00BCF20
 * Callers:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C00BC78C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  if ( qword_1C0251950 )
    return qword_1C0251950();
  else
    return 3221225659LL;
}
