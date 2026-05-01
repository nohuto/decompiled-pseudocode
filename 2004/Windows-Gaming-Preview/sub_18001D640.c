/*
 * XREFs of sub_18001D640 @ 0x18001D640
 * Callers:
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BA30 @ 0x18000BA30 (sub_18000BA30.c)
 *     sub_18000C280 @ 0x18000C280 (sub_18000C280.c)
 *     sub_18000DB04 @ 0x18000DB04 (sub_18000DB04.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 *     unknown_libname_35 @ 0x18000F450 (unknown_libname_35.c)
 *     sub_180010A90 @ 0x180010A90 (sub_180010A90.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_18001610C @ 0x18001610C (sub_18001610C.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001D3AC @ 0x18001D3AC (sub_18001D3AC.c)
 *     sub_18001DC30 @ 0x18001DC30 (sub_18001DC30.c)
 *     sub_18001DD10 @ 0x18001DD10 (sub_18001DD10.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 *     sub_180029A70 @ 0x180029A70 (sub_180029A70.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18001D640(__int64 *a1, __int64 a2)
{
  int v4; // eax
  int v5; // r15d
  HRESULT v6; // eax
  HRESULT v7; // eax
  volatile signed __int64 *v8; // rsi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  int v13; // eax
  volatile signed __int64 *v14; // rdi
  void *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  volatile signed __int64 *v26; // rcx
  __int64 **v27; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  int v30; // eax
  __int64 *v31; // rbx
  __int64 v32; // rdx
  volatile signed __int64 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v38; // [rsp+30h] [rbp-89h] BYREF
  volatile signed __int64 *v39; // [rsp+38h] [rbp-81h] BYREF
  __int64 *v40; // [rsp+40h] [rbp-79h] BYREF
  __int64 v41; // [rsp+48h] [rbp-71h] BYREF
  __int64 v42; // [rsp+50h] [rbp-69h] BYREF
  __int64 v43; // [rsp+58h] [rbp-61h] BYREF
  int v44; // [rsp+60h] [rbp-59h] BYREF
  __int128 v45; // [rsp+68h] [rbp-51h] BYREF
  __int128 v46; // [rsp+78h] [rbp-41h] BYREF
  __int64 v47; // [rsp+88h] [rbp-31h]
  __int64 v48; // [rsp+90h] [rbp-29h] BYREF
  HSTRING_HEADER v49; // [rsp+98h] [rbp-21h] BYREF
  HSTRING v50; // [rsp+B0h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-1h] BYREF
  HSTRING string; // [rsp+D0h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+5Fh]

  v42 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v42);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
    goto LABEL_75;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &hstringHeader, &string);
  if ( v6 < 0 )
    goto LABEL_79;
  v41 = 0LL;
  if ( (*(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, string, &v41) >= 0
    && v41
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 56LL))(v41, &v44) >= 0
    && v44 )
  {
    v50 = 0LL;
    v7 = WindowsCreateStringReference(L"FullTileId", 0xAu, &v49, &v50);
    if ( v7 >= 0 )
    {
      v43 = 0LL;
      v8 = 0LL;
      v39 = 0LL;
      if ( (*(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, v50, &v43) >= 0 )
      {
        v9 = sub_18001D3AC(a1[1], v43, (__int64)&v39);
        v5 = v9;
        if ( v9 < 0 )
        {
          sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v9);
          v8 = v39;
LABEL_66:
          if ( v8 )
            sub_1800120A0(v8);
          v34 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          v50 = 0LL;
          goto LABEL_72;
        }
        v8 = v39;
      }
      v45 = 0LL;
      v10 = sub_18001610C((__int64)&v45);
      v5 = v10;
      if ( v10 < 0 )
      {
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v10);
LABEL_65:
        unknown_libname_35((__int64)&v45);
        goto LABEL_66;
      }
      v11 = sub_18001D120(a1[1], v41, &v39, (__int64 *)&v45);
      v5 = v11;
      if ( v11 < 0 )
      {
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v11);
        v8 = v39;
        goto LABEL_65;
      }
      v46 = 0LL;
      v12 = operator new(0x38uLL);
      *v12 = v12;
      v12[1] = v12;
      v12[2] = v12;
      *((_WORD *)v12 + 12) = 257;
      *(_QWORD *)&v46 = v12;
      v8 = v39;
      v13 = sub_180029A70(v39 + 3, &v46, &v45);
      v5 = v13;
      if ( v13 < 0 )
      {
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v13);
LABEL_64:
        sub_18001DC30(&v46);
        goto LABEL_65;
      }
      v14 = 0LL;
      v47 = 0LL;
      v5 = 0;
      v15 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
      v16 = 0LL;
      if ( !v15 || (v16 = sub_18000DB04((__int64)v15)) == 0 )
        v5 = -2147024882;
      if ( v5 >= 0 )
      {
        v14 = (volatile signed __int64 *)v16;
        v47 = v16;
        v16 = 0LL;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v5 < 0 )
      {
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v5);
        goto LABEL_62;
      }
      if ( *((_QWORD *)v8 + 32) && *((_QWORD *)v8 + 30) )
      {
        v38 = 0LL;
        v17 = sub_180010A90((__int64)v8, &xmmword_180050E58, &v38);
        v5 = v17;
        if ( v17 < 0 || (v17 = sub_18000DBF0((__int64)v14, 0, (__int64)v38, 1), v5 = v17, v17 < 0) )
        {
          sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v17);
          v18 = v38;
          if ( !v38 )
            goto LABEL_62;
          v38 = 0LL;
          v19 = *v18;
          goto LABEL_61;
        }
        v20 = (__int64)v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      v21 = (_QWORD *)v46;
      v22 = *(_QWORD **)v46;
      if ( *(_QWORD *)v46 != (_QWORD)v46 )
      {
        while ( 1 )
        {
          v23 = v22[6];
          v22[6] = 0LL;
          v40 = (__int64 *)v23;
          v38 = 0LL;
          v48 = *(_QWORD *)(a1[1] + 128);
          v24 = sub_18001EA64((unsigned int)&v38, (int)v22 + 32, (unsigned int)&v40, (unsigned int)&v45, (__int64)&v48);
          v5 = v24;
          if ( v24 < 0 )
            break;
          v24 = sub_18000DBF0((__int64)v14, 0, (__int64)v38, 1);
          v5 = v24;
          if ( v24 < 0 )
            break;
          v26 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            sub_1800120A0(v26);
          }
          if ( v40 )
            j_j__o_free(v40, v25);
          v27 = (__int64 **)v22[2];
          if ( *((_BYTE *)v27 + 25) )
          {
            for ( i = v22[1]; !*(_BYTE *)(i + 25) && v22 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
              v22 = (_QWORD *)i;
            v22 = (_QWORD *)i;
          }
          else
          {
            v22 = (_QWORD *)v22[2];
            for ( j = *v27; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v22 = j;
          }
          if ( v22 == v21 )
            goto LABEL_52;
        }
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v24);
        v33 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          sub_1800120A0(v33);
        }
        if ( v40 )
          j_j__o_free(v40, v32);
        goto LABEL_62;
      }
LABEL_52:
      v40 = 0LL;
      v30 = sub_18000C280((__int64)v14, (__int64 *)&v40);
      v5 = v30;
      v31 = v40;
      if ( v30 >= 0 )
      {
        sub_18001DD10(a2, v40);
        v5 = 0;
      }
      else
      {
        sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v30);
      }
      if ( !v31 )
      {
LABEL_62:
        if ( v14 )
          sub_18000BA30(v14);
        goto LABEL_64;
      }
      v19 = *v31;
      v18 = v31;
LABEL_61:
      (*(void (__fastcall **)(__int64 *))(v19 + 16))(v18);
      goto LABEL_62;
    }
    sub_180011F90(v7);
LABEL_79:
    sub_180011F90(v6);
    JUMPOUT(0x18001DC28LL);
  }
  v5 = -2147024891;
  sub_180003268(retaddr, 713, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024891);
LABEL_72:
  v35 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  string = 0LL;
LABEL_75:
  v36 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return (unsigned int)v5;
}
