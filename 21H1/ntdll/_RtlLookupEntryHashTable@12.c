/*
 * XREFs of _RtlLookupEntryHashTable@12 @ 0x4B35B2E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

int __stdcall RtlLookupEntryHashTable(int a1, int a2, char *a3)
{
  char *v3; // esi
  int result; // eax
  char v5; // [esp+8h] [ebp-Ch] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = &v5;
  RtlpPopulateContext(a2);
  result = **((_DWORD **)v3 + 1);
  if ( *(_DWORD *)v3 == result || *(_DWORD *)(result + 8) != a2 )
    return 0;
  return result;
}
