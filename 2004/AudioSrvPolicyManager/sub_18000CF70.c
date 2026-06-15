/*
 * XREFs of sub_18000CF70 @ 0x18000CF70
 * Callers:
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     sub_180017D14 @ 0x180017D14 (sub_180017D14.c)
 * Callees:
 *     sub_18000CFD8 @ 0x18000CFD8 (sub_18000CFD8.c)
 */

__int64 __fastcall sub_18000CF70(__int64 *a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  result = *a1;
  v3 = a2;
  if ( *(_DWORD *)(*a1 - 16) > a2 )
    v3 = *(_DWORD *)(result - 16);
  if ( *(int *)(result - 8) > 1 )
    return sub_18000D02C(a1, (unsigned int)v3);
  v5 = *(_DWORD *)(result - 12);
  if ( v5 < v3 )
  {
    if ( v5 <= 0x40000000 )
      v6 = v5 / 2;
    else
      v6 = 0x100000;
    v7 = v5 + v6;
    if ( v7 >= v3 )
      v3 = v7;
    return sub_18000CFD8(a1, (unsigned int)v3);
  }
  return result;
}
