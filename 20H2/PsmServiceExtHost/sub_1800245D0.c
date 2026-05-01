/*
 * XREFs of sub_1800245D0 @ 0x1800245D0
 * Callers:
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180025000 @ 0x180025000 (sub_180025000.c)
 *     sub_18002578C @ 0x18002578C (sub_18002578C.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall sub_1800245D0(__int64 a1)
{
  __int64 v1; // r14
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r12
  signed __int64 result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  DWORD v10; // r15d
  unsigned __int64 v11; // rsi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v14; // r15d
  _QWORD *v15; // rbx
  int *v16; // rax
  int *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  DWORD v20; // r12d
  _QWORD *v21; // r15
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  bool v26; // cc
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  bool v29; // cc
  _QWORD *v30; // rax
  DWORD v31; // esi
  __int64 v32; // r14
  _QWORD *v33; // rdi
  DWORD v34; // eax
  DWORD v35; // esi
  _QWORD *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdx
  int *v39; // r14
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  DWORD v42; // esi
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  bool v48; // cc
  __int128 v49; // rax
  bool v50; // cc
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v54; // rax
  _QWORD *v55; // rcx
  signed __int64 v56; // rcx
  bool v57; // zf
  signed __int64 v58; // rtt
  __int64 *v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  _QWORD **v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rcx
  unsigned __int64 v65; // rdi
  signed __int64 v66; // rax
  signed __int64 v67; // rax
  signed __int64 v68; // rbx
  int v69; // [rsp+20h] [rbp-E0h]
  int v70; // [rsp+24h] [rbp-DCh]
  _QWORD *v71; // [rsp+28h] [rbp-D8h]
  __int128 v72; // [rsp+30h] [rbp-D0h]
  __int128 v73; // [rsp+30h] [rbp-D0h]
  __int128 v74; // [rsp+40h] [rbp-C0h]
  __int128 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h]
  __int128 v78; // [rsp+60h] [rbp-A0h]
  __int128 v79; // [rsp+70h] [rbp-90h]
  __int128 v80; // [rsp+80h] [rbp-80h] BYREF
  __int128 v81; // [rsp+90h] [rbp-70h]
  wchar_t String1[72]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t String2[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v84; // [rsp+140h] [rbp+40h]
  __int128 v85; // [rsp+150h] [rbp+50h]
  __int128 v86; // [rsp+160h] [rbp+60h]
  __int128 v87; // [rsp+170h] [rbp+70h]
  __int128 v88; // [rsp+180h] [rbp+80h]
  __int128 v89; // [rsp+190h] [rbp+90h]
  __int128 v90; // [rsp+1A0h] [rbp+A0h]
  wchar_t v91; // [rsp+1B0h] [rbp+B0h]

  v1 = a1;
  v77 = a1;
  v69 = 0;
  v2 = 0;
  memset(String1, 0, 0x82uLL);
  RtlAcquireSRWLockShared(v1 + 56);
  v3 = *(_QWORD *)(v1 + 48);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ ((v1 + 40) | 1);
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 48);
  }
  v5 = (_QWORD *)sub_180025000(v4);
  result = RtlReleaseSRWLockShared(v1 + 56);
  if ( !v5 )
    v5 = 0LL;
  v71 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      v76 = 130;
      PsmGetApplicationNameFromKey(v5 + 12, String2, &v76);
      if ( wcsicmp(String1, String2) )
      {
        if ( v2 )
          sub_18002578C(v1 + 96, v1 + 228, String1, &v80);
        v80 = 0xFFFFFFFFFFFFFFFFuLL;
        v81 = 0xFFFFFFFFFFFFFFFFuLL;
        v69 = 0;
      }
      v7 = -1LL;
      v70 = 0;
      v8 = 0LL;
      v9 = 0LL;
      v10 = dwTlsIndex;
      v11 = -1LL;
      v78 = 0xFFFFFFFFFFFFFFFFuLL;
      v79 = 0xFFFFFFFFFFFFFFFFuLL;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( *(_QWORD *)TlsGetValue(v10) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&unk_1800B4210);
      CurrentThreadId = GetCurrentThreadId();
      v14 = dwTlsIndex;
      dword_1800B4218 = CurrentThreadId;
      if ( dwTlsIndex != -1 )
      {
        v15 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v15 |= 0x20uLL;
        ++v15[6];
      }
      RtlAcquireSRWLockShared(v5 + 72);
      v16 = (int *)v5[74];
      if ( v16 == (int *)(v5 + 74) )
      {
LABEL_165:
        v17 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v17 = v16 - 202;
          if ( *(v16 - 212) >= 0 )
            break;
          v16 = *(int **)v16;
          if ( v16 == (int *)(v5 + 74) )
            goto LABEL_165;
        }
        ++*((_QWORD *)v17 + 74);
      }
      if ( dwTlsIndex != -1 )
      {
        v18 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v18 & 0x20) == 0 )
          __int2c();
        v57 = v18[6]-- == 1LL;
        if ( v57 )
          *v18 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v5 + 72);
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&unk_1800B4210);
      if ( dwTlsIndex != -1 )
      {
        v19 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v19 & 1) == 0 )
          __int2c();
        v57 = v19[1]-- == 1LL;
        if ( v57 )
          *v19 &= ~1uLL;
      }
      if ( v17 )
      {
        while ( 1 )
        {
          v20 = dwTlsIndex;
          if ( dwTlsIndex != -1 )
          {
            v21 = TlsGetValue(dwTlsIndex);
            if ( (*(_QWORD *)TlsGetValue(v20) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v21 |= 2uLL;
            ++v21[2];
          }
          RtlAcquireSRWLockExclusive(v17);
          v17[2] = GetCurrentThreadId();
          v22 = *((_QWORD *)v17 + 81);
          v70 |= (v22 & 0x2000000000000000LL) != 0;
          *((_QWORD *)v17 + 81) = v22 & 0xCFFFFFFFFFFFFFFFuLL;
          v23 = ((v22 & 0xDFFFFFFFFFFFFFFFuLL) >> 60) & 1;
          v24 = *((_QWORD *)v17 + 127);
          v25 = *((_QWORD *)v17 + 126);
          v26 = v25 <= v24;
          if ( v25 >= v24 )
            goto LABEL_141;
          if ( v7 >= v8 )
            break;
          if ( v25 <= v8 && v24 >= v7 )
          {
LABEL_37:
            if ( v25 < v7 )
              v7 = *((_QWORD *)v17 + 126);
LABEL_39:
            *(_QWORD *)&v72 = v7;
            goto LABEL_40;
          }
LABEL_148:
          if ( (__int64)v25 <= (__int64)v7 )
            goto LABEL_39;
          *(_QWORD *)&v72 = *((_QWORD *)v17 + 126);
LABEL_40:
          v27 = *((_QWORD *)v17 + 129);
          v28 = *((_QWORD *)v17 + 128);
          v29 = v28 <= v27;
          if ( v28 >= v27 )
            goto LABEL_41;
          if ( v11 >= v9 )
          {
            if ( v11 > v9 )
            {
              if ( v11 <= v27 )
                goto LABEL_42;
              goto LABEL_136;
            }
            v29 = v28 <= v27;
LABEL_41:
            if ( v29 || v11 >= v9 || v28 <= v9 )
              goto LABEL_42;
            goto LABEL_136;
          }
          if ( v28 <= v9 && v27 >= v11 )
          {
LABEL_42:
            if ( v28 < v11 )
              v11 = *((_QWORD *)v17 + 128);
            goto LABEL_44;
          }
LABEL_136:
          if ( (__int64)v28 > (__int64)v11 )
          {
            *(_QWORD *)&v74 = *((_QWORD *)v17 + 128);
            goto LABEL_45;
          }
LABEL_44:
          *(_QWORD *)&v74 = v11;
LABEL_45:
          if ( v24 <= v8 )
            *((_QWORD *)&v72 + 1) = v8;
          else
            *((_QWORD *)&v72 + 1) = *((_QWORD *)v17 + 127);
          if ( v27 <= v9 )
            *((_QWORD *)&v74 + 1) = v9;
          else
            *((_QWORD *)&v74 + 1) = *((_QWORD *)v17 + 129);
          v78 = v72;
          v79 = v74;
          if ( dwTlsIndex != -1 )
          {
            v30 = TlsGetValue(dwTlsIndex);
            if ( (*(_BYTE *)v30 & 2) == 0 )
              __int2c();
            v57 = v30[2]-- == 1LL;
            if ( v57 )
              *v30 &= ~2uLL;
          }
          v17[2] = 0;
          RtlReleaseSRWLockExclusive(v17);
          if ( (_DWORD)v23 )
          {
            sub_18001E380();
            v57 = (*((_QWORD *)v17 + 74))-- == 1LL;
            if ( v57 )
              sub_18000A1AC((__int64)(v17 - 16), v61);
            sub_18000F390();
          }
          v31 = dwTlsIndex;
          v32 = *((_QWORD *)v17 + 97);
          if ( dwTlsIndex != -1 )
          {
            v33 = TlsGetValue(dwTlsIndex);
            if ( *(_QWORD *)TlsGetValue(v31) )
              __int2c();
            *v33 |= 1uLL;
            ++v33[1];
          }
          RtlAcquireSRWLockExclusive(&unk_1800B4210);
          v34 = GetCurrentThreadId();
          v35 = dwTlsIndex;
          dword_1800B4218 = v34;
          if ( dwTlsIndex != -1 )
          {
            v36 = TlsGetValue(dwTlsIndex);
            if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v36 |= 0x20uLL;
            ++v36[6];
          }
          v37 = v32 + 576;
          RtlAcquireSRWLockShared(v32 + 576);
          v38 = *((_QWORD *)v17 + 101);
          if ( v38 == v32 + 592 )
          {
LABEL_64:
            v39 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v39 = (int *)(v38 - 808);
              if ( (unsigned int)sub_18000EE4C(v38 - 808) )
                break;
              v38 = *v59;
              if ( v38 == v60 )
                goto LABEL_64;
            }
          }
          if ( dwTlsIndex != -1 )
          {
            v40 = TlsGetValue(dwTlsIndex);
            if ( (*(_BYTE *)v40 & 0x20) == 0 )
              __int2c();
            v57 = v40[6]-- == 1LL;
            if ( v57 )
              *v40 &= ~0x20uLL;
          }
          RtlReleaseSRWLockShared(v37);
          dword_1800B4218 = 0;
          RtlReleaseSRWLockExclusive(&unk_1800B4210);
          if ( dwTlsIndex != -1 )
          {
            v41 = TlsGetValue(dwTlsIndex);
            if ( (*(_BYTE *)v41 & 1) == 0 )
              __int2c();
            v57 = v41[1]-- == 1LL;
            if ( v57 )
              *v41 &= ~1uLL;
          }
          v42 = dwTlsIndex;
          if ( dwTlsIndex != -1 )
          {
            v43 = TlsGetValue(dwTlsIndex);
            if ( *(_QWORD *)TlsGetValue(v42) )
              __int2c();
            *v43 |= 1uLL;
            ++v43[1];
          }
          RtlAcquireSRWLockExclusive(&unk_1800B4210);
          dword_1800B4218 = GetCurrentThreadId();
          v57 = (*((_QWORD *)v17 + 74))-- == 1LL;
          if ( v57 )
            sub_18000A1AC((__int64)(v17 - 16), v44);
          dword_1800B4218 = 0;
          RtlReleaseSRWLockExclusive(&unk_1800B4210);
          if ( dwTlsIndex != -1 )
          {
            v45 = TlsGetValue(dwTlsIndex);
            if ( (*(_BYTE *)v45 & 1) == 0 )
              __int2c();
            v57 = v45[1]-- == 1LL;
            if ( v57 )
              *v45 &= ~1uLL;
          }
          v9 = *((_QWORD *)&v79 + 1);
          v17 = v39;
          v11 = v79;
          v57 = v39 == 0LL;
          v8 = *((_QWORD *)&v78 + 1);
          v7 = v78;
          if ( v57 )
          {
            v5 = v71;
            goto LABEL_88;
          }
        }
        if ( v7 > v8 )
        {
          if ( v7 <= v24 )
            goto LABEL_37;
          goto LABEL_148;
        }
        v26 = v25 <= v24;
LABEL_141:
        if ( v26 || v7 >= v8 || v25 <= v8 )
          goto LABEL_37;
        goto LABEL_148;
      }
LABEL_88:
      v47 = *((_QWORD *)&v80 + 1);
      v46 = v80;
      v48 = v7 <= v8;
      if ( v7 < v8 )
      {
        if ( (unsigned __int64)v80 < *((_QWORD *)&v80 + 1) )
        {
          if ( v7 <= *((_QWORD *)&v80 + 1) && v8 >= (unsigned __int64)v80 )
            goto LABEL_92;
          goto LABEL_127;
        }
        if ( (unsigned __int64)v80 > *((_QWORD *)&v80 + 1) )
        {
          if ( (unsigned __int64)v80 <= v8 )
            goto LABEL_92;
          goto LABEL_127;
        }
        v48 = v7 <= v8;
      }
      if ( v48 || (unsigned __int64)v80 >= *((_QWORD *)&v80 + 1) || v7 <= *((_QWORD *)&v80 + 1) )
      {
LABEL_92:
        if ( v7 < (unsigned __int64)v80 )
          v46 = v7;
LABEL_94:
        *(_QWORD *)&v73 = v46;
        goto LABEL_95;
      }
LABEL_127:
      if ( (__int64)v7 <= (__int64)v80 )
        goto LABEL_94;
      *(_QWORD *)&v73 = v7;
LABEL_95:
      v49 = v81;
      v50 = v11 <= v9;
      if ( v11 >= v9 )
        goto LABEL_96;
      if ( (unsigned __int64)v81 >= *((_QWORD *)&v81 + 1) )
      {
        if ( (unsigned __int64)v81 > *((_QWORD *)&v81 + 1) )
        {
          if ( (unsigned __int64)v81 <= v9 )
            goto LABEL_97;
          goto LABEL_159;
        }
        v50 = v11 <= v9;
LABEL_96:
        if ( v50 || (unsigned __int64)v81 >= *((_QWORD *)&v81 + 1) || v11 <= *((_QWORD *)&v81 + 1) )
          goto LABEL_97;
        goto LABEL_159;
      }
      if ( v11 <= *((_QWORD *)&v81 + 1) && v9 >= (unsigned __int64)v81 )
      {
LABEL_97:
        if ( v11 < (unsigned __int64)v81 )
          *(_QWORD *)&v49 = v11;
        goto LABEL_99;
      }
LABEL_159:
      if ( (__int64)v11 > (__int64)v81 )
      {
        *(_QWORD *)&v75 = v11;
        goto LABEL_100;
      }
LABEL_99:
      *(_QWORD *)&v75 = v49;
LABEL_100:
      if ( v8 > *((_QWORD *)&v80 + 1) )
        v47 = v8;
      String1[64] = v91;
      v1 = v77;
      *((_QWORD *)&v73 + 1) = v47;
      if ( v9 > *((_QWORD *)&v81 + 1) )
        *((_QWORD *)&v49 + 1) = v9;
      v2 = v70 | v69;
      *((_QWORD *)&v75 + 1) = *((_QWORD *)&v49 + 1);
      v69 |= v70;
      v80 = v73;
      v81 = v75;
      *(_OWORD *)&String1[8] = v84;
      *(_OWORD *)String1 = *(_OWORD *)String2;
      *(_OWORD *)&String1[24] = v86;
      *(_OWORD *)&String1[16] = v85;
      *(_OWORD *)&String1[40] = v88;
      *(_OWORD *)&String1[32] = v87;
      *(_OWORD *)&String1[56] = v90;
      *(_OWORD *)&String1[48] = v89;
      v51 = v5[4] & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v51 == v77 + 40 )
      {
        v52 = v51 + 16;
        RtlAcquireSRWLockShared(v51 + 16);
        i = v5[1];
        v54 = v5;
        if ( i )
        {
          v55 = *(_QWORD **)i;
          if ( *(_QWORD *)i )
          {
            do
            {
              i = (unsigned __int64)v55;
              v55 = (_QWORD *)*v55;
            }
            while ( v55 );
          }
        }
        else
        {
          for ( i = v5[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD **)i == v54 )
              break;
            v54 = (_QWORD *)i;
          }
        }
        if ( i )
        {
          while ( !*(_QWORD *)(i + 24) )
          {
            v62 = *(_QWORD ***)(i + 8);
            v63 = i;
            if ( v62 )
            {
              v64 = *v62;
              for ( i = *(_QWORD *)(i + 8); v64; v64 = (_QWORD *)*v64 )
                i = (unsigned __int64)v64;
            }
            else
            {
              for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v63 )
                  break;
                v63 = i;
              }
            }
            if ( !i )
              goto LABEL_124;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
LABEL_124:
          i = 0LL;
        }
        RtlReleaseSRWLockShared(v52);
        _m_prefetchw(v5 + 3);
        result = v5[3];
        v56 = result - 1;
        v57 = result == 1;
        if ( result - 1 <= 0 )
        {
LABEL_198:
          if ( !v57 )
            __fastfail(0xEu);
          v65 = v5[4] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v5[2] == -1LL )
          {
            if ( _InterlockedDecrement64(v5 + 3) <= -1 )
              __fastfail(0xEu);
            result = (*(__int64 (__fastcall **)(_QWORD *))(v65 + 24))(v5);
          }
          else
          {
            RtlAcquireSRWLockExclusive(v65 + 16);
            v66 = _InterlockedExchangeAdd64(v5 + 3, 0xFFFFFFFFFFFFFFFFuLL);
            v26 = v66 <= 1;
            v67 = v66 - 1;
            if ( v26 )
            {
              if ( v67 )
                __fastfail(0xEu);
              RtlReleaseSRWLockExclusive(v65 + 16);
              result = (*(__int64 (__fastcall **)(_QWORD *))(v65 + 24))(v5);
            }
            else
            {
              result = RtlReleaseSRWLockExclusive(v65 + 16);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v58 = result;
            result = _InterlockedCompareExchange64(v5 + 3, v56, result);
            if ( v58 == result )
              break;
            v56 = result - 1;
            v57 = result == 1;
            if ( result - 1 <= 0 )
              goto LABEL_198;
          }
        }
        v2 = v69;
        v5 = (_QWORD *)i;
        v71 = (_QWORD *)i;
      }
      else
      {
        v68 = v51 - 40;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v51 - 40 + 24)) <= 1 )
          __fastfail(0xEu);
        result = sub_180027434(v5);
        v71 = (_QWORD *)result;
        v5 = (_QWORD *)result;
        if ( !result )
        {
          result = sub_180027598(v1, v68);
          v68 = result;
          if ( result )
          {
            while ( 1 )
            {
              result = sub_180025F18(v68, 1LL);
              v71 = (_QWORD *)result;
              v5 = (_QWORD *)result;
              if ( result )
                break;
              result = sub_180027598(v1, v68);
              v68 = result;
              if ( !result )
                goto LABEL_215;
            }
          }
          else
          {
LABEL_215:
            v5 = 0LL;
            v71 = 0LL;
          }
        }
        if ( v68 )
          result = sub_1800274E0(v68);
      }
      if ( !v5 )
      {
        if ( v2 )
          return sub_18002578C(v1 + 96, v1 + 228, String1, &v80);
        return result;
      }
    }
  }
  return result;
}
