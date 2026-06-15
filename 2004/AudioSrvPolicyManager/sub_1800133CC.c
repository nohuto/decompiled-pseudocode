/*
 * XREFs of sub_1800133CC @ 0x1800133CC
 * Callers:
 *     sub_180010370 @ 0x180010370 (sub_180010370.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180019050 @ 0x180019050 (sub_180019050.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_180030E14 @ 0x180030E14 (sub_180030E14.c)
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180039E00 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800133CC(__int64 a1, __int64 a2)
{
  _WORD *v3; // rdi
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // r11
  __int64 v8; // r11
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // r14
  void *v17; // rsi
  DWORD LastError; // edi
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // r9
  void *v24; // r13
  DWORD v25; // edi
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  RPC_STATUS v30; // eax
  __int64 v31; // r13
  __int64 v32; // r9
  __int64 result; // rax
  int v34; // eax
  unsigned int v35; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-D0h] BYREF
  char v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h]
  _QWORD *v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h]
  _QWORD *v41; // [rsp+60h] [rbp-A8h]
  _QWORD *v42; // [rsp+68h] [rbp-A0h]
  __int128 *v43; // [rsp+70h] [rbp-98h]
  _QWORD *v44; // [rsp+78h] [rbp-90h]
  __int128 *v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  __int64 v48; // [rsp+98h] [rbp-70h]
  _QWORD *v49; // [rsp+A0h] [rbp-68h]
  __int128 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-48h]
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  try
  {
    v31 = a2;
    v38 = a2;
    v3 = (_WORD *)sub_180030E14((a2 + 16) & -(__int64)(a2 != 0));
    lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
    v37 = 0;
    sub_18001A330(&lpCriticalSection);
    sub_18000CD64(&v50, v3);
    v4 = a1 + 648;
    v9 = *(_QWORD **)(a1 + 648);
    v8 = v9[1];
    v5 = v9;
    while ( !*(_BYTE *)(v8 + 25) )
    {
      if ( (unsigned __int8)sub_180017C9C(v6, v8 + 32, &v50) )
      {
        v8 = v7[2];
      }
      else
      {
        v9 = v7;
        v8 = *v7;
      }
    }
    v41 = v9;
    v42 = v5;
    if ( v9 == v5 || (unsigned __int8)sub_180017C9C(v6, &v50, v9 + 4) )
    {
      v43 = &v50;
      v44 = v5;
      v10 = sub_180009F20(0x48uLL);
      v45 = &v50;
      v10[6] = 0LL;
      v10[7] = 0LL;
      *((_OWORD *)v10 + 2) = v50;
      *((_OWORD *)v10 + 3) = v51;
      *(_QWORD *)&v51 = 0LL;
      *((_QWORD *)&v51 + 1) = 7LL;
      LOWORD(v50) = 0;
      v10[8] = 0LL;
      *v10 = v5;
      v10[1] = v5;
      v10[2] = v5;
      *((_WORD *)v10 + 12) = 0;
      sub_180019050(v4, (unsigned int)&v39, (_DWORD)v9, (_DWORD)v10 + 32, (__int64)v10);
      v9 = v39;
    }
    v49 = v9;
    v11 = v9 + 8;
    sub_180009CF0((__int64)&v50);
    v12 = v9[8];
    if ( !v12 )
    {
      *v11 = 0LL;
      v13 = sub_180039DDC(240LL, &unk_18004FFC8);
      v14 = v13;
      v40 = v13;
      v46 = v13;
      if ( !v13 )
      {
        v15 = -2147024882;
LABEL_33:
        sub_180003AB0(
          retaddr,
          2595,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          v15);
        if ( v37 )
          LeaveCriticalSection(lpCriticalSection);
        return (unsigned int)v15;
      }
      v47 = v13;
      *(_DWORD *)(v13 + 12) = 1;
      *(_QWORD *)v13 = off_18003EEA8;
      if ( qword_18004FE28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18004FE28 + 8LL))(qword_18004FE28);
      *(_QWORD *)v14 = off_18003EF00;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v14 + 16), 0, 0);
      *(_QWORD *)(v14 + 56) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      *(_QWORD *)(v14 + 72) = 0LL;
      *(_QWORD *)(v14 + 80) = 0LL;
      *(_QWORD *)(v14 + 88) = 0LL;
      `eh vector constructor iterator'(
        (void *)(v14 + 96),
        8uLL,
        9uLL,
        (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
        sub_18001A370);
      `eh vector constructor iterator'(
        (void *)(v14 + 168),
        8uLL,
        9uLL,
        (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
        sub_18001A370);
      v48 = v14;
      v40 = 0LL;
      v16 = (v31 + 16) & -(__int64)(v31 != 0);
      v17 = *(void **)(v14 + 88);
      if ( v17 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v17);
        SetLastError(LastError);
      }
      *(_QWORD *)(v14 + 88) = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))((v31 + 16) & -(__int64)(v31 != 0));
      v22 = -1LL;
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v19 + 2 * v23) );
      v15 = sub_180018844(v21, v20, v19, v23);
      if ( v15 >= 0 )
      {
        v24 = *(void **)(v14 + 80);
        if ( v24 )
        {
          v25 = GetLastError();
          CoTaskMemFree(v24);
          SetLastError(v25);
        }
        *(_QWORD *)(v14 + 80) = 0LL;
        v26 = sub_180030E14(v16);
        do
          ++v22;
        while ( *(_WORD *)(v26 + 2 * v22) );
        v29 = sub_180018844(v28, v27, v26, v22);
        v15 = v29;
        if ( v29 >= 0 )
        {
          v30 = RpcImpersonateClient(0LL);
          if ( v30 )
          {
            v15 = sub_18000A4C0(
                    retaddr,
                    32,
                    (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                    v30);
          }
          else
          {
            sub_180031784(v14);
            RpcRevertToSelf();
            v15 = 0;
          }
        }
        else
        {
          sub_180003AB0(
            retaddr,
            29,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            v29);
        }
        v31 = v38;
      }
      else
      {
        sub_180003AB0(
          retaddr,
          25,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v15);
      }
      if ( v15 >= 0 )
        v15 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v14)(v14, &unk_180043338, v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v15 < 0 )
        goto LABEL_33;
      v12 = *v11;
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 64LL))(v12, *(unsigned int *)(v31 + 192));
    v35 = v34;
    if ( v34 >= 0 )
    {
      if ( v37 )
        LeaveCriticalSection(lpCriticalSection);
      result = 0LL;
    }
    else
    {
      sub_180003AB0(
        retaddr,
        2598,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        v34);
      if ( v37 )
        LeaveCriticalSection(lpCriticalSection);
      result = v35;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           2602,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v32);
  }
  return result;
}
