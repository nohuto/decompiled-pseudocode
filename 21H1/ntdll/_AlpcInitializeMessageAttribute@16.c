/*
 * XREFs of _AlpcInitializeMessageAttribute@16 @ 0x4B2E9E60
 * Callers:
 *     <none>
 * Callees:
 *     _AlpcGetHeaderSize@4 @ 0x4B2E9EE0 (_AlpcGetHeaderSize@4.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *(_DWORD *)HIDWORD(BufferSize) = HeaderSize;
  if ( HeaderSize > (unsigned int)BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->ValidAttributes = 0;
    Buffer->AllocatedAttributes = AttributeFlags;
  }
  return 0;
}
