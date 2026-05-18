/*
 * XREFs of sub_1801099B0 @ 0x1801099B0
 * Callers:
 *     sub_1800D5F30 @ 0x1800D5F30 (sub_1800D5F30.c)
 * Callees:
 *     sub_18007067C @ 0x18007067C (sub_18007067C.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E1408 @ 0x1800E1408 (sub_1800E1408.c)
 *     sub_1800E1544 @ 0x1800E1544 (sub_1800E1544.c)
 *     sub_1800E1604 @ 0x1800E1604 (sub_1800E1604.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1801099B0(_QWORD *a1)
{
  __int64 *v2; // rax
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-79h] BYREF
  __int128 v7; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v8[22]; // [rsp+40h] [rbp-59h] BYREF

  v2 = (__int64 *)sub_18007067C(a1[114], (__int64)v8);
  sub_1800E1408((__int64)(a1 + 44), v2);
  sub_1800E12F4(v8);
  result = sub_1800E1544();
  if ( result )
  {
    v6 = 0LL;
    v4 = a1[113];
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = a1[113];
    }
    v5 = a1[112];
    *(_QWORD *)&v6 = v5;
    *((_QWORD *)&v6 + 1) = v4;
    v7 = 0LL;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = a1[112];
      v4 = a1[113];
    }
    *(_QWORD *)&v7 = v5;
    *((_QWORD *)&v7 + 1) = v4;
    return sub_1800E1604(a1 + 44, &v7, &v6);
  }
  return result;
}
