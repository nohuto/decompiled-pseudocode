/*
 * XREFs of sub_180085450 @ 0x180085450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax

  v5 = *(_DWORD *)(a4 + 20);
  v6 = *a5 - 0x44FD8B8ECC99192BLL;
  if ( *a5 == 0x44FD8B8ECC99192BLL )
    v6 = a5[1] - 0x294D1B1462EFA9B0LL;
  if ( v6 )
    v7 = v5 & 0xFFFFFFFB;
  else
    v7 = v5 | 4;
  *(_DWORD *)(a4 + 20) = v7;
  return 0LL;
}
