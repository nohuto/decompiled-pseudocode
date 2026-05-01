/*
 * XREFs of sub_18000FAA0 @ 0x18000FAA0
 * Callers:
 *     sub_18000F3F0 @ 0x18000F3F0 (sub_18000F3F0.c)
 * Callees:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F450 @ 0x18000F450 (sub_18000F450.c)
 *     sub_18000F494 @ 0x18000F494 (sub_18000F494.c)
 *     sub_18000F990 @ 0x18000F990 (sub_18000F990.c)
 *     sub_18000F9F0 @ 0x18000F9F0 (sub_18000F9F0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180022AFC @ 0x180022AFC (sub_180022AFC.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18007837C @ 0x18007837C (sub_18007837C.c)
 */

__int64 __fastcall sub_18000FAA0(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        __int64 *a10)
{
  DWORD v12; // ebx
  bool v13; // cf
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r9
  __int64 v17; // r12
  int v18; // eax
  int v19; // ebx
  __int64 v20; // r8
  int v21; // esi
  unsigned int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rsi
  DWORD v28; // edi
  __int64 v29; // r15
  _QWORD *Value; // rbx
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // sf
  __int64 v35; // rdx
  bool v36; // zf
  DWORD v37; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-80h]
  HANDLE Process; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 *v53; // [rsp+B0h] [rbp-50h]
  _QWORD v54[70]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE TlsValue[144]; // [rsp+2F0h] [rbp+1F0h] BYREF

  Process = a9;
  v51 = a2;
  v47 = a1;
  v53 = a10;
  memset(TlsValue, 0, 0x88uLL);
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, TlsValue);
  }
  sub_18000F450();
  v13 = *(_DWORD *)a8 < 0x2000000u;
  v14 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v15 = -1LL;
  v44 = 0LL;
  v50 = 0LL;
  if ( !v13
    || wcsnlen((const wchar_t *)(a8 + 12), 0x40uLL) == 64
    || wcsnlen((const wchar_t *)(a8 + 140), 0x40uLL) == 64
    || *(int *)(a8 + 268) > 5 )
  {
    *(_WORD *)(a8 + 138) = 0;
    *(_WORD *)(a8 + 266) = 0;
    v19 = -1073741578;
LABEL_33:
    v17 = a7;
    v21 = a6;
    goto LABEL_34;
  }
  v17 = a7;
  v18 = sub_18000F9F0(v51, a3, a4, v16, a6, a7);
  v19 = v18;
  if ( v18 < 0 )
  {
    v21 = a6;
    if ( (unsigned int)(v18 + 1073741585) <= 5 )
      v19 = v18 + 1;
  }
  else
  {
    memset(v54, 0, 0x228uLL);
    sub_1800114C0(v54, 232LL, v20, v51);
    RtlCopySid(0x44u, &v54[58], a3);
    v21 = a6;
    v19 = 0;
    HIDWORD(v54[66]) = a5;
    LODWORD(v54[67]) = a6;
    v54[68] = a7;
  }
  if ( v19 >= 0 )
  {
    v50 = &v54[58];
    if ( !(unsigned int)sub_18000F494((__int64)v54, (unsigned int *)a8) )
    {
      v19 = -1073741578;
      goto LABEL_34;
    }
    v22 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x80000) != 0 && !Process )
    {
      v19 = -1073741776;
      goto LABEL_34;
    }
    v23 = *v47;
    v24 = *v47;
    if ( (v22 & 0x200000) != 0 )
    {
      v25 = sub_180022DB0(v24, v54[68], &v45);
      v27 = 0LL;
      if ( v25 >= 0 )
        v27 = v45;
    }
    else
    {
      v25 = sub_180022AFC(v24, v54, (v22 & 0x400000) != 0, &v45);
      v27 = v45;
    }
    v19 = v25;
    if ( v25 < 0 )
      goto LABEL_28;
    v28 = dwTlsIndex;
    v29 = *(_QWORD *)(*(_QWORD *)(v27 + 776) + 88LL);
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared(v29 + 304);
    v31 = *(_BYTE *)(v29 + 340);
    sub_18001E830(v33, v32, 6LL);
    RtlReleaseSRWLockShared(v29 + 304);
    if ( (v31 & 1) != 0
      && (unsigned int)dword_1800B3218 > 4
      && (unsigned __int8)sub_180010470(&dword_1800B3218, 0x400000000008LL) )
    {
      v52 = *(_QWORD *)(v27 - 32);
      v49 = v27 + 24;
      v45 = 0x1000000LL;
      sub_18007837C(v43, &unk_18009F6D3);
    }
    if ( !Process )
    {
      v14 = v44;
      v19 = sub_180011AC0((_DWORD)v47, v23, v27, a8, 0, (__int64)&v46);
      v34 = v19 < 0;
LABEL_24:
      v26 = v46;
      if ( !v34 )
      {
        v19 = 0;
        v15 = *(_QWORD *)(v46 + 40);
        *v53 = v15;
      }
      if ( v26 )
        sub_1800274E0(v26);
      goto LABEL_28;
    }
    v39 = sub_1800283EC(v23, Process, &v44, &v49);
    v19 = v39;
    if ( v39 == -1073741275 )
    {
      v19 = -1058275323;
    }
    else if ( v39 >= 0 )
    {
      v14 = v44;
      v40 = (int)v47;
      if ( v27 == v44 )
      {
        *(_DWORD *)(a8 + 368) &= ~0x20u;
        *(_QWORD *)(a8 + 328) = 0LL;
        *(_QWORD *)(a8 + 336) = 0LL;
        *(_QWORD *)(a8 + 344) = 0LL;
        *(_QWORD *)(a8 + 352) = 0LL;
        *(_QWORD *)(a8 + 320) |= 0xFuLL;
        v41 = sub_180011AC0(v40, v23, v27, a8, 0, (__int64)&v46);
      }
      else
      {
        v41 = sub_180002D50(v47, v44, v49, v27, (_DWORD *)a8, &v46);
      }
      v19 = v41;
      v34 = v41 < 0;
      goto LABEL_24;
    }
    v14 = v44;
LABEL_28:
    if ( v27 )
    {
      sub_18001E380(v26);
      v36 = (*(_QWORD *)(v27 + 592))-- == 1LL;
      if ( v36 )
        sub_18000A1AC(v27 - 64, v35);
      sub_18000F390();
    }
    if ( v14 )
    {
      sub_18001E380(v26);
      v36 = (*(_QWORD *)(v14 + 592))-- == 1LL;
      if ( v36 )
        sub_18000A1AC(v14 - 64, v42);
      sub_18000F390();
    }
    goto LABEL_33;
  }
LABEL_34:
  v37 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v37, 0LL);
  }
  if ( Process )
    GetProcessId(Process);
  sub_18000F990((unsigned int)v19, v15, (__int64)v47, v51, v21, (__int64)v50, v17, a8);
  return (unsigned int)v19;
}
