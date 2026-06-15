/*
 * XREFs of sub_18000DF70 @ 0x18000DF70
 * Callers:
 *     sub_18000DBC0 @ 0x18000DBC0 (sub_18000DBC0.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180114BB0 @ 0x180114BB0 (sub_180114BB0.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000E110 @ 0x18000E110 (sub_18000E110.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_180111C60 @ 0x180111C60 (sub_180111C60.c)
 *     sub_180111DC0 @ 0x180111DC0 (sub_180111DC0.c)
 *     sub_1801123CC @ 0x1801123CC (sub_1801123CC.c)
 *     sub_180112B7C @ 0x180112B7C (sub_180112B7C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18000DF70(__int64 a1, unsigned int a2, int a3, int a4, _BYTE *a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  void *v11; // rbx
  __int64 v12; // rcx
  _BYTE *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // r11
  int v18; // ebx
  __int64 v20; // rax
  void *v21; // r11
  unsigned int v22; // esi
  _QWORD *v23; // rsi
  __int64 v24; // rax
  void *v25; // [rsp+40h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+60h] [rbp-19h]
  __int128 v30; // [rsp+68h] [rbp-11h] BYREF
  __int64 v31; // [rsp+78h] [rbp-1h]
  __int128 v32; // [rsp+80h] [rbp+7h]
  int v33; // [rsp+90h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+4Fh]
  LPVOID pv; // [rsp+D0h] [rbp+57h] BYREF

  v6 = a4;
  v7 = a3;
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v29 = v10;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 10;
  v11 = 0LL;
  v25 = 0LL;
  if ( (unsigned int)v6 > 8 )
  {
    sub_18004BD84(
      retaddr,
      137LL,
      "avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      2147942487LL);
    sub_180112B7C(&v30);
    if ( !v10 )
      return 2147942487LL;
    goto LABEL_23;
  }
  if ( (unsigned int)v7 > 1 )
  {
    sub_18004BD84(
      retaddr,
      138LL,
      "avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      2147942487LL);
    sub_180112B7C(&v30);
    if ( !v10 )
      return 2147942487LL;
LABEL_23:
    LeaveCriticalSection(v10);
    return 2147942487LL;
  }
  v12 = *(_QWORD *)(a1 + 48 * (v6 + 9 * v7) + 56);
  v26 = v12;
  v13 = a5;
  if ( v12 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)sub_1800B91A0(v12, &v26);
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 32LL))(v28, &v27) >= 0 )
        break;
      sub_18002A504(&pv, 0LL);
      if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(*(_QWORD *)v28 + 24LL))(
             v28,
             a2,
             (unsigned int)v7,
             (unsigned int)v6,
             v13,
             &pv) < 0 )
        goto LABEL_30;
      v21 = pv;
      if ( pv && !sub_180111C60(&v30, pv) )
      {
        sub_18002A504(&v25, v21);
        v11 = v25;
        if ( v25 )
          goto LABEL_39;
        goto LABEL_4;
      }
LABEL_31:
      if ( v21 )
        CoTaskMemFree(v21);
      if ( !v26 )
        goto LABEL_4;
    }
    v20 = sub_1801123CC(&v30, v27, *((_QWORD *)&v30 + 1));
    v12 = *((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
      **((_QWORD **)&v30 + 1) = v20;
    else
      *(_QWORD *)&v30 = v20;
    *((_QWORD *)&v30 + 1) = v20;
LABEL_30:
    v21 = pv;
    goto LABEL_31;
  }
LABEL_4:
  v14 = *(_QWORD **)(a1 + 920);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = v14[2];
      v14 = (_QWORD *)*v14;
      pv = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(*(_QWORD *)v15 + 24LL))(
              v15,
              a2,
              (unsigned int)v7,
              (unsigned int)v6,
              v13,
              &pv);
      v17 = pv;
      if ( v16 >= 0 && pv && !sub_180111C60(&v30, pv) )
        break;
      if ( v17 )
        CoTaskMemFree(v17);
      if ( !v14 )
        goto LABEL_10;
    }
    sub_18002A504(&v25, v17);
    v11 = v25;
  }
LABEL_10:
  if ( v11 )
  {
LABEL_39:
    v22 = sub_180111DC0(v11, a6);
    CoTaskMemFree(v11);
    sub_180112B7C(&v30);
    if ( v10 )
      LeaveCriticalSection(v10);
    return v22;
  }
  else
  {
    v18 = sub_18000E110(v12, v7, v6, (unsigned int)&v30, a6);
    if ( v18 >= 0 && v13 )
      *v13 = 0;
    if ( v31 )
    {
      do
      {
        v23 = (_QWORD *)v30;
        if ( !(_QWORD)v30 )
          sub_1800B8610(2147500037LL);
        *(_QWORD *)&v30 = *(_QWORD *)v30;
        sub_180006A30((volatile signed __int32 *)(v23[2] - 24LL));
        *v23 = *((_QWORD *)&v32 + 1);
        *((_QWORD *)&v32 + 1) = v23;
        v24 = --v31;
        if ( !v31 )
        {
          sub_180112B7C(&v30);
          v24 = v31;
        }
      }
      while ( v24 );
    }
    v30 = 0LL;
    *((_QWORD *)&v32 + 1) = 0LL;
    if ( (_QWORD)v32 )
    {
      sub_1800524BC();
      *(_QWORD *)&v32 = 0LL;
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    return (unsigned int)v18;
  }
}
