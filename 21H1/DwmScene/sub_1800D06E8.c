/*
 * XREFs of sub_1800D06E8 @ 0x1800D06E8
 * Callers:
 *     sub_1800D079C @ 0x1800D079C (sub_1800D079C.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800D05F4 @ 0x1800D05F4 (sub_1800D05F4.c)
 *     sub_1801041B0 @ 0x1801041B0 (sub_1801041B0.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800D06E8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bl
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  _QWORD v14[6]; // [rsp+40h] [rbp-30h] BYREF

  v14[4] = a1;
  sub_1800619A8(a1);
  sub_1800D05F4(a1, (__int64)v12, a2);
  if ( v12[0] )
  {
    v14[5] = &v11;
    v11 = 0LL;
    v8 = a4[1];
    v9 = 1;
    if ( v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v8 = a4[1];
    }
    *(_QWORD *)&v11 = *a4;
    *((_QWORD *)&v11 + 1) = v8;
    v14[2] = 0LL;
    v14[3] = 0LL;
    sub_18001CDF8(v14, a3);
    sub_1801041B0(*(_QWORD *)(a1 + 16 * (v13 + 4)), v14, &v11);
  }
  else
  {
    v9 = 0;
  }
  sub_180061A34(a1);
  return v9;
}
