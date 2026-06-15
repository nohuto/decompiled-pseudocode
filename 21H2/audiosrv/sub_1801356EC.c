/*
 * XREFs of sub_1801356EC @ 0x1801356EC
 * Callers:
 *     sub_180135DDC @ 0x180135DDC (sub_180135DDC.c)
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180001108 @ 0x180001108 (sub_180001108.c)
 *     unknown_libname_206 @ 0x180009E18 (unknown_libname_206.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     ??0__crt_deferred_errno_cache@@QEAA@XZ @ 0x180069050 (--0__crt_deferred_errno_cache@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180073B78 @ 0x180073B78 (sub_180073B78.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 *     unknown_libname_278 @ 0x1800BDBB0 (unknown_libname_278.c)
 *     sub_1801052C0 @ 0x1801052C0 (sub_1801052C0.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_1801339A4 @ 0x1801339A4 (sub_1801339A4.c)
 *     unknown_libname_363 @ 0x1801347BC (unknown_libname_363.c)
 *     sub_180134BC8 @ 0x180134BC8 (sub_180134BC8.c)
 *     sub_1801361C8 @ 0x1801361C8 (sub_1801361C8.c)
 *     sub_1801380CC @ 0x1801380CC (sub_1801380CC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801356EC(__int64 a1, void *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void **v15; // rax
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  void *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // [rsp+50h] [rbp-49h] BYREF
  void *v34; // [rsp+58h] [rbp-41h] BYREF
  void *v35; // [rsp+60h] [rbp-39h] BYREF
  _QWORD *v36; // [rsp+68h] [rbp-31h] BYREF
  __int64 v37; // [rsp+70h] [rbp-29h] BYREF
  void *v38; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+80h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+5Fh]

  v35 = a2;
  if ( *(_BYTE *)(a1 + 209) )
  {
    v10 = sub_1801361C8();
    if ( v10 == -1 )
      return 2147942487LL;
    v37 = v10;
    v11 = 32LL * v10;
    if ( !*(_BYTE *)(v11 + a1 + 272) )
      return 2151641105LL;
    if ( (unsigned int)dword_18019C4F0 > 5
      && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
    {
      v33 = v14;
      v34 = a2;
      v36 = a3;
      sub_180001008(v12, (int)&unk_18016CB6D, v13, v14, (void **)&v36, &v34, (__int64)&v33);
    }
    __crt_deferred_errno_cache::__crt_deferred_errno_cache((__crt_deferred_errno_cache *)&v38);
    v15 = unknown_libname_278(&v38);
    if ( (int)MMDevAPI_28(a3, v15) < 0 )
    {
      *(_DWORD *)(a4 + 4) = 1;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 8) = 0;
      *(_QWORD *)(a4 + 16) = 0x24C85A5ED1C03FFFLL;
      if ( (unsigned int)dword_18019C4F0 > 2
        && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      {
        v33 = v29;
        v35 = a3;
        sub_1801339A4(v26, byte_18016C4B3, v27, v28, &v35, (__int64)&v33);
      }
      goto LABEL_39;
    }
    v34 = 0LL;
    v16 = sub_180134BC8(&v34);
    v17 = v16;
    v18 = -2147467238;
    if ( v16 == -2147467238 )
      goto LABEL_19;
    v18 = -2146959355;
    if ( v16 == -2146959355 )
      goto LABEL_19;
    v18 = -2147024877;
    if ( v16 == -2147024877 )
      goto LABEL_19;
    if ( v16 < 0 )
    {
      sub_18004BD84((int)retaddr, 2234, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v16);
      v18 = v17;
LABEL_19:
      sub_18000F708((__int64 *)&v34);
LABEL_43:
      sub_1800BDAAC(&v38);
      return v18;
    }
    v19 = v37;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD, void *, void *, __int64))(*(_QWORD *)v34 + 32LL))(
      v34,
      *(_QWORD *)(32 * (v37 + 9) + a1),
      *(_QWORD *)(v11 + a1 + 296),
      v35,
      v38,
      a4);
    if ( !sub_180073B78(a1) || v20 != -2147023584 )
    {
LABEL_35:
      sub_18000F708((__int64 *)&v34);
LABEL_39:
      if ( (unsigned int)dword_18019C4F0 > 5
        && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      {
        v33 = *(_DWORD *)(a4 + 8);
        v35 = a3;
        LODWORD(v37) = *(_DWORD *)a4;
        LODWORD(v36) = *(_DWORD *)(a4 + 4);
        LODWORD(v34) = 0;
        sub_180001108(
          v30,
          (int)&unk_18016C6E8,
          v31,
          v32,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)&v37,
          &v35,
          (__int64)&v33);
      }
      v18 = 0;
      goto LABEL_43;
    }
    sub_180060060((__int64 *)&v39, a3);
    sub_1801380CC(a1 + 464, &v36, &v39);
    unknown_libname_206(&v39);
    v35 = *(void **)(a1 + 472);
    if ( unknown_libname_363(&v36, &v35) )
    {
      v21 = v36[6];
      if ( *(_BYTE *)(v21 + 24 * v19 + 1) )
      {
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(v21 + 24 * v19 + 4) >= 0;
        if ( (unsigned int)dword_18019C4F0 <= 5
          || !__vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
        {
          goto LABEL_35;
        }
        v33 = *(_DWORD *)(v23 + 8 * v24 + 4);
        v25 = &unk_18016CC0E;
        goto LABEL_34;
      }
      *(_DWORD *)(a4 + 4) = 1;
      if ( (unsigned int)dword_18019C4F0 <= 5
        || !__vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      {
        goto LABEL_35;
      }
      v25 = &unk_18016C66A;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 1;
      if ( (unsigned int)dword_18019C4F0 <= 5
        || !__vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      {
        goto LABEL_35;
      }
      v25 = &unk_18016C559;
    }
    v33 = v23;
LABEL_34:
    sub_1801052C0((int)&dword_18019C4F0, (int)v25, v22, v23, (__int64)&v33);
    goto LABEL_35;
  }
  if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      sub_180109634(v8, (unsigned __int8 *)dword_18016C944, 0LL, 0LL, 2u, &v39);
  }
  return 0LL;
}
