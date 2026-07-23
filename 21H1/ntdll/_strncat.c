/*
 * XREFs of _strncat @ 0x4B2F9D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strncat(char *Destination, const char *Source, size_t Count)
{
  unsigned int v3; // ecx
  char *v4; // edi
  int v6; // eax
  int v7; // eax
  char *v8; // edi
  const char *v9; // esi
  char v10; // bl
  unsigned int v11; // ecx
  int v12; // edx
  char v13; // dl
  char *result; // eax
  int v15; // eax

  v3 = Count;
  if ( !(_DWORD)Count )
    return Destination;
  v4 = Destination;
  if ( ((unsigned __int8)Destination & 3) == 0 )
    goto LABEL_5;
  do
  {
    if ( !*v4++ )
    {
LABEL_10:
      v8 = v4 - 1;
      goto LABEL_14;
    }
  }
  while ( ((unsigned __int8)v4 & 3) != 0 );
  while ( 1 )
  {
    do
    {
LABEL_5:
      v6 = (*(_DWORD *)v4 + 2130640639) ^ ~*(_DWORD *)v4;
      v4 += 4;
    }
    while ( (v6 & 0x81010100) == 0 );
    v7 = *((_DWORD *)v4 - 1);
    if ( !(_BYTE)v7 )
      break;
    if ( !BYTE1(v7) )
    {
      v8 = v4 - 3;
      goto LABEL_14;
    }
    if ( (v7 & 0xFF0000) == 0 )
    {
      v8 = v4 - 2;
      goto LABEL_14;
    }
    if ( (v7 & 0xFF000000) == 0 )
      goto LABEL_10;
  }
  v8 = v4 - 4;
LABEL_14:
  v9 = Source;
  if ( ((unsigned __int8)Source & 3) == 0 )
  {
    v10 = Count;
    v11 = (unsigned int)Count >> 2;
    if ( (unsigned int)Count >> 2 )
      goto LABEL_28;
LABEL_21:
    v3 = v10 & 3;
    if ( (v10 & 3) != 0 )
    {
      while ( 1 )
      {
        v13 = *v9++;
        *v8++ = v13;
        if ( !v13 )
          break;
        if ( !--v3 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      *v8 = v3;
    }
    return Destination;
  }
  do
  {
    LOBYTE(v12) = *v9++;
    if ( !(_BYTE)v12 )
    {
LABEL_26:
      *v8 = v12;
      return Destination;
    }
    *v8++ = v12;
    if ( !--v3 )
      goto LABEL_24;
  }
  while ( ((unsigned __int8)v9 & 3) != 0 );
  v10 = v3;
  v11 = v3 >> 2;
  if ( !v11 )
    goto LABEL_21;
  while ( 1 )
  {
LABEL_28:
    v15 = (*(_DWORD *)v9 + 2130640639) ^ ~*(_DWORD *)v9;
    v12 = *(_DWORD *)v9;
    v9 += 4;
    if ( (v15 & 0x81010100) == 0 )
      goto LABEL_27;
    if ( !(_BYTE)v12 )
      goto LABEL_26;
    if ( !BYTE1(v12) )
      break;
    if ( (v12 & 0xFF0000) == 0 )
    {
      *(_WORD *)v8 = v12;
      result = Destination;
      v8[2] = 0;
      return result;
    }
    if ( (v12 & 0xFF000000) == 0 )
    {
      *(_DWORD *)v8 = v12;
      return Destination;
    }
LABEL_27:
    *(_DWORD *)v8 = v12;
    v8 += 4;
    if ( !--v11 )
      goto LABEL_21;
  }
  *(_WORD *)v8 = (unsigned __int8)v12;
  return Destination;
}
