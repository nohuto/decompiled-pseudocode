/*
 * XREFs of sub_18011020C @ 0x18011020C
 * Callers:
 *     sub_18010EF40 @ 0x18010EF40 (sub_18010EF40.c)
 *     sub_18010F6C0 @ 0x18010F6C0 (sub_18010F6C0.c)
 *     sub_18010F85C @ 0x18010F85C (sub_18010F85C.c)
 *     sub_18010FC78 @ 0x18010FC78 (sub_18010FC78.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18011020C(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // edx
  LPVOID v19; // [rsp+30h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-38h] BYREF
  void *v21; // [rsp+40h] [rbp-30h] BYREF
  char v22; // [rsp+48h] [rbp-28h]
  void **p_pv; // [rsp+50h] [rbp-20h]
  void *v24; // [rsp+58h] [rbp-18h] BYREF
  char v25; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+48h] BYREF

  v4 = a2;
  v19 = 0LL;
  if ( a3 )
  {
    v27 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v27);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 401;
LABEL_10:
      v9 = v6;
      goto LABEL_11;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&v19;
    v21 = 0LL;
    v22 = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 40LL))(v27, &v21);
    if ( v22 )
      sub_18002A504((void **)&lpCriticalSection->DebugInfo, v21);
    if ( v7 < 0 )
    {
      v9 = v7;
      v8 = 402;
LABEL_11:
      sub_18004BD84(
        (int)retaddr,
        v8,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        v9);
      sub_18000F708(&v27);
      goto LABEL_38;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 40) + 24LL))(
           *(_QWORD *)(a1 + 40),
           (unsigned int)v4,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 403;
      goto LABEL_10;
    }
    sub_18000F708(&v27);
  }
  pv = 0LL;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  v10 = a1 + 8 * v4;
  v11 = *(_QWORD *)(v10 + 120);
  if ( v11 )
  {
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v27);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = v12;
      v14 = 413;
      goto LABEL_20;
    }
    p_pv = &pv;
    v24 = 0LL;
    v25 = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 40LL))(v27, &v24);
    if ( v25 )
      sub_18002A504(p_pv, v24);
    if ( v7 < 0 )
    {
      v13 = v7;
      v14 = 414;
LABEL_20:
      sub_18004BD84(
        (int)retaddr,
        v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        v13);
      sub_18000F708(&v27);
      if ( (_BYTE)v21 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_36;
    }
    sub_18000F708(&v27);
  }
  if ( *(_QWORD *)(v10 + 120) != a3 )
    sub_1800579A4((_QWORD *)(v10 + 120), a3);
  if ( (_BYTE)v21 )
    LeaveCriticalSection(lpCriticalSection);
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
  {
    if ( pv )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, LPVOID, _DWORD))(*(_QWORD *)qword_18019E618 + 320LL))(
              qword_18019E618,
              v15,
              (unsigned int)v4,
              pv,
              0);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 425;
LABEL_34:
        sub_18004BD84(
          (int)retaddr,
          v17,
          (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
          v16);
        goto LABEL_36;
      }
    }
    if ( v19 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPVOID, int))(*(_QWORD *)qword_18019E618 + 320LL))(
              qword_18019E618,
              *(_QWORD *)(a1 + 136),
              (unsigned int)v4,
              v19,
              1);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 430;
        goto LABEL_34;
      }
    }
  }
  v7 = 0;
LABEL_36:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_38:
  if ( v19 )
    CoTaskMemFree(v19);
  return (unsigned int)v7;
}
