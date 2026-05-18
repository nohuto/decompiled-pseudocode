/*
 * XREFs of sub_18002D660 @ 0x18002D660
 * Callers:
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 * Callees:
 *     sub_18002DD64 @ 0x18002DD64 (sub_18002DD64.c)
 *     sub_180030B14 @ 0x180030B14 (sub_180030B14.c)
 *     sub_1800994CC @ 0x1800994CC (sub_1800994CC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18002D660(_QWORD *a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v9; // ebx
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // ebx
  unsigned int v21; // ebx
  int v22; // esi
  void *v23; // rax
  __int64 v24; // r14
  __int64 *v25; // rax
  char v26; // si
  __int64 v27; // rbx
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  int v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v34; // [rsp+58h] [rbp-28h] BYREF
  int v35; // [rsp+60h] [rbp-20h]
  unsigned int v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h] BYREF

  v34 = a1;
  v37 = a3;
  v35 = 0;
  sub_180030B14(&v31, (unsigned int)a5[4]);
  if ( HIDWORD(v31) == 1 )
    v9 = a2 | 8;
  else
    v9 = a2 & 0xFFFFFFF7;
  v10 = a5[8];
  v11 = v9 & 0xFFFFFFFE;
  v12 = v9 | 1;
  if ( (v10 & 8) == 0 )
    v12 = v11;
  v13 = v12 & 0xFFFFFFFD;
  v14 = v12 | 2;
  if ( (v10 & 0x20) == 0 )
    v14 = v13;
  v15 = v14 & 0xFFFFFFFB;
  v16 = v14 | 4;
  if ( (v10 & 0x40) == 0 )
    v16 = v15;
  v17 = v16 & 0xFFFFFFEF;
  v18 = v16 | 0x10;
  if ( (a5[10] & 4) == 0 )
    v18 = v17;
  v19 = v18 & 0xFFFFFFDF;
  v20 = v18 | 0x20;
  if ( (a5[10] & 1) == 0 )
    v20 = v19;
  if ( a4 <= 1 )
    v21 = v20 & 0xFFFFFFBF;
  else
    v21 = v20 | 0x40;
  v36 = v21;
  v22 = a5[7];
  if ( a3 )
  {
    v32 = a5[7];
    v25 = (__int64 *)sub_18002DD64(
                       (unsigned int)&v34,
                       (_DWORD)a5,
                       (int)a5 + 4,
                       (unsigned int)&v37,
                       (__int64)&v31,
                       (__int64)&v36,
                       (__int64)&v32);
    v26 = 2;
    v24 = *v25;
  }
  else
  {
    v23 = operator new(0x1CuLL);
    v33 = (__int64)v23;
    if ( v23 )
      v24 = sub_1800994CC((_DWORD)v23, *a5, a5[1], v31, v21, v22);
    else
      v24 = 0LL;
    v33 = v24;
    v25 = &v33;
    v26 = 9;
  }
  *v25 = 0LL;
  v27 = v24;
  v31 = v24;
  if ( (v26 & 2) != 0 )
  {
    v26 &= ~2u;
    if ( v34 )
      j__o_free(v34);
  }
  if ( (v26 & 1) != 0 && v33 )
    j__o_free(v33);
  v28 = operator new(0x10uLL);
  v34 = v28;
  if ( v28 )
  {
    v29 = a5[2];
    v27 = 0LL;
    *(_QWORD *)v28 = v24;
    v28[2] = v29;
    v28[3] = a4;
  }
  else
  {
    v28 = 0LL;
  }
  *a1 = v28;
  if ( v27 )
    j__o_free(v27);
  return a1;
}
