/*
 * XREFs of _RtlpDeleteData@12 @ 0x4B2A93A9
 * Callers:
 *     _RtlDeleteAce@8 @ 0x4B2A9340 (_RtlDeleteAce@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char *__fastcall RtlpDeleteData(int a1, size_t a2, size_t a3)
{
  size_t v4; // esi
  size_t v5; // ecx
  char *result; // eax

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
    return (char *)memset(&result[a1], 0, a2);
  return result;
}
