/*
 * XREFs of _strlen @ 0x4B2F9CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl strlen(const char *Str)
{
  const char *v1; // ecx
  size_t result; // rax
  int v4; // eax

  v1 = Str;
  if ( ((unsigned __int8)Str & 3) == 0 )
    goto LABEL_4;
  do
  {
    if ( !*v1++ )
    {
LABEL_9:
      LODWORD(result) = v1 - 1 - Str;
      return result;
    }
  }
  while ( ((unsigned __int8)v1 & 3) != 0 );
  while ( 1 )
  {
    do
    {
LABEL_4:
      HIDWORD(result) = *(_DWORD *)v1 + 2130640639;
      LODWORD(result) = HIDWORD(result) ^ ~*(_DWORD *)v1;
      v1 += 4;
    }
    while ( (result & 0x81010100) == 0 );
    v4 = *((_DWORD *)v1 - 1);
    if ( !(_BYTE)v4 )
      break;
    if ( !BYTE1(v4) )
    {
      LODWORD(result) = v1 - 3 - Str;
      return result;
    }
    if ( (v4 & 0xFF0000) == 0 )
    {
      LODWORD(result) = v1 - 2 - Str;
      return result;
    }
    if ( (v4 & 0xFF000000) == 0 )
      goto LABEL_9;
  }
  LODWORD(result) = v1 - 4 - Str;
  return result;
}
