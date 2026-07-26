/*
 * XREFs of NdisCopyFromNetBufferToNetBuffer @ 0x1C00AC8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00ADF8C (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 */

NDIS_STATUS __stdcall NdisCopyFromNetBufferToNetBuffer(
        PNET_BUFFER Destination,
        ULONG DestinationOffset,
        ULONG BytesToCopy,
        PNET_BUFFER Source,
        ULONG SourceOffset,
        PULONG BytesCopied)
{
  unsigned int CurrentMdlOffset; // r10d
  struct _MDL *CurrentMdl; // rdi
  struct _MDL *v8; // r11
  PULONG v9; // rbx
  unsigned __int64 v10; // r9
  NDIS_STATUS result; // eax

  CurrentMdlOffset = Source->CurrentMdlOffset;
  CurrentMdl = Source->CurrentMdl;
  v8 = Destination->CurrentMdl;
  v9 = BytesCopied;
  v10 = DestinationOffset + Destination->CurrentMdlOffset;
  BytesCopied = (PULONG)*BytesCopied;
  result = RtlCopyMdlToMdl(
             CurrentMdl,
             SourceOffset + CurrentMdlOffset,
             v8,
             v10,
             BytesToCopy,
             (unsigned __int64 *)&BytesCopied);
  *v9 = (unsigned int)BytesCopied;
  return result;
}
