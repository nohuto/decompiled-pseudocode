/*
 * XREFs of _RtlpDeleteData@12 @ 0x4B2A93A9
 * Callers:
 *     _RtlDeleteAce@8 @ 0x4B2A9340 (_RtlDeleteAce@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char *__fastcall RtlpDeleteData(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // esi
  int v5; // ecx
  char *result; // eax
  size_t v7; // [esp-4h] [ebp-Ch]

  v4 = a2;
  if ( a2 < a3 )
  {
    v5 = a1 - a2;
    do
    {
      *(_BYTE *)(v5 + v4) = *(_BYTE *)(v4 + a1);
      ++v4;
    }
    while ( v4 < a3 );
  }
  result = (char *)(a3 - a2);
  if ( a3 >= a2 )
  {
    LODWORD(v7) = a2;
    return (char *)memset(&result[a1], 0, v7);
  }
  return result;
}
