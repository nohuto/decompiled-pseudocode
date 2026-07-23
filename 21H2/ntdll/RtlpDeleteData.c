/*
 * XREFs of RtlpDeleteData @ 0x180079830
 * Callers:
 *     RtlDeleteAce @ 0x1800797B0 (RtlDeleteAce.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

void *__fastcall RtlpDeleteData(__int64 a1, unsigned int a2, unsigned int a3)
{
  size_t v3; // r9
  unsigned int v5; // r10d
  char *v6; // rcx
  char v7; // al
  __int64 v8; // rdx
  void *result; // rax

  v3 = a2;
  v5 = a2;
  if ( a2 < a3 )
  {
    v6 = (char *)(a2 + a1);
    do
    {
      v7 = *v6;
      v8 = v5 - (unsigned int)v3;
      ++v5;
      ++v6;
      *(_BYTE *)(v8 + a1) = v7;
    }
    while ( v5 < a3 );
  }
  result = (void *)(a3 - (unsigned int)v3);
  if ( a3 >= (unsigned int)v3 )
    return memset((void *)(a1 + (unsigned int)result), 0, v3);
  return result;
}
