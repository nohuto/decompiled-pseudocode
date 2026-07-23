/*
 * XREFs of __strset_s @ 0x4B2FFAB0
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl _strset_s(char *Destination, size_t DestinationSize, int Value)
{
  int v3; // eax
  char *i; // edx

  if ( Destination )
  {
    v3 = DestinationSize;
    if ( (_DWORD)DestinationSize )
    {
      for ( i = Destination; *i; *i++ = BYTE4(DestinationSize) )
      {
        if ( !--v3 )
          break;
      }
      if ( v3 )
        return 0;
      *Destination = 0;
    }
  }
  _invalid_parameter();
  return 22;
}
