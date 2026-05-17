/*
 * XREFs of _RtlEndEnumerationHashTable@8 @ 0x4B35AEC0
 * Callers:
 *     _RtlEndWeakEnumerationHashTable@8 @ 0x4B35AF20 (_RtlEndWeakEnumerationHashTable@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlEndEnumerationHashTable(int a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi

  --*(_DWORD *)(a1 + 28);
  result = *(_DWORD **)a2;
  if ( *(_DWORD *)a2 != a2 )
  {
    if ( result[1] != a2 || (v3 = *(_DWORD **)(a2 + 4), *v3 != a2) )
      __fastfail(3u);
    *v3 = result;
    result[1] = v3;
    result = *(_DWORD **)(a2 + 12);
    if ( (_DWORD *)*result == result )
      --*(_DWORD *)(a1 + 24);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return result;
}
