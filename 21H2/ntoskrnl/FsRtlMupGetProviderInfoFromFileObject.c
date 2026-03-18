/*
 * XREFs of FsRtlMupGetProviderInfoFromFileObject @ 0x14092E240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderInfoFromFileObject(
        PFILE_OBJECT pFileObject,
        ULONG Level,
        PVOID pBuffer,
        PULONG pBufferSize)
{
  if ( pFsRtlpMupCalls )
    return (*(__int64 (__fastcall **)(PFILE_OBJECT, ULONG, PVOID, PULONG))pFsRtlpMupCalls)(
             pFileObject,
             Level,
             pBuffer,
             pBufferSize);
  else
    return -1073741637;
}
