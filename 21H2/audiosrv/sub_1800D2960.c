/*
 * XREFs of sub_1800D2960 @ 0x1800D2960
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2960(__int64 a1, int a2, __int64 a3, int a4)
{
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  char *v14; // rax
  void *v15; // rbx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+38h] [rbp-59h] BYREF
  int v25; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v26; // [rsp+40h] [rbp-51h] BYREF
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v28[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  int *v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  int *v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v8 > 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(*(_QWORD *)(a1 + 72));
    v25 = a4;
    v24 = v9;
    v27 = *(_QWORD *)(a1 + 320);
    v26 = a3;
    v35 = &v24;
    v33 = &v25;
    v31 = &v26;
    v29 = &v27;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 8LL;
    v30 = 8LL;
    sub_1800521E8((__int64)v8, byte_180166C69, 0LL, 0LL, 6, (__int64)v28);
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 728);
  v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
  v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
  v14 = (char *)sub_18006A1B0(v13);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = v13;
    *(_OWORD *)(v14 + 28) = xmmword_18015B730;
    *((_DWORD *)v14 + 1) = 0x20000;
    *((_DWORD *)v14 + 6) = v12;
    *((_QWORD *)v14 + 6) = *(_QWORD *)(a1 + 320);
    *((_QWORD *)v14 + 7) = a3;
    *((_DWORD *)v14 + 16) = a4;
    *((_DWORD *)v14 + 17) = a2;
    v19 = sub_180061BA0((_WORD *)v14 + 36, v12, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 728LL));
    v16 = v19;
    if ( v19 < 0 )
    {
      v17 = 1811;
LABEL_10:
      v18 = v19;
      goto LABEL_11;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(*(_QWORD *)(a1 + 72));
    v19 = MMDevAPI_12(v15, v20, v21, v22);
    v16 = v19;
    if ( v19 < 0 )
    {
      v17 = 1816;
      goto LABEL_10;
    }
    sub_18006A148(v15);
    return 0LL;
  }
  v16 = -2147024882;
  v17 = 1792;
  v18 = -2147024882;
LABEL_11:
  sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v18);
  if ( v15 )
    sub_18006A148(v15);
  return v16;
}
