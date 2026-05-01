/*
 * XREFs of sub_180019CB0 @ 0x180019CB0
 * Callers:
 *     sub_180017EA0 @ 0x180017EA0 (sub_180017EA0.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001F1C0 @ 0x18001F1C0 (sub_18001F1C0.c)
 * Callees:
 *     sub_1800042EC @ 0x1800042EC (sub_1800042EC.c)
 *     sub_180005030 @ 0x180005030 (sub_180005030.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 *     sub_1800179D8 @ 0x1800179D8 (sub_1800179D8.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_180038408 @ 0x180038408 (sub_180038408.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

__int64 __fastcall sub_180019CB0(__int64 a1)
{
  __int64 v1; // rdi
  DWORD v3; // r14d
  __int64 v4; // r15
  _QWORD *Value; // rsi
  __int64 v6; // r14
  DWORD CurrentThreadId; // eax
  DWORD v8; // ecx
  bool v9; // si
  _QWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // r15d
  DWORD v13; // r14d
  __int64 v14; // r13
  _QWORD *v15; // rsi
  char v16; // si
  char *v17; // rax
  DWORD v18; // r14d
  __int64 v19; // r13
  _QWORD *v20; // rsi
  unsigned int v21; // esi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  unsigned __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm1
  int v32; // r9d
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v39[4]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h]
  _DWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+98h] [rbp-68h]
  char v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  _OWORD Buf2[2]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD Buf1[2]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v52[32]; // [rsp+108h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_QWORD *)(v1 + 648) & 0x20000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 14;
  v3 = dwTlsIndex;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 776) + 88LL) + 88LL) + 160LL);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  v6 = v4 + 96;
  RtlAcquireSRWLockExclusive(v4 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v8 = dwTlsIndex;
  *(_DWORD *)(v4 + 104) = CurrentThreadId;
  v9 = (*(_DWORD *)(v4 + 132) & 2) != 0;
  if ( v8 != -1 )
  {
    v10 = TlsGetValue(v8);
    if ( (*(_DWORD *)v10 & 0x100LL) == 0 )
      __int2c();
    v11 = v10[9]-- == 1LL;
    if ( v11 )
      *v10 &= ~0x100uLL;
  }
  v12 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  if ( v9 )
    return 7;
  v13 = dwTlsIndex;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 776) + 88LL) + 88LL);
  if ( dwTlsIndex != -1 )
  {
    v15 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v15 |= 0x80uLL;
    ++v15[8];
  }
  RtlAcquireSRWLockShared(v14 + 168);
  v16 = *(_BYTE *)(v14 + 192) & 1;
  if ( dwTlsIndex != -1 )
  {
    v17 = (char *)TlsGetValue(dwTlsIndex);
    if ( *v17 >= 0 )
      __int2c();
    v11 = (*((_QWORD *)v17 + 8))-- == 1LL;
    if ( v11 )
      *(_QWORD *)v17 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v14 + 168);
  if ( v16 )
    return 7;
  if ( (*(_DWORD *)(a1 + 544) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 544) & 0xC0u) >= 0x40 )
    return 5;
  sub_1800468FC(v1, v38, v39);
  if ( ((v38[0] & 8) != 0 || (v39[0] & 8) != 0) && (*(_QWORD *)(v1 + 648) & 0x80000000000LL) != 0 )
    return 8;
  if ( *(_BYTE *)(a1 + 549) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 16LL);
    v34 = *(_QWORD *)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 2;
    sub_18001BD70(v34);
  }
  v18 = dwTlsIndex;
  v19 = *(_QWORD *)(v1 + 776);
  if ( dwTlsIndex != -1 )
  {
    v20 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v20 |= 0x20uLL;
    ++v20[6];
  }
  RtlAcquireSRWLockShared(v19 + 576);
  v21 = (*(_DWORD *)(v19 + 608) >> 23) & 3;
  if ( dwTlsIndex != -1 )
  {
    v22 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v22 & 0x20) == 0 )
      __int2c();
    v11 = v22[6]-- == 1LL;
    if ( v11 )
      *v22 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v19 + 576);
  if ( v21 < ((*(_DWORD *)(a1 + 112) >> 23) & 3u) )
    return 9;
  if ( *(_BYTE *)(a1 + 549) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 24LL);
    v23 = *(_QWORD *)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 3;
    sub_18001BD70(v23);
  }
  if ( (*(_DWORD *)(a1 + 544) & 0x10) == 0 )
  {
    v24 = sub_1800179D8(*(_DWORD *)(a1 + 424));
    v26 = *(_DWORD *)(a1 + 480) & 3;
    if ( (int)v26 <= v24 )
      v26 = (unsigned int)v24;
    if ( (int)v26 >= 2 )
    {
      if ( (*(_QWORD *)(v1 + 648) & 0x2000000000000LL) != 0 )
      {
        if ( sub_180005030(v1) )
          goto LABEL_44;
        v25 = *(_DWORD *)(a1 + 544);
        v35 = 500;
      }
      else
      {
        v35 = 2000;
      }
      *(_DWORD *)(a1 + 544) = v25 | 0x10;
      if ( (int)sub_180008408(v26, v35) < 0 )
        sub_180085678();
    }
  }
LABEL_44:
  v27 = *(_DWORD *)(a1 + 112);
  if ( (v27 & 0x400) != 0 && v39[0] < 0 && v38[0] >= 0 )
    return 11;
  if ( *(_BYTE *)(a1 + 549) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 32LL);
    v28 = *(_QWORD *)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 4;
    sub_18001BD70(v28);
    v27 = *(_DWORD *)(a1 + 112);
  }
  if ( (v27 & 0x1800) == 0 && (*(_DWORD *)(v1 + 648) & 0x30000) != 0 )
    return 10;
  if ( *(_BYTE *)(a1 + 549) < 5u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 520) + 40LL);
    v29 = *(_QWORD *)(a1 + 80);
    *(_BYTE *)(a1 + 549) = 5;
    sub_18001BD70(v29);
    v27 = *(_DWORD *)(a1 + 112);
  }
  if ( (v27 & 0x400) != 0 )
  {
    if ( v38[0] < 0 )
      return 12;
  }
  else if ( (v27 & 0x800) != 0
         && (((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 648LL) & 0xE0000000) - 0x80000000LL) & 0xFFFFFFFFDFFFFFFFuLL) == 0 )
  {
    sub_1800042EC(a1, 6912);
    return 3;
  }
  v30 = *(_QWORD *)(v1 + 648);
  if ( (v30 & 0x80000000000000LL) == 0
    && (v30 & 0x40000000000000LL) == 0
    && ((sub_18001D590(v1, (unsigned int)&v41, (unsigned int)v52, (unsigned int)&v47, (__int64)v40),
         (*(_BYTE *)(v1 + 655) & 1) == 0)
     || SDWORD2(v42) < 2 && (BYTE12(v42) & 0x70) == 0 && (BYTE12(v42) & 8) == 0)
    && *(_QWORD *)(v1 + 1000) == v40[0]
    && (v31 = *(_OWORD *)(v1 + 1120),
        Buf1[0] = 0uLL,
        Buf1[1] = v31,
        Buf2[0] = 0uLL,
        Buf2[1] = v42,
        !memcmp(Buf1, Buf2, 0x20uLL))
    && v49 == *(_QWORD *)(v1 + 848)
    && v48 == *(_QWORD *)(v1 + 856)
    && !memcmp(v52, (const void *)(v1 + 872), 0x20uLL)
    || (*(_DWORD *)(a1 + 112) & 0x1000) != 0 )
  {
    v32 = *(_DWORD *)(a1 + 380);
    if ( v32 != 5 )
    {
      v36 = *(_QWORD *)(a1 + 32);
      v43[1] = *(_DWORD *)(a1 + 384);
      v45 = a1 + 124;
      v37 = *(_QWORD *)(a1 + 80) + 24LL;
      v44 = 0LL;
      v46 = 0LL;
      v43[0] = 1;
      if ( (int)sub_180038408(*(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFFCuLL) + 136), (unsigned int)v43, a1, v32, v37) < 0 )
      {
        sub_1800042EC(a1, 6912);
        return 2;
      }
      *(_QWORD *)(a1 + 504) = v40[1];
    }
    sub_18001F370(a1);
  }
  else
  {
    return 13;
  }
  return v12;
}
