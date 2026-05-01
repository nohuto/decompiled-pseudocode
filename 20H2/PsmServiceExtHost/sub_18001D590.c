/*
 * XREFs of sub_18001D590 @ 0x18001D590
 * Callers:
 *     sub_1800054FC @ 0x1800054FC (sub_1800054FC.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_18001E140 @ 0x18001E140 (sub_18001E140.c)
 *     sub_18002A3C4 @ 0x18002A3C4 (sub_18002A3C4.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 *     sub_180063B30 @ 0x180063B30 (sub_180063B30.c)
 *     sub_180063BC8 @ 0x180063BC8 (sub_180063BC8.c)
 */

_QWORD *__fastcall sub_18001D590(__int64 a1, __int64 a2, _OWORD *a3, _OWORD *a4, _QWORD *a5)
{
  _QWORD *v7; // r9
  __int64 v8; // rax
  unsigned __int16 v9; // r15
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned __int64 v18; // r15
  unsigned int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r11
  char v22; // al
  int v23; // ecx
  char v24; // al
  BOOL v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  char v28; // di
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  DWORD v33; // edi
  __int64 v34; // r14
  __int64 v35; // rsi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v38; // ecx
  bool v39; // bl
  _QWORD *v40; // rax
  DWORD v41; // edi
  _QWORD *v42; // rbx
  char v43; // bl
  char *v44; // rax
  DWORD v45; // edi
  _QWORD *v46; // rbx
  unsigned __int64 v47; // rsi
  BOOL v48; // ebx
  _QWORD *v49; // rax
  __int64 v50; // rbx
  unsigned __int8 v51; // cl
  unsigned __int64 v52; // rdx
  int v53; // r8d
  int v54; // eax
  char v55; // al
  char v56; // cl
  char v57; // al
  char v58; // cl
  _QWORD *v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int128 v74; // xmm2
  unsigned __int64 v75; // rcx
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  _OWORD *v78; // rax
  _OWORD *v79; // rax
  _QWORD *result; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // rdi
  __int128 v86; // xmm1
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  _QWORD *v89; // rax
  int v90; // eax
  unsigned int v91; // r9d
  unsigned int v92; // r10d
  int v93; // ecx
  int v94; // eax
  __int64 v95; // rcx
  __int128 v96; // xmm1
  __int128 v97; // [rsp+20h] [rbp-51h] BYREF
  __int128 v98; // [rsp+30h] [rbp-41h]
  __int128 v99; // [rsp+40h] [rbp-31h]
  __int64 v100; // [rsp+50h] [rbp-21h]
  int v101; // [rsp+58h] [rbp-19h]
  int v102; // [rsp+5Ch] [rbp-15h]
  int v103; // [rsp+60h] [rbp-11h] BYREF
  _QWORD *v104; // [rsp+68h] [rbp-9h]
  unsigned __int64 v105; // [rsp+70h] [rbp-1h]
  __int64 v106; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v107; // [rsp+D8h] [rbp+67h] BYREF
  _OWORD *v108; // [rsp+E0h] [rbp+6Fh]
  _OWORD *v109; // [rsp+E8h] [rbp+77h]

  v109 = a4;
  v108 = a3;
  v106 = a1;
  v107 = 0;
  v104 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v7 = 0LL;
  v101 = 0;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 1;
  v8 = *(_QWORD *)(a1 + 776);
  v9 = 1;
  v97 = 0LL;
  v102 = 1;
  v98 = 0LL;
  v10 = *(_QWORD *)(v8 + 88);
  LOWORD(v107) = 1;
  v11 = *(_DWORD *)(a1 + 560) == 2;
  v105 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
       - 168;
  *(_DWORD *)(a2 + 24) = !v11;
  v12 = *(_QWORD *)(a1 + 600);
  LODWORD(v10) = v12 != a1 + 600;
  v13 = v97;
  v14 = v12 - 96;
  v15 = *((_QWORD *)&v98 + 1);
  v16 = 0LL;
  *(_QWORD *)&v99 = v97;
  if ( (_DWORD)v10 )
    v16 = v14;
  if ( v16 )
  {
    v17 = v98;
    v18 = *((_QWORD *)&v97 + 1);
    v19 = v107;
    v100 = v98;
    *((_QWORD *)&v99 + 1) = *((_QWORD *)&v97 + 1);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 512);
      v21 = *(_QWORD *)(a1 + 800);
      if ( v20 == v21 )
      {
        v22 = *(_BYTE *)(v16 + 548);
      }
      else
      {
        if ( v20 )
          goto LABEL_23;
        if ( *(_BYTE *)(v16 + 548) != 2 )
          goto LABEL_23;
        v22 = 2;
        if ( *(_BYTE *)(v16 + 549) < 5u )
          goto LABEL_23;
      }
      ++v101;
      if ( (*(_BYTE *)(v16 + 480) & 0x20) != 0 )
        break;
      v81 = *(_QWORD *)(v16 + 464);
      v82 = *(_QWORD *)(v16 + 456);
      v83 = *(_QWORD *)(v16 + 448);
      v84 = *(_QWORD *)(v16 + 440);
      if ( v81 == -1LL || v15 == -1LL || (v15 += v81, v15 < v81) )
        v15 = -1LL;
      *((_QWORD *)&v98 + 1) = v15;
      if ( v82 == -1LL || v17 == -1 || (v85 = v82 + v17, v100 = v85, v85 < v82) )
      {
        v100 = -1LL;
        *(_QWORD *)&v98 = -1LL;
      }
      else
      {
        *(_QWORD *)&v98 = v85;
      }
      if ( v83 == -1LL || v18 == -1LL || (v18 += v83, *((_QWORD *)&v99 + 1) = v18, v18 < v83) )
      {
        v18 = -1LL;
        *((_QWORD *)&v99 + 1) = -1LL;
      }
      *((_QWORD *)&v97 + 1) = v18;
      if ( v84 == -1LL || v13 == -1LL || (v13 += v84, *(_QWORD *)&v99 = v13, v13 < v84) )
      {
        v13 = -1LL;
        *(_QWORD *)&v99 = -1LL;
      }
      *(_QWORD *)&v97 = v13;
LABEL_23:
      v28 = *(_BYTE *)(v16 + 548);
      if ( v28 == 3 || v28 == 2 && *(_BYTE *)(v16 + 549) >= 3u || v20 == v21 )
      {
        v29 = *(unsigned int *)(v16 + 424);
        if ( (v29 & 1) != 0 )
          v19 = sub_18001E140(v29, v19);
        if ( v28 != 3 )
        {
          if ( v28 != 2 )
            goto LABEL_30;
          if ( *(_BYTE *)(v16 + 549) < 3u )
            goto LABEL_141;
        }
        v30 = *(_DWORD *)(v16 + 480) & 3;
        if ( v30 <= *(_DWORD *)(a2 + 24) )
          v30 = *(_DWORD *)(a2 + 24);
        *(_DWORD *)(a2 + 24) = v30;
        v28 = *(_BYTE *)(v16 + 548);
      }
LABEL_30:
      if ( v28 == 3 )
        goto LABEL_31;
      if ( v28 == 2 )
      {
LABEL_141:
        if ( *(_BYTE *)(v16 + 549) >= 5u )
LABEL_31:
          *(_BYTE *)(a2 + 28) ^= (*(_BYTE *)(a2 + 28) ^ (*(_BYTE *)(a2 + 28) | (*(_DWORD *)(v16 + 480) >> 3))) & 1;
      }
      if ( (*(_BYTE *)(v105 - 1260) & 0x10) != 0 )
      {
        if ( !sub_180006278(v16, 5u) && *(_QWORD *)(v16 + 512) == *(_QWORD *)(a1 + 800) && v91 )
          v91 = v92;
        if ( ((*(unsigned __int8 *)(a2 + 28) >> 4) & 7u) > v91 )
          LOBYTE(v91) = (*(_BYTE *)(a2 + 28) >> 4) & 7;
        *(_BYTE *)(a2 + 28) = *(_BYTE *)(a2 + 28) & 0x8F | (16 * v91);
      }
      v31 = *(_QWORD *)(v16 + 96);
      v32 = *(_QWORD *)(v16 + 80);
      v16 = 0LL;
      v7 = v104;
      if ( v31 != v32 + 600 )
        v16 = v31 - 96;
      if ( !v16 )
      {
        v107 = v19;
        v9 = v19;
        goto LABEL_37;
      }
      v17 = v100;
    }
    if ( v7 )
    {
      if ( v22 == 3 )
      {
        v23 = 1;
      }
      else
      {
        v23 = 0;
        if ( v22 == 2 )
          LOBYTE(v23) = *(_BYTE *)(v16 + 549) >= 5u;
      }
      v24 = *((_BYTE *)v7 + 548);
      if ( v24 == 3 )
        v25 = 1;
      else
        v25 = v24 == 2 && *((_BYTE *)v7 + 549) >= 5u;
      if ( v23 )
      {
        if ( v25 )
        {
LABEL_16:
          if ( (*(_DWORD *)(v16 + 112) & 0x10000) == 0 || (v7[14] & 0x10000) != 0 )
          {
            if ( (*(_DWORD *)(v16 + 112) & 0x10000) != 0 || (v7[14] & 0x10000) == 0 )
            {
              v87 = *(_QWORD *)(v16 + 456);
              if ( v87 > v7[57] )
              {
                v26 = 1;
              }
              else if ( v87 < v7[57] )
              {
                v26 = -1;
              }
              else
              {
                v88 = *(_QWORD *)(v16 + 464);
                if ( v88 > v7[58] )
                {
                  v26 = 1;
                }
                else if ( v88 < v7[58] )
                {
                  v26 = -1;
                }
                else
                {
                  v89 = *(_QWORD **)(*(_QWORD *)(v16 + 80) + 1000LL);
                  if ( (_QWORD *)v16 == v89 )
                    v26 = 1;
                  else
                    v26 = (v7 != v89) - 1;
                }
              }
            }
            else
            {
              v26 = -1;
            }
          }
          else
          {
            v26 = 1;
          }
          goto LABEL_20;
        }
        v26 = 1;
      }
      else
      {
        if ( !v25 )
          goto LABEL_16;
        v26 = -1;
      }
    }
    else
    {
      v26 = 1;
    }
