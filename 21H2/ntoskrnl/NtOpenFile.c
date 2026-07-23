/*
 * XREFs of NtOpenFile @ 0x14069AE70
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 *     RtlpSysVolTakeOwnership @ 0x140915FE8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           0LL,
           0,
           ShareAccess,
           1,
           OpenOptions,
           0LL,
           0,
           0,
           0LL,
           0,
           32,
           0LL);
}
