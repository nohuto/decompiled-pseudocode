/*
 * XREFs of sub_180016870 @ 0x180016870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_180016870(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // eax

  v3 = 0;
  if ( a3 )
  {
    LOBYTE(v3) = *(_DWORD *)(a1 + 508) != a2;
    *a3 = v3;
  }
  *(_DWORD *)(a1 + 508) = a2;
  return v3;
}
