/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1406E5900
 * Callers:
 *     EtwpCancelTraceImageUnloadApc @ 0x14062E9B0 (EtwpCancelTraceImageUnloadApc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 32))();
}
