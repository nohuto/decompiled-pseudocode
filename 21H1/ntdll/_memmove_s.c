/*
 * XREFs of _memmove_s @ 0x4B2FFF00
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int v4; // esi
  errno_t result; // eax
  size_t v6; // [esp-8h] [ebp-8h]
  errno_t v7; // [esp-8h] [ebp-8h]

  result = (errno_t)Source;
  if ( Source )
  {
    HIDWORD(v6) = v4;
    if ( Destination && HIDWORD(DestinationSize) )
    {
      if ( (unsigned int)DestinationSize >= (unsigned int)Source )
      {
        LODWORD(v6) = Source;
        memmove(Destination, (const void *)HIDWORD(DestinationSize), v6);
        return 0;
      }
      v7 = 34;
    }
    else
    {
      v7 = 22;
    }
    _invalid_parameter();
    return v7;
  }
  return result;
}
