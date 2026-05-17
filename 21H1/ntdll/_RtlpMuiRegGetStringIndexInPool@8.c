/*
 * XREFs of _RtlpMuiRegGetStringIndexInPool@8 @ 0x4B2D48D8
 * Callers:
 *     _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807 (_RtlpMuiRegGetOrAddStringToPool@16.c)
 * Callees:
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

int __fastcall RtlpMuiRegGetStringIndexInPool(int a1, const wchar_t *a2)
{
  int v4; // esi
  const wchar_t *v5; // eax

  if ( !a1 )
    return -1;
  if ( !a2 )
    return -1;
  v4 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return -1;
  while ( 1 )
  {
    v5 = (const wchar_t *)(*(_DWORD *)(a1 + 16) + 2 * *(__int16 *)(*(_DWORD *)(a1 + 12) + 2 * v4));
    if ( v5 == a2 || !_wcsicmp(v5, a2) )
      break;
    if ( ++v4 >= *(unsigned __int16 *)(a1 + 6) )
      return -1;
  }
  return v4;
}
