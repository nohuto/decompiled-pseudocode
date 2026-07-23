/*
 * XREFs of PnpCompareResourceRequestPriority @ 0x1407C8910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCompareResourceRequestPriority(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = a1[4];
  if ( v2 == a2[4] )
  {
    v3 = a1[5];
    if ( v3 <= a2[5] && (v3 < a2[5] || a1 < a2) )
      return 0xFFFFFFFFLL;
  }
  else if ( v2 <= a2[4] )
  {
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
