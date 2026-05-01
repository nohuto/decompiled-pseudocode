/*
 * XREFs of sub_18003BA14 @ 0x18003BA14
 * Callers:
 *     sub_18003C260 @ 0x18003C260 (sub_18003C260.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016BC8 @ 0x180016BC8 (sub_180016BC8.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003BA14(__int64 *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 (__fastcall ***v3)(_QWORD, __int128 *, _QWORD *); // rcx
  int v4; // eax
  __int128 *v5; // rdx
  PCWSTR StringRawBuffer; // r8
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int128 *, _QWORD *); // rcx
  __int64 v9; // r15
  int v10; // eax
  int v11; // esi
  HSTRING v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int128 *, _QWORD *); // rcx
  HSTRING v14; // rdi
  PCWSTR v15; // rax
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, __int128 *, _QWORD *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, __int128 *, _QWORD *); // [rsp+30h] [rbp-49h] BYREF
  UINT32 length; // [rsp+38h] [rbp-41h] BYREF
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  HSTRING v22; // [rsp+48h] [rbp-31h] BYREF
  UINT32 v23; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-21h]
  __int16 v25; // [rsp+60h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+68h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-9h] BYREF
  __int16 *v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  int v30; // [rsp+9Ch] [rbp+23h]
  PCWSTR v31; // [rsp+A0h] [rbp+27h]
  int v32; // [rsp+A8h] [rbp+2Fh]
  int v33; // [rsp+ACh] [rbp+33h]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 64);
  EnterCriticalSection(v2);
  v26 = v2;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int128 *, _QWORD *))(*a1 + 104);
  if ( !v3 )
    goto LABEL_22;
  string = 0LL;
  v4 = sub_180016BC8(v3, &string);
  if ( v4 < 0 )
    sub_180012300(
      retaddr,
      75,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      v4);
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( (unsigned int)dword_18005A000 > 5
    && (qword_18005A010 & 0x800000000000LL) != 0
    && (qword_18005A018 & 0x800000000000LL) == qword_18005A018 )
  {
    v24 = StringRawBuffer;
    v25 = length;
    v28 = &v25;
    v29 = 2;
    v30 = 0;
    v31 = StringRawBuffer;
    v32 = 2 * (unsigned __int16)length;
    v33 = 0;
    sub_180001090((__int64)&dword_18005A000, (unsigned __int8 *)dword_1800535B6, 0LL, 0LL, 4u, &v27);
  }
  v7 = *a1;
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int128 *, _QWORD *))(*a1 + 104);
  v19 = v8;
  if ( v8 )
  {
    ((__int64 (__fastcall **)(_QWORD, __int128 *, PCWSTR))*v8)[1](v8, v5, StringRawBuffer);
    v7 = *a1;
    v8 = v19;
  }
  v24 = &v19;
  v9 = *(_QWORD *)(v7 + 112);
  v22 = 0LL;
  v10 = sub_180016BC8(v8, &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = v22;
    v15 = WindowsGetStringRawBuffer(v22, &v23);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, PCWSTR, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, 5LL, v15, 2 * v23);
    v11 = v16;
    if ( v16 >= 0 )
    {
      WindowsDeleteString(v14);
      v17 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v17)[2])(v17);
      }
      v11 = 0;
      goto LABEL_19;
    }
    sub_180003268(retaddr, 583, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v16);
    v12 = v14;
  }
  else
  {
    sub_180003268(retaddr, 575, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v10);
    v12 = v22;
  }
  WindowsDeleteString(v12);
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v13)[2])(v13);
  }
LABEL_19:
  if ( v11 < 0 )
  {
    sub_180003268(
      retaddr,
      75,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      v11);
    WindowsDeleteString(string);
    goto LABEL_23;
  }
  WindowsDeleteString(string);
LABEL_22:
  v11 = 0;
LABEL_23:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v11;
}
