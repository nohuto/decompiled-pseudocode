/*
 * XREFs of sub_180126640 @ 0x180126640
 * Callers:
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 * Callees:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B779C @ 0x1800B779C (sub_1800B779C.c)
 *     sub_180124A0C @ 0x180124A0C (sub_180124A0C.c)
 */

bool __fastcall sub_180126640(__int64 a1, __int64 a2, __int128 *a3, char a4)
{
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  int v13; // esi
  int v14; // ebx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v20; // [rsp+60h] [rbp-39h] BYREF
  __int16 v21; // [rsp+62h] [rbp-37h] BYREF
  __int16 v22; // [rsp+64h] [rbp-35h] BYREF
  int v23; // [rsp+68h] [rbp-31h] BYREF
  int v24; // [rsp+6Ch] [rbp-2Dh] BYREF
  int v25; // [rsp+70h] [rbp-29h] BYREF
  void *v26; // [rsp+78h] [rbp-21h] BYREF
  __int64 v27; // [rsp+80h] [rbp-19h] BYREF
  __int128 v28; // [rsp+88h] [rbp-11h] BYREF
  __int128 v29; // [rsp+98h] [rbp-1h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]

  v8 = 1;
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
  {
    v27 = (__int64)a3 + 24;
    v25 = *((_DWORD *)a3 + 2);
    v20 = *((_WORD *)a3 + 9);
    v21 = *((_WORD *)a3 + 7);
    v23 = *((_DWORD *)a3 + 1);
    v24 = *((_DWORD *)a3 + 5);
    v22 = *((_WORD *)a3 + 1);
    v26 = *(void **)(a2 + 24);
    sub_180124A0C(
      v9,
      byte_18016A316,
      v10,
      v11,
      &v26,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v25,
      &v27);
  }
  v12 = a1 + 104;
  v13 = sub_180048018(a2, 0, (unsigned __int16 *)a3, (_BYTE *)(v12 & -(__int64)(a4 != 0)));
  v14 = v13;
  if ( v13 < 0 && *((_DWORD *)a3 + 5) == 1599 )
  {
    v15 = a3[1];
    v28 = *a3;
    v16 = *((_QWORD *)a3 + 4);
    v29 = v15;
    DWORD1(v29) = 255;
    v30 = v16;
    v8 = sub_180048018(a2, 0, (unsigned __int16 *)&v28, (_BYTE *)(v12 & -(__int64)(a4 != 0)));
    v14 = v8;
  }
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         0x400000000000uLL) )
  {
    v26 = *(void **)(a2 + 24);
    v24 = v8;
    v23 = v13;
    sub_1800B779C((__int64)&dword_18019C448, byte_18016A2B2, v17, v18, &v26, (__int64)&v23, (__int64)&v24);
  }
  return v14 >= 0;
}
