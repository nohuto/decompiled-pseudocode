/*
 * XREFs of sub_180016BC8 @ 0x180016BC8
 * Callers:
 *     sub_180017404 @ 0x180017404 (sub_180017404.c)
 *     sub_18003A258 @ 0x18003A258 (sub_18003A258.c)
 *     sub_18003BA14 @ 0x18003BA14 (sub_18003BA14.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800191A8 @ 0x1800191A8 (sub_1800191A8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180016BC8(__int64 (__fastcall ***a1)(_QWORD, __int128 *, _QWORD *), HSTRING *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  char v6; // si
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  HRESULT v10; // eax
  int v11; // eax
  int v12; // ebx
  HRESULT v13; // eax
  int v14; // edx
  HSTRING v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+28h]
  char v25; // [rsp+80h] [rbp+30h] BYREF
  HSTRING newString; // [rsp+90h] [rbp+40h] BYREF
  HSTRING string; // [rsp+98h] [rbp+48h] BYREF

  string = 0LL;
  v23[0] = 0LL;
  v20 = 0LL;
  v3 = (**a1)(a1, &xmmword_180051730, v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 420;
LABEL_7:
    sub_180003268(retaddr, v5, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v3);
    goto LABEL_33;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v23[0] + 48LL))(v23[0], &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 421;
    goto LABEL_7;
  }
  WindowsDeleteString(string);
  string = 0LL;
  v3 = WindowsCreateString(&word_18005181C, 1u, &string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 422;
    goto LABEL_7;
  }
  v6 = 0;
  newString = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 56LL))(v20, &v25);
  if ( v7 >= 0 )
  {
    while ( v25 )
    {
      v22 = 0LL;
      v8 = v20;
      WindowsDeleteString(0LL);
      v22 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, &v22);
      v4 = v9;
      if ( v9 < 0 )
      {
        sub_180003268(retaddr, 431, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v9);
        goto LABEL_27;
      }
      string2 = 0LL;
      v23[1] = WindowsGetStringRawBuffer(v22, 0LL);
      v10 = sub_1800191A8(&string2);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 434;
LABEL_25:
        sub_180003268(retaddr, v16, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v10);
        WindowsDeleteString(string2);
        string2 = 0LL;
LABEL_27:
        WindowsDeleteString(v22);
        goto LABEL_21;
      }
      WindowsDeleteString(newString);
      newString = 0LL;
      v10 = WindowsConcatString(*a2, string2, &newString);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 435;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      WindowsDeleteString(0LL);
      newString = 0LL;
      v10 = WindowsConcatString(*a2, string, &newString);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 438;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      v6 = 1;
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 64LL))(v20, &v25);
      v12 = v11;
      if ( v11 < 0 )
        sub_180012300(retaddr, 443, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v11);
      WindowsDeleteString(string2);
      string2 = 0LL;
      WindowsDeleteString(v22);
      if ( v12 < 0 )
        goto LABEL_18;
    }
    if ( v6 )
      goto LABEL_18;
  }
  else
  {
    sub_180012300(retaddr, 427, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  v13 = WindowsCreateString(&word_180051820, 2u, &string);
  v4 = v13;
  if ( v13 < 0 )
  {
    v14 = 448;
LABEL_20:
    sub_180003268(retaddr, v14, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v13);
LABEL_21:
    v15 = newString;
    goto LABEL_32;
  }
LABEL_18:
  WindowsDeleteString(newString);
  newString = 0LL;
  v13 = WindowsConcatString(*a2, string, &newString);
  v4 = v13;
  if ( v13 < 0 )
  {
    v14 = 451;
    goto LABEL_20;
  }
  WindowsDeleteString(*a2);
  *a2 = newString;
  v15 = 0LL;
  newString = 0LL;
  v4 = 0;
LABEL_32:
  WindowsDeleteString(v15);
  newString = 0LL;
LABEL_33:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  WindowsDeleteString(string);
  return v4;
}
