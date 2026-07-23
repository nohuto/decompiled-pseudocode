/*
 * XREFs of IvtInitializeLargePagePte @ 0x1404E060C
 * Callers:
 *     IvtInitializeIdentityMappings @ 0x1404E0430 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IvtInitializeLargePagePte(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax

  v5 = 512LL;
  do
  {
    v6 = 1LL;
    v7 = *a1 | 0x80;
    v8 = 2LL;
    if ( a3 == 30 )
    {
      do
      {
        v7 |= v6++;
        --v8;
      }
      while ( v8 );
      v9 = 0xFFFFFC0000000LL;
      v10 = a2 & 0xFFFFFFFFC0000000uLL;
    }
    else
    {
      do
      {
        v7 |= v6++;
        --v8;
      }
      while ( v8 );
      v9 = 0xFFFFFFFE00000LL;
      v10 = a2 >> a3 << 21;
    }
    a2 += 1LL << a3;
    result = v7 ^ v9 & (v7 ^ v10);
    *a1++ = result;
    --v5;
  }
  while ( v5 );
  return result;
}
