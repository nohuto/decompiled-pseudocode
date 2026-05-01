/*
 * XREFs of sub_180023FA0 @ 0x180023FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023764 @ 0x180023764 (sub_180023764.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18007FCC4 @ 0x18007FCC4 (sub_18007FCC4.c)
 */

int __fastcall sub_180023FA0(__int64 a1, __int64 a2)
{
  DWORD v3; // ebx
  DWORD v4; // edi
  _QWORD *Value; // rbx
  __int64 v6; // r13
  __int64 v7; // r12
  int v8; // ecx
  _QWORD *v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 i; // rsi
  DWORD v13; // ebp
  _QWORD *v14; // rbx
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r9d
  __int16 v19; // r11
  int v20; // r10d
  int v21; // r10d
  int v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rcx
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  bool v33; // zf
  signed __int64 v34; // rtt
  DWORD v35; // esi
  _QWORD *v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  bool v41; // zf
  signed __int64 v42; // rtt
  DWORD v43; // ebx
  unsigned __int64 v44; // rbx
  signed __int64 v45; // r15
  bool v46; // cc
  signed __int64 v47; // r15
  _QWORD *k; // rcx
  unsigned __int64 v49; // rax
  _QWORD **v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rcx
  _QWORD *v53; // rcx
  unsigned __int64 v54; // rbp
  signed __int64 v55; // rax
  signed __int64 v56; // rax
  __int64 v57; // rbx
  int v59[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+38h] [rbp-F0h]
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+D0h] [rbp-58h] BYREF

  memset(TlsValue, 0, 0x88uLL);
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1A20, 0, 0, 2u, &v62);
  v4 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  v6 = a2 + 304;
  RtlAcquireSRWLockExclusive(a2 + 304);
  *(_DWORD *)(a2 + 312) = GetCurrentThreadId();
  v7 = a2 + 40;
  v8 = *(_DWORD *)(a2 + 340);
  do
  {
    *(_DWORD *)(a2 + 340) = v8 & 0xFFFFFFEF;
    if ( dwTlsIndex != -1 )
    {
      v9 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v9 & 0x40) == 0 )
        __int2c();
      v33 = v9[7]-- == 1LL;
      if ( v33 )
        *v9 &= ~0x40uLL;
    }
    *(_DWORD *)(v6 + 8) = 0;
    RtlReleaseSRWLockExclusive(v6);
    v10 = 128;
    RtlAcquireSRWLockShared(a2 + 56);
    v11 = *(_QWORD *)(a2 + 48);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
      {
LABEL_81:
        i = 0LL;
        goto LABEL_22;
      }
      i = v11 ^ (v7 | 1);
    }
    else
    {
      i = *(_QWORD *)(a2 + 48);
    }
    if ( !i )
      goto LABEL_81;
    while ( !*(_QWORD *)(i + 24) )
    {
      v50 = *(_QWORD ***)(i + 8);
      v51 = i;
      if ( v50 )
      {
        v52 = *v50;
        for ( i = *(_QWORD *)(i + 8); v52; v52 = (_QWORD *)*v52 )
          i = (__int64)v52;
      }
      else
      {
        for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v51 )
            break;
          v51 = i;
        }
      }
      if ( !i )
        goto LABEL_81;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
      __fastfail(0xEu);
