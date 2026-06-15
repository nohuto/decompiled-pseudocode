/*
 * XREFs of sub_1800DDD90 @ 0x1800DDD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 *     sub_1800C4FD8 @ 0x1800C4FD8 (sub_1800C4FD8.c)
 *     sub_1800DA99C @ 0x1800DA99C (sub_1800DA99C.c)
 *     sub_1800DD7A0 @ 0x1800DD7A0 (sub_1800DD7A0.c)
 */

__int64 __fastcall sub_1800DDD90(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 *a5, _DWORD *a6, _QWORD *a7)
{
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 **v16; // rbx
  _WORD *v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // r9d
  int v21; // edx
  unsigned __int16 *v22; // rbx
  void *v23; // rax
  __int64 *v25; // [rsp+20h] [rbp-50h] BYREF
  __int64 **v26; // [rsp+28h] [rbp-48h] BYREF
  char v27; // [rsp+30h] [rbp-40h]
  void *v28; // [rsp+38h] [rbp-38h] BYREF
  __int128 v29[2]; // [rsp+40h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]

  v25 = a5;
  sub_1800462E4(v29, a1);
  v28 = 0LL;
  *a5 = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 280);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 296);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 312);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 328);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 344);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 360);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 376);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 392);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 408);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 424);
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  if ( !*(_DWORD *)(a2 + 144) )
  {
    v11 = -2147024809;
    v12 = 4830;
LABEL_7:
    v15 = v11;
    goto LABEL_8;
  }
  v13 = *(_QWORD *)(a1 + 528);
  v26 = 0LL;
  *a3 = v13;
  *a4 = *(_QWORD *)(a1 + 536);
  v14 = sub_1800DD7A0(*(_WORD **)(a1 + 208), 260LL, &v26);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v16 = v26;
    *v25 = sub_180045410(2LL * (_QWORD)v26 + 2);
    v17 = (_WORD *)*v25;
    if ( !*v25 )
    {
      v11 = -2147024882;
      v12 = 4838;
      goto LABEL_7;
    }
    v18 = *(_QWORD *)(a1 + 208);
    v26 = &v25;
    v27 = 1;
    v19 = sub_180057300(v17, (__int64)v16 + 1, v18);
    v11 = v19;
    if ( v19 >= 0 )
    {
      v22 = *(unsigned __int16 **)(a1 + 176);
      v23 = (void *)sub_180045410(v22[8] + 18LL);
      *a7 = v23;
      if ( v23 )
      {
        memcpy(v23, v22, v22[8] + 18LL);
        v27 = 0;
        v11 = 0;
        *a6 = *(_DWORD *)(a1 + 552) == 3;
        goto LABEL_15;
      }
      v11 = -2147024882;
      v21 = 4849;
      v20 = -2147024882;
    }
    else
    {
      v20 = v19;
      v21 = 4845;
    }
    sub_18004BD84((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v20);
LABEL_15:
    sub_1800DA99C((__int64)&v26);
    goto LABEL_16;
  }
  v15 = v14;
  v12 = 4836;
LABEL_8:
  sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v15);
LABEL_16:
  sub_1800BDAAC(&v28);
  sub_1800C4FD8((__int64)v29);
  return v11;
}
