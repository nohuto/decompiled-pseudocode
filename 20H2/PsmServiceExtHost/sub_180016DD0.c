/*
 * XREFs of sub_180016DD0 @ 0x180016DD0
 * Callers:
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_180014F00 @ 0x180014F00 (sub_180014F00.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_180016A20 @ 0x180016A20 (sub_180016A20.c)
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     sub_180023288 @ 0x180023288 (sub_180023288.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_1800337A4 @ 0x1800337A4 (sub_1800337A4.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 *     sub_180071D9C @ 0x180071D9C (sub_180071D9C.c)
 *     sub_180071F28 @ 0x180071F28 (sub_180071F28.c)
 *     sub_1800725E0 @ 0x1800725E0 (sub_1800725E0.c)
 */

__int64 __fastcall sub_180016DD0(_QWORD *a1, int a2, _BYTE *a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r15
  int v5; // r14d
  __int64 v6; // rsi
  unsigned int *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  unsigned int *Heap; // rdi
  __int64 v20; // rdx
  __int64 v21; // r10
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // edi
  PVOID v25; // rax
  _QWORD *v26; // r14
  PVOID v27; // rax
  unsigned int *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  unsigned int *v33; // r12
  HANDLE *v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r12d
  __int64 v38; // rbx
  _QWORD *v39; // rdi
  int v40; // ebx
  int v41; // r8d
  int v42; // r9d
  char v43; // di
  char v44; // r14
  _QWORD *i; // rbx
  _QWORD *v46; // rax
  _QWORD *v47; // r14
  __int64 v48; // r8
  int v49; // r9d
  _QWORD *v50; // rcx
  int v51; // edi
  __int64 v52; // r11
  unsigned __int16 v53; // bx
  __int64 v54; // r11
  unsigned __int16 v56; // ax
  unsigned int v57; // ebx
  unsigned int v58; // edx
  _QWORD *v59; // rdi
  PVOID ProcessHeap; // rcx
  unsigned int *v62; // rax
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  _QWORD *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  int v71; // edx
  __int64 v72; // rcx
  int v73; // r8d
  int v74; // r9d
  __int64 v75; // rcx
  char v76; // r14
  char v77; // di
  bool v78; // zf
  _QWORD *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  char v82; // [rsp+60h] [rbp-A0h] BYREF
  char v83; // [rsp+61h] [rbp-9Fh] BYREF
  char v84; // [rsp+62h] [rbp-9Eh] BYREF
  char v85; // [rsp+63h] [rbp-9Dh] BYREF
  char v86; // [rsp+64h] [rbp-9Ch] BYREF
  char v87; // [rsp+65h] [rbp-9Bh] BYREF
  char v88[2]; // [rsp+66h] [rbp-9Ah] BYREF
  int v89; // [rsp+68h] [rbp-98h]
  PVOID v90[2]; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+80h] [rbp-80h]
  unsigned int v92; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v93; // [rsp+90h] [rbp-70h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-60h] BYREF
  int v96; // [rsp+A8h] [rbp-58h] BYREF
  int v97; // [rsp+ACh] [rbp-54h] BYREF
  int v98; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-30h]
  _QWORD *v102; // [rsp+D8h] [rbp-28h]
  _BYTE *v103; // [rsp+E0h] [rbp-20h]
  PVOID P; // [rsp+E8h] [rbp-18h]
  _QWORD *v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v107; // [rsp+100h] [rbp+0h]
  __int128 v108; // [rsp+110h] [rbp+10h]
  __int64 v109; // [rsp+120h] [rbp+20h] BYREF
  __int64 v110; // [rsp+128h] [rbp+28h] BYREF
  __int64 v111; // [rsp+130h] [rbp+30h] BYREF
  __int64 v112; // [rsp+138h] [rbp+38h] BYREF
  __int64 v113; // [rsp+140h] [rbp+40h] BYREF
  __int64 v114; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v115; // [rsp+150h] [rbp+50h] BYREF
  __int64 v116; // [rsp+158h] [rbp+58h] BYREF
  __int64 v117; // [rsp+160h] [rbp+60h] BYREF
  _CLIENT_ID ClientId; // [rsp+168h] [rbp+68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v120[128]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v121; // [rsp+230h] [rbp+130h] BYREF
  __int128 v122; // [rsp+240h] [rbp+140h]
  __int128 v123; // [rsp+250h] [rbp+150h]
  __int128 v124; // [rsp+260h] [rbp+160h]
  __int128 v125; // [rsp+270h] [rbp+170h]
  _QWORD v126[30]; // [rsp+280h] [rbp+180h] BYREF
  _OWORD v127[5]; // [rsp+370h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 *v129; // [rsp+3E0h] [rbp+2E0h]
  __int64 v130; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v131; // [rsp+3F0h] [rbp+2F0h]
  __int64 v132; // [rsp+3F8h] [rbp+2F8h]
  __int64 *v133; // [rsp+400h] [rbp+300h]
  __int64 v134; // [rsp+408h] [rbp+308h]
  __int64 *v135; // [rsp+410h] [rbp+310h]
  __int64 v136; // [rsp+418h] [rbp+318h]
  __int64 *v137; // [rsp+420h] [rbp+320h]
  __int64 v138; // [rsp+428h] [rbp+328h]
  __int64 *v139; // [rsp+430h] [rbp+330h]
  __int64 v140; // [rsp+438h] [rbp+338h]

  v3 = (_QWORD *)a1[8];
  v4 = a1[165];
  v5 = a2;
  Block[0] = Block;
  v6 = (__int64)a1;
  v103 = a3;
  Block[1] = Block;
  v7 = 0LL;
  v8 = a1[3];
  v101 = 0LL;
  v89 = a2;
  v105 = a1;
  v9 = *(_QWORD *)(v8 + 128);
  v10 = a1[164];
  v102 = v3;
  v11 = *(_QWORD *)(v10 + 64);
  memset(v120, 0, sizeof(v120));
  memset(v126, 0, sizeof(v126));
  v12 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)((char *)v126 + 4) = -1LL;
  NtManagePartition(v12, 0LL, 0LL, v126, 240);
  *(_QWORD *)&v123 = 0LL;
  *((_QWORD *)&v121 + 1) = qword_1800B41B0 * v126[4] - qword_1800B41B0 * v126[28];
  *(_QWORD *)&v122 = qword_1800B41B0 * v126[3] - qword_1800B41B0 * v126[28];
  *((_QWORD *)&v122 + 1) = *((_QWORD *)&v121 + 1) - v122;
  *((_QWORD *)&v123 + 1) = qword_1800B41B0 * v126[6] - qword_1800B41B0 * v126[28];
  *(_QWORD *)&v121 = qword_1800B41B0 * v126[27] - qword_1800B41B0 * v126[28];
  v125 = (unsigned __int64)(v126[26] + v126[25] + v126[24] + v126[23] + v126[22] + v126[21] + v126[20] + v126[19]);
  *(_QWORD *)&v124 = qword_1800B41B0
                   * (v126[8] + v126[9] + v126[16] + v126[15] + v126[14] + v126[13] + v126[11] + v126[12]);
  *((_QWORD *)&v124 + 1) = *((_QWORD *)&v123 + 1) - v124;
  sub_1800176F0(
    v9 + 400,
    v9 + 456,
    (unsigned int)&v121,
    qword_1800B41B0 * LODWORD(v126[27]) - qword_1800B41B0 * LODWORD(v126[28]),
    (__int64)v120);
  v13 = 0LL;
  v14 = v122;
  v127[0] = v121;
  v15 = v123;
  *(_WORD *)(v11 + 188) = 0;
  v78 = (*(_BYTE *)(v6 + 1376) & 0x10) == 0;
  v127[2] = v15;
  v127[1] = v14;
  v127[4] = v125;
  v127[3] = v124;
  v99 = 0LL;
  if ( !v78
    || ((v16 = *(int *)(v6 + 1336), (unsigned int)v16 <= 0x28) && (v17 = 0x11000002000LL, _bittest64(&v17, v16))
      ? (v18 = 1)
      : (v18 = 0),
        v18) )
  {
    v18 = 1;
  }
  if ( v18 && (*(_BYTE *)(v6 + 1378) & 0x40) == 0 )
    goto LABEL_40;
  v92 = 1;
  v91 = 0LL;
  *(_OWORD *)v90 = 0LL;
  P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v23 = -1073741801;
    goto LABEL_24;
  }
  v20 = v4 + 88;
  v21 = v4 + 552;
  while ( 1 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL) + 72LL))(
            v21,
            *(unsigned int *)(v4 + 620),
            v20,
            *(unsigned int *)(v4 + 624),
            *(_QWORD *)(v4 + 32),
            Heap,
            &v92);
    v23 = v22;
    if ( v22 >= 0 )
    {
      v7 = Heap;
      P = Heap;
      v24 = v92;
      goto LABEL_11;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v22 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v62 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v92);
    v20 = v4 + 88;
    Heap = v62;
    v21 = v4 + 552;
    if ( !v62 )
    {
      v24 = v89;
      v23 = -1073741801;
      goto LABEL_11;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v24 = v89;
LABEL_11:
  if ( v23 < 0 )
  {
    v26 = v90[0];
    goto LABEL_92;
  }
  if ( !v24 )
  {
    v28 = (unsigned int *)v90[1];
    ProcessHandle = 0LL;
    v26 = v90[0];
    v30 = (unsigned int)v91;
LABEL_21:
    v23 = 0;
    goto LABEL_22;
  }
  v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v24);
  v90[0] = v25;
  v26 = v25;
  if ( !v25 )
  {
    v23 = -1073741801;
LABEL_92:
    v28 = (unsigned int *)v90[1];
    goto LABEL_93;
  }
  memset(v25, 0, 8 * v24);
  v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v24);
  v90[1] = v27;
  v28 = (unsigned int *)v27;
  if ( v27 )
  {
    memset(v27, 0, 4 * v24);
    ProcessHandle = 0LL;
    v26 = v90[0];
    v29 = v24;
    v30 = (unsigned int)v91;
    v95 = v29;
    do
    {
      v93 = *v7;
      ClientId.UniqueProcess = (HANDLE)v93;
      ClientId.UniqueThread = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL)
                                                                                                 + 80LL))(
               v4 + 552,
               *(unsigned int *)(v4 + 620),
               v4 + 88,
               *(unsigned int *)(v4 + 624),
               *(_QWORD *)(v4 + 32),
               ProcessHandle) )
        {
          v26[v30] = ProcessHandle;
          v28[v30] = v93;
          v30 = (unsigned int)(v30 + 1);
        }
        else
        {
          NtClose(ProcessHandle);
        }
      }
      v7 += 2;
      --v95;
    }
    while ( v95 );
    v7 = (unsigned int *)P;
    LODWORD(v91) = v30;
    goto LABEL_21;
  }
  v26 = v90[0];
  v23 = -1073741801;
