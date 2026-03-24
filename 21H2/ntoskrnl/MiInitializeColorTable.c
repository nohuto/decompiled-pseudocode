/*
 * XREFs of MiInitializeColorTable @ 0x1403B0D1C
 * Callers:
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403B0C88 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x1403CABA0 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x14079CD1C (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C4DEF8 & ExGenRandom(1) | (a2 << byte_140C4DE8C);
  v3 = 3LL;
  do
  {
    result = ExGenRandom(1);
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}
