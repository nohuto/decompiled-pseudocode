/*
 * XREFs of _strcat_s @ 0x4B300030
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  int v3; // ecx
  char *v4; // esi
  char *v5; // edx
  char *v6; // edx
  char v7; // al
  errno_t v9; // [esp-4h] [ebp-Ch]

  if ( Destination && (v3 = SizeInBytes) != 0 )
  {
    v4 = (char *)HIDWORD(SizeInBytes);
    if ( !HIDWORD(SizeInBytes) )
      goto LABEL_14;
    v5 = Destination;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      v6 = &v5[-HIDWORD(SizeInBytes)];
      do
      {
        v7 = *v4;
        v4[(_DWORD)v6] = *v4;
        ++v4;
        if ( !v7 )
          break;
        --v3;
      }
      while ( v3 );
      if ( v3 )
        return 0;
      v9 = 34;
    }
    else
    {
LABEL_14:
      v9 = 22;
    }
    *Destination = 0;
    _invalid_parameter();
    return v9;
  }
  else
  {
    _invalid_parameter();
    return 22;
  }
}