LABEL_93:
  v30 = (unsigned int)v91;
LABEL_22:
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
LABEL_24:
    v26 = v90[0];
    v28 = (unsigned int *)v90[1];
    v30 = (unsigned int)v91;
  }
  if ( v23 >= 0 )
  {
    if ( (_DWORD)v30 )
    {
      v31 = v26;
      v32 = (unsigned int)v30;
      v33 = v28;
      do
      {
        sub_1800337A4(v4, *v31++, *v33++, &v99);
        --v32;
      }
      while ( v32 );
      v6 = (__int64)v105;
    }
    v23 = 0;
  }
  if ( (_DWORD)v30 )
  {
    v34 = (HANDLE *)v26;
    do
    {
      NtClose(*v34++);
      --v30;
    }
    while ( v30 );
  }
  if ( v26 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v90[0]);
    v28 = (unsigned int *)v90[1];
  }
  if ( v28 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v90[1]);
  if ( v23 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 )
    {
      v5 = v89;
      v3 = v102;
      goto LABEL_42;
    }
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v95 = *(_QWORD *)(v4 + 32);
      v93 = v23;
      sub_180063424(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009EF0E,
        v63,
        v64,
        (__int64)&v93,
        (__int64)&v95);
    }
  }
  v13 = v99;
  v5 = v89;
  v3 = v102;
