/*
 * XREFs of sub_180039484 @ 0x180039484
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_1800388C4 @ 0x1800388C4 (sub_1800388C4.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016ADC @ 0x180016ADC (sub_180016ADC.c)
 *     sub_180017190 @ 0x180017190 (sub_180017190.c)
 *     sub_18003902C @ 0x18003902C (sub_18003902C.c)
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039484(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r15
  __int64 *v4; // r14
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 v32; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+38h]
  __int64 v34; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+50h] BYREF

  v2 = sub_1800392D8(a1);
  if ( v2 < 0 )
    sub_180012300(retaddr, 359, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v2);
  v3 = sub_18003A1A4(a1, 0LL);
  *(_BYTE *)(a1 + 160) = (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 32LL) & 0x100) == 0;
  v4 = (__int64 *)(a1 + 104);
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v34 = 0LL;
  v32 = *(_OWORD *)v3;
  v6 = sub_180017190(*(_QWORD *)(a1 + 64), &v32, &v34);
  v7 = v6;
  v8 = v34;
  if ( v6 >= 0 )
  {
    v10 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v6 = (**(__int64 (__fastcall ***)(__int64, __int128 *, __int64))v8)(v8, &xmmword_180051720, a1 + 104);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 370;
      goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v12 = *(_QWORD *)(a1 + 64);
    LODWORD(v34) = 0;
    v36 = 4;
    v32 = *(_OWORD *)v3;
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, unsigned int *))(*(_QWORD *)v12 + 64LL))(
            v12,
            &v32,
            19LL,
            &v34,
            &v36);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v17 = BYTE3(v34);
      v16 = WORD1(v34);
      v15 = (unsigned int)v34 >> 8;
      v14 = 0;
    }
    else
    {
      sub_180003268(retaddr, 373, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v13);
      LOBYTE(v15) = v34;
      LOBYTE(v16) = v34;
      LOBYTE(v17) = v34;
    }
    if ( (_WORD)v14 == 2 )
    {
      v18 = *(_QWORD *)(a1 + 112);
      if ( v18 )
      {
        *(_QWORD *)(a1 + 112) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = *(_QWORD *)(a1 + 120);
      if ( v19 )
      {
        *(_QWORD *)(a1 + 120) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = *(_QWORD *)(a1 + 128);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 128) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      if ( v14 < 0 )
      {
        v28 = 386;
        goto LABEL_37;
      }
      v14 = sub_18003902C(v17, (__int64 *)(a1 + 112), (unsigned __int8)v17);
      if ( v14 < 0 )
      {
        v28 = 387;
        goto LABEL_37;
      }
      v14 = sub_18003902C(v29, (__int64 *)(a1 + 120), (unsigned __int8)v16);
      if ( v14 < 0 )
      {
        v28 = 388;
        goto LABEL_37;
      }
      v14 = sub_18003902C(v30, (__int64 *)(a1 + 128), (unsigned __int8)v15);
      if ( v14 < 0 )
      {
        v28 = 389;
        goto LABEL_37;
      }
    }
    v35 = 0;
    v21 = *(_QWORD *)(a1 + 64);
    LODWORD(v34) = 4;
    v32 = *(_OWORD *)v3;
    v22 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, unsigned int *, __int64 *))(*(_QWORD *)v21 + 64LL))(
            v21,
            &v32,
            20LL,
            &v35,
            &v34);
    v14 = v22;
    if ( v22 < 0 )
      sub_180003268(retaddr, 332, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v22);
    if ( (_WORD)v14 == 2 )
    {
      v24 = *(_QWORD *)(a1 + 136);
      if ( v24 )
      {
        *(_QWORD *)(a1 + 136) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    else
    {
      if ( v14 < 0 )
      {
        v28 = 400;
        goto LABEL_37;
      }
      v14 = sub_18003902C(v23, (__int64 *)(a1 + 136), v35);
      if ( v14 < 0 )
      {
        v28 = 401;
        goto LABEL_37;
      }
    }
    v32 = *(_OWORD *)v3;
    v14 = sub_180016ADC(*(__int64 **)(a1 + 64), &v32, &v34, &v36);
    if ( (_WORD)v14 == 2 )
    {
      v26 = *(_QWORD *)(a1 + 144);
      if ( v26 )
      {
        *(_QWORD *)(a1 + 144) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = *(_QWORD *)(a1 + 152);
      if ( v27 )
      {
        *(_QWORD *)(a1 + 152) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      return 0LL;
    }
    if ( v14 >= 0 )
    {
      v14 = sub_18003902C(v25, (__int64 *)(a1 + 144), v34);
      if ( v14 >= 0 )
      {
        v14 = sub_18003902C(v31, (__int64 *)(a1 + 152), v36);
        if ( v14 >= 0 )
          return 0LL;
        v28 = 416;
      }
      else
      {
        v28 = 415;
      }
    }
    else
    {
      v28 = 414;
    }
LABEL_37:
    sub_180003268(
      retaddr,
      v28,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      v14);
    return (unsigned int)v14;
  }
  v9 = 368;
LABEL_11:
  sub_180003268(retaddr, v9, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
