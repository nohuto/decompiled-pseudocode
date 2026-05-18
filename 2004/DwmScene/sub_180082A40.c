/*
 * XREFs of sub_180082A40 @ 0x180082A40
 * Callers:
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 *     sub_180082B74 @ 0x180082B74 (sub_180082B74.c)
 * Callees:
 *     sub_1800829D0 @ 0x1800829D0 (sub_1800829D0.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 */

unsigned __int64 __fastcall sub_180082A40(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-20h]
  __int128 v13; // [rsp+20h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF

  sub_180083A6C(a1);
  *(_QWORD *)&v12 = *(_QWORD *)a2;
  DWORD2(v12) = *(_DWORD *)(a2 + 8);
  sub_180083A6C(a1);
  *(_DWORD *)(a1 + 144) = v12;
  *(_QWORD *)(a1 + 148) = *(_QWORD *)((char *)&v12 + 4);
  v8 = _InterlockedIncrement64(&qword_180208648);
  *(_QWORD *)(a1 + 208) = v8;
  v9 = *(_QWORD *)(a1 + 216);
  if ( v8 >= v9 )
    v9 = v8;
  *(_QWORD *)(a1 + 216) = v9;
  v14 = *a3;
  sub_1800829D0(a1, &v14);
  *(_QWORD *)&v13 = *(_QWORD *)a4;
  DWORD2(v13) = *(_DWORD *)(a4 + 8);
  sub_180083A6C(a1);
  *(_DWORD *)(a1 + 172) = v13;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)((char *)&v13 + 4);
  v10 = _InterlockedIncrement64(&qword_180208648);
  *(_QWORD *)(a1 + 208) = v10;
  result = *(_QWORD *)(a1 + 216);
  if ( v10 >= result )
    result = v10;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
