/*
 * XREFs of sub_180018A60 @ 0x180018A60
 * Callers:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 * Callees:
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

_BOOL8 __fastcall sub_180018A60(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( *(int *)(a1 + 24) >= 0
    && !(*(_DWORD *)(a1 + 1152) + *(_DWORD *)(a1 + 1128))
    && !*(_QWORD *)(a1 + 656)
    && (*(_BYTE *)(a1 + 1472) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 836) & 1) == 0 )
      return 1;
    v2 = a1 + 64;
    sub_1800468FC(a1 + 64, &v4, &v3);
    if ( !v3 && (v4 & 0x80u) != 0 && (v4 & 0x100) != 0 && (*(_BYTE *)(v2 + 656) & 2) == 0 )
      return 1;
  }
  return result;
}
