/*
 * XREFs of _RtlRemoveEntryHashTable@12 @ 0x4B35B320
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

char __stdcall RtlRemoveEntryHashTable(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // ecx

  v3 = a2[2];
  --*(_DWORD *)(a1 + 20);
  v4 = (_DWORD *)*a2;
  v5 = (_DWORD *)a2[1];
  if ( (_DWORD *)*a2 == v5 )
  {
    --*(_DWORD *)(a1 + 24);
    v5 = (_DWORD *)a2[1];
    v4 = (_DWORD *)*a2;
  }
  if ( (_DWORD *)v4[1] != a2 || (_DWORD *)*v5 != a2 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( a3 && !*a3 )
    RtlpPopulateContext(v3);
  return 1;
}
