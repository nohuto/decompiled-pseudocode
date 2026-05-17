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
  errno_t result; // eax
  errno_t v5; // [esp-8h] [ebp-8h]

  result = SourceSize;
  if ( SourceSize )
  {
    if ( Destination && Source )
    {
      if ( DestinationSize >= SourceSize )
      {
        memmove(Destination, Source, SourceSize);
        return 0;
      }
      v5 = 34;
    }
    else
    {
      v5 = 22;
    }
    _invalid_parameter();
    return v5;
  }
  return result;
}
