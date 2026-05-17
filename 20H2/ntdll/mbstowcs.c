/*
 * XREFs of mbstowcs @ 0x18008FFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18004EB80 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x180085410 (_errno.c)
 *     _mbstrlen @ 0x180095348 (_mbstrlen.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  int *v7; // rax
  int v8; // edx
  unsigned __int64 v9; // r8
  size_t v10; // rdx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    v11 = mbstrlen(Source);
    if ( (int)RtlMultiByteToUnicodeN(Dest, 2 * v3, (char *)&v11, (unsigned __int8 *)Source, v11 + 1) >= 0 )
    {
      v9 = (unsigned __int64)v11 >> 1;
      v11 = v9;
      v8 = v9;
      if ( !Dest[(int)v9 - 1] )
        return (int)v9 - 1;
    }
    else
    {
      v7 = errno();
      v8 = -1;
      *v7 = 42;
      *Dest = 0;
    }
    return v8;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( Source[v10] );
    return v10;
  }
}
