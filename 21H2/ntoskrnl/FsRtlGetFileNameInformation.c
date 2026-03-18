/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1406E4910
 * Callers:
 *     EtwpCancelTraceImageUnloadApc @ 0x14062E9B0 (EtwpCancelTraceImageUnloadApc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
  else
    return 3221225659LL;
}
