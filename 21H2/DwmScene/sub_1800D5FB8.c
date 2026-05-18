/*
 * XREFs of sub_1800D5FB8 @ 0x1800D5FB8
 * Callers:
 *     sub_1800D606C @ 0x1800D606C (sub_1800D606C.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800D5EC4 @ 0x1800D5EC4 (sub_1800D5EC4.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800D5FB8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bl
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  _QWORD v14[6]; // [rsp+40h] [rbp-30h] BYREF

  v14[4] = a1;
  sub_180067278(a1);
  sub_1800D5EC4(a1, (__int64)v12, a2);
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
    sub_180020B7C(v14, a3);
    sub_180109A80(*(_QWORD *)(a1 + 16 * (v13 + 4)), v14, &v11);
  }
  else
  {
    v9 = 0;
  }
  sub_180067304(a1);
  return v9;
}
