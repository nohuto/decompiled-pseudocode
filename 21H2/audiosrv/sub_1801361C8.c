/*
 * XREFs of sub_1801361C8 @ 0x1801361C8
 * Callers:
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_180135DDC @ 0x180135DDC (sub_180135DDC.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801361C8(__int64 a1, const WCHAR *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  LPCWCH *i; // rsi

  v2 = -1;
  v3 = 0;
  if ( a2 )
  {
    for ( i = (LPCWCH *)(a1 + 280); CompareStringOrdinal(a2, -1, *i, -1, 1) != 2; i += 4 )
    {
      if ( ++v3 >= 6 )
        return v2;
    }
    return v3;
  }
  return v2;
}
