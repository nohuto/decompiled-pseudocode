/*
 * XREFs of _strncpy_s @ 0x4B300210
 * Callers:
 *     _splitpath_helper @ 0x4B2F721C (_splitpath_helper.c)
 *     __splitpath_s @ 0x4B2FF850 (__splitpath_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  char *v4; // edx
  rsize_t v5; // esi
  rsize_t v7; // ebx
  const char *v8; // edi
  char v9; // al
  char *v10; // edx
  char v11; // al
  errno_t v12; // [esp-4h] [ebp-14h]
  errno_t v13; // [esp-4h] [ebp-14h]
  char *v14; // [esp+Ch] [ebp-4h]

  v4 = Destination;
  v5 = MaxCount;
  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      _invalid_parameter();
      return 22;
    }
    return 0;
  }
  v7 = SizeInBytes;
  if ( !SizeInBytes )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  v8 = Source;
  if ( Source )
  {
    if ( MaxCount == -1 )
    {
      do
      {
        v9 = *v8;
        v8[Destination - Source] = *v8;
        ++v8;
        v5 = -1;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = Destination;
      do
      {
        v11 = v10[Source - Destination];
        *v10++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --v5;
      }
      while ( v5 );
      v14 = v10;
      v4 = Destination;
      if ( !v5 )
        *v14 = 0;
    }
    if ( v7 )
      return 0;
    if ( v5 == -1 )
    {
      v12 = 80;
      v4[SizeInBytes - 1] = 0;
      return v12;
    }
    v13 = 34;
  }
  else
  {
    v13 = 22;
  }
  *v4 = 0;
  _invalid_parameter();
  return v13;
}
