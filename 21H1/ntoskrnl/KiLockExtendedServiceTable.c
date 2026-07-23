/*
 * XREFs of KiLockExtendedServiceTable @ 0x1403D7A88
 * Callers:
 *     KiLockServiceTable @ 0x14039BC74 (KiLockServiceTable.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     RtlPcToFileHeader @ 0x140311C70 (RtlPcToFileHeader.c)
 *     RtlpConvertFunctionEntry @ 0x14032E9A0 (RtlpConvertFunctionEntry.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
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
  void *v44; // rcx
  char v45; // r13
  PIMAGE_NT_HEADERS v46; // rax
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
  char *v72; // r12
  _QWORD *v73; // r11
  char *v74; // rcx
  const char *i; // rax
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
  PIMAGE_NT_HEADERS v89; // rdx
  char *v90; // r13
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  char *v93; // r12
  char *v94; // r15
  __int64 v95; // rax
  char *v96; // r14
  int v97; // eax
  __int64 v98; // rcx
  __int64 *v99; // rax
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // r13
  __int64 v102; // rbx
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  char v106; // r11
  __int64 v107; // rcx
  unsigned int v108; // r9d
  _QWORD *v109; // r12
  unsigned __int64 v110; // rcx
  _QWORD *v111; // r10
  const char *v112; // rax
  __int64 *v113; // r8
  unsigned int v114; // r15d
  __int64 v115; // rax
  unsigned __int64 v116; // r8
  _QWORD *v117; // r10
  __int64 v118; // r8
  unsigned __int64 v119; // rcx
  char v120; // al
  int v121; // eax
  unsigned int v122; // r9d
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  signed __int32 v127[6]; // [rsp+8h] [rbp-D9h] BYREF
  __int64 v128; // [rsp+38h] [rbp-A9h] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-A1h] BYREF
  PIMAGE_NT_HEADERS v130; // [rsp+48h] [rbp-99h]
  __int64 v131; // [rsp+50h] [rbp-91h]
  unsigned __int64 v132; // [rsp+58h] [rbp-89h]
  __int64 v133; // [rsp+60h] [rbp-81h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-79h]
  unsigned int *v135; // [rsp+70h] [rbp-71h] BYREF
  __int128 v136; // [rsp+78h] [rbp-69h]
  __int128 v137; // [rsp+88h] [rbp-59h]
  __int64 v138; // [rsp+A0h] [rbp-41h] BYREF
  unsigned __int64 v139; // [rsp+B0h] [rbp-31h]
  __int64 v140; // [rsp+B8h] [rbp-29h]
  __int64 *v141; // [rsp+C0h] [rbp-21h]
  __int64 v142; // [rsp+E8h] [rbp+7h]
  __int64 v143; // [rsp+F0h] [rbp+Fh]
  __int64 v144; // [rsp+F8h] [rbp+17h]
  char v147; // [rsp+160h] [rbp+7Fh]
  int v148; // [rsp+160h] [rbp+7Fh]

  v147 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    if ( dword_140C0F148 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_140C0F148, SessionId, -1), (_DWORD)v9 == -1) )
    {
      v10 = 4 * v4;
      v11 = ((unsigned __int64)&qword_140C12E80 ^ qword_140C12E88) & 0x3F;
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
      v16 = (unsigned __int64)&qword_140C12E80 ^ qword_140C12E88;
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
          v21 = __ROL8__((unsigned __int64)&qword_140C12E80 ^ qword_140C12E88 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_140C12E80 ^ qword_140C12E88 ^ ((unsigned __int64)v13 - v6);
          v142 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v22 = v11 ^ v142 ^ v21;
          LOBYTE(v11) = 1;
          v23 = v22 & 0x3F;
          if ( v23 )
            LOBYTE(v11) = v23;
          --v15;
        }
        while ( v15 );
        v5 = v147;
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
      v27 = v16 ^ qword_140C12E80;
      BugCheckParameter3 = v4;
      v28 = (_QWORD *)a2;
      v29 = (v16 ^ qword_140C12E80) & 0x3F;
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
      v30 = v16 ^ qword_140C12E80;
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
          v143 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v37 = v29 ^ v143 ^ v36;
          v29 = 1;
          *(_QWORD *)&v9 = v37 & 0x3F;
          if ( (_DWORD)v9 )
            v29 = v9;
          --v31;
        }
        while ( v31 );
        v5 = v147;
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
        qword_140C12E88 = v6 ^ v30 ^ BugCheckParameter3;
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
        v148 = 0;
        v43 = 0LL;
        qword_140C12F80[0] = (__int64)v41[6];
        v133 = 0LL;
        do
        {
          v44 = (void *)qword_140C12F80[v43];
          BaseOfImage = v44;
          if ( !v44 )
            break;
          v45 = v40 & 0x3F;
          LODWORD(v131) = v40 & 0x3F;
          v46 = RtlImageNtHeader(v44);
          v130 = v46;
          if ( !v46 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v47 = (char *)&v46->OptionalHeader + v46->FileHeader.SizeOfOptionalHeader;
          v132 = (unsigned __int64)&v47[40 * v46->FileHeader.NumberOfSections];
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
              v136 = *(_OWORD *)VfExcludeSections;
              v137 = *(_OWORD *)off_140C0EFE0;
              while ( 1 )
              {
                v53 = v52[v47 - VfExcludeSections[0]];
                v54 = *v52++;
                if ( v53 != v54 )
                  break;
                if ( !--v51 )
                  goto LABEL_72;
              }
              v55 = (char *)*((_QWORD *)&v136 + 1);
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
              v62 = (char *)v137;
              v63 = 4;
              while ( 1 )
              {
                v64 = v47[(_QWORD)v62 - v137];
                v65 = *v62++;
                if ( v64 != v65 )
                  break;
                if ( !--v63 )
                  goto LABEL_72;
              }
              v66 = (char *)*((_QWORD *)&v137 + 1);
              v67 = 6;
              while ( 1 )
              {
                v68 = v47[(_QWORD)v66 - *((_QWORD *)&v137 + 1)];
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
              v72 = (char *)BaseOfImage + *((unsigned int *)v47 + 3);
              v73 = v72;
              v74 = &v72[v70];
              for ( i = v72; i < v74; i += 64 )
                _mm_prefetch(i, 0);
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
                  v82 = __ROL8__(v40 ^ ((char *)v73 - v72), 17) ^ v40 ^ ((char *)v73 - v72);
                  v144 = (v82 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v83 = v71 ^ v144 ^ v82;
                  v71 = 1;
                  v84 = v83 & 0x3F;
                  if ( v84 )
                    v71 = v84;
                  --v77;
                }
                while ( v77 );
                v45 = v131;
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
          while ( v47 != (char *)v132 );
          v88 = v148;
          if ( !v148 )
          {
            v89 = v130;
            v90 = (char *)BaseOfImage;
            Size = v130->OptionalHeader.DataDirectory[1].Size;
            if ( (unsigned int)Size >= 0x14 )
            {
              VirtualAddress = v130->OptionalHeader.DataDirectory[1].VirtualAddress;
              v93 = (char *)BaseOfImage + Size + VirtualAddress;
              v94 = (char *)BaseOfImage + VirtualAddress;
              if ( (char *)BaseOfImage + VirtualAddress != v93 )
              {
                do
                {
                  if ( !*((_DWORD *)v94 + 3) )
                    break;
                  v95 = *((unsigned int *)v94 + 4);
                  if ( !(_DWORD)v95 )
                    break;
                  v96 = *(char **)&v90[v95];
                  if ( v96 && (v96 < v90 || v96 >= &v90[v89->OptionalHeader.SizeOfImage]) )
                  {
                    LOBYTE(v97) = MmIsSessionAddress((unsigned __int64)v96);
                    if ( v97 )
                    {
                      RtlPcToFileHeader(v96, &BaseOfImage);
                      if ( BaseOfImage )
                      {
                        v98 = 0LL;
                        v99 = qword_140C12F80;
                        while ( (PVOID)*v99 != BaseOfImage )
                        {
                          if ( !*v99 )
                          {
                            qword_140C12F80[v98] = (__int64)BaseOfImage;
                            break;
                          }
                          v98 = (unsigned int)(v98 + 1);
                          ++v99;
                          if ( (unsigned int)v98 >= 0x10 )
                            break;
                        }
                        if ( (_DWORD)v98 == 16 )
                          goto LABEL_115;
                      }
                    }
                    v89 = v130;
                  }
                  v94 += 20;
                }
                while ( v94 != v93 );
                v88 = 0;
              }
            }
          }
          v43 = v133 + 1;
          v148 = v88 + 1;
          ++v133;
        }
        while ( (unsigned int)(v88 + 1) < 0x10 );
LABEL_115:
        *(_QWORD *)&v9 = memset(qword_140C12F80, 0, 0x80uLL);
        if ( v40 == qword_140C12E80 || !v40 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v40 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v127, 0);
        qword_140C12E80 = v40;
      }
    }
  }
  else
  {
    v100 = (unsigned __int64)&qword_140C12E90;
    v101 = (unsigned __int64)&qword_140C12E90 & 0x3F;
    v132 = (unsigned __int64)&qword_140C12E90 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v138, (ULONG *)&v128);
    v102 = v138;
    v103 = 0x140000000uLL;
    LODWORD(v128) = (unsigned int)v128 / 0xC;
    v139 = 0x140000000uLL;
    v104 = v138 + 12LL * (unsigned int)v128;
    v140 = v104;
    v141 = (__int64 *)&v135;
    while ( v102 && v102 != v104 )
    {
      v105 = RtlpConvertFunctionEntry(v102, v103);
      v106 = v101;
      *v141 = v105;
      v102 = v138 + 12;
      v138 += 12LL;
      v107 = *v135;
      v108 = v135[1] - v107;
      v109 = (_QWORD *)(0x140000000LL + v107);
      v110 = 0x140000000LL + v107 + v108;
      v111 = v109;
      v112 = (const char *)v109;
      if ( (unsigned __int64)v109 < v110 )
      {
        do
        {
          _mm_prefetch(v112, 0);
          v112 += 64;
        }
        while ( (unsigned __int64)v112 < v110 );
      }
      v113 = (__int64 *)v100;
      v114 = v108 >> 7;
      if ( v108 >> 7 )
      {
        do
        {
          v115 = 8LL;
          do
          {
            v116 = *v111 ^ (unsigned __int64)v113;
            v117 = v111 + 1;
            v118 = *v117 ^ __ROL8__(v116, v106);
            v111 = v117 + 1;
            v113 = (__int64 *)__ROL8__(v118, v106);
            --v115;
          }
          while ( v115 );
          v119 = __ROL8__(v100 ^ ((char *)v111 - (char *)v109), 17) ^ v100 ^ ((char *)v111 - (char *)v109);
          v120 = v106 ^ ((v119 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v119;
          v106 = 1;
          v121 = v120 & 0x3F;
          if ( v121 )
            v106 = v121;
          --v114;
        }
        while ( v114 );
        LOBYTE(v101) = v132;
      }
      v122 = v108 & 0x7F;
      if ( v122 >= 8 )
      {
        v123 = (unsigned __int64)v122 >> 3;
        do
        {
          v113 = (__int64 *)__ROL8__(*v111++ ^ (unsigned __int64)v113, v106);
          v122 -= 8;
          --v123;
        }
        while ( v123 );
      }
      for ( ; v122; --v122 )
      {
        v124 = *(unsigned __int8 *)v111;
        v111 = (_QWORD *)((char *)v111 + 1);
        v113 = (__int64 *)__ROL8__(v124 ^ (unsigned __int64)v113, v106);
      }
      v104 = v140;
      v103 = v139;
      v100 = (unsigned __int64)v113;
    }
    qword_140C12E90 = v100;
    if ( qword_140C12E80 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v125 = __rdtsc();
    v9 = (__ROR8__(v125, 3) ^ v125) * (unsigned __int128)0x7010008004002001uLL;
    qword_140C12E80 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_140C12E80 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
