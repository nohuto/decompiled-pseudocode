/*
 * XREFs of PspBuildCreateProcessContext @ 0x140707AB4
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x1407075D0 (NtCreateThreadEx.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeVerifyGroupAffinity @ 0x140374F84 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x14057CFAC (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x14058D6CC (RtlGetUmsContextExtendedSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspValidateMitigationOptions @ 0x1406DAFE0 (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1406ED530 (RtlValidProcessProtection.c)
 *     PspDeleteCreateProcessContext @ 0x140707894 (PspDeleteCreateProcessContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     PspValidateMitigationAuditOptions @ 0x1407AF168 (PspValidateMitigationAuditOptions.c)
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
  ULONG v47; // r9d
  unsigned __int64 v48; // r15
  unsigned __int64 i; // r13
  SIZE_T v50; // rbx
  char *v51; // r15
  PVOID v52; // rax
  size_t v53; // r8
  unsigned __int64 v54; // rdx
  __m128i v55; // xmm6
  __int64 v56; // xmm2_8
  _WORD *v57; // rax
  SIZE_T v58; // rbx
  char *v59; // r15
  PVOID v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  _OWORD *v67; // rax
  char valid; // al
  bool v69; // zf
  size_t v70; // r8
  unsigned __int64 v71; // rdx
  __int128 v72; // xmm6
  __int64 v73; // xmm2_8
  _DWORD *v74; // rax
  SIZE_T v75; // r12
  const void *v76; // r15
  _OWORD *v77; // rax
  void **v78; // r13
  __int64 v79; // r11
  _QWORD *v80; // r15
  char *v81; // r9
  const void *v82; // r12
  unsigned __int16 v83; // cx
  __int64 v84; // rax
  char v85; // r10
  __int64 v86; // rdx
  _DWORD *v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rdx
  char *v90; // rbx
  __int64 v91; // rdx
  SIZE_T v92; // rbx
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
  _QWORD *Tag; // [rsp+20h] [rbp-258h]
  _QWORD *v112; // [rsp+48h] [rbp-230h]
  unsigned __int16 v113; // [rsp+50h] [rbp-228h]
  unsigned __int64 v114; // [rsp+60h] [rbp-218h]
  unsigned __int64 v115; // [rsp+60h] [rbp-218h]
  unsigned __int64 v116; // [rsp+60h] [rbp-218h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+6Ch] [rbp-20Ch] BYREF
  unsigned __int64 v118; // [rsp+70h] [rbp-208h]
  int v119; // [rsp+78h] [rbp-200h]
  int v120; // [rsp+7Ch] [rbp-1FCh]
  char *v121; // [rsp+80h] [rbp-1F8h]
  __int64 v122; // [rsp+88h] [rbp-1F0h]
  _QWORD *v123; // [rsp+90h] [rbp-1E8h]
  __int64 v124; // [rsp+A0h] [rbp-1D8h]
  _DWORD *v125; // [rsp+B0h] [rbp-1C8h]
  _BYTE *v126; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v127; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v128; // [rsp+C8h] [rbp-1B0h]
  unsigned __int64 v129; // [rsp+D0h] [rbp-1A8h]
  _DWORD *v130; // [rsp+D8h] [rbp-1A0h]
  _DWORD *v131; // [rsp+E0h] [rbp-198h]
  __int64 v132; // [rsp+E8h] [rbp-190h] BYREF
  unsigned __int64 v133; // [rsp+F0h] [rbp-188h]
  _WORD *v134; // [rsp+F8h] [rbp-180h]
  char *v135; // [rsp+100h] [rbp-178h]
  _DWORD *v136; // [rsp+108h] [rbp-170h]
  _OWORD *v137; // [rsp+110h] [rbp-168h]
  _DWORD *v138; // [rsp+118h] [rbp-160h]
  const void *v139; // [rsp+120h] [rbp-158h]
  __int64 v140; // [rsp+128h] [rbp-150h]
  _PROCESSOR_NUMBER *v141; // [rsp+130h] [rbp-148h]
  _OWORD *v142; // [rsp+138h] [rbp-140h]
  char *v143; // [rsp+148h] [rbp-130h]
  char *v144; // [rsp+150h] [rbp-128h]
  PVOID v145; // [rsp+158h] [rbp-120h]
  char *v146; // [rsp+160h] [rbp-118h]
  int v147; // [rsp+168h] [rbp-110h]
  char *v148; // [rsp+178h] [rbp-100h]
  const void *v149; // [rsp+180h] [rbp-F8h]
  char *v150; // [rsp+188h] [rbp-F0h]
  char *v151; // [rsp+190h] [rbp-E8h]
  unsigned __int64 v152; // [rsp+198h] [rbp-E0h]
  unsigned __int64 v153; // [rsp+1A0h] [rbp-D8h]
  __m128i v154; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v155; // [rsp+1C0h] [rbp-B8h]
  __int128 v156; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v157; // [rsp+1E0h] [rbp-98h]
  __m128i v158; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v159; // [rsp+200h] [rbp-78h]
  __int128 v160; // [rsp+208h] [rbp-70h] BYREF
  __int64 v161; // [rsp+218h] [rbp-60h]
  int v163; // [rsp+290h] [rbp+18h]

  v163 = a3;
  v140 = a4;
  v4 = a2;
  v120 = a3;
  v124 = a4;
  v6 = a4;
  v122 = a4;
  v145 = 0LL;
  v128 = 0LL;
  v125 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v144 = 0LL;
  v137 = 0LL;
  v135 = 0LL;
  ProcNumber = 0;
  v141 = 0LL;
  v129 = 0LL;
  v133 = 0LL;
  v132 = 0LL;
  v134 = 0LL;
  v126 = 0LL;
  v143 = 0LL;
  v130 = 0LL;
  v119 = 0;
  v127 = 0LL;
  v131 = 0LL;
  v136 = 0LL;
  v152 = 0LL;
  v151 = 0LL;
  v139 = 0LL;
  v121 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v123 = 0LL;
  v138 = 0LL;
  v142 = 0LL;
  v146 = 0LL;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *a1;
  v118 = v7;
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
  v118 = v9;
  if ( (v9 & 0x1F) != 0 )
    return 3221225485LL;
  v10 = v9 >> 5;
  v118 = v10;
  v11 = a1 + 1;
  v112 = a1 + 1;
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
          v142 = (_OWORD *)v11[2];
          if ( ((unsigned __int8)v142 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v106 = v142;
          *(_OWORD *)(a4 + 336) = *v142;
          *(_QWORD *)(a4 + 352) = *((_QWORD *)v106 + 2);
          if ( *(_DWORD *)(a4 + 336) != 256 )
          {
LABEL_17:
            v14 = -1073741811;
            goto LABEL_296;
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
                goto LABEL_188;
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
          v141 = v98;
          if ( v4 )
          {
            if ( ((unsigned __int8)v98 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v112;
            v98 = v141;
          }
          ProcNumber = *v98;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
          v69 = ProcessorIndexFromNumber == -1;
          goto LABEL_189;
        }
        v62 = v13 - 131094;
        if ( !v62 )
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
            goto LABEL_296;
          }
          *PoolWithQuotaTag = *(_QWORD *)v95;
          v97 = *(_DWORD **)(a4 + 472);
          if ( (*v97 & 3) == 0 || (unsigned int)(v97[1] - 1) > 5 )
            goto LABEL_17;
          goto LABEL_237;
        }
        v63 = v62 - 1;
        if ( !v63 )
        {
          v92 = v11[1];
          if ( v92 > 0xFFFF )
            goto LABEL_17;
          v93 = (char *)v11[2];
          v151 = v93;
          if ( v4 && v92 && ((unsigned __int64)&v93[v92] > 0x7FFFFFFF0000LL || &v93[v92] < v93) )
            MEMORY[0x7FFFFFFF0000] = 0;
          v94 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v92, 0x634F7350u);
          *(_QWORD *)(a4 + 424) = v94;
          if ( !v94 )
            goto LABEL_52;
          memmove(v94, v93, v92);
          *(_DWORD *)(a4 + 432) = v92;
          goto LABEL_237;
        }
        v64 = v63 - 1;
        if ( !v64 )
        {
          v75 = v11[1];
          if ( v75 != 40 )
            goto LABEL_17;
          v76 = (const void *)v11[2];
          v139 = v76;
          if ( v4 )
          {
            if ( ((unsigned __int8)v76 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v112;
            v75 = 40LL;
            v76 = v139;
          }
          v77 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v75, 0x70426E50u);
          v78 = (void **)(a4 + 440);
          v123 = (_QWORD *)(a4 + 440);
          *(_QWORD *)(a4 + 440) = v77;
          if ( !v77 )
            goto LABEL_52;
          *v77 = 0LL;
          v77[1] = 0LL;
          *((_QWORD *)v77 + 4) = 0LL;
          memmove(*v78, v76, v75);
          v79 = v140;
          v80 = *v78;
          v123 = v80;
          v81 = (char *)v80[1];
          v150 = v81;
          v148 = v81;
          v82 = (const void *)v80[3];
          v149 = v82;
          v80[1] = 0LL;
          *((_QWORD *)*v78 + 3) = 0LL;
          v83 = *(_WORD *)v80;
          if ( *(_WORD *)v80 )
          {
            v84 = *((unsigned __int16 *)v80 + 1);
            if ( v83 > (unsigned __int16)v84 || (v83 & 1) != 0 || (v84 & 1) != 0 || (_WORD)v84 == 0xFFFF || !v81 )
              goto LABEL_17;
            v85 = a2;
            if ( a2 && (_WORD)v84 && ((unsigned __int64)&v81[v84] > 0x7FFFFFFF0000LL || &v81[v84] < v81) )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v85 = a2;
          }
          v86 = *((unsigned int *)*v78 + 4);
          v87 = *v78;
          if ( (_DWORD)v86 )
          {
            if ( !v82 || (unsigned int)v86 > 0xFFFF )
              goto LABEL_17;
            if ( v85 )
            {
              v88 = 8 * v86;
              if ( v88 )
              {
                if ( ((unsigned __int8)v82 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v89 = (unsigned __int64)v82 + v88;
                if ( v89 > 0x7FFFFFFF0000LL || v89 < (unsigned __int64)v82 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  v87 = *(_DWORD **)(v79 + 440);
                }
              }
            }
          }
          v90 = 0LL;
          v121 = 0LL;
          v91 = *((unsigned __int16 *)v80 + 1);
          if ( (_WORD)v91 || v87[4] )
          {
            v90 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v91 + 8LL * (unsigned int)v87[4], 0x70426E50u);
            v121 = v90;
            LOWORD(v91) = *((_WORD *)v80 + 1);
            v81 = v150;
          }
          if ( (_WORD)v91 )
          {
            v80[1] = v90;
            memmove(v90, v81, *((unsigned __int16 *)v80 + 1));
            v90 += *((unsigned __int16 *)v80 + 1);
            v121 = v90;
          }
          if ( *((_DWORD *)*v78 + 4) )
          {
            *((_QWORD *)*v78 + 3) = v90;
            memmove(*((void **)*v78 + 3), v82, 8LL * *((unsigned int *)*v78 + 4));
          }
          goto LABEL_236;
        }
        v65 = v64 - 1;
        if ( v65 )
        {
          v66 = v65 - 2;
          if ( v66 )
          {
            if ( v66 != 65521 || !a3 || v11[1] != 16LL )
              goto LABEL_17;
            v67 = (_OWORD *)v11[2];
            v137 = v67;
            if ( v4 )
            {
              if ( ((unsigned __int8)v67 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v11 = v112;
              v67 = v137;
            }
            *(_OWORD *)(a4 + 320) = *v67;
            valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_188:
            v69 = valid == 0;
LABEL_189:
            if ( v69 )
              goto LABEL_17;
          }
          else
          {
            v70 = v11[1];
            if ( v70 > 0x18 )
              goto LABEL_17;
            v160 = 0LL;
            v161 = 0LL;
            v71 = v11[2];
            if ( v4 && v71 >= 0x7FFFFFFF0000LL )
              v71 = 0x7FFFFFFF0000LL;
            memmove(&v160, (const void *)v71, v70);
            v72 = v160;
            v156 = v160;
            v73 = v161;
            v157 = v161;
            v14 = PspValidateMitigationAuditOptions(&v156);
            if ( v14 < 0 )
              goto LABEL_296;
            *(_OWORD *)(a4 + 480) = v72;
            *(_QWORD *)(a4 + 496) = v73;
          }
LABEL_237:
          v12 = 0x7FFFFFFF8LL;
          a3 = v163;
          v4 = a2;
          goto LABEL_238;
        }
        if ( v11[1] != 4LL )
          goto LABEL_17;
        v74 = (_DWORD *)v11[2];
        v138 = v74;
        if ( v4 )
        {
          if ( ((unsigned __int8)v74 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = v112;
          v74 = v138;
        }
        *(_DWORD *)(a4 + 448) = *v74;
      }
    }
    else if ( v13 == 131093 )
    {
      if ( v11[1] != 4LL )
        goto LABEL_17;
      v61 = (_DWORD *)v11[2];
      v136 = v61;
      if ( v4 )
      {
        if ( ((unsigned __int8)v61 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v112;
        v61 = v136;
      }
      *(_DWORD *)(a4 + 420) = *v61;
    }
    else if ( v13 > 0x2000A )
    {
      v38 = v13 - 131083;
      if ( !v38 )
      {
        v58 = v11[1];
        if ( !v58 || (v58 & 7) != 0 || (v58 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
          goto LABEL_17;
        v59 = (char *)v11[2];
        v135 = v59;
        if ( v4 )
        {
          if ( ((unsigned __int8)v59 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v59[v58] > 0x7FFFFFFF0000LL || &v59[v58] < v59 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v60 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v58, 0x6C487350u);
        *(_QWORD *)(a4 + 296) = v60;
        if ( !v60 )
        {
LABEL_52:
          v14 = -1073741670;
          goto LABEL_296;
        }
        memmove(v60, v59, v58);
        *(_DWORD *)(a4 + 292) = v58 >> 3;
        goto LABEL_237;
      }
      v39 = v38 - 2;
      if ( !v39 )
      {
        if ( v11[1] != 2LL )
          goto LABEL_17;
        v57 = (_WORD *)v11[2];
        v134 = v57;
        if ( v4 )
        {
          if ( ((unsigned __int8)v57 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v57 = v134;
        }
        v113 = *v57;
        if ( *v57 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_17;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v113] + 136) )
          goto LABEL_17;
        *(_WORD *)(a4 + 250) = v113;
LABEL_158:
        v11 = v112;
        goto LABEL_238;
      }
      v40 = v39 - 3;
      if ( !v40 )
      {
        v53 = v11[1];
        if ( v53 > 0x18 )
          goto LABEL_17;
        v158 = 0LL;
        v159 = 0LL;
        v54 = v11[2];
        if ( v4 && v54 >= 0x7FFFFFFF0000LL )
          v54 = 0x7FFFFFFF0000LL;
        memmove(&v158, (const void *)v54, v53);
        v55 = v158;
        v154 = v158;
        v56 = v159;
        v155 = v159;
        v14 = PspValidateMitigationOptions(&v154, 0);
        if ( v14 < 0 )
          goto LABEL_296;
        *(__m128i *)(a4 + 360) = v55;
        *(_QWORD *)(a4 + 376) = v56;
        goto LABEL_237;
      }
      v41 = v40 - 2;
      if ( !v41 )
      {
        v50 = v11[1];
        if ( !v50 || (v50 & 7) != 0 || v50 > 0x88 )
          goto LABEL_17;
        v51 = (char *)v11[2];
        v146 = v51;
        if ( v4 )
        {
          if ( ((unsigned __int8)v51 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v51[v50] > 0x7FFFFFFF0000LL || &v51[v50] < v51 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v52 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v50, 0x61547350u);
        *(_QWORD *)(a4 + 392) = v52;
        if ( !v52 )
          goto LABEL_52;
        memmove(v52, v51, v50);
        *(_DWORD *)(a4 + 408) = v50;
        if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 392), v50) )
          goto LABEL_17;
        goto LABEL_237;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        v44 = v11[1];
        if ( !v44 || (v44 & 7) != 0 || (v44 & 0xFFFFFFFFFFFFFFF8uLL) > v12 )
          goto LABEL_17;
        v45 = v11[2];
        v135 = (char *)v45;
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
        v48 = 0LL;
        v133 = 0LL;
        for ( i = 0LL; i < *(unsigned int *)(a4 + 412); ++i )
        {
          LODWORD(Tag) = 1816818512;
          LOBYTE(v47) = a2;
          v14 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)(v45 + 8 * v48), 1LL, PsJobType, v47, Tag, &v132, 0LL, 0LL);
          if ( v14 < 0 )
            goto LABEL_296;
          *(_QWORD *)(*(_QWORD *)(a4 + 400) + 8 * v48) = v132;
          v48 = i + 1;
          v133 = i + 1;
        }
LABEL_236:
        v6 = v122;
        goto LABEL_237;
      }
      if ( v42 != 1 || v11[1] != 4LL )
        goto LABEL_17;
      v43 = (_DWORD *)v11[2];
      v131 = v43;
      if ( v4 )
      {
        if ( ((unsigned __int8)v43 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v112;
        v43 = v131;
      }
      *(_DWORD *)(a4 + 416) = *v43;
    }
    else if ( v13 == 131082 )
    {
      if ( v11[1] != 8LL )
        goto LABEL_17;
      v36 = (_DWORD *)v11[2];
      v130 = v36;
      if ( v4 )
      {
        if ( ((unsigned __int8)v36 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v112;
        v36 = v130;
      }
      if ( (*v36 & 0x1C) != 0 )
      {
        v14 = -1073741637;
        goto LABEL_296;
      }
      v37 = *v36 & 3;
      v119 = v37;
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
              v144 = v28;
              if ( v4 && ((unsigned __int64)&v28[v27] > 0x7FFFFFFF0000LL || &v28[v27] < v28) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v29 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v27, 0x6E467350u);
              v145 = v29;
              if ( !v29 )
                goto LABEL_52;
              *(_OWORD *)(a4 + 232) = 0LL;
              *(_WORD *)(a4 + 234) = v27;
              *(_QWORD *)(a4 + 240) = v29;
              memmove(v29, v28, v27);
              *(_WORD *)(a4 + 232) = v27;
              goto LABEL_237;
            }
            v20 = v19 - 2;
            if ( !v20 )
            {
              v24 = v11[1];
              if ( !v24 || (v24 & 0xF) != 0 )
                goto LABEL_17;
              v25 = (char *)v11[2];
              v143 = v25;
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
              goto LABEL_237;
            }
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 1 || v11[1] != 4LL )
                goto LABEL_17;
              v22 = (_DWORD *)v11[2];
              v125 = v22;
              if ( v4 )
              {
                if ( ((unsigned __int8)v22 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v11 = v112;
                v22 = v125;
              }
              *(_DWORD *)(a4 + 316) = *v22;
            }
            else
            {
              if ( v11[1] != 1LL )
                goto LABEL_17;
              v23 = (_BYTE *)v11[2];
              v126 = v23;
              if ( v4 )
              {
                v11 = v112;
                v23 = v126;
              }
              *(_BYTE *)(a4 + 248) = *v23;
            }
          }
          else
          {
            if ( v11[1] != 8LL )
              goto LABEL_17;
            v30 = v11[2];
            v127 = v30;
            if ( v4 )
            {
              if ( (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v30 >= 0x7FFFFFFF0000LL )
                v30 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v30 = *(_BYTE *)v30;
              *(_BYTE *)(v30 + 7) = *(_BYTE *)(v30 + 7);
              v11 = v112;
              v30 = v127;
            }
            *(_QWORD *)(a4 + 24) = v30;
            v31 = v11[3];
            v114 = v31;
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
                v11 = v112;
                v31 = v114;
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
          v128 = v32;
          if ( v4 )
          {
            if ( (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v32 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            *(_BYTE *)(v32 + 15) = *(_BYTE *)(v32 + 15);
            v32 = v128;
            v11 = v112;
          }
          *(_QWORD *)(a4 + 16) = v32;
          v33 = v11[3];
          v115 = v33;
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
              v11 = v112;
              v33 = v115;
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
        v129 = v34;
        if ( v4 )
        {
          if ( (v34 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v34 >= 0x7FFFFFFF0000LL )
            v34 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v34 = *(_BYTE *)v34;
          *(_BYTE *)(v34 + 63) = *(_BYTE *)(v34 + 63);
          v11 = v112;
          v34 = v129;
        }
        *(_QWORD *)(a4 + 32) = v34;
        v35 = v11[3];
        v116 = v35;
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
            v11 = v112;
            v35 = v116;
          }
          *(_QWORD *)v35 = 64LL;
        }
      }
    }
LABEL_238:
    v11 += 4;
    v112 = v11;
    v10 = --v118;
  }
  v14 = 0;
LABEL_296:
  if ( v14 < 0 )
    goto LABEL_302;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v120 != 0);
  }
  if ( v14 < 0 )
LABEL_302:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
