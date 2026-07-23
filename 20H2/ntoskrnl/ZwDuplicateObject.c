/*
 * XREFs of ZwDuplicateObject @ 0x1403F88F0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1402E1718 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406D3078 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x14079A3D4 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x14092DB4C (SmKmFileInfoDuplicate.c)
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
