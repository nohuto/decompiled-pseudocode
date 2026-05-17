/*
 * XREFs of _RtlpNlsGetLcidIndex@4 @ 0x4B2D5BC8
 * Callers:
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpNlsGetLcidIndex(int a1)
{
  int v1; // edi
  int v2; // esi
  int result; // eax
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-4h]

  v1 = 0;
  v2 = *(unsigned __int16 *)(pTblPtrs + 4) - 1;
  v5 = a1;
  if ( v2 < 0 )
    return -1;
  while ( 1 )
  {
    result = (v2 + v1) / 2;
    v4 = a1 - *(_DWORD *)(*(_DWORD *)(pTblPtrs + 12) + 8 * result);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      v1 = result + 1;
    else
      v2 = result - 1;
    a1 = v5;
    if ( v1 > v2 )
      return -1;
  }
  return result;
}
