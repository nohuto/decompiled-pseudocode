/*
 * XREFs of sub_18001B300 @ 0x18001B300
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001BCA0 @ 0x18001BCA0 (sub_18001BCA0.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E310 @ 0x18001E310 (sub_18001E310.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001E400 @ 0x18001E400 (sub_18001E400.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_18001E880 @ 0x18001E880 (sub_18001E880.c)
 *     sub_18001E9C0 @ 0x18001E9C0 (sub_18001E9C0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_18002E0B4 @ 0x18002E0B4 (sub_18002E0B4.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800334FC @ 0x1800334FC (sub_1800334FC.c)
 *     sub_180035594 @ 0x180035594 (sub_180035594.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180074A1C @ 0x180074A1C (sub_180074A1C.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 *     sub_18007F028 @ 0x18007F028 (sub_18007F028.c)
 */

__int64 __fastcall sub_18001B300(__int64 *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // r13
  _QWORD *v4; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *Value; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 j; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 *k; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 m; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 *v30; // rdx
  __int64 v31; // r9
  unsigned __int64 *v32; // r8
  unsigned __int64 n; // rcx
  __int64 v34; // rbx
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // r8
  unsigned __int64 ii; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // rdx
  int v42; // r14d
  DWORD v43; // edi
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  DWORD v47; // esi
  __int64 v48; // rbx
  _QWORD *v49; // rdi
  _QWORD *v50; // rax
  _OWORD *v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rcx
  int v54; // r14d
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r8d
  int v59; // r9d
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rdi
  char v65[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v66[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v67; // [rsp+58h] [rbp-21h] BYREF
  __int64 v68; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-11h] BYREF
  __int64 i; // [rsp+70h] [rbp-9h]
  __int64 v71; // [rsp+78h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+80h] [rbp+7h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A14FF, 0, 0, 2u, &v72);
  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  v66[1] = v66;
  v66[0] = v66;
  while ( !(unsigned int)sub_18001E400(a1, v66) )
  {
    sub_18007F028(v66);
    sub_18007E434(v66);
  }
  v2 = (_QWORD *)v66[0];
  v3 = a1[14];
  v69 = 0LL;
  for ( i = 0LL; v2 != v66; v2 = (_QWORD *)*v2 )
  {
    v4 = v2 - 91;
    v2[29] = 0LL;
    sub_18001BCA0(v2 - 91);
    v5 = *(v2 - 10);
    v6 = (4 * ((v5 & 0x300000000LL) != 0)) | (_DWORD)v2[5] & 0xFFFFFFF3;
    *((_DWORD *)v2 + 10) = v6;
    if ( (v5 & 0x1000000000LL) != 0 )
    {
      v7 = v69;
      v8 = (v6 >> 2) & 3;
      if ( (i & 1) != 0 )
      {
        if ( v69 )
          v7 = (unsigned __int64)&v69 ^ v69;
        else
          v7 = 0LL;
      }
      LOBYTE(v5) = 0;
      v54 = i & 1;
      if ( v7 )
      {
        while ( 1 )
        {
          if ( (int)sub_1800334FC(v8, v7, v5) < 0 )
          {
            v55 = *(_QWORD *)v7;
            if ( v54 )
            {
              if ( !v55 )
                goto LABEL_124;
              v55 ^= v7;
            }
            if ( !v55 )
            {
LABEL_124:
              LOBYTE(v5) = 0;
              break;
            }
          }
          else
          {
            v55 = *(_QWORD *)(v7 + 8);
            if ( v54 )
            {
              if ( !v55 )
                goto LABEL_12;
              v55 ^= v7;
            }
            if ( !v55 )
            {
LABEL_12:
              LOBYTE(v5) = 1;
              break;
            }
          }
          v7 = v55;
        }
      }
      RtlRbInsertNodeEx(&v69, v7, v5, v4 + 93);
      *((_DWORD *)v4 + 192) |= 2u;
    }
  }
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive(a1 + 1);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)Value & 8) == 0 )
      __int2c();
    v10 = Value[4]-- == 1LL;
    if ( v10 )
      *Value &= ~8uLL;
  }
  sub_18001E9C0(a1, &v69);
  v11 = a1[10];
  if ( (v11 & 1) != 0 )
  {
    if ( v11 == 1 )
      v12 = 0LL;
    else
      v12 = v11 ^ ((unsigned __int64)(a1 + 9) | 1);
  }
  else
  {
    v12 = a1[10];
  }
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 64);
      v14 = 0LL;
      if ( v13 != v12 + 64 )
        v14 = v13 - 16;
      if ( v14 )
        break;
      v12 = ((__int64 (*)(void))sub_180035594)();
      if ( !v12 )
        goto LABEL_39;
    }
    while ( 1 )
    {
      do
      {
        if ( (*(_BYTE *)(v14 + 32) & 7) == 5 )
          sub_18000506C(*(_QWORD *)(v14 + 56), *(_DWORD *)(v14 + 84), *(_DWORD *)(v14 + 80), 0LL, 2, 0);
        v15 = *(_QWORD *)(v14 + 16);
        v16 = *(_QWORD *)(v14 + 8);
        v14 = 0LL;
        if ( v15 != v16 + 64 )
          v14 = v15 - 16;
      }
      while ( v14 );
      j = *(_QWORD *)(v16 + 8);
      if ( j )
      {
        v18 = *(_QWORD **)j;
        if ( *(_QWORD *)j )
        {
          do
          {
            j = (unsigned __int64)v18;
            v18 = (_QWORD *)*v18;
          }
          while ( v18 );
        }
      }
      else
      {
        for ( j = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v16 )
            break;
          v16 = j;
        }
      }
      if ( !j )
        break;
      while ( 1 )
      {
        v19 = *(_QWORD *)(j + 64);
        v14 = 0LL;
        if ( v19 != j + 64 )
          v14 = v19 - 16;
        if ( v14 )
          break;
        j = sub_180035594(j);
        if ( !j )
          goto LABEL_39;
      }
    }
  }
