/*
 * XREFs of sub_18001CC80 @ 0x18001CC80
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180006E40 @ 0x180006E40 (sub_180006E40.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000A230 @ 0x18000A230 (sub_18000A230.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001F1C0 @ 0x18001F1C0 (sub_18001F1C0.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     sub_1800356D8 @ 0x1800356D8 (sub_1800356D8.c)
 *     sub_180036DD0 @ 0x180036DD0 (sub_180036DD0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 *     sub_18007D890 @ 0x18007D890 (sub_18007D890.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007FF10 @ 0x18007FF10 (sub_18007FF10.c)
 *     sub_180082424 @ 0x180082424 (sub_180082424.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_18003569C @ 0x18003569C (sub_18003569C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 */

__int64 __fastcall sub_18001CC80(__int64 a1, char a2)
{
  __int64 v3; // rsi
  DWORD v4; // edi
  _QWORD *Value; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // r14d
  DWORD v10; // edi
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  bool v14; // bl
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // edi
  __int64 v19; // r13
  char v20; // bl
  _QWORD *v21; // r13
  unsigned int v22; // r13d
  _QWORD *v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r13
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm1
  int v29; // ebx
  int v30; // edi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  DWORD dwTlsIndex; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexa; // [rsp+30h] [rbp-D0h]
  DWORD dwTlsIndexb; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh]
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v42; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-B0h]
  char v47[8]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __int128 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-58h]
  char v55; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  char v58; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h]
  _OWORD Buf2[2]; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD Buf1[2]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v63[2]; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v64[2]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v65[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v66[32]; // [rsp+198h] [rbp+98h] BYREF

  v40 = a2 & 1;
  if ( (*(_BYTE *)(a1 + 772) & 1) == 0 )
  {
    v6 = 0;
LABEL_66:
    v30 = v40;
    goto LABEL_67;
  }
  v3 = *(_QWORD *)(a1 + 688);
  if ( v3 )
  {
    v4 = ::dwTlsIndex;
    if ( ::dwTlsIndex != -1 )
    {
      Value = TlsGetValue(::dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v3 + 8);
    v6 = 0;
    dwTlsIndex = 1;
    *(_DWORD *)(v3 + 16) = GetCurrentThreadId();
    v7 = *(_QWORD *)(a1 + 688);
    v8 = *(_DWORD *)(v7 + 92) == 0;
    v42 = *(_QWORD *)(v7 + 104) < *(_QWORD *)(a1 + 616);
    LODWORD(v43) = !v8;
  }
  else
  {
    v6 = 0;
    v42 = 0;
    LODWORD(v43) = 0;
    dwTlsIndex = 0;
  }
  LOWORD(v9) = 0;
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
  {
    sub_1800468FC(a1, &v41, v47);
    v10 = ::dwTlsIndex;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL);
    v46 = v11;
    if ( ::dwTlsIndex != -1 )
    {
      v12 = TlsGetValue(::dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v12 |= 0x40uLL;
      ++v12[7];
      v11 = v46;
    }
    v13 = v11 + 304;
    RtlAcquireSRWLockShared(v11 + 304);
    v14 = (*(_DWORD *)(v11 + 340) & 2) != 0;
    if ( ::dwTlsIndex != -1 )
    {
      v15 = TlsGetValue(::dwTlsIndex);
      if ( (*(_BYTE *)v15 & 0x40) == 0 )
        __int2c();
      v8 = v15[7]-- == 1LL;
      if ( v8 )
        *v15 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared(v13);
    if ( !v14 )
      goto LABEL_19;
    v35 = *(_QWORD *)(a1 + 648);
    if ( (v35 & 0x20000000000000LL) != 0 )
      goto LABEL_19;
    if ( (v41 & 0x80u) != 0 || (v36 = 1, v47[0] < 0) )
      v36 = 0;
    if ( (v35 & 0x30000) != 0 || !v36 )
    {
LABEL_19:
      if ( v42 )
      {
        LOWORD(v9) = v41 & 0x188;
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 648);
        if ( (v16 & 0x10000000000LL) != 0 )
        {
          if ( (_DWORD)v43 )
            LOWORD(v9) = v41;
        }
        else
        {
          if ( v3 && *(_DWORD *)(v3 + 88) )
            v9 = v41 & 0x100 | 0x80;
          else
            v9 = 384;
          if ( (v16 & 0x2080000000000LL) == 0x2000000000000LL )
            v9 |= (v9 >> 5) & 8;
        }
      }
    }
  }
  else
  {
    v41 = 0;
  }
  if ( dwTlsIndex )
  {
    *(_DWORD *)(v3 + 16) = 0;
    RtlReleaseSRWLockExclusive(v3 + 8);
    if ( ::dwTlsIndex != -1 )
    {
      v17 = TlsGetValue(::dwTlsIndex);
      if ( (*(_BYTE *)v17 & 8) == 0 )
        __int2c();
      v8 = v17[4]-- == 1LL;
      if ( v8 )
        *v17 &= ~8uLL;
    }
  }
  sub_1800468FC(a1, &v44, &v45);
  v18 = v44 & 0x188;
  v19 = *(_QWORD *)(a1 + 776);
  v20 = v45 & 0x88;
  v43 = v19;
  dwTlsIndexa = ::dwTlsIndex;
  if ( ::dwTlsIndex != -1 )
  {
    v21 = TlsGetValue(::dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(dwTlsIndexa) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v21 |= 0x20uLL;
    ++v21[6];
    v19 = v43;
  }
  RtlAcquireSRWLockShared(v19 + 576);
  v22 = (*(_DWORD *)(v19 + 608) >> 23) & 3;
  if ( ::dwTlsIndex != -1 )
  {
    v23 = TlsGetValue(::dwTlsIndex);
    if ( (*(_BYTE *)v23 & 0x20) == 0 )
      __int2c();
    v8 = v23[6]-- == 1LL;
    if ( v8 )
      *v23 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v43 + 576);
  v46 = *(_QWORD *)(a1 + 648) >> 62;
  v48 = v22;
  if ( (v9 & 0x188) != v18 )
    goto LABEL_81;
  sub_1800468FC(a1, &v43, &v42);
  v24 = *(_QWORD *)(a1 + 648);
  if ( ((v24 >> 16) & 3) != 0 )
  {
    switch ( (v24 >> 16) & 3 )
    {
      case 1uLL:
        if ( (v43 & 0x80u) == 0LL || v42 < 0 || (v24 & 0x40000000000LL) != 0 )
          goto LABEL_40;
        v34 = sub_180006258(a1);
        if ( v34 )
        {
          while ( (*(_BYTE *)(v34 + 544) & 0x28) != 0
               || !sub_180006278(v34, 5u)
               || (*(_DWORD *)(v34 + 112) & 0x2000) == 0 )
          {
            v34 = sub_1800062A4(v34);
            if ( !v34 )
              goto LABEL_81;
          }
          goto LABEL_40;
        }
        break;
      case 2uLL:
        if ( ((v24 >> 52) & 1) != 0 )
          goto LABEL_40;
        break;
      case 3uLL:
        break;
      default:
        goto LABEL_40;
    }
LABEL_81:
    v40 = 1;
    goto LABEL_51;
  }
LABEL_40:
  if ( (v24 & 0x10000000000000LL) != 0 )
    goto LABEL_81;
  if ( (v24 & 0x80000000000000LL) != 0 )
  {
    v40 = 1;
    goto LABEL_51;
  }
  if ( (v24 & 0x40000000000000LL) != 0 )
    goto LABEL_81;
  sub_18001D590(a1, (unsigned int)&v51, (unsigned int)v65, (unsigned int)&v55, (__int64)&v49);
  v25 = *(_QWORD *)(a1 + 648);
  if ( (v25 & 0x100000000000000LL) != 0 && (SDWORD2(v52) >= 2 || (BYTE12(v52) & 0x70) != 0 || (BYTE12(v52) & 8) != 0) )
    goto LABEL_81;
  if ( *(_QWORD *)(a1 + 1000) != v49 )
    goto LABEL_81;
  v26 = *(_OWORD *)(a1 + 1120);
  Buf1[0] = 0uLL;
  Buf1[1] = v26;
  Buf2[0] = 0uLL;
  Buf2[1] = v52;
  if ( memcmp(Buf1, Buf2, 0x20uLL) )
    goto LABEL_81;
  if ( v57 != *(_QWORD *)(a1 + 848) )
    goto LABEL_81;
  if ( v56 != *(_QWORD *)(a1 + 856) )
    goto LABEL_81;
  if ( memcmp(v65, (const void *)(a1 + 872), 0x20uLL) )
    goto LABEL_81;
  if ( !(v25 >> 62) && !(unsigned int)sub_18003569C(a1) )
  {
    v33 = *(_QWORD *)(a1 + 656);
    if ( (v33 & 1) != 0 || (v33 & 2) != 0 && (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) == 0 )
      goto LABEL_81;
  }
  if ( v46 > v48 )
    goto LABEL_81;
LABEL_51:
  v27 = *(_QWORD *)(a1 + 648);
  if ( (v27 & 0x10000000000000LL) == 0
    || (v27 & 0xE0000000) == 0
    || (dwTlsIndexb = 1, (*(_QWORD *)(a1 + 648) & 0xE0000000LL) == 0xA0000000LL) )
  {
    dwTlsIndexb = 0;
  }
  if ( (v27 & 0x80000000000000LL) != 0
    || (v27 & 0x40000000000000LL) != 0
    || (sub_18001D590(a1, (unsigned int)&v53, (unsigned int)v66, (unsigned int)&v58, (__int64)&v50),
        (*(_QWORD *)(a1 + 648) & 0x100000000000000LL) != 0)
    && (SDWORD2(v54) >= 2 || (BYTE12(v54) & 0x70) != 0 || (BYTE12(v54) & 8) != 0)
    || *(_QWORD *)(a1 + 1000) != v50
    || (v28 = *(_OWORD *)(a1 + 1120), v64[0] = 0uLL,
                                      v64[1] = v28,
                                      v63[0] = 0uLL,
                                      v63[1] = v54,
                                      memcmp(v64, v63, 0x20uLL))
    || v60 != *(_QWORD *)(a1 + 848)
    || v59 != *(_QWORD *)(a1 + 856)
    || memcmp(v66, (const void *)(a1 + 872), 0x20uLL) )
  {
    v6 = 1;
    v29 = 1;
  }
  else
  {
    if ( (v9 & 0x80u) != 0 || ((v18 | v20) & 0x80u) == 0 )
    {
      if ( (v9 & 8) == 0 && ((v44 & 8) != 0 || (v45 & 8) != 0) )
      {
        v6 = 1;
      }
      else if ( (*(_QWORD *)(a1 + 648) & 0x10000000000000LL) != 0 )
      {
        v6 = 1;
      }
      else if ( v46 > v48 )
      {
        v6 = 1;
      }
    }
    else
    {
      v6 = 1;
    }
    v29 = dwTlsIndexb;
    if ( !dwTlsIndexb && !v6 )
      goto LABEL_66;
  }
  v30 = v40;
  if ( !v40 )
    return v6;
  if ( (*(_BYTE *)(a1 + 1184) & 0x27) != 0 )
    sub_180073374(a1);
  if ( v29 )
    RtlWakeAllConditionVariable(a1 + 680);
LABEL_67:
  if ( v30 )
  {
    v32 = *(_QWORD *)(a1 + 648);
    if ( (v32 & 0x400000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 648) = v32 | 0x400000000LL;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 - 48)) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*(_QWORD *)(a1 + 632));
    }
  }
  return v6;
}
