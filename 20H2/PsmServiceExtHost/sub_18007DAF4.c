/*
 * XREFs of sub_18007DAF4 @ 0x18007DAF4
 * Callers:
 *     sub_18007BE54 @ 0x18007BE54 (sub_18007BE54.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 */

__int64 __fastcall sub_18007DAF4(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rax
  __int64 v4; // rbx

  result = sub_18007DC40(a1);
  if ( (_DWORD)result )
  {
    sub_1800093A0(a1, 0);
    for ( i = sub_180006258(a1); ; i = sub_1800062A4(v4) )
    {
      v4 = i;
      if ( !i )
        break;
      if ( (*(_BYTE *)(i + 120) & 0x10) != 0 || (*(_DWORD *)(i + 112) & 0x400) != 0 )
        sub_1800027E8(i, 1u, 9, 0, 6912, 16, 0LL);
    }
    return sub_18000A110(a1);
  }
  return result;
}
