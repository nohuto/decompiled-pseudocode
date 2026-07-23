/*
 * XREFs of MiInitializeColorTable @ 0x1403B0E8C
 * Callers:
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403B0DF8 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x1403CAD40 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x14079CF1C (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C4DF38 & ExGenRandom(1) | (a2 << byte_140C4DECC);
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
