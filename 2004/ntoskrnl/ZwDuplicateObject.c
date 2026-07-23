/*
 * XREFs of ZwDuplicateObject @ 0x1403F3D40
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14026F538 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406FFD94 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x14078DC94 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x140927D24 (SmKmFileInfoDuplicate.c)
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
