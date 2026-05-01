/*
 * XREFs of sub_18001F370 @ 0x18001F370
 * Callers:
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 * Callees:
 *     sub_1800027E8 @ 0x1800027E8 (sub_1800027E8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_18002247C @ 0x18002247C (sub_18002247C.c)
 *     sub_18003C324 @ 0x18003C324 (sub_18003C324.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180072DEC @ 0x180072DEC (sub_180072DEC.c)
 */

__int64 __fastcall sub_18001F370(__int64 a1)
{
  __int128 *v1; // r8
  char v3; // r13
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // ecx
  __int64 v9; // rsi
  DWORD v10; // r14d
  _QWORD *Value; // rbx
  _QWORD *v12; // rax
  bool v13; // zf
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 result; // rax
  DWORD v18; // esi
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int16 v21; // si
  int v22; // ebx
  _QWORD *v23; // rax
  int v24; // eax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  void (__fastcall **v36)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64); // rax
  char v37; // [rsp+48h] [rbp-C0h] BYREF
  char v38[3]; // [rsp+49h] [rbp-BFh] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  int v44; // [rsp+80h] [rbp-88h]
  int v45; // [rsp+84h] [rbp-84h]
  int v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+8Ch] [rbp-7Ch]
  int v48; // [rsp+90h] [rbp-78h]
  unsigned int v49; // [rsp+94h] [rbp-74h]
  unsigned __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-40h]
  __int128 v56; // [rsp+D8h] [rbp-30h]
  __int128 v57; // [rsp+E8h] [rbp-20h]

  v1 = *(__int128 **)(a1 + 520);
  v3 = *(_BYTE *)(a1 + 548);
  v4 = v1[1];
  v55 = *v1;
  v5 = v1[2];
  *(_BYTE *)(a1 + 548) = 3;
  v56 = v4;
  v57 = v5;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 520) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(a1 + 549) = 6;
  sub_18001BD70(v6);
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(v7 + 800);
  v8 = *(_DWORD *)(v7 + 832);
  v9 = *(_QWORD *)(v7 + 688);
  if ( v8 <= *(_DWORD *)(a1 + 388) )
    v8 = *(_DWORD *)(a1 + 388);
  *(_DWORD *)(v7 + 832) = v8;
  if ( v9 )
  {
    v10 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    sub_18002247C(v9);
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
    if ( dwTlsIndex != -1 )
    {
      v12 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v12 & 8) == 0 )
        __int2c();
      v13 = v12[4]-- == 1LL;
      if ( v13 )
        *v12 &= ~8uLL;
    }
  }
  RtlInitializeBitMap(&BitMapHeader, (PULONG)(a1 + 496), 0x2Fu);
  result = (__int64)BitMapHeader.Buffer;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
  {
    result = 0x800000000000000LL;
    *(_QWORD *)(v7 + 648) |= 0x800000000000000uLL;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    v40[0] = *(_QWORD *)(a1 + 40);
    v41 = 0LL;
    HIWORD(v49) = 0;
    v40[1] = 0LL;
    if ( *(_DWORD *)(v7 + 560) == 2 )
    {
      v18 = dwTlsIndex;
      v19 = *(_QWORD *)(v7 + 776);
      if ( dwTlsIndex != -1 )
      {
        v20 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v20 |= 0x20uLL;
        ++v20[6];
      }
      RtlAcquireSRWLockShared(v19 + 576);
      v21 = *(_WORD *)(v19 + 608);
      v22 = (*(_DWORD *)(v19 + 616) >> 5) & 7;
      if ( dwTlsIndex != -1 )
      {
        v23 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v23 & 0x20) == 0 )
          __int2c();
        v13 = v23[6]-- == 1LL;
        if ( v13 )
          *v23 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v19 + 576);
      if ( v22 == 4 )
      {
        v22 = 3;
      }
      else if ( v22 != 3 )
      {
        v24 = v22;
        if ( (*(_QWORD *)(v7 + 648) & 0x2000000000000LL) == 0 )
          v24 = 3;
        v22 = v24;
      }
    }
    else
    {
      v22 = 4;
      v21 = 6912;
    }
    LOWORD(v49) = v21;
    v49 = (v22 << 16) | v49 & 0xFFF8FFFF;
    v42 = *(_QWORD *)(a1 + 512);
    RtlQueryPerformanceFrequency(&v50);
    v25 = -1LL;
    v43 = v55;
    v26 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v55 + 1) - v55, 0x3E8uLL) )
      v26 = 1000 * (*((_QWORD *)&v55 + 1) - v55);
    if ( v50 == 10000000 )
      v27 = v26 / 0x989680;
    else
      v27 = v26 / v50;
    if ( v27 > 0xFFFFFFFF )
      LODWORD(v27) = -1;
    v44 = v27;
    v28 = -1LL;
    if ( is_mul_ok(v56 - *((_QWORD *)&v55 + 1), 0x3E8uLL) )
      v28 = 1000 * (v56 - *((_QWORD *)&v55 + 1));
    if ( v50 == 10000000 )
      v29 = v28 / 0x989680;
    else
      v29 = v28 / v50;
    if ( v29 > 0xFFFFFFFF )
      LODWORD(v29) = -1;
    v45 = v29;
    v30 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v56 + 1) - v56, 0x3E8uLL) )
      v30 = 1000 * (*((_QWORD *)&v56 + 1) - v56);
    if ( v50 == 10000000 )
      v31 = v30 / 0x989680;
    else
      v31 = v30 / v50;
    if ( v31 > 0xFFFFFFFF )
      LODWORD(v31) = -1;
    v46 = v31;
    v32 = -1LL;
    if ( is_mul_ok(v57 - *((_QWORD *)&v56 + 1), 0x3E8uLL) )
      v32 = 1000 * (v57 - *((_QWORD *)&v56 + 1));
    if ( v50 == 10000000 )
      v33 = v32 / 0x989680;
    else
      v33 = v32 / v50;
    if ( v33 > 0xFFFFFFFF )
      LODWORD(v33) = -1;
    v47 = v33;
    if ( is_mul_ok(*((_QWORD *)&v57 + 1) - v57, 0x3E8uLL) )
      v25 = 1000 * (*((_QWORD *)&v57 + 1) - v57);
    if ( v50 == 10000000 )
      v34 = v25 / 0x989680;
    else
      v34 = v25 / v50;
    v35 = *(_QWORD *)(a1 + 64);
    if ( v34 > 0xFFFFFFFF )
      LODWORD(v34) = -1;
    v48 = v34;
    v36 = (void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64))(v35 + 104);
    if ( (*(_BYTE *)(v35 + 128) & 2) != 0 )
    {
      (*v36)(v40, *(_QWORD *)(v35 + 120), v25, v50);
    }
    else if ( (int)sub_180021AD4(v36, v40, 64LL, *(_QWORD *)(v35 + 112)) < 0
           && (unsigned int)dword_1800B3218 > 4
           && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
    {
      v39 = v41;
      v52 = v40[0];
      v51 = 0x1000000LL;
      sub_180072DEC(
        (unsigned int)&dword_1800B3218,
        (unsigned int)&unk_18009EB8B,
        v15,
        v16,
        (__int64)&v52,
        (__int64)&v39,
        (__int64)&v51);
    }
    result = *(_QWORD *)(v7 + 648);
    v14 = 0;
    if ( (result & 0x100000000000LL) != 0 && (result & 0x30000) != 0 )
      result = sub_1800027E8(a1, 2u, 5, 0, (unsigned __int16)result, 0, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
  {
    result = qword_1800B3230 & 8;
    if ( result == qword_1800B3230 )
    {
      v53 = *(_QWORD *)(a1 + 40);
      v37 = v3;
      v38[0] = 3;
      return sub_18003C324(v14, (unsigned int)&unk_1800A1BB2, v15, v16, (__int64)&v53, (__int64)v38, (__int64)&v37);
    }
  }
  return result;
}
