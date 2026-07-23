/*
 * XREFs of SPCallServerHandleQueryPolicy @ 0x140688AF0
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     StringCbLengthW @ 0x14025C2A4 (StringCbLengthW.c)
 *     KeQueryTimeIncrement @ 0x1402DD740 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleQueryPolicy(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // esi
  PVOID v7; // r12
  unsigned int v8; // edi
  unsigned int *v9; // r8
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // rcx
  int v14; // ecx
  unsigned int *v15; // rax
  size_t v16; // rcx
  unsigned int j; // r9d
  __int64 v18; // rax
  unsigned int *v19; // rdx
  size_t v20; // rdx
  void *v21; // r11
  signed int v22; // ebx
  __int64 v23; // r13
  unsigned int v24; // edx
  unsigned int *v25; // rcx
  PVOID PoolWithTag; // rax
  void *v27; // r13
  unsigned int *v28; // rcx
  unsigned int *v29; // rax
  unsigned int k; // edx
  unsigned int v31; // r10d
  unsigned int v32; // ecx
  unsigned int *jj; // rdx
  __int64 v34; // r9
  unsigned int v35; // r10d
  unsigned int v36; // esi
  unsigned int v37; // r8d
  _DWORD *kk; // rdx
  __int64 v40; // r11
  __int64 v41; // r9
  unsigned int v42; // r10d
  unsigned int v43; // ecx
  _DWORD *mm; // rdx
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // r13d
  unsigned int v51; // edx
  int *v52; // r8
  unsigned int m; // edx
  unsigned int v54; // eax
  unsigned int *v55; // rdx
  int v56; // ebx
  int v57; // eax
  int v58; // r15d
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  int v66; // r8d
  int v67; // ecx
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // eax
  __int64 v71; // rbx
  __int64 v72; // rcx
  int v73; // ebx
  __int64 v74; // r13
  int v75; // eax
  int v76; // ecx
  double v77; // xmm0_8
  int v78; // ecx
  unsigned int v79; // eax
  _DWORD *v80; // rax
  int v81; // r15d
  unsigned int v82; // r9d
  __int64 v83; // r10
  unsigned int v84; // r11d
  unsigned int v85; // r8d
  unsigned __int64 n; // rdx
  __int64 v87; // rax
  __int64 v88; // r9
  unsigned int v89; // r10d
  int v90; // r15d
  unsigned int v91; // r8d
  _DWORD *ii; // rdx
  unsigned int v93; // eax
  unsigned int v94; // ecx
  unsigned int v95; // edx
  int v96; // eax
  unsigned int v97; // ecx
  unsigned int v98; // edx
  int v99; // eax
  unsigned int v100; // ecx
  int v101; // eax
  unsigned int v102; // eax
  NTSTATUS v103; // eax
  unsigned __int64 v104; // r13
  unsigned __int64 v105; // rax
  __int64 v106; // r9
  unsigned int *v107; // r8
  __int64 v108; // rax
  unsigned int *v109; // r8
  __int64 v110; // rbx
  __int64 v111; // rcx
  int v112; // ebx
  NTSTATUS v113; // eax
  unsigned int v114; // r8d
  unsigned int *v115; // rdx
  unsigned int v116; // eax
  unsigned int v117; // edx
  int v118; // eax
  unsigned int v119; // ecx
  int v120; // [rsp+40h] [rbp-79h]
  unsigned int v121; // [rsp+44h] [rbp-75h] BYREF
  int v122; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v123; // [rsp+4Ch] [rbp-6Dh]
  int v124; // [rsp+50h] [rbp-69h]
  SIZE_T NumberOfBytes; // [rsp+54h] [rbp-65h] BYREF
  int v126; // [rsp+5Ch] [rbp-5Dh] BYREF
  int v127; // [rsp+60h] [rbp-59h] BYREF
  int v128; // [rsp+64h] [rbp-55h] BYREF
  int v129; // [rsp+68h] [rbp-51h] BYREF
  int v130; // [rsp+6Ch] [rbp-4Dh] BYREF
  int v131; // [rsp+70h] [rbp-49h]
  void *Src; // [rsp+78h] [rbp-41h]
  size_t Size; // [rsp+80h] [rbp-39h] BYREF
  int v134; // [rsp+88h] [rbp-31h] BYREF
  __int64 v135; // [rsp+90h] [rbp-29h] BYREF
  PVOID P; // [rsp+98h] [rbp-21h]
  size_t pcbLength; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v138; // [rsp+A8h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C0h] [rbp+7h] BYREF
  UNICODE_STRING v141; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v142; // [rsp+D8h] [rbp+1Fh] BYREF
  int v143; // [rsp+E0h] [rbp+27h]

  v123 = a3;
  v135 = a2;
  NumberOfBytes = 0LL;
  v138 = 0LL;
  P = 0LL;
  v6 = 0;
  v131 = 0;
  v7 = 0LL;
  v8 = 0;
  v121 = 0;
  Timeout.QuadPart = 0LL;
  DestinationString = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 )
  {
    if ( *(_DWORD *)a1 <= 3u )
    {
      v14 = -1073741811;
    }
    else
    {
      v10 = *(unsigned int **)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v12 = *v10;
        v13 = v10 + 1;
        if ( v10 + 1 < v10 )
          goto LABEL_8;
        v10 = (unsigned int *)((char *)v13 + v12);
        if ( (unsigned int *)((char *)v13 + v12) < v13 )
          goto LABEL_8;
      }
      v24 = *v10;
      v25 = v10 + 1;
      if ( v10 + 1 < v10 )
      {
LABEL_8:
        v14 = -1073741675;
        goto LABEL_13;
      }
      v15 = 0LL;
      if ( v24 )
        v15 = v25;
      v14 = 0;
      if ( v24 != 8 )
        return 3221225507LL;
      v138 = *(_QWORD *)v15;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_13:
  if ( v14 < 0 )
    return (unsigned int)v14;
  LODWORD(v16) = 0;
  Src = 0LL;
  pcbLength = 0LL;
  if ( v9 )
  {
    if ( *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = *v9;
        v19 = v9 + 1;
        if ( v9 + 1 < v9 )
          goto LABEL_34;
        v9 = (unsigned int *)((char *)v19 + v18);
        if ( (unsigned int *)((char *)v19 + v18) < v19 )
          goto LABEL_34;
      }
      v20 = *v9;
      if ( v9 + 1 < v9 )
      {
LABEL_34:
        v22 = -1073741675;
        goto LABEL_35;
      }
      v21 = 0LL;
      if ( (_DWORD)v20 )
        v21 = v9 + 1;
      Src = v21;
      v22 = 0;
      if ( (_DWORD)v20 )
      {
        if ( (v20 & 1) != 0 )
        {
          v22 = -1073741762;
        }
        else
        {
          v23 = (unsigned int)v20;
          if ( *((_WORD *)v21 + ((unsigned __int64)(unsigned int)v20 >> 1) - 1) )
          {
            v22 = -1073741762;
          }
          else if ( StringCbLengthW((STRSAFE_PCNZWCH)v21, v20, &pcbLength) < 0 )
          {
            v22 = -1073741762;
          }
          else
          {
            if ( pcbLength + 2 == v23 )
            {
              v16 = pcbLength >> 1;
              goto LABEL_35;
            }
            v22 = -1073741762;
          }
        }
      }
      else
      {
        v22 = -1073741762;
      }
      goto LABEL_39;
    }
    v22 = -1073741811;
  }
  else
  {
    v22 = -1073741811;
  }
LABEL_35:
  if ( v22 < 0 )
    goto LABEL_61;
  if ( 2 * (_DWORD)v16 == -2 )
  {
    v22 = -1073741762;
  }
  else
  {
    Size = (unsigned int)(2 * v16 + 2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20534C53u);
    v27 = PoolWithTag;
    if ( PoolWithTag )
    {
      v22 = 0;
      memmove(PoolWithTag, Src, Size);
      P = v27;
    }
    else
    {
      v22 = -1073741801;
    }
  }
LABEL_39:
  if ( v22 < 0 )
    goto LABEL_61;
  v28 = *(unsigned int **)(a1 + 8);
  if ( v28 )
  {
    if ( *(_DWORD *)a1 > 5u )
    {
      v29 = *(unsigned int **)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v106 = *v29;
        v107 = v29 + 1;
        if ( v29 + 1 < v29 )
          goto LABEL_233;
        v29 = (unsigned int *)((char *)v107 + v106);
        if ( (unsigned int *)((char *)v107 + v106) < v107 )
          goto LABEL_233;
      }
      v51 = *v29;
      v52 = (int *)(v29 + 1);
      if ( v29 + 1 < v29 )
      {
LABEL_233:
        v22 = -1073741675;
        goto LABEL_109;
      }
      if ( !v51 )
        v52 = 0LL;
      v22 = 0;
      if ( v51 == 4 )
      {
        v131 = *v52;
        goto LABEL_109;
      }
      v22 = -1073741789;
      goto LABEL_61;
    }
    v22 = -1073741811;
  }
  else
  {
    v22 = -1073741811;
  }
LABEL_109:
  if ( v22 < 0 )
    goto LABEL_61;
  if ( v28 )
  {
    if ( *(_DWORD *)a1 > 6u )
    {
      for ( m = 0; m < 6; ++m )
      {
        v108 = *v28;
        v109 = v28 + 1;
        if ( v28 + 1 < v28 )
          goto LABEL_241;
        v28 = (unsigned int *)((char *)v109 + v108);
        if ( (unsigned int *)((char *)v109 + v108) < v109 )
          goto LABEL_241;
      }
      v54 = *v28;
      v55 = v28 + 1;
      if ( v28 + 1 < v28 )
      {
LABEL_241:
        v22 = -1073741675;
        goto LABEL_118;
      }
      if ( !v54 )
        v55 = 0LL;
      v22 = 0;
      if ( v54 == 4 )
      {
        v6 = *v55;
        goto LABEL_118;
      }
      v22 = -1073741789;
      goto LABEL_61;
    }
    v22 = -1073741811;
  }
  else
  {
    v22 = -1073741811;
  }
LABEL_118:
  if ( v22 < 0 )
    goto LABEL_61;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)P);
  if ( v6 )
  {
    v56 = 1;
    if ( v6 <= 0x100000 )
      goto LABEL_121;
  }
  else
  {
    v56 = 0;
  }
  v101 = ((__int64 (__fastcall *)(UNICODE_STRING *, char *, _QWORD, _QWORD, unsigned int *))qword_140D2D4B8)(
           &DestinationString,
           (char *)&NumberOfBytes + 4,
           0LL,
           0LL,
           &v121);
  v58 = v101;
  if ( v101 == -1073741789 )
  {
    v102 = v121;
    if ( v6 < v121 )
    {
      if ( !v6 )
        v58 = 0;
      goto LABEL_126;
    }
  }
  else
  {
    if ( v101 < 0 )
    {
      v22 = v101;
      goto LABEL_61;
    }
    v102 = v121;
    if ( v121 )
    {
      v22 = -2147418113;
      goto LABEL_61;
    }
    v56 = 0;
  }
  v6 = v102;
  v58 = 0;
  if ( !v56 )
    goto LABEL_126;
LABEL_121:
  v7 = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
  if ( !v7 )
  {
    v22 = -1073741801;
    goto LABEL_61;
  }
  v57 = ((__int64 (__fastcall *)(UNICODE_STRING *, char *, PVOID, _QWORD, unsigned int *))qword_140D2D4B8)(
          &DestinationString,
          (char *)&NumberOfBytes + 4,
          v7,
          v6,
          &v121);
  v58 = v57;
  if ( v57 != -1073741789 )
  {
    v22 = v57;
    if ( v57 < 0 )
      goto LABEL_61;
  }
  if ( v6 >= v121 )
    v6 = v121;
LABEL_126:
  v59 = v6 + 4;
  LODWORD(Src) = v6 + 4;
  if ( v6 >= 0xFFFFFFFC )
  {
    v22 = -1073741675;
    v59 = 8;
  }
  else
  {
    v22 = 0;
  }
  if ( v22 < 0 )
  {
    v62 = 0;
  }
  else
  {
    v60 = v59 + 28;
    if ( v60 < 0x1C )
      goto LABEL_60;
    v61 = v60 + 8;
    if ( v60 + 8 < v60 )
      goto LABEL_60;
    v62 = v60 + 16;
    LODWORD(NumberOfBytes) = v61 + 8;
    if ( v61 + 8 < v61 )
      goto LABEL_60;
    v22 = 0;
  }
  if ( v22 < 0 )
    goto LABEL_61;
  v63 = 0;
  v64 = v62 + 8;
  if ( v64 < 8 )
    goto LABEL_60;
  v65 = (v64 + 7) & 0xFFFFFFF8;
  if ( v65 >= v64 )
  {
    v63 = v65 + 8;
    if ( v65 + 8 < v65 )
      goto LABEL_139;
    v22 = 0;
  }
  else
  {
    v22 = -1073741675;
  }
  if ( v22 < 0 )
  {
LABEL_140:
    v70 = 0;
    goto LABEL_141;
  }
  v66 = *(_DWORD *)(v135 + 32);
  v67 = *(_DWORD *)(v135 + 16);
  v68 = v63 + 4;
  v69 = v63 + 8;
  if ( v69 < v68
    || (v93 = v69 + v67, v69 + v67 < v69)
    || (v94 = v93 + 4, v93 + 4 < v93)
    || (v70 = v94 + v66, v94 + v66 < v94) )
  {
LABEL_139:
    v22 = -1073741675;
    goto LABEL_140;
  }
  v22 = 0;
LABEL_141:
  if ( v22 < 0 )
    goto LABEL_61;
  if ( v123 >= v70 && v58 >= 0 )
  {
    v123 = 0;
    if ( DestinationString.Length == ::DestinationString.Length
      && !memcmp(DestinationString.Buffer, ::DestinationString.Buffer, ::DestinationString.Length) )
    {
      v123 = dword_140D2D130;
      v120 = 1;
    }
    else
    {
      v120 = 0;
    }
    v71 = MEMORY[0xFFFFF78000000320];
    v72 = v71 * KeQueryTimeIncrement();
    v141 = 0LL;
    v73 = 1;
    v124 = 1;
    v74 = v72 / 10000;
    v126 = 0;
    v127 = 0;
    v134 = 0;
    RtlInitUnicodeString(&v141, L"Security-SPP-GenuineLocalStatus");
    v75 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, int *))qword_140D2D4B8)(
            &v141,
            &v126,
            &v127,
            4LL,
            &v134);
    if ( v75 == -1073741772 || v75 >= 0 && (v126 != 4 || !v127) )
    {
      v73 = 0;
      v124 = 0;
    }
    if ( g_ulOldGenuineStateForWnf != v73 )
    {
      g_qwSystemInitTime = v74;
      g_ulOldGenuineStateForWnf = v73;
    }
    v76 = v74 - g_qwSystemInitTime;
    if ( v74 - g_qwSystemInitTime < 0 )
    {
      v105 = v76 & 1 | ((unsigned __int64)(v74 - g_qwSystemInitTime) >> 1);
      v77 = (double)(int)v105 + (double)(int)v105;
    }
    else
    {
      v77 = (double)v76;
    }
    if ( !v73 && !g_bWNFEventFired )
    {
      if ( v77 < 9000000.0 )
      {
        v78 = v120;
        if ( !v120 )
          goto LABEL_156;
      }
      g_bWNFEventFired = 1;
      ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    v78 = v120;
LABEL_156:
    if ( (unsigned __int64)(v74 - g_qwSystemInitTime) >= 0xA4CBFB || v78 )
    {
      v103 = KeWaitForSingleObject(&stru_140C13D00, UserRequest, 1, 0, &Timeout);
      if ( v103 >= 0 && v103 != 192 && v103 != 258 )
      {
        if ( g_ulOldGenuineState != v73 )
        {
          if ( v73 )
          {
            KeResetEvent(&stru_140C13CE0);
          }
          else
          {
            v110 = MEMORY[0xFFFFF78000000320];
            v111 = v110 * KeQueryTimeIncrement();
            v73 = v124;
            qword_140D2D168 = v111 / 10000;
          }
        }
        v104 = v74 - qword_140D2D168;
        g_ulOldGenuineState = v73;
        if ( v73 || v104 < 0xADF4FC && !v120 || !dword_140D2D1D4 )
          goto LABEL_279;
        KeSetEvent(&stru_140C13CE0, 1, 0);
        v112 = dword_140D2D0BC;
        if ( !dword_140D2D0BC )
        {
          v128 = 4;
          v122 = 0;
          LODWORD(v135) = 0;
          Size = 0LL;
          v113 = ZwOpenKey((PHANDLE)&Size, 1u, &stru_140D2D880);
          if ( v113 < 0 )
          {
            v113 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, __int64 *))qword_140D2D4B8)(
                     aBd,
                     &v128,
                     &v122,
                     4LL,
                     &v135);
            v112 = v122;
          }
          else
          {
            v112 = 3;
            v122 = 3;
          }
          if ( v113 < 0 || v128 != 4 || (unsigned int)(v112 - 1) > 2 )
          {
            v112 = 1;
            v122 = 1;
          }
          if ( Size )
            ZwClose((HANDLE)Size);
        }
        v129 = 0;
        v142 = 0LL;
        v143 = 0;
        v130 = 0;
        if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_140D2D4B8)(
                    aLn,
                    &v129,
                    &v142,
                    12LL,
                    &v130) >= 0
          && v129 == 3
          && v130 == 12 )
        {
          v114 = 0;
          v115 = (unsigned int *)&v142;
          while ( 1 )
          {
            v116 = *v115;
            if ( (*v115 & 0xF) == v112 )
              break;
            ++v114;
            ++v115;
            if ( v114 >= 3 )
              goto LABEL_276;
          }
        }
        else
        {
LABEL_276:
          v116 = dword_140D2D064 & 0xFFFF0000 | 0x3211;
        }
        dword_140D2D064 = v116;
        if ( v131 || v123 )
          v8 = v116;
        else
LABEL_279:
          KeReleaseMutex((PRKMUTEX)&stru_140C13D00, 0);
      }
    }
  }
  v79 = NumberOfBytes;
  *(_DWORD *)(a4 + 4) = NumberOfBytes;
  if ( !v79 )
  {
    v22 = -1073741762;
    goto LABEL_61;
  }
  v80 = ExAllocatePoolWithTag(PagedPool, v79, 0x20534C53u);
  if ( !v80 )
  {
    v22 = -1073741801;
    goto LABEL_61;
  }
  *(_QWORD *)(a4 + 8) = v80;
  *(_DWORD *)a4 = 0;
  v81 = v58 | 0x10000000;
  if ( v80 + 1 < v80 )
    goto LABEL_60;
  if ( v80 + 2 > (_DWORD *)((char *)v80 + *(unsigned int *)(a4 + 4)) )
  {
    v22 = -1073741789;
    goto LABEL_61;
  }
  *v80 = 4;
  v80[1] = v81;
  v82 = ++*(_DWORD *)a4;
  v83 = *(_QWORD *)(a4 + 8);
  v84 = 0;
  v50 = -1;
  if ( v83 )
  {
    v85 = 0;
    for ( n = *(_QWORD *)(a4 + 8); v85 < v82; n += v84 )
    {
      if ( *(_DWORD *)n >= 0xFFFFFFFC )
      {
        v22 = -1073741675;
      }
      else
      {
        v84 = *(_DWORD *)n + 4;
        v22 = 0;
      }
      if ( v22 < 0 )
        goto LABEL_61;
      if ( n + v84 < n )
        goto LABEL_60;
      ++v85;
    }
    if ( n + 4 < n )
      goto LABEL_60;
    v22 = 0;
    if ( n + 12 > v83 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v22 = -1073741789;
      goto LABEL_61;
    }
    v87 = v138;
    *(_DWORD *)n = 8;
    *(_QWORD *)(n + 4) = v87;
    ++*(_DWORD *)a4;
  }
  else
  {
    v95 = *(_DWORD *)(a4 + 4);
    v96 = -1;
    v97 = v95 + 12;
    if ( v95 + 12 >= v95 )
      v96 = v95 + 12;
    v22 = v97 < v95 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v96;
    if ( v97 >= v95 )
    {
      *(_DWORD *)a4 = v82 + 1;
      goto LABEL_173;
    }
  }
  if ( v22 < 0 )
    goto LABEL_61;
LABEL_173:
  v88 = *(_QWORD *)(a4 + 8);
  v89 = 0;
  v90 = HIDWORD(NumberOfBytes);
  if ( v88 )
  {
    v91 = 0;
    for ( ii = *(_DWORD **)(a4 + 8); v91 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v89) )
    {
      if ( *ii >= 0xFFFFFFFC )
      {
        v22 = -1073741675;
      }
      else
      {
        v89 = *ii + 4;
        v22 = 0;
      }
      if ( v22 < 0 )
        goto LABEL_61;
      if ( (_DWORD *)((char *)ii + v89) < ii )
        goto LABEL_60;
      ++v91;
    }
    if ( ii + 1 < ii )
      goto LABEL_60;
    v22 = 0;
    if ( (unsigned __int64)(ii + 2) > v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v22 = -1073741789;
      goto LABEL_61;
    }
    *ii = 4;
    ii[1] = v90;
    ++*(_DWORD *)a4;
  }
  else
  {
    v98 = *(_DWORD *)(a4 + 4);
    v99 = -1;
    v100 = v98 + 8;
    if ( v98 + 8 >= v98 )
      v99 = v98 + 8;
    v22 = v100 < v98 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v99;
    if ( v100 >= v98 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_69;
    }
  }
  if ( v22 < 0 )
    goto LABEL_61;
LABEL_69:
  v31 = 0;
  if ( v7 )
  {
    if ( v6 )
      goto LABEL_71;
LABEL_295:
    v22 = -1073741811;
    goto LABEL_53;
  }
  if ( v6 )
    goto LABEL_295;
LABEL_71:
  v40 = *(_QWORD *)(a4 + 8);
  if ( v40 )
  {
    v32 = 0;
    for ( jj = *(unsigned int **)(a4 + 8); v32 < *(_DWORD *)a4; jj = (unsigned int *)((char *)jj + v31) )
    {
      if ( *jj < 0xFFFFFFFC )
      {
        v31 = *jj + 4;
        v22 = 0;
      }
      else
      {
        v22 = -1073741675;
      }
      if ( v22 < 0 )
        goto LABEL_61;
      if ( (unsigned int *)((char *)jj + v31) < jj )
        goto LABEL_60;
      ++v32;
    }
    if ( jj + 1 < jj )
      goto LABEL_60;
    v22 = 0;
    if ( (unsigned __int64)jj + v6 + 4 > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v22 = -1073741789;
      goto LABEL_61;
    }
    *jj = v6;
    if ( v7 )
      memmove(jj + 1, v7, v6);
    ++*(_DWORD *)a4;
  }
  else
  {
    if ( (unsigned int)Src < 4 )
    {
      v22 = -1073741675;
    }
    else
    {
      v31 = (unsigned int)Src;
      v22 = 0;
    }
    if ( v22 < 0 )
      goto LABEL_61;
    v117 = *(_DWORD *)(a4 + 4);
    v118 = -1;
    v119 = v117 + v31;
    if ( v117 + v31 >= v117 )
      v118 = v117 + v31;
    v22 = v119 < v117 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v118;
    if ( v119 >= v117 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_54;
    }
  }
LABEL_53:
  if ( v22 < 0 )
    goto LABEL_61;
LABEL_54:
  v34 = *(_QWORD *)(a4 + 8);
  v35 = 0;
  v36 = v121;
  if ( v34 )
  {
    v37 = 0;
    for ( kk = *(_DWORD **)(a4 + 8); v37 < *(_DWORD *)a4; kk = (_DWORD *)((char *)kk + v35) )
    {
      if ( *kk >= 0xFFFFFFFC )
      {
        v22 = -1073741675;
      }
      else
      {
        v35 = *kk + 4;
        v22 = 0;
      }
      if ( v22 < 0 )
        goto LABEL_61;
      if ( (_DWORD *)((char *)kk + v35) < kk )
        goto LABEL_60;
      ++v37;
    }
    if ( kk + 1 < kk )
      goto LABEL_60;
    v22 = 0;
    if ( (unsigned __int64)(kk + 2) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v22 = -1073741789;
      goto LABEL_61;
    }
    *kk = 4;
    kk[1] = v36;
    ++*(_DWORD *)a4;
  }
  else
  {
    v45 = *(_DWORD *)(a4 + 4);
    v46 = -1;
    v47 = v45 + 8;
    if ( v45 + 8 >= v45 )
      v46 = v45 + 8;
    v22 = v47 < v45 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v46;
    if ( v47 >= v45 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_80;
    }
  }
  if ( v22 < 0 )
    goto LABEL_61;
LABEL_80:
  v41 = *(_QWORD *)(a4 + 8);
  v42 = 0;
  if ( !v41 )
  {
    v48 = *(_DWORD *)(a4 + 4);
    v49 = v48 + 8;
    if ( v48 + 8 >= v48 )
      v50 = v48 + 8;
    v22 = v49 < v48 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v50;
    if ( v49 < v48 )
      goto LABEL_90;
    ++*(_DWORD *)a4;
    v22 = 0;
    goto LABEL_61;
  }
  v43 = 0;
  for ( mm = *(_DWORD **)(a4 + 8); v43 < *(_DWORD *)a4; mm = (_DWORD *)((char *)mm + v42) )
  {
    if ( *mm >= 0xFFFFFFFC )
    {
      v22 = -1073741675;
    }
    else
    {
      v42 = *mm + 4;
      v22 = 0;
    }
    if ( v22 < 0 )
      goto LABEL_61;
    if ( (_DWORD *)((char *)mm + v42) < mm )
      goto LABEL_60;
    ++v43;
  }
  if ( mm + 1 < mm )
  {
LABEL_60:
    v22 = -1073741675;
    goto LABEL_61;
  }
  v22 = 0;
  if ( (unsigned __int64)(mm + 2) <= v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
    *mm = 4;
    mm[1] = v8;
    ++*(_DWORD *)a4;
LABEL_90:
    if ( v22 >= 0 )
      v22 = 0;
    goto LABEL_61;
  }
  v22 = -1073741789;
LABEL_61:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v22;
}
