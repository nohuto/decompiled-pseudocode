/*
 * XREFs of MiInitializeColorTable @ 0x14025BFE0
 * Callers:
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiCreateZeroThreadContext @ 0x1403D3CA0 (MiCreateZeroThreadContext.c)
 *     MiInitializeLargePageNodeLists @ 0x14081DB50 (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C50738 & ExGenRandom(1LL, a2) | ((_DWORD)a2 << byte_140C506CC);
  v4 = 3LL;
  do
  {
    result = ExGenRandom(1LL, v3);
    *v2++ = result;
    --v4;
  }
  while ( v4 );
  return result;
}
