/*
 * XREFs of _strncat_s @ 0x4B300120
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl strncat_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // esi
  char *v5; // edi
  rsize_t v7; // eax
  const char *v8; // ebx
  char *v9; // edx
  int v10; // edx
  char v11; // al
  rsize_t v12; // edi
  const char *v13; // ebx
  char v14; // al
  errno_t v15; // [esp-4h] [ebp-10h]
  errno_t v16; // [esp-4h] [ebp-10h]
  rsize_t MaxCounta; // [esp+20h] [ebp+14h]

  v4 = MaxCount;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_31:
      _invalid_parameter();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_31;
  }
  v7 = SizeInBytes;
  if ( !SizeInBytes )
    goto LABEL_31;
  v8 = Source;
  if ( MaxCount && !Source )
    goto LABEL_13;
  v9 = Destination;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v7;
  }
  while ( v7 );
  MaxCounta = v7;
  if ( !v7 )
  {
LABEL_13:
    v15 = 22;
LABEL_30:
    *v5 = 0;
    _invalid_parameter();
    return v15;
  }
  if ( v4 == -1 )
  {
    v10 = v9 - Source;
    do
    {
      v11 = *v8;
      v8[v10] = *v8;
      ++v8;
      if ( !v11 )
        break;
      --MaxCounta;
    }
    while ( MaxCounta );
  }
  else
  {
    if ( !v4 )
      goto LABEL_25;
    v12 = v7;
    v13 = (const char *)(Source - v9);
    do
    {
      v14 = v9[(_DWORD)v13];
      *v9++ = v14;
      if ( !v14 )
        break;
      if ( !--v12 )
        break;
      --v4;
    }
    while ( v4 );
    MaxCounta = v12;
    v5 = Destination;
    if ( !v4 )
LABEL_25:
      *v9 = 0;
  }
  if ( MaxCounta )
    return 0;
  if ( v4 != -1 )
  {
    v15 = 34;
    goto LABEL_30;
  }
  v16 = 80;
  v5[SizeInBytes - 1] = 0;
  return v16;
}
