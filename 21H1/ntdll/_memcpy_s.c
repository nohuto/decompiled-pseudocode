/*
 * XREFs of _memcpy_s @ 0x4B2FFE80
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int v4; // edi
  size_t v6; // [esp-Ch] [ebp-10h]
  errno_t v7; // [esp-Ch] [ebp-10h]

  if ( !Source )
    return 0;
  HIDWORD(v6) = v4;
  if ( !Destination )
    goto LABEL_11;
  if ( HIDWORD(DestinationSize) && (unsigned int)DestinationSize >= (unsigned int)Source )
  {
    LODWORD(v6) = Source;
    memcpy(Destination, (const void *)HIDWORD(DestinationSize), v6);
    return 0;
  }
  LODWORD(v6) = DestinationSize;
  memset(Destination, 0, v6);
  if ( HIDWORD(DestinationSize) )
  {
    if ( (unsigned int)DestinationSize >= (unsigned int)Source )
      return 22;
    v7 = 34;
  }
  else
  {
LABEL_11:
    v7 = 22;
  }
  _invalid_parameter();
  return v7;
}
