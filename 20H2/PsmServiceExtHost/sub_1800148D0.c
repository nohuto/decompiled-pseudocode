/*
 * XREFs of sub_1800148D0 @ 0x1800148D0
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     j_free @ 0x1800448FC (j_free.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800148D0(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        wchar_t *Source,
        PSID Sid,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 *a15)
{
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // r14d
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int128 v22; // xmm0
  ULONG v23; // eax
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // esi
  unsigned int v28; // edx
  char v29; // cl
  __int64 v30; // r10
  unsigned int v31; // r9d
  int v32; // esi
  __int64 v33; // r14
  DWORD v34; // r12d
  _QWORD *Value; // r14
  _QWORD *v36; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  unsigned int v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 *v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  void *v49; // [rsp+A8h] [rbp-58h]
  wchar_t Destination[280]; // [rsp+B0h] [rbp-50h] BYREF

  v48 = a5;
  v42 = a1;
  v47 = a15;
  v49 = a4;
  v46 = a3;
  v45 = 0LL;
  v44 = 0LL;
  v16 = sub_180046098(0x178uLL);
  v17 = v16;
  if ( !v16 )
    return 3489660951LL;
  *(_QWORD *)(v16 + 88) = 0LL;
  v18 = v16;
  *(_WORD *)(v16 + 100) = 0;
  *(_DWORD *)(v16 + 96) = 101;
  v19 = -1;
  *(_DWORD *)(v16 + 80) = -1;
  *(_DWORD *)(v16 + 104) = -1;
  *(_QWORD *)(v16 + 112) = 0LL;
  *(_DWORD *)(v16 + 120) = 101;
  *(_WORD *)(v16 + 124) = 0;
  *(_DWORD *)(v16 + 128) = -1;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_DWORD *)(v16 + 144) = 101;
  *(_WORD *)(v16 + 148) = 0;
  v20 = 2;
  v21 = 2LL;
  do
  {
    v18 += 128LL;
    v22 = *a2;
    a2 += 8;
    *(_OWORD *)(v18 - 128) = v22;
    *(_OWORD *)(v18 - 112) = *(a2 - 7);
    *(_OWORD *)(v18 - 96) = *(a2 - 6);
    *(_OWORD *)(v18 - 80) = *(a2 - 5);
    *(_OWORD *)(v18 - 64) = *(a2 - 4);
    *(_OWORD *)(v18 - 48) = *(a2 - 3);
    *(_OWORD *)(v18 - 32) = *(a2 - 2);
    *(_OWORD *)(v18 - 16) = *(a2 - 1);
    --v21;
  }
  while ( v21 );
  *(_OWORD *)v18 = *a2;
  *(_OWORD *)(v18 + 16) = a2[1];
  *(_OWORD *)(v18 + 32) = a2[2];
  *(_OWORD *)(v18 + 48) = a2[3];
  *(_OWORD *)(v18 + 64) = a2[4];
  *(_OWORD *)(v18 + 80) = a2[5];
  *(_OWORD *)(v18 + 96) = a2[6];
  *(_QWORD *)(v18 + 112) = *((_QWORD *)a2 + 14);
  memset(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset(&Destination[232], 0, 0x44uLL);
  v23 = RtlLengthSid(Sid);
  memcpy(&Destination[232], Sid, v23);
  v24 = v42;
  *(_DWORD *)&Destination[266] = a9;
  *(_DWORD *)&Destination[268] = a10;
  *(_QWORD *)&Destination[272] = a11;
  v42 = *(_QWORD *)(v42 + 128);
  RtlAcquireSRWLockShared(v42 + 32);
  v25 = a11;
  v26 = 0LL;
  v27 = -1073741275;
  v28 = *(_DWORD *)(v42 + 20);
  v29 = v28 & 0x1F;
  v43 = v28;
  v30 = (-1LL << (v28 & 0x1F)) & (HIBYTE(a11)
                                + 37
                                * (BYTE6(a11)
                                 + 37
                                 * (BYTE5(a11)
                                  + 37
                                  * (BYTE4(a11)
                                   + 37
                                   * (BYTE3(a11)
                                    + 37 * (BYTE2(a11) + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL))))))));
  v41[0] = v30;
LABEL_5:
  if ( v26 )
    goto LABEL_8;
  v31 = v28 >> 5;
  if ( v28 >> 5 )
  {
    v28 = v43;
    v25 = a11;
    v26 = *(_QWORD *)(v42 + 24)
        + 8LL
        * ((37
          * (BYTE6(v41[0])
           + 37
           * (BYTE5(v41[0])
            + 37
            * (BYTE4(v41[0])
             + 37
             * (BYTE3(v41[0]) + 37 * (BYTE2(v41[0]) + 37 * (BYTE1(v41[0]) + 37 * ((unsigned __int8)v30 + 11623883)))))))
          + HIBYTE(v41[0])) & (v31 - 1));
LABEL_8:
    while ( 1 )
    {
      v26 = *(_QWORD *)v26;
      if ( (v26 & 1) != 0 )
        break;
      if ( v30 == ((-1LL << v29) & *(_QWORD *)(v26 + 8)) )
      {
        if ( v25 != *(_QWORD *)(v26 + 32) )
          goto LABEL_5;
        v27 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_12;
      }
    }
  }
  v26 = (__int64)v47;
LABEL_12:
  RtlReleaseSRWLockShared(v42 + 32);
  if ( v27 < 0 )
  {
    v39 = sub_18000B9A8(*(_QWORD *)(v24 + 128), v46, (__int64)Destination, 0, &v44);
    v26 = v44;
    if ( v39 < 0 )
    {
      v32 = v39 | 0x10000000;
      goto LABEL_23;
    }
  }
  else if ( ((*(_BYTE *)(v26 + 836) ^ (unsigned __int8)(*(unsigned __int16 *)(v17 + 40) >> 5)) & 1) != 0 )
  {
    v32 = -805306320;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v17 + 42) & 7) == 4 )
  {
    v41[1] = 3LL;
    v41[0] = sub_180007E58(v26, 3, 0);
    v40 = sub_180007DE4(v41);
    if ( v40 )
    {
      while ( !*(_QWORD *)(v40 + 1400) )
      {
        v40 = sub_180007DE4(v41);
        if ( !v40 )
          goto LABEL_15;
      }
      v32 = -805305980;
      goto LABEL_23;
    }
  }
LABEL_15:
  if ( a13 )
  {
    if ( a10 == 2 )
    {
      v19 = 11;
    }
    else if ( a10 == 4 || a10 == 8 )
    {
      v19 = 12;
    }
  }
  v32 = sub_180013860(*(_QWORD *)(v24 + 32), (__int128 *)v17, v46, v49, v48, a6, v26, v19, a12, a14, &v45);
  if ( v32 < 0 )
  {
    v33 = v45;
LABEL_52:
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 32LL))(v33, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_23;
  }
  if ( a13 )
    v20 = 1;
  v33 = v45;
  v32 = sub_180016DD0(v45, v20, a13);
  if ( v32 < 0 )
    goto LABEL_52;
  v32 = 0;
  *v47 = v33;
LABEL_23:
  if ( v26 )
  {
    v34 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(v26 + 64);
    *(_DWORD *)(v26 + 72) = GetCurrentThreadId();
    if ( (unsigned int)sub_180018A60(v26) )
      sub_18001CC80(v26 + 64, 1LL);
    if ( dwTlsIndex != -1 )
    {
      v36 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v36 & 2) == 0 )
        __int2c();
      if ( v36[2]-- == 1LL )
        *v36 &= ~2uLL;
    }
    *(_DWORD *)(v26 + 72) = 0;
    RtlReleaseSRWLockExclusive(v26 + 64);
    sub_1800265B0((PVOID)v26);
  }
  j_free((void *)v17);
  return (unsigned int)v32;
}
