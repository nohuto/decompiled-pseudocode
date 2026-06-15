/*
 * XREFs of sub_180048018 @ 0x180048018
 * Callers:
 *     sub_180047E7C @ 0x180047E7C (sub_180047E7C.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_1800D8040 @ 0x1800D8040 (sub_1800D8040.c)
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 *     sub_180126640 @ 0x180126640 (sub_180126640.c)
 * Callees:
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 *     sub_180048500 @ 0x180048500 (sub_180048500.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_180072084 @ 0x180072084 (sub_180072084.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_1801183B4 @ 0x1801183B4 (sub_1801183B4.c)
 *     sub_1801185CC @ 0x1801185CC (sub_1801185CC.c)
 *     sub_180118698 @ 0x180118698 (sub_180118698.c)
 *     sub_18011BA2C @ 0x18011BA2C (sub_18011BA2C.c)
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180048018(__int64 a1, unsigned int a2, unsigned __int16 *a3, _BYTE *a4)
{
  _BYTE *v4; // r14
  _OWORD *v5; // rbx
  int v8; // edi
  void *v9; // rcx
  void *v10; // rcx
  int v11; // eax
  _BYTE *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  void *v15; // rcx
  int v17; // r8d
  char *v18; // r9
  int v19; // ecx
  char v20; // dl
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  char v27; // [rsp+70h] [rbp-90h] BYREF
  char v28; // [rsp+71h] [rbp-8Fh] BYREF
  _WORD v29[3]; // [rsp+72h] [rbp-8Eh] BYREF
  __int128 *v30; // [rsp+78h] [rbp-88h] BYREF
  __int16 v31[2]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+84h] [rbp-7Ch] BYREF
  int v33; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v34; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v36; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  const wchar_t *v38; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-48h] BYREF
  LPVOID *v40; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID *v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  char v43; // [rsp+D8h] [rbp-28h]
  __int128 *v44; // [rsp+E0h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-10h] BYREF
  char v47; // [rsp+100h] [rbp+0h]
  _OWORD v48[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v49; // [rsp+128h] [rbp+28h]
  _BYTE v50[80]; // [rsp+130h] [rbp+30h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v4 = a4;
  v5 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( *a3 == 0xFFFE )
      {
        v46 = *(_OWORD *)(a3 + 12);
      }
      else
      {
        v46 = xmmword_18015B740;
        LODWORD(v46) = *a3;
      }
      if ( (unsigned int)dword_18019C448 > 4
        && __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&dword_18019C448,
             (const struct _TlgProvider_t *)0x10,
             (unsigned __int64)a3) )
      {
        v19 = *((unsigned __int16 *)v18 + 34);
        v20 = *v18;
        v44 = &v46;
        v32 = *((_DWORD *)v5 + 2);
        v33 = *((_DWORD *)v5 + 1);
        v31[0] = *((_WORD *)v5 + 1);
        v38 = L"WFEX";
        v29[0] = v19;
        v36 = (const wchar_t *)(v18 + 12);
        v28 = v20;
        v30 = *(__int128 **)(a1 + 24);
        sub_180118698(
          v19,
          (unsigned int)&unk_180169DA3,
          v17,
          (_DWORD)v18,
          (__int64)&v30,
          (__int64)&v28,
          (__int64)&v36,
          (__int64)v29,
          (__int64)&v38,
          (__int64)v31,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v44);
      }
    }
    else
    {
      if ( *a3 == 0xFFFE )
      {
        v46 = *(_OWORD *)(a3 + 12);
      }
      else
      {
        v46 = xmmword_18015B740;
        LODWORD(v46) = *a3;
      }
      if ( (unsigned int)dword_18019C448 > 4
        && (byte_18019C458 & 0x10) != 0
        && (qword_18019C460 & 0x10) == qword_18019C460 )
      {
        v30 = &v46;
        v33 = *((_DWORD *)a3 + 2);
        v32 = *((_DWORD *)a3 + 1);
        v29[0] = a3[1];
        v36 = L"WFEX";
        v38 = *(const wchar_t **)(a1 + 24);
        sub_1801183B4(
          a1,
          (unsigned int)&unk_180169D27,
          (_DWORD)a3,
          0,
          (__int64)&v38,
          (__int64)&v36,
          (__int64)v29,
          (__int64)&v32,
          (__int64)&v33,
          (__int64)&v30);
      }
    }
  }
  else if ( a4 )
  {
    if ( (unsigned int)dword_18019C448 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           0LL) )
    {
      LOBYTE(v21) = *(_BYTE *)v23;
      v29[0] = *(_WORD *)(v23 + 68);
      v30 = (__int128 *)(v23 + 12);
      v28 = v21;
      v36 = *(const wchar_t **)(a1 + 24);
      sub_1801185CC(
        v21,
        (unsigned int)&unk_180169CC4,
        v22,
        v23,
        (__int64)&v36,
        (__int64)&v28,
        (__int64)&v30,
        (__int64)v29);
    }
  }
  else if ( (unsigned int)dword_18019C448 > 4
         && __vcrt_trace_logging_provider::_TlgKeywordOn(
              (__vcrt_trace_logging_provider *)&dword_18019C448,
              (const struct _TlgProvider_t *)0x10,
              0LL) )
  {
    v30 = *(__int128 **)(a1 + 24);
    sub_1800B7704((unsigned int)&dword_18019C448, (unsigned int)&unk_180169C83, v24, v25, (__int64)&v30);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  v30 = (__int128 *)(a1 + 8688);
  v34 = 0LL;
  pv = 0LL;
  p_pv = &pv;
  v40 = 0LL;
  LOBYTE(v41) = 1;
  *(_QWORD *)&v46 = &v34;
  *((_QWORD *)&v46 + 1) = 0LL;
  v47 = 1;
  v8 = sub_180028AD0(a1, 0, 0, (LPVOID *)&v46 + 1, &v40, 0LL, 0LL);
  if ( v47 )
  {
    v9 = *(void **)v46;
    *(_QWORD *)v46 = *((_QWORD *)&v46 + 1);
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( (_BYTE)v41 )
  {
    v10 = *p_pv;
    *p_pv = v40;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v8 < 0 )
  {
    sub_18004BD84(
      retaddr,
      8820LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v8);
    goto LABEL_30;
  }
  v35 = sub_180047F60(a1);
  p_pv = (LPVOID *)a1;
  v40 = &pv;
  v41 = &v34;
  v42 = &v35;
  v43 = 1;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)qword_18019F760 + 24LL))(
    qword_18019F760,
    &lpCriticalSection,
    *(_QWORD *)(a1 + 24));
  *(_QWORD *)&v46 = a1;
  BYTE8(v46) = 1;
  sub_180047FDC(a1, 0);
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  memset(v50, 0, 0x48uLL);
  v27 = 0;
  if ( v4 )
  {
    v13 = sub_18011BA2C(a1, (_DWORD)v4, (_DWORD)v34, (_DWORD)v5, (__int64)v48, (__int64)&v27);
    v8 = v13;
    if ( v13 < 0 )
    {
      v26 = 8865LL;
LABEL_65:
      sub_18004BD84(
        retaddr,
        v26,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v13);
      goto LABEL_27;
    }
    if ( v27 )
      v5 = v48;
  }
  else if ( v5 )
  {
    v11 = sub_180048500(a1, v5, v50);
    v12 = v50;
    if ( v11 < 0 )
      v12 = 0LL;
    v4 = v12;
  }
  if ( v35 )
  {
    if ( !v5 )
      goto LABEL_22;
    v13 = sub_18011F15C(a1, v5);
    v8 = v13;
    if ( v13 < 0 )
    {
      v26 = 8884LL;
      goto LABEL_65;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, _OWORD *))(*(_QWORD *)qword_18019F760 + 40LL))(
      qword_18019F760,
      *(_QWORD *)(a1 + 24),
      v5);
LABEL_22:
  v13 = sub_180048910(a1, a2, v5);
  v8 = v13;
  if ( v13 < 0 )
  {
    v26 = 8892LL;
    goto LABEL_65;
  }
  if ( v4 )
  {
    if ( !v5 )
    {
      if ( v27 )
        goto LABEL_26;
      v5 = v34;
    }
    v13 = sub_1800483B0(a1, v4, v5);
    v8 = v13;
    if ( v13 < 0 )
    {
      v26 = 8906LL;
      goto LABEL_65;
    }
  }
LABEL_26:
  v43 = 0;
  v8 = 0;
LABEL_27:
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019F760 + 32LL))(qword_18019F760, *(_QWORD *)(a1 + 24));
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  sub_180072084(&p_pv);
LABEL_30:
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = v34;
  v34 = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  if ( a1 != -8688 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  return (unsigned int)v8;
}
