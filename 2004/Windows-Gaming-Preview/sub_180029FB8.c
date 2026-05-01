/*
 * XREFs of sub_180029FB8 @ 0x180029FB8
 * Callers:
 *     sub_180031520 @ 0x180031520 (sub_180031520.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_18000F894 @ 0x18000F894 (sub_18000F894.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18002BD00 @ 0x18002BD00 (sub_18002BD00.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180029FB8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  unsigned int v9; // ebx
  HSTRING v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, void *, HSTRING *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING v14; // rbx
  int v15; // eax
  int v16; // eax
  HSTRING v17; // rbx
  __int64 v18; // r9
  HSTRING v19; // rcx
  HSTRING v21; // rcx
  struct _RTL_CRITICAL_SECTION *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // xmm6
  int v26; // eax
  int v27; // r9d
  int v28; // eax
  HSTRING v29; // rcx
  __int64 v30; // r9
  __int128 v31; // [rsp+28h] [rbp-59h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+38h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]
  HSTRING string; // [rsp+E8h] [rbp+67h] BYREF
  HSTRING v35; // [rsp+F8h] [rbp+77h] BYREF
  HSTRING v36; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 256);
  if ( v5 )
  {
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 128LL))(v5, &string);
    v9 = v6;
    if ( v6 >= 0
      && (v6 = sub_18000F894((void (__fastcall ***)(__int64, __int128 *, __int64))string, v7, v8), v9 = v6, v6 >= 0) )
    {
      *(_BYTE *)(a2 + 16) = 1;
      v9 = 0;
    }
    else
    {
      sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
    }
    v10 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v9;
  }
  v11 = *(__int64 (__fastcall ****)(_QWORD, void *, HSTRING *))(v4 + 304);
  if ( !v11 )
  {
    v22 = (struct _RTL_CRITICAL_SECTION *)(v4 + 168);
    EnterCriticalSection(v22);
    v36 = (HSTRING)v22;
    v24 = *(_QWORD *)(*a1 + 280);
    if ( !v24 || !*(_QWORD *)(*a1 + 288) )
    {
      v9 = -2147024891;
      sub_180003268(
        retaddr,
        1052,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        -2147024891);
LABEL_48:
      if ( v22 )
        LeaveCriticalSection(v22);
      return v9;
    }
    LOBYTE(v23) = 1;
    v25 = *(_OWORD *)sub_18003A1A4(v24, v23);
    v35 = 0LL;
    v31 = v25;
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v26 = sub_180016730(*(_QWORD *)(*a1 + 288), &v31, 23LL, &v35);
    v9 = v26;
    if ( v26 < 0 )
    {
      v27 = v26;
LABEL_30:
      sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v27);
LABEL_43:
      WindowsDeleteString(v35);
      v35 = 0LL;
      goto LABEL_48;
    }
    if ( !v35 )
    {
      v9 = -2147024894;
      v27 = -2147024894;
      goto LABEL_30;
    }
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v28 = sub_18002BD00(*a1 + 16, &string);
    v9 = v28;
    if ( v28 < 0 )
      goto LABEL_36;
    v29 = string;
    if ( string )
    {
      if ( !WindowsIsStringEmpty(string) )
        goto LABEL_37;
      v29 = string;
    }
    v31 = v25;
    WindowsDeleteString(v29);
    string = 0LL;
    v28 = sub_180016730(*(_QWORD *)(*a1 + 288), &v31, 4LL, &string);
    v9 = v28;
    if ( v28 < 0 )
    {
LABEL_36:
      sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v28);
LABEL_42:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_43;
    }
LABEL_37:
    pExecInfo.cbSize = 112;
    memset(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(v35, 0LL);
    if ( string && !WindowsIsStringEmpty(string) )
      pExecInfo.lpParameters = WindowsGetStringRawBuffer(string, 0LL);
    if ( ShellExecuteExW(&pExecInfo) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v35);
      v35 = 0LL;
      if ( v22 )
        LeaveCriticalSection(v22);
      return 0LL;
    }
    v9 = sub_1800032A0(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v30);
    goto LABEL_42;
  }
  v35 = 0LL;
  v12 = (**v11)(v11, &unk_180050DB8, &v35);
  v13 = v12;
  if ( v12 >= 0 )
  {
    string = 0LL;
    v14 = v35;
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
    v13 = v15;
    if ( v15 < 0 )
    {
      sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
LABEL_18:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_19;
    }
    WindowsDeleteString(0LL);
    v36 = 0LL;
    v16 = sub_18002BD00(*a1 + 16, &v36);
    v13 = v16;
    v17 = v36;
    if ( v16 < 0 )
    {
      sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v16);
LABEL_17:
      WindowsDeleteString(v17);
      goto LABEL_18;
    }
    pExecInfo.cbSize = 112;
    memset(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(v17, 0LL);
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      v13 = sub_1800032A0(
              retaddr,
              1052,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v18);
      goto LABEL_17;
    }
    WindowsDeleteString(v17);
    WindowsDeleteString(string);
    string = 0LL;
    v21 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 0LL;
  }
  sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
LABEL_19:
  v19 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v13;
}
