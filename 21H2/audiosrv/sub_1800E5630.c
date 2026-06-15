/*
 * XREFs of sub_1800E5630 @ 0x1800E5630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800E5630(__int64 a1, const WCHAR *lpString2)
{
  const WCHAR *v2; // r8
  char v3; // bl

  v2 = *(const WCHAR **)(a1 + 1592);
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( CompareStringW(0x7Fu, 1u, v2, -1, lpString2, -1) != 2 )
    return 0;
  return v3;
}
