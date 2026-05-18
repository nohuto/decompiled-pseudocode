/*
 * XREFs of sub_1800952D0 @ 0x1800952D0
 * Callers:
 *     sub_1800EF160 @ 0x1800EF160 (sub_1800EF160.c)
 *     sub_1800EFF10 @ 0x1800EFF10 (sub_1800EFF10.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_1800931C0 @ 0x1800931C0 (sub_1800931C0.c)
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F1F98 @ 0x1800F1F98 (sub_1800F1F98.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     sub_1800F3468 @ 0x1800F3468 (sub_1800F3468.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall sub_1800952D0(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v14[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v15[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v16[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v17[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v18[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v19[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v20[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v21[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v22[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v23[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v24[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v25[5]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v26; // [rsp+228h] [rbp+128h] BYREF
  __int128 v27; // [rsp+238h] [rbp+138h] BYREF
  __int128 v28; // [rsp+248h] [rbp+148h] BYREF
  __int128 v29; // [rsp+258h] [rbp+158h] BYREF
  __int128 v30; // [rsp+268h] [rbp+168h] BYREF
  __int128 v31; // [rsp+278h] [rbp+178h] BYREF
  __int128 v32; // [rsp+288h] [rbp+188h] BYREF
  __int128 v33; // [rsp+298h] [rbp+198h] BYREF
  __int128 v34; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int128 v35; // [rsp+2B8h] [rbp+1B8h] BYREF
  _OWORD v36[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _OWORD v37[4]; // [rsp+310h] [rbp+210h] BYREF
  __int128 v38; // [rsp+350h] [rbp+250h] BYREF
  __int128 v39; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v40[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v41[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v42[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v43[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v44[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v45[64]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v46[64]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _BYTE v47[64]; // [rsp+530h] [rbp+430h] BYREF
  _BYTE v48[64]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v49[64]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v50[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _BYTE v51[64]; // [rsp+630h] [rbp+530h] BYREF
  _BYTE v52[64]; // [rsp+670h] [rbp+570h] BYREF
  _BYTE v53[64]; // [rsp+6B0h] [rbp+5B0h] BYREF
  _BYTE v54[64]; // [rsp+6F0h] [rbp+5F0h] BYREF

  v25[4] = (__int64)a2;
  v39 = 0LL;
  sub_1800A565C(a1, &v39, 0LL);
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_180020B7C(v14, (__int64)&qword_180212778);
  sub_180093020((__int64)v40, v14, 7);
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_180020B7C(v15, (__int64)&qword_180212798);
  sub_180093020((__int64)v41, v15, 7);
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_180020B7C(v11, (__int64)&qword_1802127B8);
  sub_180093020((__int64)v42, v11, 2);
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_180020B7C(v13, (__int64)&qword_1802127D8);
  sub_180093020((__int64)v43, v13, 2);
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_180020B7C(v12, (__int64)&qword_1802127F8);
  sub_180093020((__int64)v44, v12, 2);
  sub_1800F1F98(v39, v40, 5LL, 0LL);
  v4 = sub_1800F295C(v39, &qword_180212778);
  v36[0] = xmmword_180214C90;
  v36[1] = xmmword_180214CA0;
  v36[2] = xmmword_180214CB0;
  v36[3] = xmmword_180214CC0;
  sub_1800F3468(v39, v4, v36);
  v5 = sub_1800F295C(v39, &qword_180212798);
  v37[0] = xmmword_180214C90;
  v37[1] = xmmword_180214CA0;
  v37[2] = xmmword_180214CB0;
  v37[3] = xmmword_180214CC0;
  sub_1800F3468(v39, v5, v37);
  sub_1800F27BC(v39);
  v10 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
  v10 = v39;
  sub_1800AAE44(*a2, &v10);
  `eh vector destructor iterator'(v40, 0x40uLL, 5uLL, (void (*)(void *))sub_180093600);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v38 = 0LL;
  sub_1800A565C(a1, &v38, 9LL);
  sub_1800F1B44(v38, &qword_180212998, 7LL, 3LL);
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_180020B7C(v16, (__int64)&qword_180212818);
  v26 = 0LL;
  sub_1800931C0((__int64)v45, v16, 5LL, &v26);
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_180020B7C(v17, (__int64)&qword_180212838);
  v27 = 0LL;
  sub_1800931C0((__int64)v46, v17, 5LL, &v27);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_180020B7C(v18, (__int64)&qword_180212858);
  v28 = 0LL;
  sub_1800931C0((__int64)v47, v18, 5LL, &v28);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_180020B7C(v19, (__int64)&qword_180212878);
  v29 = 0LL;
  sub_1800931C0((__int64)v48, v19, 5LL, &v29);
  v20[2] = 0LL;
  v20[3] = 0LL;
  sub_180020B7C(v20, (__int64)&qword_180212898);
  v30 = 0LL;
  sub_1800931C0((__int64)v49, v20, 5LL, &v30);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_180020B7C(v21, (__int64)&qword_1802128B8);
  v31 = 0LL;
  sub_1800931C0((__int64)v50, v21, 5LL, &v31);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_180020B7C(v22, (__int64)&qword_1802128D8);
  v32 = 0LL;
  sub_1800931C0((__int64)v51, v22, 5LL, &v32);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_180020B7C(v23, (__int64)&qword_1802128F8);
  v33 = 0LL;
  sub_1800931C0((__int64)v52, v23, 5LL, &v33);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_180020B7C(v24, (__int64)&qword_180212918);
  v34 = 0LL;
  sub_1800931C0((__int64)v53, v24, 5LL, &v34);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_180020B7C(v25, (__int64)&qword_180212938);
  v35 = 0LL;
  sub_1800931C0((__int64)v54, v25, 5LL, &v35);
  sub_1800F1F98(v38, v45, 10LL, 0LL);
  sub_1800F1B44(v38, &qword_1802129B8, 5LL, 3LL);
  sub_1800F1B44(v38, &qword_1802129D8, 5LL, 3LL);
  sub_1800F1B44(v38, &qword_1802129F8, 5LL, 3LL);
  sub_1800F1B44(v38, &qword_180212958, 5LL, 3LL);
  sub_1800F1B44(v38, &qword_180212978, 5LL, 3LL);
  sub_1800F27BC(v38);
  v9 = 0LL;
  if ( *((_QWORD *)&v38 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL));
  v9 = v38;
  sub_1800AAE44(*a2, &v9);
  `eh vector destructor iterator'(v45, 0x40uLL, 0xAuLL, (void (*)(void *))sub_180093600);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 && !_InterlockedDecrement(v8 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    if ( !_InterlockedDecrement(v8 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
}
