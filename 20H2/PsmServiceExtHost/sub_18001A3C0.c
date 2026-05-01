/*
 * XREFs of sub_18001A3C0 @ 0x18001A3C0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 *     sub_18002A9B4 @ 0x18002A9B4 (sub_18002A9B4.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 *     sub_18002D52C @ 0x18002D52C (sub_18002D52C.c)
 *     sub_1800337A4 @ 0x1800337A4 (sub_1800337A4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_1800671F0 @ 0x1800671F0 (sub_1800671F0.c)
 *     sub_18006A7AC @ 0x18006A7AC (sub_18006A7AC.c)
 *     sub_18007C528 @ 0x18007C528 (sub_18007C528.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

__int64 __fastcall sub_18001A3C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int128 v3; // xmm1
  _QWORD *Value; // rax
  bool v6; // zf
  _QWORD *v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // esi
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  unsigned int *v18; // r13
  unsigned int *Heap; // rsi
  __int64 v20; // r14
  int v21; // eax
  int v22; // r15d
  unsigned int v23; // esi
  PVOID v24; // rax
  _QWORD *v25; // r14
  PVOID v26; // rax
  unsigned int *v27; // r12
  unsigned int *v28; // r15
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rbx
  unsigned int *v33; // r13
  __int64 v34; // r12
  _QWORD *v35; // r15
  HANDLE *v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r15
  DWORD v44; // r14d
  _QWORD *v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r11
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  __int64 v67; // r8
  __int64 *v68; // rcx
  __int64 v69; // r10
  unsigned __int64 v70; // r9
  __int64 v71; // r8
  unsigned __int64 v72; // r9
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  __int64 v75; // r8
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rax
  unsigned __int64 v78; // r13
  unsigned int v79; // r15d
  DWORD v80; // r14d
  _QWORD *v81; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int64 v83; // r14
  int v84; // eax
  int v85; // esi
  DWORD v86; // esi
  _QWORD *v87; // rdi
  DWORD v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // r8
  __int64 v92; // r8
  BOOL v93; // r8d
  __int64 v94; // rax
  int v95; // r8d
  __int64 v96; // r9
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  int v102; // r8d
  int v103; // r9d
  PVOID ProcessHeap; // rcx
  char *v105; // rdi
  __int64 v106; // rcx
  int v107; // r8d
  int v108; // r9d
  int v109; // r8d
  int v110; // r9d
  int v111; // r8d
  int v112; // r9d
  unsigned __int64 v113; // rtt
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rcx
  unsigned int v117; // [rsp+60h] [rbp-A0h] BYREF
  char v118; // [rsp+64h] [rbp-9Ch]
  int v119; // [rsp+68h] [rbp-98h] BYREF
  BOOL v120; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v121; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v122; // [rsp+78h] [rbp-88h]
  PVOID v123[2]; // [rsp+80h] [rbp-80h]
  __int64 v124; // [rsp+90h] [rbp-70h]
  unsigned int v125; // [rsp+98h] [rbp-68h]
  __int64 v126; // [rsp+A0h] [rbp-60h]
  void *ProcessHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v128; // [rsp+B0h] [rbp-50h]
  __int64 v129; // [rsp+B8h] [rbp-48h]
  int v130; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v131; // [rsp+C8h] [rbp-38h] BYREF
  int v132; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v133; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v134; // [rsp+E0h] [rbp-20h]
  __int64 v135; // [rsp+E8h] [rbp-18h]
  __int64 v136; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v137; // [rsp+F8h] [rbp-8h]
  PVOID P; // [rsp+100h] [rbp+0h]
  __int64 v139; // [rsp+108h] [rbp+8h]
  unsigned __int64 v140; // [rsp+110h] [rbp+10h]
  unsigned __int64 v141; // [rsp+118h] [rbp+18h]
  unsigned __int64 v142; // [rsp+120h] [rbp+20h]
  __int64 v143; // [rsp+128h] [rbp+28h] BYREF
  __int64 v144; // [rsp+130h] [rbp+30h] BYREF
  __int64 v145; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v146; // [rsp+140h] [rbp+40h] BYREF
  __int64 v147; // [rsp+148h] [rbp+48h] BYREF
  __int64 v148; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v149; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v150; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v151[6]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v152; // [rsp+198h] [rbp+98h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v154; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v155; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v156; // [rsp+1D0h] [rbp+D0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D8h] [rbp+D8h] BYREF
  char v158; // [rsp+208h] [rbp+108h] BYREF
  __int64 v159; // [rsp+218h] [rbp+118h]
  __int64 v160; // [rsp+220h] [rbp+120h]
  __int128 v161; // [rsp+228h] [rbp+128h] BYREF
  __int128 v162; // [rsp+238h] [rbp+138h]
  _OWORD Buf1[2]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v164[4]; // [rsp+268h] [rbp+168h] BYREF
  _OWORD Buf2[2]; // [rsp+288h] [rbp+188h] BYREF
  char v166; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v167; // [rsp+2B8h] [rbp+1B8h]
  __int64 v168; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v169[32]; // [rsp+2C8h] [rbp+1C8h] BYREF

  v1 = *(_QWORD *)(a1 + 648);
  v2 = a1;
  v129 = a1;
  if ( (v1 & 0x80000000000000LL) == 0 && (v1 & 0x40000000000000LL) == 0 )
  {
    sub_18001D590(a1, (unsigned int)&v154, (unsigned int)v169, (unsigned int)&v158, (__int64)&v144);
    if ( ((*(_BYTE *)(v2 + 655) & 1) == 0 || SDWORD2(v155) < 2 && (BYTE12(v155) & 0x70) == 0 && (BYTE12(v155) & 8) == 0)
      && *(_QWORD *)(v2 + 1000) == v144 )
    {
      v3 = *(_OWORD *)(v2 + 1120);
      Buf1[0] = 0uLL;
      Buf1[1] = v3;
      Buf2[0] = 0uLL;
      Buf2[1] = v155;
      if ( !memcmp(Buf1, Buf2, 0x20uLL)
        && v160 == *(_QWORD *)(v2 + 848)
        && v159 == *(_QWORD *)(v2 + 856)
        && !memcmp(v169, (const void *)(v2 + 872), 0x20uLL) )
      {
        return 0LL;
      }
    }
  }
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v6 = Value[2]-- == 1LL;
    if ( v6 )
      *Value &= ~2uLL;
  }
  *(_DWORD *)(v2 + 8) = 0;
  RtlReleaseSRWLockExclusive(v2);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v7 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v7 & 1) == 0 )
      __int2c();
    v6 = v7[1]-- == 1LL;
    if ( v6 )
      *v7 &= ~1uLL;
  }
  v8 = *(_DWORD *)(v2 - 64 + 624);
  v9 = *(_DWORD *)(v2 - 64 + 620);
  v10 = *(_QWORD *)(v2 - 64 + 32);
  v11 = *(_QWORD *)(*(_QWORD *)(v2 - 16) + 40LL);
  v139 = v2 - 64;
  v137 = v2 - 64 + 88;
  v126 = v2 - 64 + 552;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, unsigned __int64 *, _QWORD))(v11 + 24))(
          v126,
          v9,
          v137,
          v8,
          v10,
          &v146,
          0LL);
  if ( v12 < 0 )
  {
    v17 = 1;
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v145 = v10;
      v119 = v12;
      sub_180063424(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009AA6C,
        v107,
        v108,
        (__int64)&v119,
        (__int64)&v145);
      v14 = v126;
      v128 = v121;
      v16 = v121;
LABEL_26:
      v17 = 1;
      goto LABEL_27;
    }
    v14 = v126;
  }
  else
  {
    v13 = v8;
    v14 = v126;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64 *))(v11 + 96))(
            v126,
            v9,
            v137,
            v13,
            v10,
            &v131);
    if ( v12 >= 0 )
    {
      v15 = v131 << 12;
      v128 = v131 << 12;
      if ( is_mul_ok(v131, 0x1000uLL) )
      {
        v12 = 0;
      }
      else
      {
        v15 = -1LL;
        v12 = -1073741675;
        v128 = -1LL;
      }
      v131 = v15;
      v16 = v146;
      goto LABEL_26;
    }
    v17 = 1;
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v143 = v10;
      v120 = v12;
      sub_180063424(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009AA25,
        v109,
        v110,
        (__int64)&v120,
        (__int64)&v143);
      v128 = v121;
      v16 = v121;
      goto LABEL_26;
    }
  }
  v128 = v121;
  v16 = v121;
LABEL_27:
  v122 = v16;
  if ( v12 < 0 )
  {
    v43 = v156;
    goto LABEL_69;
  }
  v117 = v17;
  v121 = 0LL;
  *(_OWORD *)v123 = 0LL;
  v124 = 0LL;
  v18 = 0LL;
  P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v22 = -1073741801;
    goto LABEL_45;
  }
  v20 = v137;
  while ( 1 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v2 - 16) + 40LL) + 72LL))(
            v14,
            *(unsigned int *)(v2 + 556),
            v20,
            *(unsigned int *)(v2 + 560),
            *(_QWORD *)(v2 - 32),
            Heap,
            &v117);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v18 = Heap;
      P = Heap;
      v23 = v117;
      goto LABEL_32;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v21 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v117);
    if ( !Heap )
    {
      v23 = v119;
      v22 = -1073741801;
      goto LABEL_32;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v23 = v119;
LABEL_32:
  if ( v22 < 0 )
  {
    v25 = v123[0];
    goto LABEL_226;
  }
  if ( !v23 )
  {
    v27 = (unsigned int *)v123[1];
    ProcessHandle = 0LL;
    v25 = v123[0];
    v31 = (unsigned int)v124;
LABEL_42:
    v22 = 0;
    goto LABEL_43;
  }
  v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v23);
  v123[0] = v24;
  v25 = v24;
  if ( !v24 )
  {
    v22 = -1073741801;
LABEL_226:
    v27 = (unsigned int *)v123[1];
    goto LABEL_227;
  }
  memset(v24, 0, 8 * v23);
  v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v23);
  v123[1] = v26;
  v27 = (unsigned int *)v26;
  if ( v26 )
  {
    memset(v26, 0, 4 * v23);
    ProcessHandle = 0LL;
    v25 = v123[0];
    v28 = v18;
    v29 = v126;
    v30 = v23;
    v31 = (unsigned int)v124;
    do
    {
      v125 = *v28;
      ClientId.UniqueProcess = (HANDLE)v125;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(v139 + 48) + 40LL)
                                                                                                 + 80LL))(
               v29,
               *(unsigned int *)(v139 + 620),
               v139 + 88,
               *(unsigned int *)(v139 + 624),
               *(_QWORD *)(v139 + 32),
               ProcessHandle) )
        {
          v25[v31] = ProcessHandle;
          v27[v31] = v125;
          v31 = (unsigned int)(v31 + 1);
        }
        else
        {
          NtClose(ProcessHandle);
        }
      }
      v28 += 2;
      --v30;
    }
    while ( v30 );
    v2 = v129;
    v18 = (unsigned int *)P;
    LODWORD(v124) = v31;
    goto LABEL_42;
  }
  v25 = v123[0];
  v22 = -1073741801;
LABEL_227:
  v31 = (unsigned int)v124;
LABEL_43:
  if ( v18 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_45:
    v25 = v123[0];
    v27 = (unsigned int *)v123[1];
    v31 = (unsigned int)v124;
  }
  if ( v22 >= 0 )
  {
    if ( (_DWORD)v31 )
    {
      v32 = v139;
      v33 = v27;
      v34 = (unsigned int)v31;
      v35 = v25;
      do
      {
        sub_1800337A4(v32, *v35++, *v33++, &v121);
        --v34;
      }
      while ( v34 );
      v2 = v129;
      v27 = (unsigned int *)v123[1];
    }
    v22 = 0;
  }
  if ( (_DWORD)v31 )
  {
    v36 = (HANDLE *)v25;
    do
    {
      NtClose(*v36++);
      --v31;
    }
    while ( v31 );
  }
  if ( v25 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v123[0]);
    v27 = (unsigned int *)v123[1];
  }
  if ( v27 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v123[1]);
  if ( v22 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v38 = v2 - 64;
      v152 = *(_QWORD *)(v2 - 32);
      v130 = v22;
      sub_180063424(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009EF0E,
        v111,
        v112,
        (__int64)&v130,
        (__int64)&v152);
    }
    else
    {
      v38 = v2 - 64;
    }
    v37 = 0LL;
    v121 = 0LL;
  }
  else
  {
    v37 = v121;
    v38 = v2 - 64;
  }
  v39 = v122;
  v40 = v122;
  if ( v37 < v122 )
    v40 = v37;
  v41 = v122 - v40;
  if ( v122 && v41 <= 1 )
    v41 = 1LL;
  v42 = v128;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v125 = *(_DWORD *)(v38 + 624);
    v134 = v38 + 88;
    v135 = *(_QWORD *)(v38 + 32);
    v140 = v37;
    v141 = v128;
    v142 = v122;
    v133 = v41 + v128;
    sub_18006A7AC(v41, &unk_18009C3A1);
  }
  v43 = v39 + v42;
LABEL_69:
  v122 = v43;
  v44 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v45 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v45 |= 2uLL;
    ++v45[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *(_DWORD *)(v2 + 8) = GetCurrentThreadId();
  v46 = *(_QWORD *)(v2 + 648);
  if ( (v46 & 0x80000000000000LL) != 0 )
  {
    v46 &= ~0x80000000000000uLL;
    *(_QWORD *)(v2 + 848) = 0LL;
    *(_QWORD *)(v2 + 648) = v46;
    *(_QWORD *)(v2 + 856) = 0LL;
  }
  v47 = (v46 >> 54) & 1;
  if ( (v46 & 0x100000000000000LL) != 0 )
  {
    LODWORD(v47) = v47 | 2;
    *(_QWORD *)(v2 + 648) = v46 & 0xFEFFFFFFFFFFFFFFuLL;
  }
  sub_18001D590(v2, (unsigned int)v164, (unsigned int)&v161, (unsigned int)&v166, (__int64)&v136);
  v48 = -1LL;
  v49 = v162;
  v129 = v162;
  v133 = *((_QWORD *)&v161 + 1);
  v134 = v161;
  if ( v43 >= (unsigned __int64)v161 )
  {
    if ( v43 < *((_QWORD *)&v161 + 1) )
    {
      v51 = *((_QWORD *)&v161 + 1);
      v50 = v161;
    }
    else if ( v43 < (unsigned __int64)v162 )
    {
      v50 = *((_QWORD *)&v161 + 1);
      v51 = v162;
    }
    else
    {
      v50 = v162;
      v51 = -1LL;
    }
  }
  else
  {
    v50 = 0LL;
    v51 = v161;
  }
  v52 = *((_QWORD *)&v162 + 1);
  v53 = v43 >> 3;
  if ( (unsigned __int64)(*((_QWORD *)&v162 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    v53 = *((_QWORD *)&v162 + 1) >> 4;
  if ( v53 <= 0x1400000 )
    v53 = 20971520LL;
  v54 = v53 + v43 - 1;
  if ( v53 == 20971520 )
    v55 = v54 / 0x1400000;
  else
    v55 = v54 / v53;
  v56 = -1LL;
  if ( is_mul_ok(v55, v53) )
    v56 = v55 * v53;
  if ( (unsigned __int64)(*((_QWORD *)&v162 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && v56 > *((_QWORD *)&v162 + 1) )
  {
    v113 = v53 + *((_QWORD *)&v162 + 1) - 1LL;
    v114 = v113 / v53 * v53;
    v56 = -1LL;
    if ( is_mul_ok(v113 / v53, v53) )
      v56 = v114;
  }
  if ( v56 == -1LL || (v57 = v56 + v53, v56 + v53 < v56) )
    v57 = -1LL;
  if ( (unsigned __int64)(*((_QWORD *)&v162 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v115 = *((_QWORD *)&v162 + 1);
    if ( v56 < *((_QWORD *)&v162 + 1) )
      v115 = v56;
    v56 = v115;
    if ( *((_QWORD *)&v162 + 1) < v57 )
      v57 = *((_QWORD *)&v162 + 1);
  }
  v58 = 2 * v53;
  if ( 2 * v53 >= v56 )
    v58 = v56;
  v59 = v56 - v58;
  if ( v50 <= v59 )
    v50 = v59;
  if ( v43 <= *((_QWORD *)&v162 + 1) && v51 >= v57 )
    v51 = v57;
  v164[0] = v50;
  v164[1] = v51;
  if ( v51 != -1LL )
  {
    v60 = *(_QWORD *)(v2 + 968);
    if ( v60 <= v51 )
      v60 = v51;
    *(_QWORD *)(v2 + 968) = v60;
  }
  v61 = v136;
  if ( *(_QWORD *)(v2 + 688) )
  {
    v93 = (*(_QWORD *)(v2 + 648) & 0x400000000000000LL) != 0 && *(_QWORD *)(v2 + 1000) != v136;
    v117 = v93;
    v94 = sub_180006258(v2);
    if ( v94 && (*(_DWORD *)(v94 + 112) & 0x80000) != 0 )
    {
      if ( v96 != *(_QWORD *)(v2 + 1112) )
        v95 = 1;
      v117 = v95;
    }
    if ( *(_QWORD *)(v2 + 960) )
      v117 = 1;
  }
  else
  {
    v117 = 0;
  }
  v120 = (*(_QWORD *)(v2 + 888) > v49 || *(_QWORD *)(v2 + 896) > v52)
      && (*(_QWORD *)(v2 + 648) & 0x200000000000000LL) == 0;
  v135 = v168;
  *(_QWORD *)(v2 + 848) = v168;
  v136 = v167;
  *(_QWORD *)(v2 + 856) = v167;
  *(_QWORD *)(v2 + 1000) = v61;
  v62 = v161;
  v63 = v162;
  *(_OWORD *)(v2 + 872) = v161;
  *(_OWORD *)(v2 + 888) = v63;
  if ( v61 )
    v64 = *(_QWORD *)(v61 + 472);
  else
    v64 = v49;
  if ( v64 == *(_QWORD *)(v2 + 864) )
  {
    v119 = 0;
  }
  else
  {
    v119 = 1;
    *(_QWORD *)(v2 + 864) = v64;
  }
  if ( v49 == -1LL || (v98 = *(_QWORD *)(v2 + 952), v98 == -1) )
  {
    v65 = v48;
  }
  else
  {
    v99 = v49 + v98;
    v65 = v48;
    if ( v99 >= v49 )
      v65 = v99;
  }
  *(_QWORD *)(v2 + 936) = v65;
  v66 = *(_QWORD *)(v2 + 936);
  if ( v66 == -1LL || (v100 = *(_QWORD *)(v2 + 960), v100 == -1) )
  {
    v67 = v48;
  }
  else
  {
    v101 = v66 + v100;
    v67 = v48;
    if ( v101 >= v66 )
      v67 = v101;
  }
  *(_QWORD *)(v2 + 936) = v67;
  v68 = (__int64 *)(v2 + 904);
  v69 = *(_QWORD *)(v2 + 960);
  *(_OWORD *)(v2 + 904) = v62;
  *(_OWORD *)(v2 + 920) = v63;
  v70 = *(_QWORD *)(v2 + 928);
  if ( v70 == -1LL || v69 == -1 )
  {
    v71 = v48;
  }
  else
  {
    v71 = v48;
    if ( v70 + v69 >= v70 )
      v71 = v70 + v69;
  }
  *(_QWORD *)(v2 + 928) = v71;
  v72 = *(_QWORD *)(v2 + 920);
  if ( v72 == -1LL || v69 == -1 )
  {
    v73 = v48;
  }
  else
  {
    v73 = v48;
    if ( v72 + v69 >= v72 )
      v73 = v72 + v69;
  }
  *(_QWORD *)(v2 + 920) = v73;
  v74 = *(_QWORD *)(v2 + 912);
  if ( v74 == -1LL || v69 == -1 )
  {
    v75 = v48;
  }
  else
  {
    v75 = v48;
    if ( v74 + v69 >= v74 )
      v75 = v74 + v69;
  }
  *(_QWORD *)(v2 + 912) = v75;
  v76 = *v68;
  if ( *v68 != -1 && v69 != -1 && v76 + v69 >= v76 )
    v48 = v76 + v69;
  *v68 = v48;
  *(_QWORD *)(v2 + 648) &= ~0x40000000000000uLL;
  if ( dwTlsIndex != -1 )
  {
    v77 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v77 & 2) == 0 )
      __int2c();
    v6 = v77[2]-- == 1LL;
    if ( v6 )
      *v77 &= ~2uLL;
  }
  *(_DWORD *)(v2 + 8) = 0;
  RtlReleaseSRWLockExclusive(v2);
  v78 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v120 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v2 - 16) + 40LL) + 192LL))(
      *(_QWORD *)(v2 + 992),
      1LL);
    sub_1800093A0(v2, 0);
    *(_QWORD *)(v2 + 648) &= ~0x80000000000000uLL;
    sub_18000A110(v2);
    sub_18002A9B4(v2, *(unsigned int *)(v78 + 948), *(_QWORD *)(v2 + 992));
    if ( (unsigned int)dword_1800B3218 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
      {
        v147 = v136;
        v148 = v135;
        v151[0] = *(_QWORD *)(v2 - 32);
        v149 = v49;
        v150 = v52;
        sub_1800671F0(
          (unsigned int)&dword_1800B3218,
          (unsigned int)&unk_1800A1065,
          v102,
          v103,
          (__int64)v151,
          (__int64)&v150,
          (__int64)&v149,
          (__int64)&v148,
          (__int64)&v147);
      }
    }
  }
  if ( v43 >= v134 )
  {
    if ( v43 < v133 )
    {
      v79 = 2;
    }
    else
    {
      v79 = 4;
      if ( v122 < v49 )
        v79 = 3;
    }
  }
  else
  {
    v79 = 1;
  }
  v80 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v81 = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v80) )
      __int2c();
    *v81 |= 1uLL;
    ++v81[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  CurrentThreadId = GetCurrentThreadId();
  v83 = v122;
  dword_1800B4218 = CurrentThreadId;
  if ( v79 >= 4 )
    sub_180029FD0(v2 - 64, v122, v129);
  v84 = sub_180017A10((_DWORD *)(v2 - 64), (unsigned __int8 *)v164, v47);
  v85 = v84;
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 584) & 1) != 0 )
    goto LABEL_252;
  if ( v84 < 0 )
  {
    sub_180085678();
LABEL_252:
    if ( v85 < 0 )
    {
      sub_18000F390();
      sub_18000506C(v2, 3u, 4865, 0LL, 0, 0);
      sub_18001E380(v116);
    }
  }
  v86 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v87 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v86) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v87 |= 2uLL;
    ++v87[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  v88 = GetCurrentThreadId();
  v90 = v129;
  *(_DWORD *)(v2 + 8) = v88;
  v91 = *(_QWORD *)(v2 + 1304);
  if ( (v90 != v91 || v119)
    && (int)sub_18002D52C(*(_QWORD *)(*(_QWORD *)(v2 - 16) + 2720LL), (int)v2 + 24, v91, v90, *(_QWORD *)(v2 + 864)) >= 0 )
  {
    *(_QWORD *)(v2 + 1304) = v90;
  }
  v92 = *(unsigned int *)(v2 + 1312);
  if ( (_DWORD)v92 != v79 )
  {
    if ( (unsigned int)dword_1800B3218 > 4
      && (byte_1800B3228 & 0x40) != 0
      && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    {
      v151[1] = v164[2];
      v151[4] = *(_QWORD *)(v2 - 32);
      v132 = *(_DWORD *)(v2 + 560);
      v151[5] = v2 + 24;
      v151[2] = v90;
      v151[3] = v83;
      v118 = v79;
      sub_18007C528(v89, &unk_1800A10D2);
      v92 = *(unsigned int *)(v2 + 1312);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(v78 + 784) + 32LL))(
      *(_QWORD *)(v78 + 784),
      v2 - 64,
      v92,
      v79);
    *(_DWORD *)(v2 + 1312) = v79;
  }
  if ( v117 )
  {
    v105 = (char *)sub_18002AA58(v2);
    if ( v105 )
    {
      sub_18000A110(v2);
      sub_18000F390();
      sub_180017F60(v105);
      sub_18001E380(v106);
      sub_1800093A0(v2, 0);
    }
  }
  return 1LL;
}
