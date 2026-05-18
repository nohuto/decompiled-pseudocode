/*
 * XREFs of sub_1800FED34 @ 0x1800FED34
 * Callers:
 *     sub_1800BD408 @ 0x1800BD408 (sub_1800BD408.c)
 *     sub_1800FECA8 @ 0x1800FECA8 (sub_1800FECA8.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18006F12C @ 0x18006F12C (sub_18006F12C.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_180091048 @ 0x180091048 (sub_180091048.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800A78C8 @ 0x1800A78C8 (sub_1800A78C8.c)
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 *     sub_1800AD5A4 @ 0x1800AD5A4 (sub_1800AD5A4.c)
 *     sub_1800B1ED4 @ 0x1800B1ED4 (sub_1800B1ED4.c)
 *     sub_1800B1EF0 @ 0x1800B1EF0 (sub_1800B1EF0.c)
 *     sub_1800BD5B0 @ 0x1800BD5B0 (sub_1800BD5B0.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall sub_1800FED34(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  volatile signed __int32 *v22; // rbx
  char v24; // [rsp+30h] [rbp-D0h]
  __int64 v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v32; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v33; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v34; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v35[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-10h]
  _QWORD v37[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v38; // [rsp+110h] [rbp+10h]
  _QWORD v39[3]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v40[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v41; // [rsp+140h] [rbp+40h]
  __int64 *v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  _BYTE v44[8]; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v45; // [rsp+160h] [rbp+60h]
  __int64 *v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  _BYTE v48[8]; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v49; // [rsp+180h] [rbp+80h]
  _QWORD v50[2]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v53; // [rsp+1C0h] [rbp+C0h]
  __int128 v54; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v55; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v56; // [rsp+1F0h] [rbp+F0h] BYREF

  v39[0] = a1;
  v28 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a2[1];
  }
  *(_QWORD *)&v28 = *a2;
  *((_QWORD *)&v28 + 1) = v5;
  sub_1800ACBBC(a1, (__int64)&v28);
  *(_QWORD *)a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 15LL;
  *(_BYTE *)(a1 + 1768) = 0;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 1872) = 15LL;
  *(_BYTE *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_DWORD *)(a1 + 1940) = a3;
  *(_QWORD *)(a1 + 1944) = 0LL;
  *(_WORD *)(a1 + 1952) = 257;
  *(_QWORD *)(a1 + 1956) = 0LL;
  *(_DWORD *)(a1 + 1964) = 1;
  *(_DWORD *)(a1 + 1968) = 1065353216;
  *(_DWORD *)(a1 + 1972) = 6;
  *(_DWORD *)(a1 + 1976) = 21;
  v6 = sub_1800F0B14(a1);
  v7 = sub_18007B2B4(v6);
  v56 = 0LL;
  v36 = 0LL;
  sub_180020B7C(v35, (__int64)&qword_180213538);
  v32.m128i_i64[0] = (__int64)v35;
  v32.m128i_i64[1] = (__int64)v37;
  sub_1800BD5B0((__int64 *)&v56, &v32);
  `eh vector destructor iterator'(v35, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v25[0] = 0LL;
  v25[1] = 0LL;
  v39[1] = v25;
  v39[2] = v25;
  v8 = operator new(0x40uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  v25[0] = (__int64)v8;
  sub_1800A78C8(v25, &v56, v24, v9);
  v10 = sub_1800A5D20(v7, v25);
  v11 = sub_18006F12C((__int64)v40);
  v29 = 0LL;
  v29 = *(_OWORD *)v11;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(a1 + 1928) = sub_1800AD5A4((_QWORD *)a1, 0x10000LL, 0LL, &v29, v10);
  v12 = v41;
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v55 = 0LL;
  v38 = 0LL;
  sub_180020B7C(v37, (__int64)&qword_1802135B8);
  v33.m128i_i64[0] = (__int64)v37;
  v33.m128i_i64[1] = (__int64)v39;
  sub_1800BD5B0((__int64 *)&v55, &v33);
  `eh vector destructor iterator'(v37, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v26[0] = 0LL;
  v26[1] = 0LL;
  v42 = v26;
  v43 = v26;
  v13 = operator new(0x40uLL);
  *v13 = v13;
  v13[1] = v13;
  v13[2] = v13;
  *((_WORD *)v13 + 12) = 257;
  v26[0] = (__int64)v13;
  sub_1800A78C8(v26, &v55, v24, v14);
  v15 = sub_1800A5D20(v7, v26);
  v16 = sub_18006F12C((__int64)v44);
  v30 = 0LL;
  v30 = *(_OWORD *)v16;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = 0LL;
  *(_DWORD *)(a1 + 1932) = sub_1800AD5A4((_QWORD *)a1, 0x10000LL, 0LL, &v30, v15);
  v17 = v45;
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v54 = 0LL;
  v51 = 0LL;
  sub_180020B7C(v50, (__int64)&qword_1802135B8);
  v53 = 0LL;
  sub_180020B7C(&v52, (__int64)qword_180213598);
  v34.m128i_i64[0] = (__int64)v50;
  v34.m128i_i64[1] = (__int64)&v54;
  sub_1800BD5B0((__int64 *)&v54, &v34);
  `eh vector destructor iterator'(v50, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v27[0] = 0LL;
  v27[1] = 0LL;
  v46 = v27;
  v47 = v27;
  v18 = operator new(0x40uLL);
  *v18 = v18;
  v18[1] = v18;
  v18[2] = v18;
  *((_WORD *)v18 + 12) = 257;
  v27[0] = (__int64)v18;
  sub_1800A78C8(v27, &v54, v24, v19);
  v20 = sub_1800A5D20(v7, v27);
  v21 = sub_18006F12C((__int64)v48);
  v31 = 0LL;
  v31 = *(_OWORD *)v21;
  *(_QWORD *)v21 = 0LL;
  *(_QWORD *)(v21 + 8) = 0LL;
  *(_DWORD *)(a1 + 1936) = sub_1800AD5A4((_QWORD *)a1, 256LL, 0LL, &v31, v20);
  v22 = v49;
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  sub_1800B1EF0(a1, *(_DWORD *)(a1 + 1928), 1);
  sub_1800B1EF0(a1, *(_DWORD *)(a1 + 1932), 0);
  sub_1800B1EF0(a1, *(_DWORD *)(a1 + 1936), 0);
  sub_1800B1ED4(a1, 1024, 1);
  *(_OWORD *)(a1 + 296) = xmmword_180214CF0;
  sub_180091048(a1, 1);
  sub_1800A1F98((__int64 *)&v54, (__int64)&v54);
  sub_1800A1F98((__int64 *)&v55, (__int64)&v55);
  sub_1800A1F98((__int64 *)&v56, (__int64)&v56);
  return a1;
}