LABEL_39:
  sub_18001E880(a1);
  for ( k = (__int64 *)v66[0]; k != v66; k = (__int64 *)*k )
  {
    if ( (k[5] & 1) != 0 )
    {
      if ( dwTlsIndex != -1 )
      {
        v21 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v21 & 2) == 0 )
          __int2c();
        v10 = v21[2]-- == 1LL;
        if ( v10 )
          *v21 &= ~2uLL;
      }
      *((_DWORD *)k - 180) = 0;
      RtlReleaseSRWLockExclusive(k - 91);
      *((_DWORD *)k + 10) &= ~1u;
    }
  }
  v22 = sub_18001E310(a1);
  while ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 16);
    v24 = v22;
    v25 = *(_QWORD *)(v22 + 8);
    LODWORD(m) = v25 + 64;
    v22 = 0LL;
    if ( v23 != v25 + 64 )
      v22 = v23 - 16;
    if ( !v22 )
    {
      m = *(_QWORD *)(v25 + 8);
      if ( m )
      {
        v27 = *(_QWORD **)m;
        if ( *(_QWORD *)m )
        {
          do
          {
            m = (unsigned __int64)v27;
            v27 = (_QWORD *)*v27;
          }
          while ( v27 );
        }
      }
      else
      {
        for ( m = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v25 )
            break;
          v25 = m;
        }
      }
      if ( m )
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(m + 64);
          LODWORD(v25) = m + 64;
          v22 = 0LL;
          if ( v28 != m + 64 )
            v22 = v28 - 16;
          if ( v22 )
            break;
          m = sub_180035594(m);
          if ( !m )
            goto LABEL_145;
        }
      }
      else
      {
LABEL_145:
        v22 = 0LL;
      }
    }
    if ( (*(_BYTE *)(v24 + 32) & 7) == 3 )
    {
      if ( *(_BYTE *)(v24 + 40) == 3 )
      {
        sub_180035C5C(v24);
      }
      else
      {
        v63 = *(_QWORD *)v24;
        if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
        {
          v67 = *(_QWORD *)(v63 + 40);
          v65[0] = 3;
          sub_18002E0B4(m, (unsigned int)&unk_1800A15B8, v25, v24, (__int64)&v67, (__int64)v65);
        }
        sub_180020F50(v63);
      }
    }
  }
  v29 = sub_18001E310(a1);
  while ( v29 )
  {
    v30 = *(unsigned __int64 **)(v29 + 16);
    v31 = v29;
    v32 = *(unsigned __int64 **)(v29 + 8);
    LODWORD(n) = (_DWORD)v32 + 64;
    v29 = 0LL;
    if ( v30 != v32 + 8 )
      v29 = (__int64)(v30 - 2);
    if ( !v29 )
    {
      n = v32[1];
      if ( n )
      {
        v30 = *(unsigned __int64 **)n;
        if ( *(_QWORD *)n )
        {
          do
          {
            n = (unsigned __int64)v30;
            v30 = (unsigned __int64 *)*v30;
          }
          while ( v30 );
        }
      }
      else
      {
        for ( n = v32[2] & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(unsigned __int64 **)n == v32 )
            break;
          v32 = (unsigned __int64 *)n;
        }
      }
      if ( n )
      {
        while ( 1 )
        {
          v30 = *(unsigned __int64 **)(n + 64);
          LODWORD(v32) = n + 64;
          v29 = 0LL;
          if ( v30 != (unsigned __int64 *)(n + 64) )
            v29 = (__int64)(v30 - 2);
          if ( v29 )
            break;
          n = sub_180035594(n);
          if ( !n )
            goto LABEL_167;
        }
      }
      else
      {
LABEL_167:
        v29 = 0LL;
      }
    }
    if ( (*(_DWORD *)(v31 + 32) & 7) == 2 )
    {
      if ( *(_BYTE *)(v31 + 40) == 3 )
      {
        sub_180035C5C(v31);
      }
      else
      {
        v64 = *(_QWORD *)v31;
        if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
        {
          v67 = *(_QWORD *)(v64 + 40);
          v65[0] = 2;
          sub_18002E0B4(n, (unsigned int)&unk_1800A15B8, (_DWORD)v32, v31, (__int64)&v67, (__int64)v65);
        }
        sub_180006CA4(v64, (__int64)v30);
      }
    }
  }
  v34 = sub_18001E310(a1);
  if ( !v34 )
  {
LABEL_87:
    v42 = 0;
    goto LABEL_88;
  }
  while ( 1 )
  {
    v36 = *(_QWORD *)(v34 + 16);
    v37 = v34;
    v38 = *(_QWORD *)(v34 + 8);
    LODWORD(ii) = v38 + 64;
    v34 = 0LL;
    if ( v36 != v38 + 64 )
      v34 = v36 - 16;
    if ( !v34 )
    {
      ii = *(_QWORD *)(v38 + 8);
      if ( ii )
      {
        v40 = *(_QWORD **)ii;
        if ( *(_QWORD *)ii )
        {
          do
          {
            ii = (unsigned __int64)v40;
            v40 = (_QWORD *)*v40;
          }
          while ( v40 );
        }
      }
      else
      {
        for ( ii = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFFFCuLL; ii; ii = *(_QWORD *)(ii + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)ii == v38 )
            break;
          v38 = ii;
        }
      }
      if ( ii )
      {
        while ( 1 )
        {
          v41 = *(_QWORD *)(ii + 64);
          LODWORD(v38) = ii + 64;
          v34 = 0LL;
          if ( v41 != ii + 64 )
            v34 = v41 - 16;
          if ( v34 )
            break;
          ii = sub_180035594(ii);
          if ( !ii )
            goto LABEL_169;
        }
      }
      else
      {
LABEL_169:
        v34 = 0LL;
      }
    }
    if ( (*(_DWORD *)(v37 + 32) & 7) != 1 )
      goto LABEL_86;
    if ( *(_BYTE *)(v37 + 40) == 3 )
    {
      sub_180035C5C(v37);
      goto LABEL_86;
    }
    v61 = *(_QWORD *)v37;
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v68 = *(_QWORD *)(v61 + 40);
      v65[0] = 1;
      sub_18002E0B4(ii, (unsigned int)&unk_1800A15B8, v38, v35, (__int64)&v68, (__int64)v65);
    }
    v42 = sub_1800181E0(v61, 0, (DWORD *)&v67, 0LL);
    if ( v42 >= 0 )
      v42 = 0;
    if ( v42 < 0 )
      break;
    *(_DWORD *)(v37 + 32) &= 0xFFFFFFFC;
    *(_DWORD *)(v37 + 32) |= 4u;
