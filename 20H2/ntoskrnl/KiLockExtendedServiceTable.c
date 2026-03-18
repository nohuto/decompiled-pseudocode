/*
 * XREFs of KiLockExtendedServiceTable @ 0x1403DB558
 * Callers:
 *     KiLockServiceTable @ 0x14039F554 (KiLockServiceTable.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     RtlpConvertFunctionEntry @ 0x1402E6500 (RtlpConvertFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x1402FEEF0 (RtlPcToFileHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x140371DB0 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  ULONG_PTR v6; // r13
  _KPROCESS *CurrentProcess; // rax
  signed __int32 SessionId; // r8d
  unsigned __int128 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r10
  const char *v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r11
  _QWORD *v28; // r9
  char v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned int v38; // ebx
  unsigned __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  PVOID *v41; // rdx
  ULONG_PTR v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // r13
  __int64 v46; // rax
  char *v47; // r9
  int v48; // r11d
  int v49; // ecx
  __int16 v50; // ax
  int v51; // r10d
  char *v52; // rdx
  char v53; // cl
  char v54; // al
  char *v55; // r8
  unsigned int v56; // edx
  char *v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // cl
  char v61; // al
  char *v62; // rdx
  int v63; // r10d
  char v64; // cl
  char v65; // al
  char *v66; // rdx
  int v67; // r10d
  char v68; // cl
  char v69; // al
  unsigned int v70; // r10d
  char v71; // r14
  _QWORD *v72; // r12
  _QWORD *v73; // r11
  unsigned __int64 v74; // rcx
  const char *v75; // rax
  ULONG_PTR v76; // r8
  unsigned int v77; // r15d
  __int64 v78; // rax
  ULONG_PTR v79; // r8
  _QWORD *v80; // r11
  __int64 v81; // r8
  ULONG_PTR v82; // rcx
  char v83; // al
  int v84; // eax
  unsigned int v85; // r10d
  unsigned __int64 v86; // rax
  ULONG_PTR v87; // rax
  int v88; // r8d
  __int64 v89; // rdx
  unsigned __int64 v90; // r13
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r12
  __int64 v94; // r15
  __int64 v95; // rax
  unsigned __int64 v96; // r14
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 *v100; // rax
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // r13
  __int64 v103; // rbx
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  char v107; // r11
  __int64 v108; // rcx
  unsigned int v109; // r9d
  _QWORD *v110; // r12
  unsigned __int64 v111; // rcx
  _QWORD *v112; // r10
  const char *v113; // rax
  __int64 *v114; // r8
  unsigned int v115; // r15d
  __int64 v116; // rax
  unsigned __int64 v117; // r8
  _QWORD *v118; // r10
  __int64 v119; // r8
  unsigned __int64 v120; // rcx
  char v121; // al
  int v122; // eax
  unsigned int v123; // r9d
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int64 v126; // rax
  signed __int32 v128[6]; // [rsp+8h] [rbp-D9h] BYREF
  __int64 v129; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v130; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v131; // [rsp+48h] [rbp-99h]
  __int64 v132; // [rsp+50h] [rbp-91h]
  unsigned __int64 v133; // [rsp+58h] [rbp-89h]
  __int64 v134; // [rsp+60h] [rbp-81h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-79h]
  unsigned int *v136; // [rsp+70h] [rbp-71h] BYREF
  __int128 v137; // [rsp+78h] [rbp-69h]
  __int128 v138; // [rsp+88h] [rbp-59h]
  __int64 v139; // [rsp+A0h] [rbp-41h] BYREF
  unsigned __int64 v140; // [rsp+B0h] [rbp-31h]
  __int64 v141; // [rsp+B8h] [rbp-29h]
  __int64 *v142; // [rsp+C0h] [rbp-21h]
  __int64 v143; // [rsp+E8h] [rbp+7h]
  __int64 v144; // [rsp+F0h] [rbp+Fh]
  __int64 v145; // [rsp+F8h] [rbp+17h]
  char v148; // [rsp+160h] [rbp+7Fh]
  int v149; // [rsp+160h] [rbp+7Fh]

  v148 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    if ( dword_140C0F158 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_140C0F158, SessionId, -1), (_DWORD)v9 == -1) )
    {
      v10 = 4 * v4;
      v11 = ((unsigned __int64)&qword_140C12EC0 ^ qword_140C12EC8) & 0x3F;
      v12 = v6 + (unsigned int)(4 * v4);
      v13 = (_QWORD *)v6;
      v14 = (const char *)v6;
      if ( v6 < v12 )
      {
        do
        {
          _mm_prefetch(v14, 0);
          v14 += 64;
        }
        while ( (unsigned __int64)v14 < v12 );
      }
      v15 = v10 >> 7;
      v16 = (unsigned __int64)&qword_140C12EC0 ^ qword_140C12EC8;
      if ( v10 >> 7 )
      {
        do
        {
          v17 = 8LL;
          do
          {
            v18 = v16 ^ *v13;
            v19 = v13 + 1;
            v20 = *v19;
            v13 = v19 + 1;
            v16 = __ROL8__(__ROL8__(v18, v11) ^ v20, v11);
            --v17;
          }
          while ( v17 );
          v21 = __ROL8__((unsigned __int64)&qword_140C12EC0 ^ qword_140C12EC8 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_140C12EC0 ^ qword_140C12EC8 ^ ((unsigned __int64)v13 - v6);
          v143 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v22 = v11 ^ v143 ^ v21;
          LOBYTE(v11) = 1;
          v23 = v22 & 0x3F;
          if ( v23 )
            LOBYTE(v11) = v23;
          --v15;
        }
        while ( v15 );
        v5 = v148;
      }
      v24 = v10 & 0x7F;
      if ( v24 >= 8 )
      {
        v25 = (unsigned __int64)v24 >> 3;
        do
        {
          v16 = __ROL8__(*v13++ ^ v16, v11);
          v24 -= 8;
          --v25;
        }
        while ( v25 );
      }
      for ( ; v24; --v24 )
      {
        v26 = *(unsigned __int8 *)v13;
        v13 = (_QWORD *)((char *)v13 + 1);
        v16 = __ROL8__(v26 ^ v16, v11);
      }
      v27 = v16 ^ qword_140C12EC0;
      BugCheckParameter3 = v4;
      v28 = (_QWORD *)a2;
      v29 = (v16 ^ qword_140C12EC0) & 0x3F;
      *(_QWORD *)&v9 = a2;
      if ( a2 < a2 + v4 )
      {
        do
        {
          _mm_prefetch((const char *)v9, 0);
          *(_QWORD *)&v9 = v9 + 64;
        }
        while ( (unsigned __int64)v9 < a2 + v4 );
      }
      v30 = v16 ^ qword_140C12EC0;
      v31 = (unsigned int)v4 >> 7;
      if ( (unsigned int)v4 >> 7 )
      {
        do
        {
          v32 = 8LL;
          do
          {
            v33 = v30 ^ *v28;
            v34 = v28 + 1;
            v35 = *v34;
            v28 = v34 + 1;
            v30 = __ROL8__(__ROL8__(v33, v29) ^ v35, v29);
            --v32;
          }
          while ( v32 );
          v36 = __ROL8__(v27 ^ ((unsigned __int64)v28 - a2), 17) ^ v27 ^ ((unsigned __int64)v28 - a2);
          v144 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v37 = v29 ^ v144 ^ v36;
          v29 = 1;
          *(_QWORD *)&v9 = v37 & 0x3F;
          if ( (_DWORD)v9 )
            v29 = v9;
          --v31;
        }
        while ( v31 );
        v5 = v148;
        v6 = BugCheckParameter1;
      }
      v38 = v4 & 0x7F;
      if ( v38 >= 8 )
      {
        v39 = (unsigned __int64)v38 >> 3;
        do
        {
          v30 = __ROL8__(*v28++ ^ v30, v29);
          v38 -= 8;
          --v39;
        }
        while ( v39 );
      }
      for ( ; v38; --v38 )
      {
        *(_QWORD *)&v9 = *(unsigned __int8 *)v28;
        v28 = (_QWORD *)((char *)v28 + 1);
        v30 = __ROL8__(v9 ^ v30, v29);
      }
      v40 = v6 ^ v30 ^ BugCheckParameter3;
      if ( (v5 & 2) != 0 )
      {
        qword_140C12EC8 = v6 ^ v30 ^ BugCheckParameter3;
      }
      else
      {
        v41 = (PVOID *)PsLoadedModuleList;
        if ( PsLoadedModuleList == &PsLoadedModuleList )
          goto LABEL_141;
        while ( 1 )
        {
          v42 = (ULONG_PTR)v41[6];
          if ( v6 >= v42 && v6 < v42 + *((unsigned int *)v41 + 16) )
            break;
          v41 = (PVOID *)*v41;
          if ( v41 == &PsLoadedModuleList )
            goto LABEL_141;
        }
        if ( !v42 )
LABEL_141:
          KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
        v149 = 0;
        v43 = 0LL;
        qword_140C12FC0[0] = (__int64)v41[6];
        v134 = 0LL;
        do
        {
          v44 = qword_140C12FC0[v43];
          v130 = v44;
          if ( !v44 )
            break;
          v45 = v40 & 0x3F;
          LODWORD(v132) = v40 & 0x3F;
          v46 = RtlImageNtHeader(v44);
          v131 = v46;
          if ( !v46 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v47 = (char *)(v46 + *(unsigned __int16 *)(v46 + 20) + 24LL);
          v133 = (unsigned __int64)&v47[40 * *(unsigned __int16 *)(v46 + 6)];
          do
          {
            v48 = 0;
            if ( (*((_DWORD *)v47 + 9) & 0x2000000) != 0
              || (v49 = *(_DWORD *)v47, *(_DWORD *)v47 == 1414090313) && *((_DWORD *)v47 + 1) == 1195525195
              || v49 == 1162297680 && ((v50 = *((_WORD *)v47 + 2), v50 == 30839) || v50 == 29303 || v50 == 30583)
              || v49 == 1095914053 && *((_WORD *)v47 + 2) == 16724 )
            {
LABEL_72:
              v48 = 1;
            }
            else
            {
              v51 = 7;
              v52 = VfExcludeSections[0];
              v137 = *(_OWORD *)VfExcludeSections;
              v138 = *(_OWORD *)off_140C0EFE0;
              while ( 1 )
              {
                v53 = v52[v47 - VfExcludeSections[0]];
                v54 = *v52++;
                if ( v53 != v54 )
                  break;
                if ( !--v51 )
                  goto LABEL_72;
              }
              v55 = (char *)*((_QWORD *)&v137 + 1);
              v56 = 8;
              v57 = v47;
              while ( 1 )
              {
                v58 = *(_QWORD *)v57;
                v57 += 8;
                v59 = *(_QWORD *)v55;
                v55 += 8;
                if ( v58 != v59 )
                  break;
                v56 -= 8;
                if ( v56 < 8 )
                {
                  if ( !v56 )
                    goto LABEL_72;
                  while ( 1 )
                  {
                    v60 = *v57++;
                    v61 = *v55++;
                    if ( v60 != v61 )
                      goto LABEL_65;
                    if ( !--v56 )
                      goto LABEL_72;
                  }
                }
              }
LABEL_65:
              v62 = (char *)v138;
              v63 = 4;
              while ( 1 )
              {
                v64 = v47[(_QWORD)v62 - v138];
                v65 = *v62++;
                if ( v64 != v65 )
                  break;
                if ( !--v63 )
                  goto LABEL_72;
              }
              v66 = (char *)*((_QWORD *)&v138 + 1);
              v67 = 6;
              while ( 1 )
              {
                v68 = v47[(_QWORD)v66 - *((_QWORD *)&v138 + 1)];
                v69 = *v66++;
                if ( v68 != v69 )
                  break;
                if ( !--v67 )
                  goto LABEL_72;
              }
            }
            v70 = *((_DWORD *)v47 + 4);
            if ( *((int *)v47 + 9) < 0 )
              v48 = 1;
            if ( !v48 )
            {
              v71 = v45;
              if ( v70 <= *((_DWORD *)v47 + 2) )
                v70 = *((_DWORD *)v47 + 2);
              v72 = (_QWORD *)(v130 + *((unsigned int *)v47 + 3));
              v73 = v72;
              v74 = (unsigned __int64)v72 + v70;
              v75 = (const char *)v72;
              if ( (unsigned __int64)v72 < v74 )
              {
                do
                {
                  _mm_prefetch(v75, 0);
                  v75 += 64;
                }
                while ( (unsigned __int64)v75 < v74 );
              }
              v76 = v40;
              v77 = v70 >> 7;
              if ( v70 >> 7 )
              {
                do
                {
                  v78 = 8LL;
                  do
                  {
                    v79 = *v73 ^ v76;
                    v80 = v73 + 1;
                    v81 = *v80 ^ __ROL8__(v79, v71);
                    v73 = v80 + 1;
                    v76 = __ROL8__(v81, v71);
                    --v78;
                  }
                  while ( v78 );
                  v82 = __ROL8__(v40 ^ ((char *)v73 - (char *)v72), 17) ^ v40 ^ ((char *)v73 - (char *)v72);
                  v145 = (v82 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v83 = v71 ^ v145 ^ v82;
                  v71 = 1;
                  v84 = v83 & 0x3F;
                  if ( v84 )
                    v71 = v84;
                  --v77;
                }
                while ( v77 );
                v45 = v132;
              }
              v85 = v70 & 0x7F;
              if ( v85 >= 8 )
              {
                v86 = (unsigned __int64)v85 >> 3;
                do
                {
                  v76 = __ROL8__(*v73++ ^ v76, v71);
                  v85 -= 8;
                  --v86;
                }
                while ( v86 );
              }
              for ( ; v85; --v85 )
              {
                v87 = v76 ^ *(unsigned __int8 *)v73;
                v73 = (_QWORD *)((char *)v73 + 1);
                v76 = __ROL8__(v87, v71);
              }
              v40 = v76;
            }
            v47 += 40;
          }
          while ( v47 != (char *)v133 );
          v88 = v149;
          if ( !v149 )
          {
            v89 = v131;
            v90 = v130;
            v91 = *(unsigned int *)(v131 + 148);
            if ( (unsigned int)v91 >= 0x14 )
            {
              v92 = *(unsigned int *)(v131 + 144);
              v93 = v92 + v91 + v130;
              v94 = v92 + v130;
              if ( v92 + v130 != v93 )
              {
                do
                {
                  if ( !*(_DWORD *)(v94 + 12) )
                    break;
                  v95 = *(unsigned int *)(v94 + 16);
                  if ( !(_DWORD)v95 )
                    break;
                  v96 = *(_QWORD *)(v95 + v90);
                  if ( v96 && (v96 < v90 || v96 >= v90 + *(unsigned int *)(v89 + 80)) )
                  {
                    if ( MmIsSessionAddress(v96) )
                    {
                      RtlPcToFileHeader(v96, &v130, v97, v98);
                      if ( v130 )
                      {
                        v99 = 0LL;
                        v100 = qword_140C12FC0;
                        while ( *v100 != v130 )
                        {
                          if ( !*v100 )
                          {
                            qword_140C12FC0[v99] = v130;
                            break;
                          }
                          v99 = (unsigned int)(v99 + 1);
                          ++v100;
                          if ( (unsigned int)v99 >= 0x10 )
                            break;
                        }
                        if ( (_DWORD)v99 == 16 )
                          goto LABEL_115;
                      }
                    }
                    v89 = v131;
                  }
                  v94 += 20LL;
                }
                while ( v94 != v93 );
                v88 = 0;
              }
            }
          }
          v43 = v134 + 1;
          v149 = v88 + 1;
          ++v134;
        }
        while ( (unsigned int)(v88 + 1) < 0x10 );
LABEL_115:
        *(_QWORD *)&v9 = memset(qword_140C12FC0, 0, sizeof(qword_140C12FC0));
        if ( v40 == qword_140C12EC0 || !v40 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v40 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v128, 0);
        qword_140C12EC0 = v40;
      }
    }
  }
  else
  {
    v101 = (unsigned __int64)&qword_140C12ED0;
    v102 = (unsigned __int64)&qword_140C12ED0 & 0x3F;
    v133 = (unsigned __int64)&qword_140C12ED0 & 0x3F;
    RtlImageNtHeader(0x140000000LL);
    RtlCaptureImageExceptionValues(0x40000000, &v139, &v129);
    v103 = v139;
    v104 = 0x140000000uLL;
    LODWORD(v129) = (unsigned int)v129 / 0xC;
    v140 = 0x140000000uLL;
    v105 = v139 + 12LL * (unsigned int)v129;
    v141 = v105;
    v142 = (__int64 *)&v136;
    while ( v103 && v103 != v105 )
    {
      v106 = RtlpConvertFunctionEntry(v103, v104);
      v107 = v102;
      *v142 = v106;
      v103 = v139 + 12;
      v139 += 12LL;
      v108 = *v136;
      v109 = v136[1] - v108;
      v110 = (_QWORD *)(0x140000000LL + v108);
      v111 = 0x140000000LL + v108 + v109;
      v112 = v110;
      v113 = (const char *)v110;
      if ( (unsigned __int64)v110 < v111 )
      {
        do
        {
          _mm_prefetch(v113, 0);
          v113 += 64;
        }
        while ( (unsigned __int64)v113 < v111 );
      }
      v114 = (__int64 *)v101;
      v115 = v109 >> 7;
      if ( v109 >> 7 )
      {
        do
        {
          v116 = 8LL;
          do
          {
            v117 = *v112 ^ (unsigned __int64)v114;
            v118 = v112 + 1;
            v119 = *v118 ^ __ROL8__(v117, v107);
            v112 = v118 + 1;
            v114 = (__int64 *)__ROL8__(v119, v107);
            --v116;
          }
          while ( v116 );
          v120 = __ROL8__(v101 ^ ((char *)v112 - (char *)v110), 17) ^ v101 ^ ((char *)v112 - (char *)v110);
          v121 = v107 ^ ((v120 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v120;
          v107 = 1;
          v122 = v121 & 0x3F;
          if ( v122 )
            v107 = v122;
          --v115;
        }
        while ( v115 );
        LOBYTE(v102) = v133;
      }
      v123 = v109 & 0x7F;
      if ( v123 >= 8 )
      {
        v124 = (unsigned __int64)v123 >> 3;
        do
        {
          v114 = (__int64 *)__ROL8__(*v112++ ^ (unsigned __int64)v114, v107);
          v123 -= 8;
          --v124;
        }
        while ( v124 );
      }
      for ( ; v123; --v123 )
      {
        v125 = *(unsigned __int8 *)v112;
        v112 = (_QWORD *)((char *)v112 + 1);
        v114 = (__int64 *)__ROL8__(v125 ^ (unsigned __int64)v114, v107);
      }
      v105 = v141;
      v104 = v140;
      v101 = (unsigned __int64)v114;
    }
    qword_140C12ED0 = v101;
    if ( qword_140C12EC0 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v126 = __rdtsc();
    v9 = (__ROR8__(v126, 3) ^ v126) * (unsigned __int128)0x7010008004002001uLL;
    qword_140C12EC0 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_140C12EC0 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
