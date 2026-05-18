/*
 * XREFs of sub_1800FE7B0 @ 0x1800FE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180083F74 @ 0x180083F74 (sub_180083F74.c)
 *     sub_180084098 @ 0x180084098 (sub_180084098.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180086C14 @ 0x180086C14 (sub_180086C14.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800B26D0 @ 0x1800B26D0 (sub_1800B26D0.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800E3144 @ 0x1800E3144 (sub_1800E3144.c)
 *     sub_1800FDA7C @ 0x1800FDA7C (sub_1800FDA7C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     cosf @ 0x180125036 (cosf.c)
 *     sinf @ 0x180125042 (sinf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800FE7B0(__int64 a1, _LocaleUpdate *a2)
{
  struct __crt_locale_pointers *LocaleT; // rax
  char v5; // r15
  bool v6; // si
  bool v7; // bl
  bool v8; // r14
  __int64 v9; // r9
  float v10; // xmm0_4
  int v11; // eax
  void (__fastcall *v12)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD); // rax
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  unsigned __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rbx
  signed __int32 v28; // eax
  signed __int32 v29; // eax
  __int128 v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h]
  unsigned __int64 v36; // [rsp+98h] [rbp-70h] BYREF
  int v37; // [rsp+A0h] [rbp-68h]
  _DWORD v38[4]; // [rsp+A8h] [rbp-60h] BYREF
  float v39; // [rsp+B8h] [rbp-50h] BYREF
  float v40; // [rsp+BCh] [rbp-4Ch]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  unsigned int v43; // [rsp+C8h] [rbp-40h]
  float v44; // [rsp+D0h] [rbp-38h] BYREF
  float v45; // [rsp+D4h] [rbp-34h]
  int v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+DCh] [rbp-2Ch]
  int v48; // [rsp+E0h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-20h] BYREF
  float v50; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v51; // [rsp+F8h] [rbp-10h] BYREF
  int v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+108h] [rbp+0h] BYREF
  int v54; // [rsp+110h] [rbp+8h]

  LocaleT = _LocaleUpdate::GetLocaleT(a2);
  v44 = -1.0;
  v45 = -1.0;
  v46 = 2;
  v47 = 0;
  v48 = 0;
  v39 = -1.0;
  v40 = -1.0;
  v41 = 2;
  v42 = 0;
  v43 = 0;
  sub_1800E2DE0((__int64)LocaleT, (__int64)&v39, (__int64)&v44);
  v5 = v42 & 1;
  v6 = (v42 & 4) != 0;
  v7 = (v42 & 8) != 0;
  v8 = v41 == 1;
  if ( v44 == 0.0 || v45 == 0.0 || v39 == 0.0 || v40 == 0.0 )
  {
    v49 = qword_180221E78;
  }
  else
  {
    *(float *)&v49 = v39 - v44;
    *((float *)&v49 + 1) = v40 - v45;
  }
  v10 = sub_1800E3144((__int64)a2);
  if ( v5 && v8 )
    goto LABEL_11;
  if ( v6 )
  {
    if ( v8 )
    {
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      goto LABEL_14;
    }
  }
  else if ( v8 )
  {
    goto LABEL_14;
  }
  *(float *)(a1 + 1892) = v10 + *(float *)(a1 + 1892);
LABEL_14:
  v11 = *(_DWORD *)(a1 + 1868);
  if ( v11 == 1 )
  {
    v12 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 208LL);
  }
  else
  {
    if ( v11 != 2 )
      goto LABEL_22;
    if ( v7 && *(_BYTE *)(a1 + 1864) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v12 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 232LL);
  }
  LOBYTE(v9) = v5;
  v12(a1, v49, v43, v9, v6, v7, v8, LODWORD(v10));
LABEL_22:
  if ( *(_DWORD *)(a1 + 1868) )
  {
    v13 = *(float *)(a1 + 1824);
    v14 = fmaxf(*(float *)(a1 + 1876), *(float *)(a1 + 1820));
    *(float *)(a1 + 1876) = fminf(v14, v13);
    v15 = *(float *)(a1 + 1832);
    LODWORD(v16) = sub_1800FDA7C(a1).m128_u32[0];
    v17 = fmaxf(*(float *)(a1 + 1880), v16);
    *(float *)(a1 + 1880) = fminf(v17, v15);
    v18 = *(float *)(a1 + 1876);
    v19 = cosf(v18);
    v20 = sinf(*(float *)(a1 + 1872)) * v19;
    v21 = sinf(v18);
    *(float *)&v49 = cosf(*(float *)(a1 + 1872)) * v19;
    *((float *)&v49 + 1) = v21;
    v50 = v20;
    sub_180086C14(&v49);
    v51 = *(_QWORD *)(a1 + 1800);
    v52 = *(_DWORD *)(a1 + 1808);
    v22 = (unsigned __int64 *)sub_180083F74(
                                v38,
                                (unsigned __int64 *)&v49,
                                COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a1 + 1880)));
    sub_180084098(&v53, &v51, v22);
    v32 = v53;
    LODWORD(v33) = v54;
    v30 = 0LL;
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(v23 + 8);
        if ( !v28 )
          break;
        if ( v28 == _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), v28 + 1, v28) )
        {
          v24 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v30 + 1) = v24;
          sub_180088528(*(_QWORD *)(a1 + 56), (__int64)&v32);
          goto LABEL_25;
        }
      }
    }
    v24 = 0LL;
    sub_180088528(0LL, (__int64)&v32);
LABEL_25:
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
    v34 = qword_180214C48;
    LODWORD(v35) = dword_180214C50;
    v36 = v51;
    v37 = v52;
    v31 = 0LL;
    v25 = *(_QWORD *)(a1 + 64);
    if ( v25 )
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)(v25 + 8);
        if ( !v29 )
          break;
        if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v29 + 1, v29) )
        {
          v26 = *(_QWORD *)(a1 + 64);
          *((_QWORD *)&v31 + 1) = v26;
          sub_1800866A4(*(_QWORD *)(a1 + 56), &v36, (__int64)&v34);
          goto LABEL_31;
        }
      }
    }
    v26 = 0LL;
    sub_1800866A4(0LL, &v36, (__int64)&v34);
LABEL_31:
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
      }
    }
  }
  return sub_1800B26D0(a1);
}
