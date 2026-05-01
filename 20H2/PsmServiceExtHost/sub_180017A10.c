/*
 * XREFs of sub_180017A10 @ 0x180017A10
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 * Callees:
 *     sub_180001164 @ 0x180001164 (sub_180001164.c)
 *     sub_1800235DC @ 0x1800235DC (sub_1800235DC.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006A458 @ 0x18006A458 (sub_18006A458.c)
 *     sub_18006A5B4 @ 0x18006A5B4 (sub_18006A5B4.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 *     sub_180074464 @ 0x180074464 (sub_180074464.c)
 */

__int64 __fastcall sub_180017A10(_DWORD *P, unsigned __int8 *Buf1, int a3)
{
  char *v4; // rsi
  char v5; // r13
  unsigned __int8 v7; // dl
  DWORD v8; // r12d
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v11; // ecx
  _QWORD *v12; // rax
  bool v13; // zf
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // r10
  __int64 v19; // r11
  int v20; // edi
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 (__fastcall *v24)(__int64 *, _DWORD *, _DWORD *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD); // rax
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // r8
  DWORD v28; // r13d
  _QWORD *v29; // rdi
  DWORD v30; // eax
  DWORD v31; // ecx
  _QWORD *v32; // rax
  int v33; // r13d
  unsigned __int64 v34; // rdx
  char v35; // dl
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int8 v39; // cl
  BOOL v40; // ecx
  bool v41; // al
  char v42[4]; // [rsp+80h] [rbp-29h] BYREF
  int v43; // [rsp+84h] [rbp-25h] BYREF
  __int64 v44; // [rsp+88h] [rbp-21h] BYREF
  __int64 v45; // [rsp+90h] [rbp-19h] BYREF
  __int64 v46; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v47[12]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v48; // [rsp+110h] [rbp+67h] BYREF
  int v49; // [rsp+120h] [rbp+77h]
  __int64 v50; // [rsp+128h] [rbp+7Fh] BYREF

  v49 = a3;
  v4 = (char *)(P + 292);
  v5 = a3;
  if ( !memcmp(Buf1, P + 292, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v7 = Buf1[28];
  if ( (!(v4[28] & 1) & v7) != 0 )
  {
    sub_180074464(P);
  }
  else if ( (v4[28] & 1) != 0 && (v7 & 1) == 0 )
  {
    sub_1800742F0(P);
  }
  v8 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(P + 16);
  CurrentThreadId = GetCurrentThreadId();
  v11 = dwTlsIndex;
  P[18] = CurrentThreadId;
  v4[28] ^= (Buf1[28] ^ v4[28]) & 1;
  if ( v11 != -1 )
  {
    v12 = TlsGetValue(v11);
    if ( (*(_BYTE *)v12 & 2) == 0 )
      __int2c();
    v13 = v12[2]-- == 1LL;
    if ( v13 )
      *v12 &= ~2uLL;
  }
  P[18] = 0;
  RtlReleaseSRWLockExclusive(P + 16);
  v14 = Buf1[28];
  if ( (((unsigned __int8)v4[28] ^ (unsigned __int8)v14) & 4) != 0 )
  {
    v38 = sub_180001164(P, (v14 >> 2) & 1);
    v26 = v38;
    if ( v38 == -1073741822 )
    {
      v4[28] ^= (Buf1[28] ^ v4[28]) & 4;
    }
    else if ( v38 < 0 )
    {
      goto LABEL_40;
    }
  }
  v15 = *((_QWORD *)Buf1 + 2);
  if ( *((_QWORD *)v4 + 2) != v15
    || (v16 = *((_QWORD *)Buf1 + 1), *((_QWORD *)v4 + 1) != v16)
    || (v17 = *(_QWORD *)Buf1, *(_QWORD *)v4 != *(_QWORD *)Buf1)
    || *((_DWORD *)v4 + 6) != *((_DWORD *)Buf1 + 6)
    || ((Buf1[28] ^ (unsigned __int8)v4[28]) & 2) != 0 )
  {
    v16 = *((_QWORD *)Buf1 + 1);
    v17 = *(_QWORD *)Buf1;
    goto LABEL_17;
  }
  if ( (v5 & 1) != 0 )
  {
LABEL_17:
    v18 = &v48;
    v19 = *((_QWORD *)P + 4);
    v20 = P[156];
    if ( !v15 )
      v18 = 0LL;
    v21 = *(__int64 **)(*((_QWORD *)P + 6) + 40LL);
    v44 = v17;
    v22 = *v21;
    v23 = (unsigned int)P[155];
    v48 = v15;
    v24 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _DWORD *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD))(v22 + 32);
    v50 = v16;
    v26 = v24(v21, P + 22, P + 138, v23, v20, v19, v18, &v44, &v50, 0LL);
    if ( v26 >= 0 )
    {
      v28 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        v29 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v29 |= 2uLL;
        ++v29[2];
      }
      RtlAcquireSRWLockExclusive(P + 16);
      v30 = GetCurrentThreadId();
      v31 = dwTlsIndex;
      P[18] = v30;
      *(_QWORD *)v4 = *(_QWORD *)Buf1;
      *((_QWORD *)v4 + 1) = *((_QWORD *)Buf1 + 1);
      *((_QWORD *)v4 + 2) = *((_QWORD *)Buf1 + 2);
      if ( v31 != -1 )
      {
        v32 = TlsGetValue(v31);
        if ( (*(_BYTE *)v32 & 2) == 0 )
          __int2c();
        v13 = v32[2]-- == 1LL;
        if ( v13 )
          *v32 &= ~2uLL;
      }
      P[18] = 0;
      RtlReleaseSRWLockExclusive(P + 16);
      if ( *((_DWORD *)v4 + 6) == *((_DWORD *)Buf1 + 6) && ((Buf1[28] ^ (unsigned __int8)v4[28]) & 2) == 0
        || (v26 = sub_1800235DC(P, Buf1), v26 >= 0) )
      {
        v26 = 0;
      }
      v5 = v49;
    }
    if ( v26 < 0 )
      goto LABEL_40;
  }
  v33 = v5 & 2;
  if ( *((int *)Buf1 + 6) >= 2 && (Buf1[28] & 2) != 0 && v33 )
    sub_18002A490((_DWORD)P, 0x2000, 1, (unsigned int)&sub_180035400, 1LL);
  v34 = Buf1[28];
  v25 = (unsigned __int8)v4[28];
  v27 = *((_QWORD *)P + 6);
  if ( (((unsigned __int8)v25 ^ (unsigned __int8)v34) & 0x70) != 0 || v33 )
  {
    v37 = v4[28];
    if ( (*(_BYTE *)(v27 + 508) & 0x10) != 0 )
    {
      sub_18002A490((_DWORD)P, 0x2000, 1, (unsigned int)sub_1800777F0, (v34 >> 4) & 7);
      v37 = v4[28];
      LOBYTE(v34) = Buf1[28];
    }
    v25 = v37;
    LOBYTE(v25) = v37 ^ (v34 ^ v37) & 0x70;
    v4[28] = v25;
    LOBYTE(v34) = Buf1[28];
  }
  v35 = (v34 & 8) != 0;
  LOBYTE(v25) = (v25 & 8) != 0;
  if ( (_BYTE)v25 != v35 || v33 )
  {
    if ( v35 )
    {
      v26 = sub_18002A490((_DWORD)P, 0x2000, 1, (unsigned int)sub_1800380E0, 0LL);
      if ( v26 < 0 )
        goto LABEL_40;
    }
    v4[28] ^= (Buf1[28] ^ v4[28]) & 8;
  }
  v26 = 0;