LABEL_86:
    if ( !v34 )
      goto LABEL_87;
  }
  LOBYTE(v62) = 4;
  sub_18007E858(a1, v62);
LABEL_88:
  v43 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v44 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v44 |= 8uLL;
    ++v44[4];
  }
  RtlAcquireSRWLockExclusive(a1 + 1);
  GetCurrentThreadId();
  a1[13] = v3;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive(a1 + 1);
  v45 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v46 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v46 & 8) == 0 )
      __int2c();
    v10 = v46[4]-- == 1LL;
    if ( v10 )
      *v46 &= ~8uLL;
  }
  sub_18001E380(v45);
  while ( (_QWORD *)v66[0] != v66 )
  {
    v47 = dwTlsIndex;
    v48 = v66[0] - 728LL;
    if ( dwTlsIndex != -1 )
    {
      v49 = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v47) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v49 |= 2uLL;
      ++v49[2];
    }
    RtlAcquireSRWLockExclusive(v48);
    *(_DWORD *)(v48 + 8) = GetCurrentThreadId();
    sub_18001CC80(v48, 0LL);
    if ( dwTlsIndex != -1 )
    {
      v50 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v50 & 2) == 0 )
        __int2c();
      v10 = v50[2]-- == 1LL;
      if ( v10 )
        *v50 &= ~2uLL;
    }
    *(_DWORD *)(v48 + 8) = 0;
    RtlReleaseSRWLockExclusive(v48);
    v51 = (_OWORD *)(v48 + 728);
    v52 = *(_QWORD *)(v48 + 728);
    if ( *(_QWORD *)(v52 + 8) != v48 + 728 || (v53 = *(__int64 **)(v48 + 736), (_OWORD *)*v53 != v51) )
      __fastfail(3u);
    *v53 = v52;
    *(_QWORD *)(v52 + 8) = v53;
    *v51 = 0LL;
    v10 = (*(_QWORD *)(v48 + 592))-- == 1LL;
    *(_DWORD *)(v48 + 768) = 0;
    if ( v10 )
      sub_18000A1AC(v48 - 64, v52);
  }
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  sub_18001E830(v57, v56, 0LL);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v71 = *a1;
    v68 = v3;
    LODWORD(v67) = v42;
    sub_180074A1C(
      (unsigned int)&dword_1800B3218,
      (unsigned int)&unk_1800A14BB,
      v58,
      v59,
      (__int64)&v67,
      (__int64)&v71,
      (__int64)&v68);
  }
  return (unsigned int)v42;
}
