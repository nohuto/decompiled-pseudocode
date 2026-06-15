/*
 * XREFs of sub_18002CFD0 @ 0x18002CFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800021CC @ 0x1800021CC (sub_1800021CC.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002CFD0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v4; // r12
  bool v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  WINBOOL v9; // xmm0_4
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rsp
  LPVOID *p_Context; // rdi
  LPVOID *v18; // rbx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  WINBOOL v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // r15
  __int64 v37; // r9
  HANDLE ProcessHeap; // rax
  unsigned int i; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  void *v48; // rsp
  _DWORD *v49; // rax
  _BYTE v50[32]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+28h] [rbp-18h]
  WINBOOL v52; // [rsp+40h] [rbp+0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+10h] BYREF
  __int64 v55; // [rsp+58h] [rbp+18h] BYREF
  __int64 v56; // [rsp+60h] [rbp+20h] BYREF
  __int64 v57; // [rsp+68h] [rbp+28h] BYREF
  _DWORD *v58; // [rsp+70h] [rbp+30h]
  void *retaddr; // [rsp+B8h] [rbp+78h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  *(_QWORD *)(a2 + 72) = a1;
  v4 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  v5 = *(_DWORD *)(a1 + 852) != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  *(float *)&v52 = 1.0;
  v55 = 0LL;
  if ( a2 )
    v6 = a2 + 16;
  else
    v6 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  sub_18002D350(v7, v6, *((_QWORD *)Context + 1), &v52, &v55, 0);
  v9 = v52;
  fPending = v52;
  v10 = *(float *)&v52 == *(float *)(a2 + 100);
  *(_QWORD *)(a2 + 104) = v55;
  if ( !v10 )
  {
    v10 = *(_QWORD *)(a2 + 72) == 0LL;
    *(_DWORD *)(a2 + 100) = v9;
    if ( !v10 )
    {
      v58 = (_DWORD *)sub_180008448(v8, sub_1800B6240)[1];
      if ( *v58 > 4u )
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 40LL))(*(_QWORD *)(a2 + 80));
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 8) + 80LL))(a2 + 8);
        v28 = *(_QWORD *)(a2 + 72);
        v29 = v27;
        v52 = v26;
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28);
        LODWORD(Context) = fPending;
        v57 = v29;
        sub_1800021CC(
          (__int64)v58,
          byte_180166DEA,
          v30,
          v31,
          (__int64)&Context,
          (__int64)&v57,
          (void **)&v56,
          (__int64)&v52);
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, v5, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84(retaddr, 2723LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v11);
LABEL_34:
    *(_QWORD *)(a2 + 72) = 0LL;
    return v12;
  }
  EnterCriticalSection(v2);
  v13 = 4LL * *(unsigned int *)(a1 + 960);
  v14 = v13 + 16;
  if ( v13 + 16 < v13 )
  {
    p_Context = 0LL;
  }
  else if ( v14 > 0x400 )
  {
    v32 = (_DWORD *)o_malloc(v14);
    p_Context = (LPVOID *)v32;
    if ( v32 )
    {
      *v32 = 56797;
      p_Context = (LPVOID *)(v32 + 4);
    }
  }
  else
  {
    v15 = v13 + 31;
    if ( v14 + 15 < v14 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
    p_Context = (LPVOID *)&v52;
    if ( v50 != (_BYTE *)-64LL )
    {
      v52 = 52428;
      p_Context = &Context;
    }
  }
  v18 = p_Context;
  if ( p_Context )
  {
    memcpy(p_Context, *(const void **)(a1 + 968), 4LL * *(unsigned int *)(a1 + 960));
    v20 = (__int64 *)a2;
    if ( *(_QWORD *)(a1 + 968) )
    {
      v21 = *(_DWORD *)(a1 + 960);
      if ( v21 >= *(_DWORD *)(a2 + 92) )
        goto LABEL_19;
    }
    v34 = 4LL * *(unsigned int *)(a2 + 92);
    if ( !is_mul_ok(*(unsigned int *)(a2 + 92), 4uLL) )
      v34 = -1LL;
    v35 = sub_18006A1B0(v34, &unk_18019F848);
    v36 = *(void **)(a1 + 968);
    v37 = v35;
    *(_QWORD *)(a1 + 968) = v35;
    if ( v36 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v36);
      v37 = *(_QWORD *)(a1 + 968);
    }
    if ( v37 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 960); *(_DWORD *)(v37 + 4 * v40) = *((_DWORD *)p_Context + v40) )
        v40 = i++;
      v41 = a2;
      if ( i < *(_DWORD *)(a2 + 92) )
      {
        v42 = *(_QWORD *)(a1 + 968);
        do
        {
          v43 = i++;
          *(_DWORD *)(v42 + 4 * v43) = 1065353216;
          v41 = a2;
        }
        while ( i < *(_DWORD *)(a2 + 92) );
      }
      v44 = *(_DWORD *)(v41 + 92);
      *(_DWORD *)(a1 + 960) = v44;
      v45 = 4LL * v44;
      v46 = v45 + 16;
      if ( v45 + 16 < v45 )
        v46 = 0LL;
      if ( v46 )
      {
        if ( v46 > 0x400 )
        {
          v49 = (_DWORD *)o_malloc(v46);
          v18 = (LPVOID *)v49;
          if ( v49 )
          {
            *v49 = 56797;
            v18 = (LPVOID *)(v49 + 4);
          }
        }
        else
        {
          v47 = v46 + 15;
          if ( v46 + 15 < v46 )
            v47 = 0xFFFFFFFFFFFFFF0LL;
          v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
          v18 = (LPVOID *)&v52;
          if ( v50 != (_BYTE *)-64LL )
          {
            v52 = 52428;
            v18 = &Context;
          }
        }
      }
      else
      {
        v18 = 0LL;
      }
      sub_180046F70(p_Context);
      if ( v18 )
      {
        memcpy(v18, *(const void **)(a1 + 968), 4LL * *(unsigned int *)(a1 + 960));
        v20 = (__int64 *)a2;
        v21 = *(_DWORD *)(a1 + 960);
LABEL_19:
        if ( v2 )
        {
          LeaveCriticalSection(v2);
          v20 = (__int64 *)a2;
        }
        v22 = *v20;
        LOBYTE(v51) = 1;
        v23 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, LPVOID *, _QWORD, _DWORD))(v22 + 96))(
                v20,
                v19,
                v21,
                v18,
                0LL,
                v51);
        v12 = v23;
        if ( v23 < 0 )
        {
          sub_18004BD84(
            retaddr,
            2780LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (unsigned int)v23);
        }
        else
        {
          v24 = sub_18002DD60(a1, a2);
          v12 = v24;
          if ( v24 < 0 )
          {
            sub_18004BD84(
              retaddr,
              2782LL,
              "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (unsigned int)v24);
          }
          else
          {
            v4 = 0;
            v12 = 0;
          }
        }
        goto LABEL_24;
      }
      v33 = 2767LL;
    }
    else
    {
      v33 = 2745LL;
    }
  }
  else
  {
    v33 = 2731LL;
  }
  v12 = -2147024882;
  sub_18004BD84(retaddr, v33, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", 2147942414LL);
  if ( v2 )
    LeaveCriticalSection(v2);
LABEL_24:
  if ( v18 && *((_DWORD *)v18 - 4) == 56797 )
    _o_free(v18 - 2);
  if ( v4 )
    goto LABEL_34;
  return v12;
}
