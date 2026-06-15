/*
 * XREFs of sub_180119954 @ 0x180119954
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800326B0 @ 0x1800326B0 (sub_1800326B0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180119954(_DWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v8; // r15
  int v9; // eax
  void *v10; // rbx
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // edi
  int v14; // edx
  int v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  int v22; // [rsp+78h] [rbp-8h]
  int v23; // [rsp+7Ch] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]
  int v25; // [rsp+C8h] [rbp+48h] BYREF

  pv = 0LL;
  v25 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v9 = sub_18005B960(a2, (__int64)&v21, &v25, &pv);
  v10 = pv;
  if ( v9 < 0 || !v25 || (unsigned int)sub_180022EE0(&v21, a3) == -1 )
  {
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v18 = 0LL;
  *(_QWORD *)&v20 = v10;
  LODWORD(a5) = v11;
  v25 = 0;
  v16 = 0;
  v17 = 1;
  v12 = sub_1800326B0(&v18, &v17, &v16, &v25, (unsigned int *)&a5, (_OWORD **)&v20);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 1595;
    goto LABEL_8;
  }
  v20 = *(_OWORD *)a3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _DWORD, _QWORD *, _QWORD *))(*(_QWORD *)v18 + 24LL))(
          v18,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          &v20,
          0LL,
          a1[2],
          a4,
          v8);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_12;
  }
  v14 = 1596;
LABEL_8:
  sub_18004BD84(
    (int)retaddr,
    v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v12);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_13:
  sub_1800384A4(&v21);
  CoTaskMemFree(v10);
  return v13;
}