LABEL_40:
  if ( (P[209] & 1) != 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v39 = v4[28];
      v43 = v26;
      LOBYTE(v48) = (v39 >> 4) & 7;
      v40 = (v39 & 2) != 0;
      v42[0] = v4[24];
      v44 = *((_QWORD *)v4 + 1);
      v45 = *(_QWORD *)v4;
      v46 = *((_QWORD *)v4 + 2);
      v47[0] = *((_QWORD *)P + 4);
      LOBYTE(v50) = v40;
      sub_18006A5B4(
        v40,
        (unsigned int)&unk_18009BE3F,
        v27,
        v17,
        (__int64)&v43,
        (__int64)v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)v42,
        (__int64)&v50,
        (__int64)&v48);
    }
  }
  else if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v41 = (v4[28] & 2) != 0;
    LODWORD(v44) = v26;
    LOBYTE(v48) = v41;
    LOBYTE(v50) = v4[24];
    v47[0] = *((_QWORD *)v4 + 1);
    v46 = *(_QWORD *)v4;
    v47[1] = *((_QWORD *)v4 + 2);
    v47[2] = *((_QWORD *)P + 4);
    v43 = P[156];
    LODWORD(v45) = P[155];
    v47[3] = P + 138;
    v47[4] = P + 22;
    sub_18006A458(v25, &unk_18009BCEE);
  }
  return (unsigned int)v26;
}
