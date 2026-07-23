/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1403F66E0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140715FB4 (SPCallServerHandleFileIntegrityUpdate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