LABEL_40:
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v65 = *(_QWORD *)(v6 + 1472);
    v66 = *(_QWORD *)(v6 + 1448);
    v67 = *(_QWORD *)(v6 + 1752);
    v116 = v3[16];
    v109 = *((_QWORD *)&v122 + 1);
    v139 = &v116;
    v137 = &v117;
    v135 = &v109;
    v133 = &v110;
    v131 = &v111;
    v129 = &v112;
    v117 = v65;
    v110 = v13;
    v111 = v66;
    v112 = v67;
    v140 = 8LL;
    v138 = 8LL;
    v136 = 8LL;
    v134 = 8LL;
    v132 = 8LL;
    v130 = 8LL;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009D219, 0, 0, 8u, &v128);
  }
LABEL_42:
  v35 = sub_180014E9C(*(_QWORD **)(v6 + 1312));
  v36 = *(_QWORD *)(v6 + 1312);
  v93 = v35;
  v37 = v35;
  v106 = v6;
  v107 = 0LL;
  v38 = *(_QWORD *)(v36 + 64);
  v108 = 0LL;
  while ( 1 )
  {
    v39 = Block[0];
    if ( Block[0] == Block )
      break;
    v68 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v69 = *(_QWORD *)Block[0];
    *v68 = *(_QWORD *)Block[0];
    *(_QWORD *)(v69 + 8) = v68;
    v70 = v39[2];
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    j_j_free(v39);
  }
  *(_QWORD *)&v107 = Block;
  v101 = 0LL;
  *(_QWORD *)&v108 = v38 + 144;
  *((_QWORD *)&v107 + 1) = v38;
  v40 = sub_180014F00(v6, v99, v5, (__int64)v120, v127, &v106, &v83, &v82);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v43 = v82;
    v44 = v83;
    v71 = *(_DWORD *)(v108 + 40);
    v72 = *(_QWORD *)(v107 + 16);
    v84 = BYTE12(v108);
    v85 = BYTE8(v108);
    v96 = v71;
    v97 = v72;
    v86 = v37;
    v87 = v82;
    v88[0] = v83;
    v98 = v40;
    sub_180071F28(
      v72,
      (unsigned int)&unk_18009D4A6,
      v41,
      v42,
      (__int64)&v98,
      (__int64)v88,
      (__int64)&v87,
      (__int64)&v86,
      (__int64)&v97,
      (__int64)&v96,
      (__int64)&v85,
      (__int64)&v84);
  }
  else
  {
    v43 = v82;
    v44 = v83;
  }
  if ( v40 >= 0 )
  {
    if ( v44 || v43 || v37 )
      LOBYTE(v37) = 1;
    for ( i = (_QWORD *)v3[5]; i != v3 + 5 && *(_DWORD *)(i[2] + 1288LL) < *(_DWORD *)(v6 + 1288); i = (_QWORD *)*i )
      ;
    v46 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_1800967D8);
    v47 = v46;
    if ( !v46 )
    {
      v40 = -2147024882;
      goto LABEL_73;
    }
    v46[2] = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v50 = (_QWORD *)i[1];
    v47[1] = v50;
    *v47 = i;
    *v50 = v47;
    i[1] = v47;
    ++v3[7];
    v51 = 0;
    if ( (_BYTE)v37 )
    {
      v57 = 1;
    }
    else
    {
      *(_DWORD *)(v6 + 1280) = 2;
      v52 = *(_QWORD *)(v4 + 1112);
      v53 = 102;
      if ( v52 != v4 + 1112 )
      {
        v54 = v52 - 1296;
        if ( v54 )
        {
          do
          {
            if ( *(_DWORD *)(v54 + 1280) == 2 || (*(_BYTE *)(v54 + 1332) & 4) != 0 )
            {
              v56 = sub_180016A20(v54);
              v53 = sub_180018940(v53, v56);
            }
            v48 = *(_QWORD *)(v54 + 1296);
            if ( v48 == *(_QWORD *)(v54 + 1320) + 8 * (3LL * *(int *)(v54 + 1328) + 139) )
              break;
            v54 = v48 - 1296;
          }
          while ( v48 != 1296 );
        }
      }
      *(_WORD *)(v4 + 1160) = v53;
      v57 = 1;
      sub_180016840(v4, 1, v48, v49);
      QueryUnbiasedInterruptTime((PULONGLONG)(v4 + 1456));
      v58 = *(_DWORD *)(*(_QWORD *)(v4 + 48) + 508LL);
      if ( ((v58 & 4) != 0 || (*(_BYTE *)(v4 + 1160) & 4) != 0 && (*(_BYTE *)(v4 + 1162) & 4) != 0)
        && ((*(_BYTE *)(v4 + 836) & 1) == 0 || (unsigned int)sub_180023288(v4 + 64, ((v58 >> 2) & 1) == 0))
        && (*(_BYTE *)(v4 + 1162) & 0x30) != 0 )
      {
        SetEvent(*(HANDLE *)(*(_QWORD *)(v4 + 56) + 88LL));
      }
      if ( (*(_BYTE *)(v4 + 836) & 1) != 0 )
      {
        v51 = 1;
      }
      else if ( v103 && (unsigned int)sub_180035480(v4) )
      {
        if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        {
          v75 = *(_QWORD *)(v4 + 32);
          v113 = *(_QWORD *)(v6 + 1752);
          v114 = v75;
          sub_18006A72C(
            (unsigned int)&dword_1800B31E0,
            (unsigned int)&unk_18009D5FA,
            v73,
            v74,
            (__int64)&v114,
            (__int64)&v113);
        }
        *(_DWORD *)(v6 + 1332) |= 4u;
        LOBYTE(v37) = 1;
      }
      *(_DWORD *)(v6 + 1280) = 1;
      if ( !(_BYTE)v37 )
      {
        sub_180015340(v6, v51);
LABEL_70:
        if ( v103 )
          *v103 = v37;
        v40 = 0;
        goto LABEL_73;
      }
    }
    RtlQueryUnbiasedInterruptTime(&v115);
    v76 = v83;
    v77 = v82;
    v78 = v93 == 0;
    *(_DWORD *)(v6 + 1760) = v115 / 0x2710;
    if ( v76 || v77 )
      v57 = 0;
    sub_1800725E0(v6, v57, v78);
    if ( v76 || v77 )
      sub_180071D9C(&v106);
    goto LABEL_70;
  }
LABEL_73:
  while ( 1 )
  {
    v59 = Block[0];
    if ( Block[0] == Block )
      break;
    v79 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v80 = *(_QWORD *)Block[0];
    *v79 = *(_QWORD *)Block[0];
    *(_QWORD *)(v80 + 8) = v79;
    v81 = v59[2];
    if ( v81 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    j_j_free(v59);
  }
  return (unsigned int)v40;
}
