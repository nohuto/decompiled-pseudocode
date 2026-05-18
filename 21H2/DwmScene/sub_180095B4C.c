/*
 * XREFs of sub_180095B4C @ 0x180095B4C
 * Callers:
 *     sub_1800EF160 @ 0x1800EF160 (sub_1800EF160.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800F1F98 @ 0x1800F1F98 (sub_1800F1F98.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     sub_1800F34D4 @ 0x1800F34D4 (sub_1800F34D4.c)
 *     sub_1800F3504 @ 0x1800F3504 (sub_1800F3504.c)
 *     sub_1800F3570 @ 0x1800F3570 (sub_1800F3570.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall sub_180095B4C(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // si
  unsigned __int16 v11; // di
  unsigned __int16 v12; // bx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v23[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v24[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v25[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v26[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v27[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v28[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v29[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v30[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v31[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v32[4]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v33[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v34[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v35[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v36[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v37[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v38[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v39[4]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v40[6]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v41[8]; // [rsp+350h] [rbp+250h] BYREF
  __int64 v42[8]; // [rsp+390h] [rbp+290h] BYREF
  __int64 v43[8]; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v44[8]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v45[8]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v46[8]; // [rsp+490h] [rbp+390h] BYREF
  __int64 v47[8]; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int64 v48[8]; // [rsp+510h] [rbp+410h] BYREF
  __int64 v49[8]; // [rsp+550h] [rbp+450h] BYREF
  __int64 v50[8]; // [rsp+590h] [rbp+490h] BYREF
  __int64 v51[8]; // [rsp+5D0h] [rbp+4D0h] BYREF
  __int64 v52[8]; // [rsp+610h] [rbp+510h] BYREF
  __int128 v53; // [rsp+650h] [rbp+550h] BYREF
  _BYTE v54[64]; // [rsp+660h] [rbp+560h] BYREF
  _BYTE v55[64]; // [rsp+6A0h] [rbp+5A0h] BYREF
  _BYTE v56[64]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v57[64]; // [rsp+720h] [rbp+620h] BYREF
  _BYTE v58[64]; // [rsp+760h] [rbp+660h] BYREF
  _BYTE v59[64]; // [rsp+7A0h] [rbp+6A0h] BYREF
  _BYTE v60[64]; // [rsp+7E0h] [rbp+6E0h] BYREF
  _BYTE v61[64]; // [rsp+820h] [rbp+720h] BYREF
  _BYTE v62[64]; // [rsp+860h] [rbp+760h] BYREF
  _BYTE v63[64]; // [rsp+8A0h] [rbp+7A0h] BYREF
  _BYTE v64[64]; // [rsp+8E0h] [rbp+7E0h] BYREF
  _BYTE v65[64]; // [rsp+920h] [rbp+820h] BYREF

  v40[4] = (__int64)a2;
  v53 = 0LL;
  sub_1800A565C(a1, &v53, 7LL);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_180020B7C(v19, (__int64)&qword_1802131B8);
  sub_180093020((__int64)v54, v19, 7);
  v20[2] = 0LL;
  v20[3] = 0LL;
  sub_180020B7C(v20, (__int64)&qword_1802131D8);
  sub_180093020((__int64)v55, v20, 7);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_180020B7C(v21, (__int64)&qword_1802131F8);
  sub_180093020((__int64)v56, v21, 5);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_180020B7C(v22, (__int64)&qword_180213218);
  sub_180093020((__int64)v57, v22, 5);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_180020B7C(v23, (__int64)&qword_180213238);
  sub_180093020((__int64)v58, v23, 5);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_180020B7C(v24, (__int64)&qword_180213258);
  sub_180093020((__int64)v59, v24, 5);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_180020B7C(v25, (__int64)&qword_180213278);
  sub_180093020((__int64)v60, v25, 5);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_180020B7C(v26, (__int64)&qword_180213298);
  sub_180093020((__int64)v61, v26, 7);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_180020B7C(v27, (__int64)&qword_1802132B8);
  sub_180093020((__int64)v62, v27, 7);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_180020B7C(v28, (__int64)&qword_1802132D8);
  sub_180093020((__int64)v63, v28, 5);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_180020B7C(v29, (__int64)&qword_1802132F8);
  sub_180093020((__int64)v64, v29, 6);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_180020B7C(v30, (__int64)&qword_180213358);
  sub_180093020((__int64)v65, v30, 6);
  sub_1800F1F98(v53, v54, 12LL, 0LL);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_180020B7C(v31, (__int64)&qword_1802133B8);
  sub_180093020((__int64)v41, v31, 5);
  sub_1800F2044(v53, v41, 1LL);
  sub_180093600(v41);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_180020B7C(v32, (__int64)&qword_180213398);
  sub_180093020((__int64)v42, v32, 2);
  sub_1800F2044(v53, v42, 1LL);
  sub_180093600(v42);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_180020B7C(v33, (__int64)&qword_180213378);
  sub_180093020((__int64)v43, v33, 2);
  sub_1800F2044(v53, v43, 0LL);
  sub_180093600(v43);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_180020B7C(v34, (__int64)&qword_1802133D8);
  sub_180093020((__int64)v44, v34, 2);
  sub_1800F2044(v53, v44, 0LL);
  sub_180093600(v44);
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_180020B7C(v17, (__int64)&qword_1802133F8);
  sub_180093020((__int64)v45, v17, 2);
  sub_1800F2044(v53, v45, 0LL);
  sub_180093600(v45);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_180020B7C(v18, (__int64)&qword_180213418);
  sub_180093020((__int64)v46, v18, 6);
  sub_1800F2044(v53, v46, 0LL);
  sub_180093600(v46);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_180020B7C(v35, (__int64)&qword_180213318);
  sub_180093020((__int64)v47, v35, 2);
  sub_1800F2044(v53, v47, 0LL);
  sub_180093600(v47);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_180020B7C(v36, (__int64)&qword_180213338);
  sub_180093020((__int64)v48, v36, 2);
  sub_1800F2044(v53, v48, 0LL);
  sub_180093600(v48);
  sub_1800F295C(v53, &qword_180213378);
  sub_1800F3504(v53, v3);
  sub_1800F295C(v53, &qword_180213398);
  sub_1800F3504(v53, v4);
  sub_1800F295C(v53, &qword_1802133B8);
  v16[0] = 0LL;
  v16[1] = _mm_srli_si128((__m128i)xmmword_1801D5320, 8).m128i_u64[0];
  sub_1800F34D4(v53, v5, v16);
  sub_1800F295C(v53, &qword_1802133D8);
  sub_1800F3504(v53, v6);
  sub_1800F295C(v53, &qword_1802133F8);
  sub_1800F3504(v53, v7);
  sub_1800F295C(v53, &qword_180213338);
  sub_1800F3504(v53, v8);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_180020B7C(v37, (__int64)&qword_180213458);
  sub_180093020((__int64)v49, v37, 8);
  v9 = sub_1800F2044(v53, v49, 0LL);
  sub_180093600(v49);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_180020B7C(v38, (__int64)&qword_180213478);
  sub_180093020((__int64)v50, v38, 8);
  v10 = sub_1800F2044(v53, v50, 0LL);
  sub_180093600(v50);
  v39[2] = 0LL;
  v39[3] = 0LL;
  sub_180020B7C(v39, (__int64)&qword_180213498);
  sub_180093020((__int64)v51, v39, 8);
  v11 = sub_1800F2044(v53, v51, 0LL);
  sub_180093600(v51);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_180020B7C(v40, (__int64)&qword_180213438);
  sub_180093020((__int64)v52, v40, 8);
  v12 = sub_1800F2044(v53, v52, 0LL);
  sub_180093600(v52);
  sub_1800F3570(v53, v9, 0LL);
  sub_1800F3570(v53, v10, 2LL);
  sub_1800F3570(v53, v11, 13LL);
  sub_1800F3570(v53, v12, 12LL);
  sub_1800F27BC(v53);
  v15 = 0LL;
  if ( *((_QWORD *)&v53 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
  v15 = v53;
  sub_1800AAE44(*a2, &v15);
  `eh vector destructor iterator'(v54, 0x40uLL, 0xCuLL, (void (*)(void *))sub_180093600);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( !_InterlockedDecrement(v13 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 && !_InterlockedDecrement(v14 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( !_InterlockedDecrement(v14 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
}
