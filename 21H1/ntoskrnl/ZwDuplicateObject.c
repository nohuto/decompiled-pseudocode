/*
 * XREFs of ZwDuplicateObject @ 0x1403F2AB0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1402DE8C8 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406DD13C (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x14078BDC4 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x140926A74 (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
