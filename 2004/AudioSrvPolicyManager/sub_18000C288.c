/*
 * XREFs of sub_18000C288 @ 0x18000C288
 * Callers:
 *     sub_18000DAB0 @ 0x18000DAB0 (sub_18000DAB0.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     sub_18000EF90 @ 0x18000EF90 (sub_18000EF90.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000C288(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _WORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rax
  int v12; // esi
  volatile signed __int32 *v13; // rbx
  __int64 *v14; // rsi
  HANDLE ProcessHeap; // rax
  char *v16; // rax
  char *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v28; // [rsp+48h] [rbp-31h]
  char *v29; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v30; // [rsp+58h] [rbp-21h]
  void *v31; // [rsp+60h] [rbp-19h] BYREF
  void *v32; // [rsp+68h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-9h] BYREF
  _WORD *v34; // [rsp+90h] [rbp+17h]
  int v35; // [rsp+98h] [rbp+1Fh]
  int v36; // [rsp+9Ch] [rbp+23h]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v4 > 4u )
  {
    v5 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    if ( v5 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v5 = &unk_1800428B8;
      v7 = 2;
    }
    v34 = v5;
    v35 = v7;
    v36 = 0;
    sub_180001090((__int64)v4, (unsigned __int8 *)dword_180046221, 0LL, 0LL, 3u, &v33);
  }
  v26 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))a2)(a2, &unk_180042AB0, &v26) < 0 )
    goto LABEL_48;
  v25 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
  v9 = (_QWORD *)*a1;
  if ( !v8 )
  {
    v14 = (__int64 *)a1[1];
    ProcessHeap = GetProcessHeap();
    v16 = (char *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
    v17 = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 2) = 1;
      *((_DWORD *)v16 + 3) = 1;
      *(_QWORD *)v16 = off_18003EBC0;
      v18 = *v14;
      *((_QWORD *)v16 + 2) = off_18003EB98;
      *((_QWORD *)v16 + 3) = 0LL;
      *((_QWORD *)v16 + 4) = 0LL;
      v19 = v9[60];
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      *((_QWORD *)v17 + 3) = v9[59];
      *((_QWORD *)v17 + 4) = v9[60];
      *((_QWORD *)v17 + 5) = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 == (char *)-16LL )
    {
      v12 = -2147024882;
      v20 = 910;
    }
    else
    {
      v32 = &unk_180042B30;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
      v29 = v17 + 16;
      v30 = (volatile signed __int32 *)v17;
      v25 = 0LL;
      v12 = sub_18000D298(&v25, &v32, &v29);
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          v21 = v30;
          (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        }
      }
      if ( v12 >= 0 )
      {
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(LPVOID))v17)(v17);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        goto LABEL_44;
      }
      v20 = 912;
    }
    sub_180003AB0(
      retaddr,
      v20,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      v12);
    if ( v17 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)v17 + 2) )
      {
        (**(void (__fastcall ***)(LPVOID))v17)(v17);
        if ( !_InterlockedDecrement((volatile signed __int32 *)v17 + 3) )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    goto LABEL_38;
  }
  v31 = &unk_180042B30;
  v10 = v9[57];
  v11 = (volatile signed __int32 *)v9[58];
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = (volatile signed __int32 *)v9[58];
  }
  v27 = v10;
  v28 = v11;
  v25 = 0LL;
  v12 = sub_18000D298(&v25, &v31, &v27);
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v28;
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  if ( v12 >= 0 )
  {
LABEL_44:
    v22 = v25;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v25);
    if ( v23 < 0 )
      sub_18000F8F4(
        retaddr,
        915LL,
        "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (unsigned int)v23);
    if ( v22 )
      sub_18000EF90(v22);
LABEL_48:
    v12 = 0;
    goto LABEL_49;
  }
  sub_180003AB0(
    retaddr,
    899,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    v12);
LABEL_38:
  if ( v25 )
    sub_18000EF90(v25);
LABEL_49:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)v12;
}
