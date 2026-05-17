/*
 * XREFs of _RtlInitEnumerationHashTable@8 @ 0x4B35B1C0
 * Callers:
 *     _RtlInitWeakEnumerationHashTable@8 @ 0x4B35B260 (_RtlInitWeakEnumerationHashTable@8.c)
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

char __stdcall RtlInitEnumerationHashTable(int a1, int **a2)
{
  int *v2; // edx
  int *v4; // [esp+4h] [ebp-Ch]

  RtlpPopulateContext(0);
  ++*(_DWORD *)(a1 + 28);
  if ( (int *)*v4 == v4 )
    ++*(_DWORD *)(a1 + 24);
  v2 = (int *)*v4;
  if ( *(int **)(*v4 + 4) != v4 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = v4;
  v2[1] = (int)a2;
  *v4 = (int)a2;
  a2[4] = 0;
  a2[2] = 0;
  a2[3] = v4;
  return 1;
}