LABEL_22:
    RtlReleaseSRWLockShared(a2 + 56);
    if ( i )
    {
      do
      {
        v13 = dwTlsIndex;
        if ( dwTlsIndex != -1 )
        {
          v14 = TlsGetValue(dwTlsIndex);
          if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
            __int2c();
          *v14 |= 0x20uLL;
          ++v14[6];
        }
        RtlAcquireSRWLockShared(i + 576);
        v15 = *(_DWORD *)(i + 616);
        if ( dwTlsIndex != -1 )
        {
          v16 = TlsGetValue(dwTlsIndex);
          if ( (*(_BYTE *)v16 & 0x20) == 0 )
            __int2c();
          v33 = v16[6]-- == 1LL;
          if ( v33 )
            *v16 &= ~0x20uLL;
        }
        RtlReleaseSRWLockShared(i + 576);
        v17 = v10 >> 5;
        v18 = v10 >> 3;
        v19 = v10 | v15;
        if ( (unsigned __int8)((v10 >> 5) & 7) >= (unsigned __int8)((v15 >> 5) & 7) )
          LOBYTE(v17) = v15 >> 5;
        v20 = 4 * (v17 & 7);
        if ( (unsigned __int8)((v10 >> 3) & 3) <= (unsigned __int8)((v15 >> 3) & 3) )
          LOBYTE(v18) = v15 >> 3;
        v21 = 8 * (v18 & 3 | v20);
        if ( (unsigned __int8)(v10 & 7) <= (unsigned __int8)(v15 & 7) )
          LOBYTE(v10) = v15;
        v22 = v10 & 7 | v21;
        v23 = 0;
        if ( (v19 & 0x200) != 0 )
          v23 = 512;
        v24 = v23 | v22;
        v25 = 0;
        if ( (v19 & 0x100) != 0 )
          v25 = 256;
        v10 = v25 | v24;
        v26 = *(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v26 == v7 )
        {
          v27 = v26 + 16;
          RtlAcquireSRWLockShared(v26 + 16);
          j = *(_QWORD *)(i + 8);
          v29 = i;
          if ( j )
          {
            v30 = *(_QWORD **)j;
            if ( *(_QWORD *)j )
            {
              do
              {
                j = (unsigned __int64)v30;
                v30 = (_QWORD *)*v30;
              }
              while ( v30 );
            }
          }
          else
          {
            for ( j = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v29 )
                break;
              v29 = j;
            }
          }
          if ( j )
          {
            while ( !*(_QWORD *)(j + 24) )
            {
              v53 = *(_QWORD **)(j + 8);
              v49 = j;
              if ( v53 )
              {
                j = *(_QWORD *)(j + 8);
                for ( k = (_QWORD *)*v53; k; k = (_QWORD *)*k )
                  j = (unsigned __int64)k;
              }
              else
              {
                for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                {
                  if ( *(_QWORD *)j == v49 )
                    break;
                  v49 = j;
                }
              }
              if ( !j )
                goto LABEL_92;
            }
            if ( _InterlockedIncrement64((volatile signed __int64 *)(j + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
LABEL_92:
            j = 0LL;
          }
          RtlReleaseSRWLockShared(v27);
          _m_prefetchw((const void *)(i + 24));
          v31 = *(_QWORD *)(i + 24);
          v32 = v31 - 1;
          v33 = v31 == 1;
          if ( v31 - 1 <= 0 )
          {
LABEL_112:
            if ( !v33 )
              __fastfail(0xEu);
            v54 = *(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( *(_QWORD *)(i + 16) == -1LL )
            {
              if ( _InterlockedDecrement64((volatile signed __int64 *)(i + 24)) <= -1 )
                __fastfail(0xEu);
              (*(void (__fastcall **)(__int64))(v54 + 24))(i);
            }
            else
            {
              RtlAcquireSRWLockExclusive(v54 + 16);
              v55 = _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 24), 0xFFFFFFFFFFFFFFFFuLL);
              v46 = v55 <= 1;
              v56 = v55 - 1;
              if ( v46 )
              {
                if ( v56 )
                  __fastfail(0xEu);
                RtlReleaseSRWLockExclusive(v54 + 16);
                (*(void (__fastcall **)(__int64))(v54 + 24))(i);
              }
              else
              {
                RtlReleaseSRWLockExclusive(v54 + 16);
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v34 = v31;
              v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 24), v32, v31);
              if ( v34 == v31 )
                break;
              v32 = v31 - 1;
              v33 = v31 == 1;
              if ( v31 - 1 <= 0 )
                goto LABEL_112;
            }
          }
          i = j;
        }
        else
        {
          v57 = v26 - 40;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v26 - 40 + 24)) <= 1 )
            __fastfail(0xEu);
          i = sub_180027434(i);
          if ( !i )
          {
            v57 = sub_180027598(a2, v57);
            if ( v57 )
            {
              while ( 1 )
              {
                i = sub_180025F18(v57, 1LL);
                if ( i )
                  break;
                v57 = sub_180027598(a2, v57);
                if ( !v57 )
                  goto LABEL_129;
              }
            }
            else
            {
LABEL_129:
              i = 0LL;
            }
          }
          if ( v57 )
            sub_1800274E0(v57);
        }
      }
      while ( i );
      v6 = a2 + 304;
    }
    v59[0] = v10;
    sub_1800245D0(a2);
    v35 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      v36 = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v36 |= 0x40uLL;
      ++v36[7];
    }
    RtlAcquireSRWLockExclusive(v6);
    *(_DWORD *)(v6 + 8) = GetCurrentThreadId();
    v8 = *(_DWORD *)(a2 + 340);
  }
  while ( (v8 & 0x10) != 0 );
  if ( *(_DWORD *)(a2 + 344) != v10 )
  {
    sub_180023764(a2, v59);
    v8 = *(_DWORD *)(a2 + 340);
    v10 = v59[0];
  }
  *(_DWORD *)(a2 + 340) = v8 & 0xFFFFFFF7;
  if ( dwTlsIndex != -1 )
  {
    v37 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v37 & 0x40) == 0 )
      __int2c();
    v33 = v37[7]-- == 1LL;
    if ( v33 )
      *v37 &= ~0x40uLL;
  }
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
  {
    v59[1] = v10;
    v60 = a2 + 96;
    sub_18007FCC4(v38, &unk_1800A1A43);
  }
  _m_prefetchw((const void *)(a2 + 24));
  v39 = *(_QWORD *)(a2 + 24);
  v40 = v39 - 1;
  v41 = v39 == 1;
  if ( v39 - 1 <= 0 )
  {
LABEL_82:
    if ( !v41 )
      __fastfail(0xEu);
    v44 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_QWORD *)(a2 + 16) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24)) <= -1 )
        __fastfail(0xEu);
      LODWORD(v39) = (*(__int64 (__fastcall **)(__int64))(v44 + 24))(a2);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v44 + 16);
      v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      v46 = v45 <= 1;
      v47 = v45 - 1;
      if ( v46 )
      {
        if ( v47 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v44 + 16);
        LODWORD(v39) = (*(__int64 (__fastcall **)(__int64))(v44 + 24))(a2);
      }
      else
      {
        LODWORD(v39) = RtlReleaseSRWLockExclusive(v44 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v42 = v39;
      v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v40, v39);
      if ( v42 == v39 )
        break;
      v40 = v39 - 1;
      v41 = v39 == 1;
      if ( v39 - 1 <= 0 )
        goto LABEL_82;
    }
  }
  v43 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    LODWORD(v39) = TlsSetValue(v43, 0LL);
  }
  return v39;
}
