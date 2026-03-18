/*
 * XREFs of MiInitializeColorTable @ 0x1403AAE1C
 * Callers:
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403AAD88 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x1403CA200 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x14078EAC0 (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C4DD78 & ExGenRandom(1) | (a2 << byte_140C4DD0C);
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
