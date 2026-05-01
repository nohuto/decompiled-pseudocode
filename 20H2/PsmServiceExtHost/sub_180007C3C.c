/*
 * XREFs of sub_180007C3C @ 0x180007C3C
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_180007EAC @ 0x180007EAC (sub_180007EAC.c)
 */

_QWORD *__fastcall sub_180007C3C(__int64 a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  _QWORD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  int v9; // [rsp+2Ch] [rbp-44h]
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h]
  _QWORD v12[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v1 = 0LL;
  v8 = 2;
  v2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v7 = sub_180007E58(a1, 2LL, 0LL);
  result = (_QWORD *)sub_180007DE4(&v7);
  if ( result )
  {
    do
    {
      v12[3] = result[175];
      v12[2] = result[170];
      v5 = result[174];
      v6 = result[212];
      v12[1] = v5;
      v12[0] = v6;
      sub_180007EAC(&v10, v12, &v10);
      result = (_QWORD *)sub_180007DE4(&v7);
    }
    while ( result );
    v2 = v11;
    v1 = v10;
  }
  *(_OWORD *)(a1 + 1328) = v1;
  *(_OWORD *)(a1 + 1344) = v2;
  return result;
}
