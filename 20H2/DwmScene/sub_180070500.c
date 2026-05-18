/*
 * XREFs of sub_180070500 @ 0x180070500
 * Callers:
 *     sub_18006C318 @ 0x18006C318 (sub_18006C318.c)
 *     sub_1800B49EC @ 0x1800B49EC (sub_1800B49EC.c)
 * Callees:
 *     sub_180070A9C @ 0x180070A9C (sub_180070A9C.c)
 *     sub_18007BF1C @ 0x18007BF1C (sub_18007BF1C.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_180070500(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  char v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  sub_18007BF1C(a1, &v10);
  v6 = v10;
  if ( v10 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v10 + 32) + 8LL) < 0 )
  {
    v11 = a3;
    v7 = (_QWORD *)sub_180070A9C((_DWORD)a1, (unsigned int)&v9, v6, (unsigned int)&unk_1801C53C0, (__int64)&v11);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v7;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
