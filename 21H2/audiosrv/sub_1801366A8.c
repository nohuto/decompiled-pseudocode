/*
 * XREFs of sub_1801366A8 @ 0x1801366A8
 * Callers:
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800601FC @ 0x1800601FC (sub_1800601FC.c)
 *     sub_18006022C @ 0x18006022C (sub_18006022C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180072EA8 @ 0x180072EA8 (sub_180072EA8.c)
 *     sub_180134908 @ 0x180134908 (sub_180134908.c)
 *     sub_1801361C8 @ 0x1801361C8 (sub_1801361C8.c)
 *     sub_1801367E0 @ 0x1801367E0 (sub_1801367E0.c)
 *     sub_1801375A0 @ 0x1801375A0 (sub_1801375A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801366A8(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int v8; // eax
  char *v9; // rbx
  unsigned int v10; // edi
  int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char *v20; // [rsp+60h] [rbp+8h] BYREF

  *a4 = 0;
  v8 = sub_180134908(a1);
  if ( v8 < 0 )
    sub_18006D26C((int)retaddr, 1523, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v8);
  v17 = a1;
  v18 = 1;
  sub_18006022C(&v20);
  v9 = v20;
  if ( !v20 )
  {
    v10 = -2147024882;
    v11 = -2147024882;
    v12 = 1531;
LABEL_10:
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v11);
    goto LABEL_12;
  }
  sub_1800601FC((__int64)v20);
  v13 = sub_1801361C8(a1, a3);
  v14 = v13;
  if ( v13 == -1 )
  {
    v10 = -2147024809;
    v11 = -2147024809;
    v12 = 1537;
    goto LABEL_10;
  }
  sub_1801367E0(a1, a2, v13, (_DWORD)v9, (__int64)a4);
  if ( *a4 )
  {
    v15 = sub_1801375A0(a1, a2, v14, v9);
    v10 = v15;
    if ( v15 < 0 )
    {
      v11 = v15;
      v12 = 1546;
      goto LABEL_10;
    }
  }
  v10 = 0;
LABEL_12:
  if ( v9 )
    sub_180033A70(v9);
  sub_180072EA8((__int64)&v17);
  return v10;
}
