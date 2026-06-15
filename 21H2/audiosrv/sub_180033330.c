/*
 * XREFs of sub_180033330 @ 0x180033330
 * Callers:
 *     sub_1800332A0 @ 0x1800332A0 (sub_1800332A0.c)
 *     sub_180046AB0 @ 0x180046AB0 (sub_180046AB0.c)
 * Callees:
 *     sub_1800021CC @ 0x1800021CC (sub_1800021CC.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800D1640 @ 0x1800D1640 (sub_1800D1640.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033330(__int64 a1, char a2, __int64 a3)
{
  char v3; // si
  unsigned int v5; // r15d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  int v19; // ebx
  _QWORD *v20; // rsi
  _QWORD *i; // rdi
  int v23; // eax
  int v24; // edi
  __vcrt_trace_logging_provider *v25; // rax
  unsigned __int64 v26; // r8
  int v27; // ebx
  __int64 v28; // rdi
  WINBOOL v29; // esi
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rcx
  const wchar_t *v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-31h] BYREF
  __int64 v42; // [rsp+60h] [rbp-29h] BYREF
  void *v43; // [rsp+68h] [rbp-21h] BYREF
  __int64 v44; // [rsp+70h] [rbp-19h] BYREF
  __int64 v45; // [rsp+78h] [rbp-11h] BYREF
  __int64 v46; // [rsp+80h] [rbp-9h] BYREF
  __int16 v47; // [rsp+88h] [rbp-1h]
  __int64 v48; // [rsp+90h] [rbp+7h]
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v50; // [rsp+F0h] [rbp+67h] BYREF
  char v51; // [rsp+F8h] [rbp+6Fh]
  __int64 v52; // [rsp+100h] [rbp+77h] BYREF
  __int64 v53; // [rsp+108h] [rbp+7Fh] BYREF

  v52 = a3;
  v51 = a2;
  v3 = a2;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 176) || !*(_QWORD *)(a1 + 184) )
  {
LABEL_33:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    return v5;
  }
  v6 = 0;
  v7 = *(unsigned int *)(a1 + 92);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)(a1 + 120);
    do
    {
      *(_DWORD *)(v8 + 4LL * v6++) = 1065353216;
      v7 = *(unsigned int *)(a1 + 92);
    }
    while ( v6 < (unsigned int)v7 );
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, __int64 *))(*(_QWORD *)a1 + 40LL))(
         a1,
         v7,
         *(_QWORD *)(a1 + 120),
         &v50,
         &v44);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
    v48 = a1 + 136;
    v11 = *(_QWORD *)(a1 + 184);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v53);
      v13 = v12;
      if ( v12 < 0 )
        sub_18006D26C(retaddr, 1189LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v12);
      if ( v13 == -2147417848 )
      {
        LOBYTE(v53) = 0;
        sub_1800CB144(a1 + 184);
      }
      v14 = *(_QWORD *)(a1 + 184);
      if ( v14 && !v13 && ((_BYTE)v53 != 0) != (v50 != 0) )
      {
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(
                v14,
                v50,
                0LL,
                0LL,
                0LL);
        v24 = v23;
        if ( v23 >= 0 )
        {
          if ( *(_QWORD *)(a1 + 72) )
          {
            v25 = (__vcrt_trace_logging_provider *)sub_180008448(retaddr, sub_1800B6240)[1];
            v43 = v25;
            if ( *(_DWORD *)v25 > 4u )
            {
              if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
                     v25,
                     (const struct _TlgProvider_t *)0x400000000000LL,
                     v26) )
              {
                v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
                v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 80LL))(a1 + 8);
                v29 = v50;
                v39 = v27;
                Context = (LPVOID)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 64LL))(*(_QWORD *)(a1 + 72));
                v42 = v28;
                fPending = v29;
                sub_1800021CC(
                  (__int64)v43,
                  byte_180166D8F,
                  v30,
                  v31,
                  (__int64)&fPending,
                  (__int64)&v42,
                  &Context,
                  (__int64)&v39);
                v3 = v51;
              }
            }
          }
        }
        else
        {
          sub_18006D26C(retaddr, 1202LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v23);
          if ( v24 == -2147417848 )
            sub_1800CB144(a1 + 184);
        }
      }
    }
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
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
      v35 = *(_QWORD *)(a1 + 72);
      if ( v35 )
        v36 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 64LL))(v35);
      else
        v36 = L"null";
      v39 = *(_DWORD *)(a1 + 100);
      LODWORD(v42) = v32;
      v43 = (void *)v36;
      v45 = *(_QWORD *)(a1 + 328);
      LOBYTE(v53) = v50;
      v37 = *(_WORD *)(a1 + 92);
      v46 = *(_QWORD *)(a1 + 120);
      v47 = v37;
      sub_1800D1640(
        v15,
        (unsigned int)&unk_180166D1A,
        v33,
        v34,
        (__int64)&v46,
        (__int64)&v53,
        (__int64)&v45,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v39);
    }
    v16 = *(_QWORD *)(a1 + 176);
    if ( v16 )
    {
      v53 = 0LL;
      v17 = *(_QWORD *)(a1 + 120);
      if ( v3 )
      {
        v38 = v52;
        if ( v52 <= v44 )
          v38 = v44;
        v52 = v38;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, int, __int64 *))(*(_QWORD *)v16 + 48LL))(
                v16,
                *(unsigned int *)(a1 + 92),
                v17,
                &v53,
                1,
                &v52);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, int, __int64 *))(*(_QWORD *)v16 + 32LL))(
                v16,
                *(unsigned int *)(a1 + 92),
                v17,
                &v53,
                1,
                &v44);
      }
      v19 = v18;
      if ( v18 < 0 )
        sub_18006D26C(retaddr, 1266LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v18);
      if ( v19 == -2147417848 )
      {
        sub_1800CB144(a1 + 176);
        v19 = 0;
      }
      v5 = v19;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
    v45 = a1 + 232;
    LODWORD(v53) = 0;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 8) + 88LL))(a1 + 8, &v53);
    v20 = *(_QWORD **)(a1 + 280);
    for ( i = *(_QWORD **)(a1 + 272); i != v20; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *(_QWORD *)(a1 + 56));
    if ( a1 != -232 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
    if ( a1 != -136 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
    goto LABEL_33;
  }
  sub_18004BD84(retaddr, 1179LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v9);
  return v10;
}
