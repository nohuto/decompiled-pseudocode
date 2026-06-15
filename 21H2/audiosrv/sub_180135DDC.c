/*
 * XREFs of sub_180135DDC @ 0x180135DDC
 * Callers:
 *     sub_1801367E0 @ 0x1801367E0 (sub_1801367E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_1801361C8 @ 0x1801361C8 (sub_1801361C8.c)
 */

__int64 __fastcall sub_180135DDC(__int64 a1, void *a2, _QWORD *a3, __int64 a4)
{
  bool v5; // bl
  __int64 result; // rax
  int v9; // ebp
  bool v10; // zf
  bool v11; // al
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]

  v12 = 1LL;
  v5 = 0;
  v13 = 0;
  result = sub_1801356EC(a1, a2, a3, (__int64)&v12);
  *(_DWORD *)(a4 + 8) = result;
  v9 = result;
  if ( (int)result >= 0
    || *(_BYTE *)(a1 + 99)
    || (result = sub_1801361C8(a1, a2), (_DWORD)result != -1)
    && (result = 32LL * (int)result, !*(_BYTE *)(result + a1 + 272)) )
  {
    *(_BYTE *)(a4 + 1) = 1;
  }
  if ( v9 >= 0 )
  {
    v10 = (_DWORD)v12 == 0;
    *(_DWORD *)(a4 + 4) = HIDWORD(v12) == 0 ? 0x80070490 : 0;
    v11 = !v10;
    v10 = v13 == 0;
    *(_BYTE *)a4 = v11;
    result = v14;
    v5 = !v10;
    *(_QWORD *)(a4 + 16) = v14;
  }
  else
  {
    *(_DWORD *)(a4 + 4) = v9;
    *(_BYTE *)a4 = 1;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
  *(_BYTE *)(a4 + 2) = v5;
  return result;
}
