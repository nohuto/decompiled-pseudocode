/*
 * XREFs of _memchr @ 0x4B2F87A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  void *result; // eax
  unsigned __int8 *v4; // edx
  int v5; // ebx
  unsigned __int8 v6; // cl
  bool v7; // cf
  char *v8; // eax
  unsigned __int8 v9; // cl
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  result = (void *)MaxCount;
  if ( (_DWORD)MaxCount )
  {
    v4 = (unsigned __int8 *)Buf;
    LOBYTE(v5) = Val;
    if ( ((unsigned __int8)Buf & 3) != 0 )
    {
      do
      {
        v6 = *v4++;
        if ( (unsigned __int8)Val == v6 )
          return v4 - 1;
        result = (char *)result - 1;
        if ( !result )
          return result;
      }
      while ( ((unsigned __int8)v4 & 3) != 0 );
    }
    v7 = (unsigned int)result < 4;
    v8 = (char *)result - 4;
    if ( !v7 )
    {
      v5 = 16843009 * (unsigned __int8)Val;
      do
      {
        v10 = v5 ^ *(_DWORD *)v4;
        v4 += 4;
        if ( (((v10 + 2130640639) ^ ~v10) & 0x81010100) != 0 )
        {
          v11 = *((_DWORD *)v4 - 1);
          LOBYTE(v11) = Val ^ v11;
          if ( !(_BYTE)v11 )
            return v4 - 4;
          BYTE1(v11) ^= Val;
          if ( !BYTE1(v11) )
            return v4 - 3;
          v12 = HIWORD(v11);
          if ( (unsigned __int8)Val == (unsigned __int8)v12 )
            return v4 - 2;
          if ( (unsigned __int8)Val == BYTE1(v12) )
            return v4 - 1;
        }
        v7 = (unsigned int)v8 < 4;
        v8 -= 4;
      }
      while ( !v7 );
    }
    result = v8 + 4;
    if ( result )
    {
      while ( 1 )
      {
        v9 = *v4++;
        if ( (unsigned __int8)v5 == v9 )
          break;
        result = (char *)result - 1;
        if ( !result )
          return result;
      }
      return v4 - 1;
    }
  }
  return result;
}
