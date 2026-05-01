/*
 * XREFs of sub_1800737A0 @ 0x1800737A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800737A0(__int64 a1, int *a2, int a3)
{
  __int64 v3; // rax
  int v4; // r10d
  __int64 v5; // r9
  char result; // al

  v3 = *a2;
  v4 = a2[4];
  v5 = 3 * v3;
  if ( v4 < *(_DWORD *)(a1 + 24 * v3 + 88) )
    return 1;
  result = 0;
  if ( *(_DWORD *)(a1 + 8 * v5 + 88) == v4 && ((*(_BYTE *)(a1 + 1352) & 4) != 0 || *(_DWORD *)(a1 + 8) != a3) )
    return 1;
  return result;
}
