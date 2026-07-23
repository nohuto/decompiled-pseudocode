/*
 * XREFs of PspBuildCreateProcessContext @ 0x140694298
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x140692890 (NtCreateThreadEx.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x14033E1A0 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140377D24 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x14058101C (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x1405917EC (RtlGetUmsContextExtendedSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x140692B54 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1406D0A5C (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1406E3690 (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     PspValidateMitigationAuditOptions @ 0x1407BFEDC (PspValidateMitigationAuditOptions.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(unsigned __int64 *a1, char a2, int a3, __int64 a4)
{
  char v4; // r10
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  int v14; // ebx
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  _BYTE *v23; // rax
  SIZE_T v24; // rbx
  char *v25; // r15
  void *v26; // rcx
  SIZE_T v27; // rbx
  char *v28; // r15
  PVOID v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  _DWORD *v36; // rcx
  int v37; // edx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  _DWORD *v43; // rax
  SIZE_T v44; // rbx
  SIZE_T v45; // r12
  PVOID v46; // rax
  unsigned __int64 v47; // r15
  unsigned __int64 i; // r13
  SIZE_T v49; // rbx
  char *v50; // r15
  PVOID v51; // rax
  size_t v52; // r8
  unsigned __int64 v53; // rdx
  __int128 v54; // xmm6
  __int64 v55; // xmm2_8
  _WORD *v56; // rax
  SIZE_T v57; // rbx
  char *v58; // r15
  PVOID v59; // rax
  _DWORD *v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  _OWORD *v67; // rax
  char valid; // al
  bool v69; // zf
  unsigned __int64 v70; // rcx
  size_t v71; // r8
  unsigned __int64 v72; // rdx
  __int128 v73; // xmm6
  __int64 v74; // xmm2_8
  _DWORD *v75; // rax
  SIZE_T v76; // r12
  const void *v77; // r15
  _OWORD *v78; // rax
  void **v79; // r13
  __int64 v80; // r11
  _QWORD *v81; // r15
  char *v82; // r9
  const void *v83; // r12
  unsigned __int16 v84; // cx
  __int64 v85; // rax
  char v86; // r10
  __int64 v87; // rdx
  _DWORD *v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  char *v91; // rbx
  __int64 v92; // rdx
  char *v93; // r15
  PVOID v94; // rax
  unsigned __int64 v95; // rbx
  _QWORD *PoolWithQuotaTag; // rax
  _DWORD *v97; // rcx
  _PROCESSOR_NUMBER *v98; // rax
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  PS_PROTECTION v105; // cl
  _OWORD *v106; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int64 v108; // r9
  unsigned __int64 v109; // rcx
  __int64 v110; // rax
  _QWORD *v111; // [rsp+48h] [rbp-230h]
  unsigned __int16 v112; // [rsp+50h] [rbp-228h]
  unsigned __int64 v113; // [rsp+60h] [rbp-218h]
  unsigned __int64 v114; // [rsp+60h] [rbp-218h]
  unsigned __int64 v115; // [rsp+60h] [rbp-218h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+6Ch] [rbp-20Ch] BYREF
  unsigned __int64 v117; // [rsp+70h] [rbp-208h]
  int v118; // [rsp+78h] [rbp-200h]
  int v119; // [rsp+7Ch] [rbp-1FCh]
  char *v120; // [rsp+80h] [rbp-1F8h]
  __int64 v121; // [rsp+88h] [rbp-1F0h]
  _QWORD *v122; // [rsp+90h] [rbp-1E8h]
  __int64 v123; // [rsp+A0h] [rbp-1D8h]
  _DWORD *v124; // [rsp+B0h] [rbp-1C8h]
  _BYTE *v125; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v126; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v127; // [rsp+C8h] [rbp-1B0h]
  unsigned __int64 v128; // [rsp+D0h] [rbp-1A8h]
  _DWORD *v129; // [rsp+D8h] [rbp-1A0h]
  _DWORD *v130; // [rsp+E0h] [rbp-198h]
  __int64 v131; // [rsp+E8h] [rbp-190h] BYREF
  unsigned __int64 v132; // [rsp+F0h] [rbp-188h]
  _WORD *v133; // [rsp+F8h] [rbp-180h]
  char *v134; // [rsp+100h] [rbp-178h]
  _DWORD *v135; // [rsp+108h] [rbp-170h]
  _OWORD *v136; // [rsp+110h] [rbp-168h]
  _DWORD *v137; // [rsp+118h] [rbp-160h]
  const void *v138; // [rsp+120h] [rbp-158h]
  __int64 v139; // [rsp+128h] [rbp-150h]
  _PROCESSOR_NUMBER *v140; // [rsp+130h] [rbp-148h]
  _OWORD *v141; // [rsp+138h] [rbp-140h]
  char *v142; // [rsp+148h] [rbp-130h]
  char *v143; // [rsp+150h] [rbp-128h]
  PVOID v144; // [rsp+158h] [rbp-120h]
  char *v145; // [rsp+160h] [rbp-118h]
  unsigned __int64 v146; // [rsp+168h] [rbp-110h]
  int v147; // [rsp+170h] [rbp-108h]
  char *v148; // [rsp+180h] [rbp-F8h]
  const void *v149; // [rsp+188h] [rbp-F0h]
  char *v150; // [rsp+190h] [rbp-E8h]
  char *v151; // [rsp+198h] [rbp-E0h]
  unsigned __int64 v152; // [rsp+1A0h] [rbp-D8h]
  unsigned __int64 v153; // [rsp+1A8h] [rbp-D0h]
  __int128 v154; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v155; // [rsp+1C0h] [rbp-B8h]
  __int128 v156; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v157; // [rsp+1E0h] [rbp-98h]
  __int128 v158; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v159; // [rsp+200h] [rbp-78h]
  __int128 v160; // [rsp+208h] [rbp-70h] BYREF
  __int64 v161; // [rsp+218h] [rbp-60h]
  int v163; // [rsp+290h] [rbp+18h]

  v163 = a3;
  v139 = a4;
  v4 = a2;
  v119 = a3;
  v123 = a4;
  v6 = a4;
  v121 = a4;
  v144 = 0LL;
  v127 = 0LL;
  v124 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v143 = 0LL;
  v136 = 0LL;
  v134 = 0LL;
  ProcNumber = 0;
  v140 = 0LL;
  v128 = 0LL;
  v132 = 0LL;
  v131 = 0LL;
  v133 = 0LL;
  v125 = 0LL;
  v142 = 0LL;
  v129 = 0LL;
  v118 = 0;
  v126 = 0LL;
  v130 = 0LL;
  v135 = 0LL;
  v152 = 0LL;
  v146 = 0LL;
  v151 = 0LL;
  v138 = 0LL;
  v120 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v122 = 0LL;
  v137 = 0LL;
  v141 = 0LL;
  v145 = 0LL;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *a1;
  v117 = v7;
  if ( v7 < 0x28 )
    return 3221225485LL;
  if ( v4 && v7 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v7 > 0x7FFFFFFF0000LL || (unsigned __int64 *)((char *)a1 + v7) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v9 = v7 - 8;
  v117 = v9;
  if ( (v9 & 0x1F) != 0 )
    return 3221225485LL;
  v10 = v9 >> 5;
  v117 = v10;
  v11 = a1 + 1;
  v111 = a1 + 1;
  v12 = 0x7FFFFFFF8LL;
  while ( v10 )
  {
    v13 = *v11;
    v153 = *v11;
    if ( a3 && (v13 & 0x10000) == 0 )
      goto LABEL_17;
    if ( (v13 & 0x20000) != 0 && v11[3] )
      goto LABEL_17;
    v147 = 1 << v13;
    v15 = *(_DWORD *)(a4 + 4);
    if ( ((1 << v13) & v15) != 0 )
      goto LABEL_17;
    *(_DWORD *)(a4 + 4) = v15 | (1 << v13);
    if ( v13 > 0x20015 )
    {
      if ( v13 > 0x3000E )
      {
        v100 = v13 - 196623;
        if ( !v100 )
        {
          if ( !a3 || !v4 || v11[1] != 24LL )
            goto LABEL_17;
          v141 = (_OWORD *)v11[2];
          if ( ((unsigned __int8)v141 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v106 = v141;
          *(_OWORD *)(a4 + 336) = *v141;
          *(_QWORD *)(a4 + 352) = *((_QWORD *)v106 + 2);
          if ( *(_DWORD *)(a4 + 336) != 256 )
          {
LABEL_17:
            v14 = -1073741811;
            goto LABEL_305;
          }
          UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
          v109 = *(_QWORD *)(a4 + 344);
          if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
          {
            if ( UmsContextExtendedSize )
            {
              if ( (v109 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v109 + UmsContextExtendedSize > v108 || v109 + UmsContextExtendedSize < v109 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          else if ( (v109 & 3) != 0 )
          {
            ExRaiseDatatypeMisalignment();
          }
          v110 = *(_QWORD *)(a4 + 352);
          if ( (v110 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          goto LABEL_158;
        }
        v101 = v100 - 196593;
        if ( v101 )
        {
          v102 = v101 - 1;
          if ( v102 )
          {
            v103 = v102 - 1;
            if ( v103 )
            {
              v104 = v103 - 15;
              if ( !v104 )
              {
                if ( v11[1] != 1LL )
                  goto LABEL_17;
                v105.Level = *((_BYTE *)v11 + 16);
                *(PS_PROTECTION *)(a4 + 384) = v105;
                valid = RtlValidProcessProtection(v105);
                goto LABEL_189;
              }
              if ( v104 != 9 || v11[1] != 1LL )
                goto LABEL_17;
              *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v11[2] != 0LL ? 0x80 : 0);
            }
            else
            {
              if ( v11[1] != 8LL )
                goto LABEL_17;
              *(_QWORD *)(a4 + 144) = v11[2];
            }
          }
          else
          {
            if ( v11[1] != 8LL )
              goto LABEL_17;
            *(_QWORD *)(a4 + 136) = v11[2];
          }
        }
        else
        {
          if ( v11[1] != 8LL )
            goto LABEL_17;
          *(_QWORD *)(a4 + 120) = v11[2];
        }
      }
      else
      {
        if ( v13 == 196622 )
        {
          if ( !a3 || v11[1] != 4LL )
            goto LABEL_17;
          v98 = (_PROCESSOR_NUMBER *)v11[2];
          v140 = v98;
          if ( v4 )
          {
            if ( ((unsigned __int8)v98 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v111;
            v98 = v140;
          }
          ProcNumber = *v98;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
          v69 = ProcessorIndexFromNumber == -1;
          goto LABEL_190;
        }
        v61 = v13 - 131094;
        if ( !v61 )
        {
          if ( v11[1] != 8LL )
            goto LABEL_17;
          v95 = v11[2];
          v152 = v95;
          if ( v4 )
          {
            if ( (v95 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v95 + 8 > 0x7FFFFFFF0000LL || v95 + 8 < v95 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
          *(_QWORD *)(a4 + 472) = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            v14 = -1073741801;
            goto LABEL_305;
          }
          *PoolWithQuotaTag = *(_QWORD *)v95;
          v97 = *(_DWORD **)(a4 + 472);
          if ( (*v97 & 3) == 0 || (unsigned int)(v97[1] - 1) > 5 )
            goto LABEL_17;
          goto LABEL_247;
        }
        v62 = v61 - 1;
        if ( !v62 )
        {
          if ( v11[1] != 524LL )
            goto LABEL_17;
          v93 = (char *)v11[2];
          v151 = v93;
          if ( v4 && ((unsigned __int64)(v93 + 524) > 0x7FFFFFFF0000LL || v93 + 524 < v93) )
            MEMORY[0x7FFFFFFF0000] = 0;
          v94 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x20CuLL, 0x634F7350u);
          *(_QWORD *)(a4 + 424) = v94;
          if ( !v94 )
            goto LABEL_52;
          memmove(v94, v93, 0x20CuLL);
          *(_DWORD *)(a4 + 432) = 524;
          goto LABEL_247;
        }
        v63 = v62 - 1;
        if ( !v63 )
        {
          v76 = v11[1];
          if ( v76 != 40 )
            goto LABEL_17;
          v77 = (const void *)v11[2];
          v138 = v77;
          if ( v4 )
          {
            if ( ((unsigned __int8)v77 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v111;
            v76 = 40LL;
            v77 = v138;
          }
          v78 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v76, 0x70426E50u);
          v79 = (void **)(a4 + 440);
          v122 = (_QWORD *)(a4 + 440);
          *(_QWORD *)(a4 + 440) = v78;
          if ( !v78 )
            goto LABEL_52;
          *v78 = 0LL;
          v78[1] = 0LL;
          *((_QWORD *)v78 + 4) = 0LL;
          memmove(*v79, v77, v76);
          v80 = v139;
          v81 = *v79;
          v122 = v81;
          v82 = (char *)v81[1];
          v150 = v82;
          v148 = v82;
          v83 = (const void *)v81[3];
          v149 = v83;
          v81[1] = 0LL;
          *((_QWORD *)*v79 + 3) = 0LL;
          v84 = *(_WORD *)v81;
          if ( *(_WORD *)v81 )
          {
            v85 = *((unsigned __int16 *)v81 + 1);
            if ( v84 > (unsigned __int16)v85 || (v84 & 1) != 0 || (v85 & 1) != 0 || (_WORD)v85 == 0xFFFF || !v82 )
              goto LABEL_17;
            v86 = a2;
            if ( a2 && (_WORD)v85 && ((unsigned __int64)&v82[v85] > 0x7FFFFFFF0000LL || &v82[v85] < v82) )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v86 = a2;
          }
          v87 = *((unsigned int *)*v79 + 4);
          v88 = *v79;
          if ( (_DWORD)v87 )
          {
            if ( !v83 || (unsigned int)v87 > 0xFFFF )
              goto LABEL_17;
            if ( v86 )
            {
              v89 = 8 * v87;
              if ( v89 )
              {
                if ( ((unsigned __int8)v83 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v90 = (unsigned __int64)v83 + v89;
                if ( v90 > 0x7FFFFFFF0000LL || v90 < (unsigned __int64)v83 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  v88 = *(_DWORD **)(v80 + 440);
                }
              }
            }
          }
          v91 = 0LL;
          v120 = 0LL;
          v92 = *((unsigned __int16 *)v81 + 1);
          if ( (_WORD)v92 || v88[4] )
          {
            v91 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v92 + 8LL * (unsigned int)v88[4], 0x70426E50u);
            v120 = v91;
            LOWORD(v92) = *((_WORD *)v81 + 1);
            v82 = v150;
          }
          if ( (_WORD)v92 )
          {
            v81[1] = v91;
            memmove(v91, v82, *((unsigned __int16 *)v81 + 1));
            v91 += *((unsigned __int16 *)v81 + 1);
            v120 = v91;
          }
          if ( *((_DWORD *)*v79 + 4) )
          {
            *((_QWORD *)*v79 + 3) = v91;
            memmove(*((void **)*v79 + 3), v83, 8LL * *((unsigned int *)*v79 + 4));
          }
          goto LABEL_246;
        }
        v64 = v63 - 1;
        if ( v64 )
        {
          v65 = v64 - 2;
          if ( !v65 )
          {
            v71 = v11[1];
            if ( v71 > 0x18 )
              goto LABEL_17;
            v160 = 0LL;
            v161 = 0LL;
            v72 = v11[2];
            if ( v4 && v72 >= 0x7FFFFFFF0000LL )
              v72 = 0x7FFFFFFF0000LL;
            memmove(&v160, (const void *)v72, v71);
            v73 = v160;
            v156 = v160;
            v74 = v161;
            v157 = v161;
            v14 = PspValidateMitigationAuditOptions(&v156);
            if ( v14 < 0 )
              goto LABEL_305;
            *(_OWORD *)(a4 + 488) = v73;
            *(_QWORD *)(a4 + 504) = v74;
            goto LABEL_247;
          }
          v66 = v65 - 2;
          if ( v66 )
          {
            if ( v66 != 65519 || !a3 || v11[1] != 16LL )
              goto LABEL_17;
            v67 = (_OWORD *)v11[2];
            v136 = v67;
            if ( v4 )
            {
              if ( ((unsigned __int8)v67 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v11 = v111;
              v67 = v136;
            }
            *(_OWORD *)(a4 + 320) = *v67;
            valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_189:
            v69 = valid == 0;
LABEL_190:
            if ( v69 )
              goto LABEL_17;
LABEL_247:
            v12 = 0x7FFFFFFF8LL;
            a3 = v163;
            v4 = a2;
            goto LABEL_248;
          }
          if ( v11[1] != 4LL )
            goto LABEL_17;
          v70 = v11[2];
          v146 = v70;
          if ( v4 )
          {
            if ( (v70 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v70 + 4 > 0x7FFFFFFF0000LL || v70 + 4 < v70 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (*(_DWORD *)v70 & 0xFFFFFFFE) != 0 )
            return 3221225485LL;
          *(_QWORD *)(a4 + 480) = v70;
        }
        else
        {
          if ( v11[1] != 4LL )
            goto LABEL_17;
          v75 = (_DWORD *)v11[2];
          v137 = v75;
          if ( v4 )
          {
            if ( ((unsigned __int8)v75 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v111;
            v75 = v137;
          }
          *(_DWORD *)(a4 + 448) = *v75;
        }
      }
    }
    else if ( v13 == 131093 )
    {
      if ( v11[1] != 4LL )
        goto LABEL_17;
      v60 = (_DWORD *)v11[2];
      v135 = v60;
      if ( v4 )
      {
        if ( ((unsigned __int8)v60 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v111;
        v60 = v135;
      }
      *(_DWORD *)(a4 + 420) = *v60;
    }
    else if ( v13 > 0x2000A )
    {
      v38 = v13 - 131083;
      if ( !v38 )
      {
        v57 = v11[1];
        if ( !v57 || (v57 & 7) != 0 || (v57 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
          goto LABEL_17;
        v58 = (char *)v11[2];
        v134 = v58;
        if ( v4 )
        {
          if ( ((unsigned __int8)v58 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v58[v57] > 0x7FFFFFFF0000LL || &v58[v57] < v58 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v59 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v57, 0x6C487350u);
        *(_QWORD *)(a4 + 296) = v59;
        if ( !v59 )
        {
LABEL_52:
          v14 = -1073741670;
          goto LABEL_305;
        }
        memmove(v59, v58, v57);
        *(_DWORD *)(a4 + 292) = v57 >> 3;
        goto LABEL_247;
      }
      v39 = v38 - 2;
      if ( !v39 )
      {
        if ( v11[1] != 2LL )
          goto LABEL_17;
        v56 = (_WORD *)v11[2];
        v133 = v56;
        if ( v4 )
        {
          if ( ((unsigned __int8)v56 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v56 = v133;
        }
        v112 = *v56;
        if ( *v56 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_17;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v112] + 136) )
          goto LABEL_17;
        *(_WORD *)(a4 + 250) = v112;
LABEL_158:
        v11 = v111;
        goto LABEL_248;
      }
      v40 = v39 - 3;
      if ( !v40 )
      {
        v52 = v11[1];
        if ( v52 > 0x18 )
          goto LABEL_17;
        v158 = 0LL;
        v159 = 0LL;
        v53 = v11[2];
        if ( v4 && v53 >= 0x7FFFFFFF0000LL )
          v53 = 0x7FFFFFFF0000LL;
        memmove(&v158, (const void *)v53, v52);
        v54 = v158;
        v154 = v158;
        v55 = v159;
        v155 = v159;
        v14 = PspValidateMitigationOptions(&v154, 0LL);
        if ( v14 < 0 )
          goto LABEL_305;
        *(_OWORD *)(a4 + 360) = v54;
        *(_QWORD *)(a4 + 376) = v55;
        goto LABEL_247;
      }
      v41 = v40 - 2;
      if ( !v41 )
      {
        v49 = v11[1];
        if ( !v49 || (v49 & 7) != 0 || v49 > 0x88 )
          goto LABEL_17;
        v50 = (char *)v11[2];
        v145 = v50;
        if ( v4 )
        {
          if ( ((unsigned __int8)v50 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v50[v49] > 0x7FFFFFFF0000LL || &v50[v49] < v50 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v51 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v49, 0x61547350u);
        *(_QWORD *)(a4 + 392) = v51;
        if ( !v51 )
          goto LABEL_52;
        memmove(v51, v50, v49);
        *(_DWORD *)(a4 + 408) = v49;
        if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 392), v49) )
          goto LABEL_17;
        goto LABEL_247;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        v44 = v11[1];
        if ( !v44 || (v44 & 7) != 0 || (v44 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
          goto LABEL_17;
        v45 = v11[2];
        v134 = (char *)v45;
        if ( v4 )
        {
          if ( (v45 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v45 + v44 > 0x7FFFFFFF0000LL || v45 + v44 < v45 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v46 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v44, 0x6C4A7350u);
        *(_QWORD *)(a4 + 400) = v46;
        if ( !v46 )
          goto LABEL_52;
        memset(v46, 0, v44);
        *(_DWORD *)(a4 + 412) = v44 >> 3;
        v47 = 0LL;
        v132 = 0LL;
        for ( i = 0LL; i < *(unsigned int *)(a4 + 412); ++i )
        {
          v14 = ObpReferenceObjectByHandleWithTag(
                  *(_QWORD *)(v45 + 8 * v47),
                  1,
                  (__int64)PsJobType,
                  a2,
                  0x6C4A7350u,
                  &v131,
                  0LL,
                  0LL);
          if ( v14 < 0 )
            goto LABEL_305;
          *(_QWORD *)(*(_QWORD *)(a4 + 400) + 8 * v47) = v131;
          v47 = i + 1;
          v132 = i + 1;
        }
LABEL_246:
        v6 = v121;
        goto LABEL_247;
      }
      if ( v42 != 1 || v11[1] != 4LL )
        goto LABEL_17;
      v43 = (_DWORD *)v11[2];
      v130 = v43;
      if ( v4 )
      {
        if ( ((unsigned __int8)v43 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v111;
        v43 = v130;
      }
      *(_DWORD *)(a4 + 416) = *v43;
    }
    else if ( v13 == 131082 )
    {
      if ( v11[1] != 8LL )
        goto LABEL_17;
      v36 = (_DWORD *)v11[2];
      v129 = v36;
      if ( v4 )
      {
        if ( ((unsigned __int8)v36 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v111;
        v36 = v129;
      }
      if ( (*v36 & 0x1C) != 0 )
      {
        v14 = -1073741637;
        goto LABEL_305;
      }
      v37 = *v36 & 3;
      v118 = v37;
      if ( (unsigned __int8)v37 >= 3u )
        goto LABEL_17;
      *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v37)) & 0xC;
      if ( v37 == 1 )
        *(_DWORD *)(a4 + 288) = v36[1];
    }
    else
    {
      v16 = v13 - 6;
      if ( v16 )
      {
        v17 = v16 - 65533;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 65537;
            if ( !v19 )
            {
              v27 = v11[1];
              if ( !v27 || (v27 & 1) != 0 || v27 > 0xFFFF )
                goto LABEL_17;
              v28 = (char *)v11[2];
              v143 = v28;
              if ( v4 && ((unsigned __int64)&v28[v27] > 0x7FFFFFFF0000LL || &v28[v27] < v28) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v29 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v27, 0x6E467350u);
              v144 = v29;
              if ( !v29 )
                goto LABEL_52;
              *(_OWORD *)(a4 + 232) = 0LL;
              *(_WORD *)(a4 + 234) = v27;
              *(_QWORD *)(a4 + 240) = v29;
              memmove(v29, v28, v27);
              *(_WORD *)(a4 + 232) = v27;
              goto LABEL_247;
            }
            v20 = v19 - 2;
            if ( !v20 )
            {
              v24 = v11[1];
              if ( !v24 || (v24 & 0xF) != 0 )
                goto LABEL_17;
              v25 = (char *)v11[2];
              v142 = v25;
              if ( v4 )
              {
                if ( ((unsigned __int8)v25 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( (unsigned __int64)&v25[v24] > 0x7FFFFFFF0000LL || &v25[v24] < v25 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( v24 > 0x10 )
              {
                *(_QWORD *)(v6 + 280) = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v24, 0x6C527350u);
                v26 = *(void **)(a4 + 280);
                if ( !v26 )
                  goto LABEL_52;
              }
              else
              {
                v26 = (void *)(a4 + 264);
                *(_QWORD *)(v6 + 280) = a4 + 264;
              }
              memmove(v26, v25, v24);
              *(_QWORD *)(a4 + 256) = v24 >> 4;
              goto LABEL_247;
            }
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 1 || v11[1] != 4LL )
                goto LABEL_17;
              v22 = (_DWORD *)v11[2];
              v124 = v22;
              if ( v4 )
              {
                if ( ((unsigned __int8)v22 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v11 = v111;
                v22 = v124;
              }
              *(_DWORD *)(a4 + 316) = *v22;
            }
            else
            {
              if ( v11[1] != 1LL )
                goto LABEL_17;
              v23 = (_BYTE *)v11[2];
              v125 = v23;
              if ( v4 )
              {
                v11 = v111;
                v23 = v125;
              }
              *(_BYTE *)(a4 + 248) = *v23;
            }
          }
          else
          {
            if ( v11[1] != 8LL )
              goto LABEL_17;
            v30 = v11[2];
            v126 = v30;
            if ( v4 )
            {
              if ( (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v30 >= 0x7FFFFFFF0000LL )
                v30 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v30 = *(_BYTE *)v30;
              *(_BYTE *)(v30 + 7) = *(_BYTE *)(v30 + 7);
              v11 = v111;
              v30 = v126;
            }
            *(_QWORD *)(a4 + 24) = v30;
            v31 = v11[3];
            v113 = v31;
            if ( v31 )
            {
              if ( v4 )
              {
                if ( (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v31 >= 0x7FFFFFFF0000LL )
                  v31 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v31 = *(_BYTE *)v31;
                *(_BYTE *)(v31 + 7) = *(_BYTE *)(v31 + 7);
                v11 = v111;
                v31 = v113;
              }
              *(_QWORD *)v31 = 8LL;
            }
          }
        }
        else
        {
          if ( v11[1] != 16LL )
            goto LABEL_17;
          v32 = v11[2];
          v127 = v32;
          if ( v4 )
          {
            if ( (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v32 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            *(_BYTE *)(v32 + 15) = *(_BYTE *)(v32 + 15);
            v32 = v127;
            v11 = v111;
          }
          *(_QWORD *)(a4 + 16) = v32;
          v33 = v11[3];
          v114 = v33;
          if ( v33 )
          {
            if ( v4 )
            {
              if ( (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v33 >= 0x7FFFFFFF0000LL )
                v33 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v33 = *(_BYTE *)v33;
              *(_BYTE *)(v33 + 7) = *(_BYTE *)(v33 + 7);
              v11 = v111;
              v33 = v114;
            }
            *(_QWORD *)v33 = 16LL;
          }
        }
      }
      else
      {
        if ( v11[1] != 64LL )
          goto LABEL_17;
        v34 = v11[2];
        v128 = v34;
        if ( v4 )
        {
          if ( (v34 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v34 >= 0x7FFFFFFF0000LL )
            v34 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v34 = *(_BYTE *)v34;
          *(_BYTE *)(v34 + 63) = *(_BYTE *)(v34 + 63);
          v11 = v111;
          v34 = v128;
        }
        *(_QWORD *)(a4 + 32) = v34;
        v35 = v11[3];
        v115 = v35;
        if ( v35 )
        {
          if ( v4 )
          {
            if ( (v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v35 >= 0x7FFFFFFF0000LL )
              v35 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v35 = *(_BYTE *)v35;
            *(_BYTE *)(v35 + 7) = *(_BYTE *)(v35 + 7);
            v11 = v111;
            v35 = v115;
          }
          *(_QWORD *)v35 = 64LL;
        }
      }
    }
LABEL_248:
    v11 += 4;
    v111 = v11;
    v10 = --v117;
  }
  v14 = 0;
LABEL_305:
  if ( v14 < 0 )
    goto LABEL_311;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v119 != 0);
  }
  if ( v14 < 0 )
LABEL_311:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
