/*
 * XREFs of sub_18007D214 @ 0x18007D214
 * Callers:
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     sub_18007FE60 @ 0x18007FE60 (sub_18007FE60.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800813DC @ 0x1800813DC (sub_1800813DC.c)
 *     sub_180081624 @ 0x180081624 (sub_180081624.c)
 */

__int64 __fastcall sub_18007D214(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rax
  _QWORD *v7; // rbx
  __int64 j; // rax
  int v9; // r8d
  __int64 v10; // rbx
  int v12; // [rsp+68h] [rbp+20h] BYREF

LABEL_1:
  sub_1800093A0(a1, 0);
  for ( i = sub_180006258(a1); ; i = sub_1800062A4(i) )
  {
    v7 = (_QWORD *)i;
    if ( !i )
      break;
    if ( (*(_BYTE *)(i + 544) & 1) != 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
        __fastfail(0xEu);
      sub_18000A110(a1);
      sub_180081624(v7);
      sub_1800274E0(v7);
      goto LABEL_1;
    }
  }
  for ( j = sub_180006258(a1); ; j = sub_1800062A4(v10) )
  {
    v10 = j;
    if ( !j )
      break;
    if ( (unsigned int)sub_1800813DC(j, a2, a3, &v12) )
      sub_1800027E8(v10, 1u, v9, 0, 6912, v12, 0LL);
  }
  return sub_18000A110(a1);
}
