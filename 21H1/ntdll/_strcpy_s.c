/*
 * XREFs of _strcpy_s @ 0x4B3000B0
 * Callers:
 *     _RtlIncrementCorrelationVector@4 @ 0x4B3622A0 (_RtlIncrementCorrelationVector@4.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  int v3; // edx
  char *v4; // ecx
  char v5; // al
  errno_t v7; // [esp-4h] [ebp-Ch]

  if ( Destination && (v3 = SizeInBytes) != 0 )
  {
    v4 = (char *)HIDWORD(SizeInBytes);
    if ( !HIDWORD(SizeInBytes) )
    {
      v7 = 22;
LABEL_9:
      *Destination = 0;
      _invalid_parameter();
      return v7;
    }
    do
    {
      v5 = *v4;
      Destination[(_DWORD)v4 - HIDWORD(SizeInBytes)] = *v4;
      ++v4;
      if ( !v5 )
        break;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
      v7 = 34;
      goto LABEL_9;
    }
    return 0;
  }
  else
  {
    _invalid_parameter();
    return 22;
  }
}
