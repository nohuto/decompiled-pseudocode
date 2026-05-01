/*
 * XREFs of sub_1800125A0 @ 0x1800125A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_1800137F0 @ 0x1800137F0 (sub_1800137F0.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800125A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // r9d
  int v8; // edx
  char *v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  __int64 v26; // [rsp+60h] [rbp+18h]
  __int64 v27; // [rsp+68h] [rbp+20h]

  v2 = *(unsigned int *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 64);
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, 5LL, v2, &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = v5;
    v8 = 182;
LABEL_27:
    sub_180003268(
      retaddr,
      v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v7);
    goto LABEL_29;
  }
  *a2 = 0LL;
  v9 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( !v9 )
  {
    v6 = -2147024882;
LABEL_26:
    v7 = v6;
    v8 = 184;
    goto LABEL_27;
  }
  *(_QWORD *)v9 = &off_1800495C8;
  sub_180011A50((_QWORD *)v9 + 3);
  v10 = qword_18005ADB0;
  *(_QWORD *)v9 = off_1800496D0;
  *((_QWORD *)v9 + 1) = off_1800496B0;
  *((_QWORD *)v9 + 2) = off_180049658;
  *((_QWORD *)v9 + 3) = off_180049610;
  *((_QWORD *)v9 + 8) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)v9 = off_180049998;
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 1) = off_1800496B0;
  *((_QWORD *)v9 + 2) = off_180049940;
  *((_QWORD *)v9 + 3) = off_180049610;
  v11 = (__int64 *)(v9 + 72);
  *((_QWORD *)v9 + 9) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(v9 + 88), 2);
  *((_QWORD *)v9 + 21) = 0LL;
  v12 = v25;
  if ( !v25 )
  {
    v6 = -2147467261;
    v13 = 137;
LABEL_24:
    sub_180003268(
      retaddr,
      v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v6);
    goto LABEL_25;
  }
  v25 = 0LL;
  v14 = (__int64 *)*((_QWORD *)v9 + 10);
  v26 = v12;
  *((_QWORD *)v9 + 10) = v12;
  if ( v14 )
  {
    v15 = *v14;
    v26 = 0LL;
    (*(void (__fastcall **)(__int64 *))(v15 + 16))(v14);
  }
  v16 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (***((__int64 (__fastcall ****)(_QWORD, __int128 *, __int64))v9 + 10))(
          *((_QWORD *)v9 + 10),
          &xmmword_1800511C8,
          (__int64)(v9 + 72));
  v6 = v17;
  if ( v17 >= 0 )
  {
    v27 = 0LL;
    v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v19 = v18;
    if ( !v18 )
    {
      v6 = -2147024882;
      v13 = 161;
      goto LABEL_24;
    }
    v20 = qword_18005ADB0;
    *v18 = &off_180048EE8;
    *v18 = off_180049018;
    *((_DWORD *)v18 + 3) = 1;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v19[2] = v9;
    *v19 = off_1800495A0;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v9 + 10) + 48LL))(*((_QWORD *)v9 + 10), v19);
    v6 = v21;
    if ( v21 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v6 = 0;
    }
    else
    {
      sub_180003268(
        retaddr,
        164,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v21);
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
    }
  }
  else
  {
    sub_180003268(
      retaddr,
      140,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v17);
  }
  if ( v6 >= 0 )
    v6 = sub_180013860(v9, &xmmword_180051710, a2);
LABEL_25:
  sub_1800137F0(v9);
  if ( v6 < 0 )
    goto LABEL_26;
  v6 = 0;
LABEL_29:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v6;
}
