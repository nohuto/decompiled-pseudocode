/*
 * XREFs of sub_1800202A0 @ 0x1800202A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020AD0 @ 0x180020AD0 (sub_180020AD0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800327C0 @ 0x1800327C0 (sub_1800327C0.c)
 *     sub_18003474C @ 0x18003474C (sub_18003474C.c)
 *     sub_1800347D0 @ 0x1800347D0 (sub_1800347D0.c)
 *     sub_180034804 @ 0x180034804 (sub_180034804.c)
 *     sub_180034BB8 @ 0x180034BB8 (sub_180034BB8.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 *     sub_180037518 @ 0x180037518 (sub_180037518.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800202A0(__int64 a1, __int64 a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v6; // si
  DWORD v7; // ecx
  _QWORD *v8; // rax
  char v9; // si
  unsigned __int64 v10; // r15
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  DWORD v16; // r14d
  _QWORD *v17; // rsi
  DWORD v18; // eax
  DWORD v19; // ecx
  char v20; // si
  _QWORD *v21; // rax
  DWORD v22; // r14d
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  DWORD v25; // r14d
  _QWORD *v26; // rsi
  char v27; // al
  DWORD v28; // ecx
  _QWORD *v29; // rax
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  bool v32; // zf
  signed __int64 v33; // rtt
  DWORD v34; // ebx
  __int64 v35; // rdx
  _WORD *v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rdx
  _WORD *v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // r14d
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  signed __int64 v51; // r13
  bool v52; // cc
  signed __int64 v53; // r13
  __int128 v55; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v56; // [rsp+30h] [rbp-D0h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD TlsValue[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  _QWORD v61[50]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = dwTlsIndex;
  v60 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v2, TlsValue);
    v2 = dwTlsIndex;
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( v2 != -1 )
    {
      Value = TlsGetValue(v2);
      if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *(_DWORD *)(a2 + 48) = GetCurrentThreadId();
    CurrentThreadId = GetCurrentThreadId();
    v6 = *(_BYTE *)(a2 + 185);
    for ( *(_DWORD *)(a2 + 180) = CurrentThreadId; v6; v6 = *(_BYTE *)(a2 + 185) )
    {
      v7 = dwTlsIndex;
      *(_BYTE *)(a2 + 185) = 0;
      if ( v7 != -1 )
      {
        v8 = TlsGetValue(v7);
        if ( (*(_DWORD *)v8 & 0x800LL) == 0 )
          __int2c();
        v32 = v8[12]-- == 1LL;
        if ( v32 )
          *v8 &= ~0x800uLL;
      }
      *(_DWORD *)(a2 + 48) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (*(_BYTE *)(a2 + 160) & (v6 >> 1) & 2) != 0 )
      {
        sub_18003474C(a2);
        *(_QWORD *)(a2 + 128) = 0LL;
      }
      sub_180020AD0(a2, v6, &v55);
      v9 = v57;
      if ( ((*(_BYTE *)(a2 + 160) & 2) != 0) != ((v57 & 2) != 0) )
      {
        if ( (v57 & 2) == 0 )
        {
          sub_18003474C(a2);
LABEL_95:
          v56 = 0uLL;
          LOBYTE(v57) = v9 & 0xFD;
          goto LABEL_19;
        }
        memset(v61, 0, 0x188uLL);
        LODWORD(v61[0]) = 8397888;
        v35 = 64LL;
        v36 = (_WORD *)&v61[1] + 2;
        while ( v35 != -2147483582 )
        {
          v37 = *(_WORD *)((char *)v36 + (char *)L"WakeReference" - ((char *)&v61[1] + 4));
          if ( !v37 )
            break;
          *v36++ = v37;
          if ( !--v35 )
          {
            --v36;
            break;
          }
        }
        *v36 = 0;
        v38 = 64LL;
        v39 = (_WORD *)&v61[17] + 2;
        while ( v38 != -2147483582 )
        {
          v40 = *(_WORD *)((char *)v39 + &unk_180095550 - (_UNKNOWN *)((char *)&v61[17] + 4));
          if ( !v40 )
            break;
          *v39++ = v40;
          if ( !--v38 )
          {
            --v39;
            break;
          }
        }
        *v39 = 0;
        HIDWORD(v61[33]) = 5;
        memset(&v61[35], 0, 0x68uLL);
        v41 = *(_QWORD *)(a2 + 56);
        v61[0] |= 0x400042400uLL;
        LODWORD(v61[1]) |= 8u;
        v42 = *(_QWORD *)(a2 + 168);
        HIDWORD(v61[34]) = 0;
        memset(&v61[41], 0, 32);
        v61[40] = 175LL;
        LODWORD(v61[46]) = 0;
        if ( (int)sub_18003504C(*(_QWORD *)(v41 + 8), v42, v61, a2 + 88) < 0 )
          goto LABEL_95;
        sub_180034804(*(_QWORD *)(a2 + 56));
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24)) <= 1 )
          __fastfail(0xEu);
        v44 = *(_QWORD *)(a2 + 56);
        v45 = *(_QWORD *)(v44 + 88);
        if ( (v45 & 1) != 0 )
        {
          v49 = *(_QWORD *)(v44 + 80);
          if ( v49 )
            v46 = v49 ^ (v44 + 80);
          else
            v46 = 0LL;
        }
        else
        {
          v46 = *(_QWORD *)(v44 + 80);
        }
        LOBYTE(v43) = 0;
        v47 = v45 & 1;
        if ( v46 )
        {
          while ( 1 )
          {
            if ( (int)sub_180037518(a2 + 88, v46) < 0 )
            {
              v48 = *(_QWORD *)v46;
              if ( v47 )
              {
                if ( !v48 )
                  goto LABEL_93;
                v48 ^= v46;
              }
              if ( !v48 )
              {
LABEL_93:
                LOBYTE(v43) = 0;
                break;
              }
            }
            else
            {
              v48 = *(_QWORD *)(v46 + 8);
              if ( v47 )
              {
                if ( !v48 )
                  goto LABEL_96;
                v48 ^= v46;
              }
              if ( !v48 )
              {
LABEL_96:
                LOBYTE(v43) = 1;
                break;
              }
            }
            v46 = v48;
          }
        }
        RtlRbInsertNodeEx(v44 + 80, v46, v43, a2 + 64);
        sub_1800347D0(*(_QWORD *)(a2 + 56));
        if ( (int)sub_1800327C0(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL), *(_QWORD *)(a2 + 88), 0LL, 0LL) < 0 )
        {
          sub_18003474C(a2);
          LOBYTE(v57) = v57 & 0xFD;
          v56 = 0uLL;
        }
      }
LABEL_19:
      v10 = -1LL;
      v11 = v56;
      *(_OWORD *)(a2 + 128) = v55;
      v12 = v57;
      *(_OWORD *)(a2 + 144) = v11;
      *(_QWORD *)(a2 + 160) = v12;
      v13 = *(_QWORD *)(a2 + 144);
      v14 = *(_QWORD *)(a2 + 136);
      if ( v14 < v13 && v13 != -1LL )
        v10 = *(_QWORD *)(a2 + 144);
      v15 = *(_QWORD *)(a2 + 152);
      if ( v14 < v15 && v15 < v10 )
        v10 = *(_QWORD *)(a2 + 152);
      TpWaitForTimer(*(_QWORD *)(a2 + 104), 1LL);
      v16 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        v17 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v17 |= 0x800uLL;
        ++v17[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      v18 = GetCurrentThreadId();
      v19 = dwTlsIndex;
      *(_DWORD *)(a2 + 48) = v18;
      v20 = *(_BYTE *)(a2 + 184);
      *(_BYTE *)(a2 + 184) = v20 & 0xFB;
      if ( v19 != -1 )
      {
        v21 = TlsGetValue(v19);
        if ( (*(_DWORD *)v21 & 0x800LL) == 0 )
          __int2c();
        v32 = v21[12]-- == 1LL;
        if ( v32 )
          *v21 &= ~0x800uLL;
      }
      *(_DWORD *)(a2 + 48) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (v20 & 4) != 0 )
        sub_1800274E0(a2);
      if ( v10 != -1LL )
      {
        v22 = dwTlsIndex;
        v58 = *(_QWORD *)(a2 + 136) - v10;
        if ( dwTlsIndex != -1 )
        {
          v23 = TlsGetValue(dwTlsIndex);
          if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFF800uLL) != 0 )
            __int2c();
          *v23 |= 0x800uLL;
          ++v23[12];
        }
        RtlAcquireSRWLockExclusive(a2 + 40);
        *(_DWORD *)(a2 + 48) = GetCurrentThreadId();
        *(_BYTE *)(a2 + 184) |= 4u;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24)) <= 1 )
          __fastfail(0xEu);
        if ( dwTlsIndex != -1 )
        {
          v24 = TlsGetValue(dwTlsIndex);
          if ( (*(_DWORD *)v24 & 0x800LL) == 0 )
            __int2c();
          v32 = v24[12]-- == 1LL;
          if ( v32 )
            *v24 &= ~0x800uLL;
        }
        *(_DWORD *)(a2 + 48) = 0;
        RtlReleaseSRWLockExclusive(a2 + 40);
        TpSetTimerEx(*(_QWORD *)(a2 + 104), &v58, 0LL, 0LL);
      }
      v25 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        v26 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *v26 |= 0x800uLL;
        ++v26[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      *(_DWORD *)(a2 + 48) = GetCurrentThreadId();
      if ( (*(_BYTE *)(a2 + 160) & 1) != 0 )
      {
        v27 = *(_BYTE *)(a2 + 184) | 2;
        goto LABEL_53;
      }
    }
    v27 = *(_BYTE *)(a2 + 184);
LABEL_53:
    v28 = dwTlsIndex;
    *(_DWORD *)(a2 + 180) = 0;
    *(_BYTE *)(a2 + 184) = v27 & 0xFE;
    if ( v28 != -1 )
    {
      v29 = TlsGetValue(v28);
      if ( (*(_DWORD *)v29 & 0x800LL) == 0 )
        __int2c();
      v32 = v29[12]-- == 1LL;
      if ( v32 )
        *v29 &= ~0x800uLL;
    }
    *(_DWORD *)(a2 + 48) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    _m_prefetchw((const void *)(a2 + 24));
    v30 = *(_QWORD *)(a2 + 24);
    v31 = v30 - 1;
    v32 = v30 == 1;
    if ( v30 - 1 <= 0 )
    {
LABEL_109:
      if ( !v32 )
        __fastfail(0xEu);
      v50 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(a2 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24)) <= -1 )
          __fastfail(0xEu);
        LODWORD(v30) = (*(__int64 (__fastcall **)(__int64))(v50 + 24))(a2);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v50 + 16);
        v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v52 = v51 <= 1;
        v53 = v51 - 1;
        if ( v52 )
        {
          if ( v53 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v50 + 16);
          LODWORD(v30) = (*(__int64 (__fastcall **)(__int64))(v50 + 24))(a2);
        }
        else
        {
          LODWORD(v30) = RtlReleaseSRWLockExclusive(v50 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v33 = v30;
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v31, v30);
        if ( v33 == v30 )
          break;
        v31 = v30 - 1;
        v32 = v30 == 1;
        if ( v30 - 1 <= 0 )
          goto LABEL_109;
      }
    }
  }
  else
  {
    LODWORD(v30) = sub_180034BB8(a2);
  }
  v34 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    LODWORD(v30) = TlsSetValue(v34, 0LL);
  }
  return v30;
}
