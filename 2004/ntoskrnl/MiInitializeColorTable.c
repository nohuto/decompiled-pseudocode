/*
 * XREFs of MiInitializeColorTable @ 0x1403A842C
 * Callers:
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403A8398 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x1403C75C0 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x1407815A8 (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C4DCF8 & ExGenRandom(1) | (a2 << byte_140C4DC8C);
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