LABEL_20:
    v27 = v16;
    if ( v26 <= 0 )
      v27 = (__int64)v7;
    v104 = (_QWORD *)v27;
    goto LABEL_23;
  }
  v100 = v98;
  *((_QWORD *)&v99 + 1) = *((_QWORD *)&v97 + 1);
LABEL_37:
  v33 = dwTlsIndex;
  v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 88LL);
  v35 = *(_QWORD *)(v34 + 160);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v35 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v38 = dwTlsIndex;
  *(_DWORD *)(v35 + 104) = CurrentThreadId;
  v39 = (*(_DWORD *)(v35 + 132) & 2) != 0;
  if ( v38 != -1 )
  {
    v40 = TlsGetValue(v38);
    if ( (*(_DWORD *)v40 & 0x100LL) == 0 )
      __int2c();
    v11 = v40[9]-- == 1LL;
    if ( v11 )
      *v40 &= ~0x100uLL;
  }
  *(_DWORD *)(v35 + 104) = 0;
  RtlReleaseSRWLockExclusive(v35 + 96);
  if ( v39 )
    goto LABEL_215;
  v41 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v42 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v42 |= 0x80uLL;
    ++v42[8];
  }
  RtlAcquireSRWLockShared(v34 + 168);
  v43 = *(_BYTE *)(v34 + 192) & 1;
  if ( dwTlsIndex != -1 )
  {
    v44 = (char *)TlsGetValue(dwTlsIndex);
    if ( *v44 >= 0 )
      __int2c();
    v11 = (*((_QWORD *)v44 + 8))-- == 1LL;
    if ( v11 )
      *(_QWORD *)v44 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v34 + 168);
  if ( v43 )
  {
LABEL_215:
    v90 = *(_DWORD *)(a2 + 24);
    if ( v90 <= 1 )
      v90 = 1;
    *(_DWORD *)(a2 + 24) = v90;
  }
  v45 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v46 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v46 |= 0x400uLL;
    ++v46[11];
  }
  v47 = v105;
  RtlAcquireSRWLockShared(v105);
  v48 = *(_DWORD *)(v105 + 420) != 0;
  if ( dwTlsIndex != -1 )
  {
    v49 = TlsGetValue(dwTlsIndex);
    if ( (*(_DWORD *)v49 & 0x400LL) == 0 )
      __int2c();
    v11 = v49[11]-- == 1LL;
    if ( v11 )
      *v49 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v47);
  v11 = !v48;
  v50 = v106;
  if ( !v11 )
  {
    sub_1800468FC(v106, &v103, 0LL);
    if ( (v103 & 0x100) != 0 )
    {
      v93 = *(_DWORD *)(v50 + 1128);
      if ( v93 <= *(_DWORD *)(a2 + 24) )
        v93 = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v93;
    }
    else
    {
      v94 = *(_DWORD *)(a2 + 24);
      if ( v94 < 1 )
        v94 = 1;
      *(_DWORD *)(a2 + 24) = v94;
    }
  }
  v51 = v107;
  v52 = v9;
  LOWORD(v52) = v9 & 0xC0;
  if ( (_WORD)v52 == 192 )
    v53 = 2;
  else
    v53 = (v107 & 0xE) >= 8 && (v107 & 0x30) >= 0x20;
  v54 = *(_DWORD *)(a2 + 24);
  if ( v54 <= v53 )
  {
    if ( (_WORD)v52 == 192 )
      v54 = 2;
    else
      v54 = (v107 & 0xE) >= 8 && (v107 & 0x30) >= 0x20;
  }
  *(_BYTE *)(a2 + 28) &= ~2u;
  *(_DWORD *)(a2 + 24) = v54;
  *(_BYTE *)(a2 + 28) |= 2 * (v51 >> 7);
  if ( (v9 & 0x100) == 0 || (sub_1800468FC(v50, &v106, &v107), (v106 & 0x10) != 0) || (v107 & 0x10) != 0 )
    v55 = 0;
  else
    v55 = 8;
  v56 = v55 | *(_BYTE *)(a2 + 28) & 0xF7;
  *(_BYTE *)(a2 + 28) = v56;
  v57 = v56;
  if ( (*(_BYTE *)(v50 + 1132) & 8) != 0 )
  {
    v52 = 0x2000000000000LL;
    if ( (*(_QWORD *)(v50 + 648) & 0x2000000000000LL) != 0 )
    {
      v57 = v56 | 8;
      *(_BYTE *)(a2 + 28) = v56 | 8;
    }
  }
  if ( (v9 & 0x400) == 0 || (*(_QWORD *)(v50 + 648) & 0x8000000000000LL) != 0 )
    v58 = 0;
  else
    v58 = 4;
  v59 = v104;
  *(_BYTE *)(a2 + 28) = v58 | v57 & 0xFB;
  if ( v59 )
  {
    v60 = v59[58];
    v61 = v59[57];
    v52 = v59[56];
    v62 = v59[55];
    if ( v60 == -1LL || v15 == -1LL || (v15 += v60, v15 < v60) )
      v15 = -1LL;
    *((_QWORD *)&v98 + 1) = v15;
    if ( v61 == -1LL || v100 == -1 || (v63 = v61 + v100, v100 = v63, v63 < v61) )
    {
      v63 = -1LL;
      v100 = -1LL;
    }
    *(_QWORD *)&v98 = v63;
    if ( v52 == -1LL
      || *((_QWORD *)&v99 + 1) == -1LL
      || (v64 = v52 + *((_QWORD *)&v99 + 1), *((_QWORD *)&v99 + 1) = v64, v64 < v52) )
    {
      v64 = -1LL;
      *((_QWORD *)&v99 + 1) = -1LL;
    }
    *((_QWORD *)&v97 + 1) = v64;
    if ( v62 == -1LL || (_QWORD)v99 == -1LL || (v65 = v62 + v99, *(_QWORD *)&v99 = v65, v65 < v62) )
    {
      v65 = -1LL;
      *(_QWORD *)&v99 = -1LL;
      *(_QWORD *)&v97 = -1LL;
    }
    else
    {
      *(_QWORD *)&v97 = v65;
    }
  }
  else
  {
    v65 = v99;
  }
  if ( v101 )
  {
    v66 = v100;
    v67 = *((_QWORD *)&v99 + 1);
  }
  else
  {
    v86 = *(_OWORD *)(v50 + 888);
    v97 = *(_OWORD *)(v50 + 872);
    v67 = *((_QWORD *)&v97 + 1);
    v65 = v97;
    v98 = v86;
    v15 = *((_QWORD *)&v86 + 1);
    v66 = v86;
    v99 = v97;
  }
  if ( (*(_BYTE *)(v47 - 1260) & 0x20) != 0 )
  {
    if ( (unsigned __int8)sub_18002A3C4(*(_QWORD *)(*(_QWORD *)(v50 + 776) + 88LL), v52, v67) )
    {
      sub_180063B30(&v97, -1LL);
      v67 = *((_QWORD *)&v97 + 1);
      v65 = v97;
      v15 = *((_QWORD *)&v98 + 1);
      v66 = v98;
    }
    else
    {
      v67 = *((_QWORD *)&v99 + 1);
      v65 = v99;
    }
  }
  v68 = *(_QWORD *)(v50 + 944);
  if ( v66 < v68 && v66 )
  {
    sub_180063BC8(&v97, v68, &v97);
    v67 = *((_QWORD *)&v97 + 1);
    v65 = v97;
    v15 = *((_QWORD *)&v98 + 1);
    v66 = v98;
  }
  v69 = *(_QWORD *)(v50 + 600);
  if ( v69 == v50 + 600 )
    v102 = 0;
  v70 = v69 - 96;
  v71 = 0LL;
  if ( v102 )
    v71 = v70;
  if ( v71 && (*(_DWORD *)(v71 + 112) & 0x80000) != 0 )
  {
    v95 = *(_QWORD *)(sub_180006258(v50) + 72);
    v96 = *(_OWORD *)(v95 + 88);
    v97 = *(_OWORD *)(v95 + 72);
    v67 = *((_QWORD *)&v97 + 1);
    v65 = v97;
    v98 = v96;
    v15 = *((_QWORD *)&v96 + 1);
    v66 = v96;
  }
  v72 = *(_QWORD *)(v50 + 952);
  if ( v15 != -1LL )
  {
    if ( v15 < v72 )
      v15 = 0LL;
    else
      v15 -= v72;
  }
  if ( v66 != -1LL )
  {
    if ( v66 < v72 )
      v66 = 0LL;
    else
      v66 -= v72;
  }
  if ( v67 != -1LL )
  {
    if ( v67 < v72 )
      v67 = 0LL;
    else
      v67 -= v72;
  }
  if ( v65 != -1LL )
  {
    if ( v65 < v72 )
      v65 = 0LL;
    else
      v65 -= v72;
  }
  v73 = *(_QWORD *)(v50 + 960);
  if ( v15 != -1LL )
  {
    if ( v15 < v73 )
      v15 = 0LL;
    else
      v15 -= v73;
  }
  *((_QWORD *)&v98 + 1) = v15;
  if ( v66 == -1LL )
  {
    *(_QWORD *)&v98 = -1LL;
  }
  else if ( v66 < v73 )
  {
    *(_QWORD *)&v98 = 0LL;
  }
  else
  {
    *(_QWORD *)&v98 = v66 - v73;
  }
  if ( v67 == -1LL )
  {
    *((_QWORD *)&v97 + 1) = -1LL;
  }
  else if ( v67 < v73 )
  {
    *((_QWORD *)&v97 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v97 + 1) = v67 - v73;
  }
  if ( v65 == -1LL )
  {
    *(_QWORD *)&v97 = -1LL;
  }
  else if ( v65 < v73 )
  {
    *(_QWORD *)&v97 = 0LL;
  }
  else
  {
    *(_QWORD *)&v97 = v65 - v73;
  }
  v74 = v98;
  v75 = *(_QWORD *)(v50 + 848);
  v76 = v97;
  v77 = v98;
  if ( v15 > v75 )
  {
    v75 = *((_QWORD *)&v98 + 1);
  }
  else
  {
    *((_QWORD *)&v98 + 1) = *(_QWORD *)(v50 + 848);
    v77 = v98;
  }
  if ( (unsigned __int64)v77 <= *(_QWORD *)(v50 + 856) )
  {
    *(_QWORD *)&v98 = *(_QWORD *)(v50 + 856);
    v77 = v98;
  }
  v78 = v108;
  *(_QWORD *)(a2 + 16) = v75;
  if ( v78 )
  {
    *v78 = v76;
    v78[1] = v74;
  }
  v79 = v109;
  if ( v109 )
  {
    *v109 = v76;
    v79[1] = v77;
  }
  result = a5;
  if ( a5 )
    *a5 = v59;
  return result;
}
