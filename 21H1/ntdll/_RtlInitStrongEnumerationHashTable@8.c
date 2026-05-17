/*
 * XREFs of _RtlInitStrongEnumerationHashTable@8 @ 0x4B35B220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

char __stdcall RtlInitStrongEnumerationHashTable(int a1, _DWORD *a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  RtlpPopulateContext(0);
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  a2[3] = v3;
  *a2 = v3;
  return 1;
}
