/*
 * XREFs of ParseTerm @ 0x1C0007480
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0009350 (ParseSuperName.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     ParseNameTail @ 0x1C00215A0 (ParseNameTail.c)
 *     PushCall @ 0x1C00219CC (PushCall.c)
 *     FindOpcodeTerm @ 0x1C00228B8 (FindOpcodeTerm.c)
 *     RtlStringCchCopyA @ 0x1C0022F50 (RtlStringCchCopyA.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     PushTerm @ 0x1C0028F14 (PushTerm.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     ParseInteger @ 0x1C002CA40 (ParseInteger.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0065C80 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     PrintIndent @ 0x1C00668F0 (PrintIndent.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int NameSpaceObjectNoLock)
{
  __int64 v3; // rdi
  _QWORD *v4; // r13
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r11d
  int v8; // eax
  unsigned int v9; // eax
  const void **v10; // r10
  unsigned int v11; // ebx
  int v12; // esi
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // ebx
  const void **v16; // rax
  int v17; // edx
  char *v18; // r14
  __int64 v19; // rax
  __int64 OpcodeTerm; // rbx
  char *v21; // r8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  void *v25; // rax
  __int64 (__fastcall *v26)(_QWORD *, __int64, __int64, __int64); // rax
  unsigned int v27; // eax
  __int64 v28; // r10
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *); // r11
  __int64 v30; // r14
  unsigned int v31; // r15d
  unsigned int v32; // esi
  __int64 v33; // rbx
  _QWORD *v34; // rsi
  _QWORD *v35; // rbx
  __int64 v36; // r8
  _QWORD *v37; // rax
  _QWORD *j; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // r9
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // r9
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rdi
  _QWORD *v49; // rbx
  __int64 v50; // r8
  _QWORD *v51; // rax
  _QWORD *k; // rdx
  _QWORD *v53; // rcx
  _QWORD *v54; // r9
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // r9
  _QWORD *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  unsigned int v67; // eax
  unsigned __int64 *v68; // rbx
  unsigned __int8 *v69; // rax
  unsigned int v70; // r8d
  unsigned __int8 *v71; // r9
  unsigned int v72; // edx
  unsigned __int64 v73; // rax
  char v74; // al
  _QWORD *v75; // r15
  int v76; // esi
  char *v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r10
  __int64 v80; // r9
  char v81; // al
  size_t v82; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v84; // bl
  unsigned __int64 v85; // rsi
  __int64 n; // rbx
  __int16 v87; // ax
  __int64 v88; // rcx
  __int64 v89; // r10
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int16 v92; // ax
  _QWORD *v93; // r12
  _QWORD *v94; // r13
  __int64 v95; // r9
  _QWORD *v96; // rax
  _QWORD *i; // rdx
  _QWORD *v98; // rcx
  _QWORD *v99; // r8
  __int64 v100; // rcx
  __int64 v101; // r10
  _QWORD *v102; // rax
  _QWORD *v103; // r8
  __int64 v104; // r10
  __int64 v105; // rcx
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r10
  char v110; // al
  int v111; // ebx
  __int64 v112; // rdx
  __int64 v113; // r9
  __int64 v114; // r8
  char v115; // al
  __int64 v116; // rax
  void *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  unsigned int v121; // eax
  __int64 v122; // rcx
  unsigned __int8 v123; // r10
  int v124; // eax
  int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // r8
  int v128; // ebx
  __int64 v129; // rdx
  __int64 v130; // rdx
  _QWORD *v131; // r13
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rcx
  _QWORD *v135; // rax
  unsigned int *v136; // rax
  char *v137; // r8
  _BYTE *v138; // rax
  unsigned int m; // ecx
  _BYTE *v140; // rdx
  int v141; // esi
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 *v144; // rax
  char *v145; // r8
  _BYTE *v146; // rdx
  __int64 v147; // rax
  _BYTE *v148; // rcx
  __int64 v149; // rdx
  int v150; // eax
  bool v151; // al
  int v152; // ebx
  __int64 (__fastcall *v153)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *); // rax
  unsigned __int64 *v154; // rcx
  unsigned __int64 v155; // rax
  int ObjectTypeName; // eax
  __int64 v157; // rcx
  _QWORD *v158; // rax
  __int64 v159; // rcx
  _QWORD *v160; // rax
  __int64 v161; // rcx
  _QWORD *v162; // rax
  _QWORD *v164; // [rsp+50h] [rbp-B0h]
  char pszDest; // [rsp+60h] [rbp-A0h] BYREF
  char v166; // [rsp+61h] [rbp-9Fh] BYREF
  char Src; // [rsp+160h] [rbp+60h] BYREF
  char v168; // [rsp+161h] [rbp+61h] BYREF
  _BYTE P[128]; // [rsp+260h] [rbp+160h] BYREF

  v164 = (_QWORD *)a1;
  v3 = a2;
  v4 = (_QWORD *)a1;
  v5 = 1LL;
  v6 = -1LL;
  v7 = 2;
  if ( NameSpaceObjectNoLock )
  {
    v8 = 5;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v8 )
    {
      *(_DWORD *)(a2 + 16) = a1 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v149 = *(_QWORD *)(a2 + 56);
        v150 = *(_DWORD *)(v149 + 8);
        if ( v150 == 18 || v150 == 19 )
        {
          ++dword_1C0082804;
          PrintIndent(v4, v149, 1LL, -1LL);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(v3 + 76) )
          ConPrintf("(");
        v5 = 1LL;
        v6 = -1LL;
        v7 = 2;
      }
      a1 = *(unsigned int *)(*(_QWORD *)(v3 + 56) + 28LL);
      if ( (a1 & 1) != 0 )
      {
        v68 = (unsigned __int64 *)(v3 + 40);
        if ( v3 != -40 )
          *v68 = v4[15];
        v69 = (unsigned __int8 *)v4[15];
        v70 = *v69;
        v71 = v69 + 1;
        v4[15] = v69 + 1;
        v72 = v70 >> 6;
        if ( (unsigned __int8)(v70 >> 6) )
        {
          v70 &= 0xFu;
          v123 = 0;
          do
          {
            v124 = *v71++;
            v125 = v123++;
            v4[15] = v71;
            a1 = (unsigned int)(8 * v125 + 4);
            v70 |= v124 << a1;
          }
          while ( v123 < (unsigned __int8)v72 );
        }
        if ( v3 != -40 )
          *v68 += v70;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v73 = *(_QWORD *)(v3 + 48);
          if ( v73 )
          {
            if ( *v68 > v73 )
            {
              LogError(3222536207LL);
              AcpiDiagTraceAmlError(v4, 3222536207LL);
              PrintDebugMessage(143, *v68, *(_QWORD *)(v3 + 48), 0, 0LL);
              return (unsigned int)-1072431089;
            }
          }
        }
        v6 = -1LL;
        v5 = 1LL;
      }
      goto LABEL_5;
    }
  }
  v63 = v8 - 1;
  if ( v63 )
  {
    v64 = v63 - 1;
    if ( !v64 )
      goto LABEL_38;
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 != 1 )
          return NameSpaceObjectNoLock;
LABEL_46:
        if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v3 + 56) + 8LL) - 18) <= 1 )
          --dword_1C0082804;
        v30 = *(_QWORD *)(v3 + 80);
        if ( v30 )
        {
          v31 = *(_DWORD *)(v3 + 76);
          v32 = 0;
          if ( v31 )
          {
            do
            {
              v33 = 5LL * v32;
              if ( (*(_BYTE *)(v30 + 40LL * v32) & 1) != 0 )
              {
                v122 = *(_QWORD *)(v30 + 40LL * v32 + 8);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v122 + 8), 0xFFFFFFFF) == 1
                  && (*(_BYTE *)v122 & 8) != 0 )
                {
                  FreeData(v122);
                }
              }
              else if ( *(_QWORD *)(v30 + 40LL * v32 + 32) && *(int *)(v30 + 40LL * v32 + 8) <= 0 )
              {
                v92 = *(_WORD *)(v30 + 40LL * v32 + 2);
                if ( v92 == 4 )
                {
                  v136 = *(unsigned int **)(v30 + 40LL * v32 + 32);
                  FreeDataBuffs((__int64)(v136 + 2), *v136);
                  v92 = *(_WORD *)(v30 + 40LL * v32 + 2);
                }
                if ( v92 == 2 )
                {
                  v93 = *(_QWORD **)(v30 + 40LL * v32 + 32);
                  *((_DWORD *)v93 - 4) = 0;
                  v94 = v93 - 2;
                  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                  v95 = *(v93 - 1);
                  v96 = *(_QWORD **)(v95 + 40);
                  for ( i = (_QWORD *)(v95 + 40); v96 != i; v96 = (_QWORD *)*v96 )
                  {
                    if ( v93 < v96 )
                      break;
                  }
                  v98 = (_QWORD *)v96[1];
                  if ( (_QWORD *)*v98 != v96 )
                    goto LABEL_427;
                  v93[1] = v98;
                  *v93 = v96;
                  *v98 = v93;
                  v96[1] = v93;
                  v99 = (_QWORD *)*v93;
                  v100 = *v93 - 16LL;
                  if ( (_QWORD *)*v93 != i )
                  {
                    v101 = *((unsigned int *)v94 + 1);
                    if ( (_QWORD *)v100 == (_QWORD *)((char *)v94 + v101) )
                    {
                      *((_DWORD *)v94 + 1) = v101 + *(_DWORD *)(v100 + 4);
                      v134 = *v99;
                      if ( *(_QWORD **)(*v99 + 8LL) != v99 )
                        goto LABEL_427;
                      v135 = (_QWORD *)v99[1];
                      if ( (_QWORD *)*v135 != v99 )
                        goto LABEL_427;
                      *v135 = v134;
                      *(_QWORD *)(v134 + 8) = v135;
                    }
                  }
                  v102 = (_QWORD *)v94[3];
                  v103 = v102 - 2;
                  if ( v102 != i )
                  {
                    v142 = *((unsigned int *)v103 + 1);
                    if ( v94 == (_QWORD *)((char *)v103 + v142) )
                    {
                      *((_DWORD *)v103 + 1) = *((_DWORD *)v94 + 1) + v142;
                      v157 = *v93;
                      if ( *(_QWORD **)(*v93 + 8LL) != v93 )
                        goto LABEL_427;
                      v158 = (_QWORD *)v93[1];
                      if ( (_QWORD *)*v158 != v93 )
                        goto LABEL_427;
                      *v158 = v157;
                      v94 = v103;
                      *(_QWORD *)(v157 + 8) = v158;
                    }
                  }
                  if ( *(_QWORD *)(v95 + 32) <= (unsigned __int64)v94 + *((unsigned int *)v94 + 1) )
                  {
                    *(_QWORD *)(v95 + 32) = v94;
                    v131 = v94 + 2;
                    v132 = *v131;
                    if ( *(_QWORD **)(*v131 + 8LL) != v131 )
                      goto LABEL_427;
                    v133 = (_QWORD *)v131[1];
                    if ( (_QWORD *)*v133 != v131 )
                      goto LABEL_427;
                    *v133 = v132;
                    *(_QWORD *)(v132 + 8) = v133;
                  }
                  KeReleaseSpinLock(&gmutHeap, NewIrql);
                }
                else
                {
                  switch ( v92 )
                  {
                    case 3:
                    case 4:
                    case 7:
                    case 8:
                    case 10:
                    case 11:
                    case 12:
                    case 14:
                      HeapFree(*(_QWORD **)(v30 + 40LL * v32 + 32));
                      break;
                    case 5:
                      v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      v155 = *v154;
                      if ( !*v154 )
                        goto LABEL_402;
                      goto LABEL_401;
                    case 9:
                      PerformMutexDriverCallbacks(1, *(_QWORD *)(v30 + 40LL * v32 + 32), 0, 0, 0);
                      HeapFree(*(_QWORD **)(v30 + 40LL * v32 + 32));
                      break;
                    case 130:
                      v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      if ( *v154 )
                      {
                        DereferenceObjectEx(*v154);
                        v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      }
                      v155 = v154[1];
                      if ( v155 )
                        goto LABEL_401;
                      goto LABEL_402;
                    case 131:
                      v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      v155 = *v154;
                      if ( *v154 )
                        goto LABEL_401;
                      goto LABEL_402;
                    case 132:
                      v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      if ( *v154 )
                      {
                        DereferenceObjectEx(*v154);
                        v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      }
                      v155 = v154[1];
                      if ( v155 )
                      {
LABEL_401:
                        DereferenceObjectEx(v155);
                        v154 = *(unsigned __int64 **)(v30 + 40LL * v32 + 32);
                      }
LABEL_402:
                      HeapFree(v154);
                      break;
                    default:
                      LogError(3222536195LL);
                      AcpiDiagTraceAmlError(0LL, 3222536195LL);
                      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v30 + 40LL * v32 + 2));
                      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
                      break;
                  }
                }
              }
              *(_OWORD *)(v30 + 40LL * v32++) = 0LL;
              *(_OWORD *)(v30 + 8 * v33 + 16) = 0LL;
              *(_QWORD *)(v30 + 8 * v33 + 32) = 0LL;
            }
            while ( v32 < v31 );
            v4 = v164;
          }
          v34 = *(_QWORD **)(v3 + 80);
          *((_DWORD *)v34 - 4) = 0;
          v35 = v34 - 2;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v36 = *(v34 - 1);
          v37 = *(_QWORD **)(v36 + 40);
          for ( j = (_QWORD *)(v36 + 40); v37 != j; v37 = (_QWORD *)*v37 )
          {
            if ( v34 < v37 )
              break;
          }
          v39 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v39 != v37 )
            goto LABEL_427;
          v34[1] = v39;
          *v34 = v37;
          *v39 = v34;
          v37[1] = v34;
          v40 = (_QWORD *)*v34;
          v41 = *v34 - 16LL;
          if ( (_QWORD *)*v34 != j )
          {
            v104 = *((unsigned int *)v35 + 1);
            if ( (_QWORD *)v41 == (_QWORD *)((char *)v35 + v104) )
            {
              *((_DWORD *)v35 + 1) = v104 + *(_DWORD *)(v41 + 4);
              v105 = *v40;
              if ( *(_QWORD **)(*v40 + 8LL) != v40 )
                goto LABEL_427;
              v106 = (_QWORD *)v40[1];
              if ( (_QWORD *)*v106 != v40 )
                goto LABEL_427;
              *v106 = v105;
              *(_QWORD *)(v105 + 8) = v106;
            }
          }
          v42 = (_QWORD *)v35[3];
          v43 = v42 - 2;
          if ( v42 != j )
          {
            v88 = *((unsigned int *)v43 + 1);
            if ( v35 == (_QWORD *)((char *)v43 + v88) )
            {
              *((_DWORD *)v43 + 1) = *((_DWORD *)v35 + 1) + v88;
              v159 = *v34;
              if ( *(_QWORD **)(*v34 + 8LL) != v34 )
                goto LABEL_427;
              v160 = (_QWORD *)v34[1];
              if ( (_QWORD *)*v160 != v34 )
                goto LABEL_427;
              *v160 = v159;
              v35 = v43;
              *(_QWORD *)(v159 + 8) = v160;
            }
          }
          if ( *(_QWORD *)(v36 + 32) <= (unsigned __int64)v35 + *((unsigned int *)v35 + 1) )
          {
            *(_QWORD *)(v36 + 32) = v35;
            v44 = v35 + 2;
            v45 = *v44;
            if ( *(_QWORD **)(*v44 + 8LL) != v44 )
              goto LABEL_427;
            v46 = (_QWORD *)v44[1];
            if ( (_QWORD *)*v46 != v44 )
              goto LABEL_427;
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
          }
          KeReleaseSpinLock(&gmutHeap, NewIrql);
        }
        v47 = *(_QWORD *)(v3 + 64);
        if ( v47 )
        {
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v47 + 64) |= 4u;
            if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v47);
          }
          *(_QWORD *)(v3 + 64) = 0LL;
        }
        v48 = (_QWORD *)v4[52];
        v49 = v48 - 2;
        v4[52] = v48[1];
        *((_DWORD *)v48 - 4) = 0;
        NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v50 = *(v48 - 1);
        v51 = *(_QWORD **)(v50 + 40);
        for ( k = (_QWORD *)(v50 + 40); v51 != k; v51 = (_QWORD *)*v51 )
        {
          if ( v48 < v51 )
            break;
        }
        v53 = (_QWORD *)v51[1];
        if ( (_QWORD *)*v53 == v51 )
        {
          v48[1] = v53;
          *v48 = v51;
          *v53 = v48;
          v51[1] = v48;
          v54 = (_QWORD *)*v48;
          v55 = *v48 - 16LL;
          if ( (_QWORD *)*v48 != k )
          {
            v89 = *((unsigned int *)v49 + 1);
            if ( (_QWORD *)v55 == (_QWORD *)((char *)v49 + v89) )
            {
              *((_DWORD *)v49 + 1) = v89 + *(_DWORD *)(v55 + 4);
              v90 = *v54;
              if ( *(_QWORD **)(*v54 + 8LL) != v54 )
                goto LABEL_427;
              v91 = (_QWORD *)v54[1];
              if ( (_QWORD *)*v91 != v54 )
                goto LABEL_427;
              *v91 = v90;
              *(_QWORD *)(v90 + 8) = v91;
            }
          }
          v56 = (_QWORD *)v49[3];
          v57 = v56 - 2;
          if ( v56 != k )
          {
            v120 = *((unsigned int *)v57 + 1);
            if ( v49 == (_QWORD *)((char *)v57 + v120) )
            {
              *((_DWORD *)v57 + 1) = *((_DWORD *)v49 + 1) + v120;
              v161 = *v48;
              if ( *(_QWORD **)(*v48 + 8LL) != v48 )
                goto LABEL_427;
              v162 = (_QWORD *)v48[1];
              if ( (_QWORD *)*v162 != v48 )
                goto LABEL_427;
              *v162 = v161;
              v49 = v57;
              *(_QWORD *)(v161 + 8) = v162;
            }
          }
          if ( *(_QWORD *)(v50 + 32) > (unsigned __int64)v49 + *((unsigned int *)v49 + 1) )
          {
LABEL_71:
            KeReleaseSpinLock(&gmutHeap, NewIrql);
            return NameSpaceObjectNoLock;
          }
          *(_QWORD *)(v50 + 32) = v49;
          v58 = v49 + 2;
          v59 = *v58;
          if ( *(_QWORD **)(*v58 + 8LL) == v58 )
          {
            v60 = (_QWORD *)v58[1];
            if ( (_QWORD *)*v60 == v58 )
            {
              *v60 = v59;
              *(_QWORD *)(v59 + 8) = v60;
              goto LABEL_71;
            }
          }
        }
LABEL_427:
        __fastfail(3u);
      }
    }
    else
    {
LABEL_39:
      ++*(_DWORD *)(v3 + 16);
      if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(v3 + 76) )
        ConPrintf(")");
      v26 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*(_QWORD *)(v3 + 56) + 48LL);
      if ( v26 )
      {
        v27 = v26(v4, v3, v5, v6);
        NameSpaceObjectNoLock = v27;
        if ( v27 || v3 != v4[52] )
          return v27;
      }
    }
    ++*(_DWORD *)(v3 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      a2 = *(_QWORD *)(v3 + 56);
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 17) > 2 && *(_DWORD *)(a2 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(v3 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger(a1, a2, v5, v6);
    }
    else
    {
      v28 = *(_QWORD *)(v3 + 56);
      v29 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *))(v28 + 32);
      if ( v29 )
      {
        if ( *(int *)(v28 + 28) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v28 + 32))(
            1LL,
            *(unsigned int *)(v28 + 8),
            *(_QWORD *)(v3 + 64) + 120LL,
            *(unsigned int *)(v28 + 40));
        }
        else
        {
          NameSpaceObjectNoLock = v29(
                                    12LL,
                                    2LL,
                                    *(unsigned int *)(v28 + 8),
                                    *(_QWORD *)(v3 + 64) + 120LL,
                                    *(_DWORD *)(v28 + 40),
                                    v4);
          if ( NameSpaceObjectNoLock == 259 )
            return 32772;
        }
      }
    }
    goto LABEL_46;
  }
LABEL_5:
  v9 = *(_DWORD *)(v3 + 76);
  v10 = (const void **)(v4 + 15);
  v11 = *(_DWORD *)(v3 + 72);
  v12 = NameSpaceObjectNoLock;
  while ( 1 )
  {
    if ( v11 < v9 )
    {
      while ( 2 )
      {
        *(_DWORD *)(v3 + 72) = v11 + 1;
        if ( (gDebugger & 0xD0) != 0 && v11 )
        {
          ConPrintf(",");
          v7 = 2;
          v10 = (const void **)(v4 + 15);
          v6 = -1LL;
          v5 = 1LL;
        }
        v13 = *(_QWORD *)(v3 + 48);
        v14 = *(_QWORD *)(v3 + 80) + 40LL * v11;
        v15 = *(char *)(v11 + *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL));
        if ( v15 == 67 )
        {
          v16 = (const void **)&unk_1C0082840;
          v17 = 0;
          a1 = 0LL;
          do
          {
            if ( *v10 == *v16 )
              break;
            ++v17;
            ++a1;
            v16 += 2;
          }
          while ( (__int64)v16 < (__int64)&qword_1C00828E0 );
          if ( v17 != 10 )
          {
            a1 *= 2LL;
            if ( (dword_1C0082838[2 * a1] & 1) != 0 && v17 != -1 )
            {
              ConPrintf("\nHit Breakpoint %d.\n");
              ((void (*)(void))AMLIDebugger)();
              v10 = (const void **)(v4 + 15);
              v7 = 2;
              v6 = -1LL;
            }
          }
          v18 = (char *)*v10;
          v19 = *(unsigned __int8 *)*v10;
          if ( (_BYTE)v19 == 91 )
          {
            *v10 = v18 + 1;
            OpcodeTerm = FindOpcodeTerm((unsigned __int8)v18[1]);
          }
          else
          {
            OpcodeTerm = (__int64)*(&OpcodeTable + v19);
            v21 = (char *)*v10;
          }
          if ( !OpcodeTerm )
          {
            LogError(3222536193LL);
            AcpiDiagTraceAmlError(v4, 3222536193LL);
            PrintDebugMessage(134, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
            v12 = -1072431103;
            NameSpaceObjectNoLock = -1072431103;
            goto LABEL_30;
          }
          v22 = *(_DWORD *)(OpcodeTerm + 28);
          if ( (v22 & 8) != 0 )
          {
            a1 = (unsigned __int8)*v21;
            v4[15] = v21 + 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            *(_WORD *)(v14 + 2) = 1;
            NameSpaceObjectNoLock = 0;
            if ( (_DWORD)a1 == 10 )
            {
              a1 = *(unsigned __int8 *)v4[15];
              *(_BYTE *)(v14 + 16) = a1;
              ++v4[15];
              if ( (gDebugger & 0xD0) != 0 )
                goto LABEL_350;
            }
            else
            {
              if ( (_DWORD)a1 == 12 )
              {
                a1 = *(unsigned int *)v4[15];
                *(_DWORD *)(v14 + 16) = a1;
                v4[15] += 4LL;
              }
              else
              {
                if ( (unsigned int)a1 <= 0xC )
                {
                  if ( !(_BYTE)a1 )
                  {
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("Zero");
                    goto LABEL_156;
                  }
                  if ( (_DWORD)a1 == 1 )
                  {
                    *(_QWORD *)(v14 + 16) = 1LL;
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("One");
                    goto LABEL_156;
                  }
                  if ( (_DWORD)a1 == 11 )
                  {
                    a1 = *(unsigned __int16 *)v4[15];
                    *(_WORD *)(v14 + 16) = a1;
                    v4[15] += 2LL;
                    goto LABEL_220;
                  }
LABEL_348:
                  --v4[15];
                  LogError(3222536193LL);
                  AcpiDiagTraceAmlError(v4, 3222536193LL);
                  PrintDebugMessage(128, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
                  v12 = -1072431103;
                  NameSpaceObjectNoLock = -1072431103;
                  goto LABEL_30;
                }
                if ( (_DWORD)a1 == 255 )
                {
                  if ( IsCompatableDSDTRevision() )
                    v143 = -1LL;
                  else
                    v143 = 0xFFFFFFFFLL;
                  *(_QWORD *)(v14 + 16) = v143;
                  if ( (gDebugger & 0xD0) != 0 )
                    ConPrintf("Ones");
                  goto LABEL_156;
                }
                if ( (_DWORD)a1 != 14 )
                  goto LABEL_348;
                v144 = (__int64 *)v4[15];
                a1 = *v144;
                *(_QWORD *)(v14 + 16) = *v144;
                v4[15] += 8LL;
              }
LABEL_220:
              if ( (gDebugger & 0xD0) != 0 )
LABEL_350:
                ConPrintf("0x%I64x");
            }
LABEL_156:
            v12 = 0;
            goto LABEL_30;
          }
          if ( (v22 & 0x10) != 0 )
          {
            v12 = ParseString((__int64)v4, v10, v14, 0);
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          }
          if ( (v22 & 2) != 0 )
          {
            v126 = v4[12];
            v127 = (unsigned int)(unsigned __int8)*v21 - 104;
            NameSpaceObjectNoLock = 0;
            v128 = v127;
            if ( (unsigned int)v127 >= *(_DWORD *)(v126 + 60) )
            {
              LogError(3222536197LL);
              AcpiDiagTraceAmlError(v4, 3222536197LL);
              PrintDebugMessage(122, v128, 0, 0, 0LL);
              v12 = -1072431099;
              NameSpaceObjectNoLock = -1072431099;
              goto LABEL_30;
            }
            a1 = 5 * v127;
            v129 = *(_QWORD *)(v126 + 64) + 40 * v127;
            if ( v14 != v129 )
            {
              *(_OWORD *)v14 = *(_OWORD *)v129;
              *(_OWORD *)(v14 + 16) = *(_OWORD *)(v129 + 16);
              *(_QWORD *)(v14 + 32) = *(_QWORD *)(v129 + 32);
              if ( (*(_BYTE *)v129 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v129 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v129 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v129 + 8));
                *(_WORD *)v14 |= 1u;
                *(_QWORD *)(v14 + 8) = v129;
              }
            }
            *v10 = (char *)*v10 + 1;
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Arg%d=");
              PrintObject(v14);
              v12 = 0;
              goto LABEL_30;
            }
            v12 = 0;
            goto LABEL_31;
          }
          if ( (v22 & 4) != 0 )
          {
            v130 = v4[12]
                 + 8 * ((unsigned int)(unsigned __int8)*v21 - 96 + 4LL * ((unsigned int)(unsigned __int8)*v21 - 96) + 9);
            if ( v14 != v130 )
            {
              *(_OWORD *)v14 = *(_OWORD *)v130;
              *(_OWORD *)(v14 + 16) = *(_OWORD *)(v130 + 16);
              *(_QWORD *)(v14 + 32) = *(_QWORD *)(v130 + 32);
              if ( (*(_BYTE *)v130 & 1) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v130 + 8) + 8LL));
              }
              else if ( *(_QWORD *)(v130 + 32) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v130 + 8));
                *(_WORD *)v14 |= 1u;
                *(_QWORD *)(v14 + 8) = v130;
              }
            }
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Local%d=");
              PrintObject(v14);
              v10 = (const void **)(v4 + 15);
            }
            *v10 = (char *)*v10 + 1;
            v12 = 0;
            NameSpaceObjectNoLock = 0;
            goto LABEL_31;
          }
          if ( (v22 & 0x20) == 0 )
          {
            if ( (v22 & 0x40) != 0 )
            {
              LogError(3222536198LL);
              AcpiDiagTraceAmlError(v4, 3222536198LL);
              PrintDebugMessage(133, 0, 0, 0, 0LL);
              v12 = -1072431098;
              NameSpaceObjectNoLock = -1072431098;
            }
            else
            {
              *v10 = v21 + 1;
              v23 = HeapAlloc(v4 + 60, 1297237576LL);
              v24 = v23;
              if ( v23 )
              {
                *(_QWORD *)(v23 + 8) = v4[52];
                v4[52] = v23;
                *(_DWORD *)v23 = 1297237332;
                *(_QWORD *)(v23 + 24) = ParseTerm;
                LODWORD(v23) = 0;
                *(_QWORD *)(v24 + 32) = v18;
                *(_QWORD *)(v24 + 48) = v13;
                *(_QWORD *)(v24 + 56) = OpcodeTerm;
                *(_QWORD *)(v24 + 88) = v14;
                a1 = *(_QWORD *)(OpcodeTerm + 16);
                NameSpaceObjectNoLock = 0;
                if ( a1 )
                {
                  v23 = -1LL;
                  do
                    ++v23;
                  while ( *(_BYTE *)(a1 + v23) );
                }
                *(_DWORD *)(v24 + 76) = v23;
                if ( !(_DWORD)v23 )
                  goto LABEL_29;
                v25 = (void *)HeapAlloc(v4[40], 1413563464LL);
                *(_QWORD *)(v24 + 80) = v25;
                if ( v25 )
                {
                  memset(v25, 0, 40LL * *(unsigned int *)(v24 + 76));
                  goto LABEL_29;
                }
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(v4, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v12 = -1073741670;
                NameSpaceObjectNoLock = -1073741670;
              }
              else
              {
                LogError(3222536194LL);
                AcpiDiagTraceAmlError(v4, 3222536194LL);
                PrintDebugMessage(153, 0, 0, 0, 0LL);
                v12 = -1072431102;
                NameSpaceObjectNoLock = -1072431102;
              }
            }
LABEL_30:
            v10 = (const void **)(v4 + 15);
            goto LABEL_31;
          }
          if ( *v21 == 92 )
          {
            RtlStringCchCopyA(&Src, 0x100uLL, "\\");
            ++v4[15];
            v12 = ParseNameTail(v4, v4 + 15, &Src);
            NameSpaceObjectNoLock = v12;
            goto LABEL_120;
          }
          if ( *v21 == 94 )
          {
            RtlStringCchCopyA(&Src, 0x100uLL, "^");
            ++v4[15];
            v137 = &v168;
            v138 = (_BYTE *)v4[15];
            for ( m = 1; m < 0xFF; ++m )
            {
              v140 = v138;
              if ( *v138 != 94 )
                break;
              ++v138;
              *v137++ = 94;
              v4[15] = v138;
              v140 = v138;
            }
            *(&Src + m) = 0;
            if ( *v140 != 94 )
            {
              v12 = ParseNameTail(v4, v4 + 15, &Src);
              NameSpaceObjectNoLock = v12;
              goto LABEL_120;
            }
            LogError(3221225734LL);
            AcpiDiagTraceAmlError(v4, 3221225734LL);
            PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
            v12 = -1073741562;
            NameSpaceObjectNoLock = -1073741562;
            goto LABEL_131;
          }
          Src = 0;
          NameSpaceObjectNoLock = 0;
          a1 = v6;
          do
            ++a1;
          while ( *(&Src + a1) );
          v74 = *v21;
          if ( *v21 )
          {
            v75 = v4 + 15;
            if ( v74 != 47 )
            {
              if ( v74 == 46 )
              {
                v76 = v7;
                *v75 = v21 + 1;
              }
              else
              {
                v76 = 1;
              }
              while ( 1 )
              {
LABEL_109:
                if ( (unsigned __int64)(unsigned int)a1 + 4 >= 0x100 )
                {
                  LogError(3221225734LL);
                  AcpiDiagTraceAmlError(v4, 3221225734LL);
                  PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
                  v12 = -1073741562;
                  NameSpaceObjectNoLock = -1073741562;
LABEL_120:
                  if ( !v12 )
                  {
                    if ( (gDebugger & 0xD0) != 0 )
                      ConPrintf("%s");
                    v82 = -1LL;
                    do
                      ++v82;
                    while ( *(&Src + v82) );
                    if ( v82 + 1 < 0x80 )
                    {
                      PoolWithTag = P;
                      goto LABEL_127;
                    }
                    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v82 + 1, 0x69706341u);
                    if ( !PoolWithTag )
                    {
                      v12 = -1073741670;
                      NameSpaceObjectNoLock = -1073741670;
                      goto LABEL_30;
                    }
LABEL_127:
                    memmove(PoolWithTag, &Src, v82);
                    PoolWithTag[v82] = 0;
                    v84 = ExAcquireSpinLockShared(&ACPINamespaceLock);
                    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
                    ExReleaseSpinLockShared(&ACPINamespaceLock, v84);
                    if ( P != PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    v12 = NameSpaceObjectNoLock;
                    if ( NameSpaceObjectNoLock == -1073741772 )
                    {
                      LogError(3221225524LL);
                      AcpiDiagTraceAmlError(v4, 3221225524LL);
                      PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
                    }
                  }
LABEL_131:
                  if ( v12 )
                    goto LABEL_30;
                  v85 = 0LL;
                  a1 = 128LL;
                  if ( MEMORY[0x42] == 128 )
                  {
                    do
                      v85 = *(_QWORD *)(v85 + 80);
                    while ( *(_WORD *)(v85 + 66) == 128 );
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                    _InterlockedIncrement((volatile signed __int32 *)(v85 + 112));
                  if ( *(_WORD *)(v85 + 66) == 8 )
                  {
                    NameSpaceObjectNoLock = PushCall(v4, v85, v14);
                  }
                  else
                  {
                    NameSpaceObjectNoLock = 0;
                    for ( n = v85 + 64; ; n = *(_QWORD *)(n + 16) )
                    {
                      while ( 1 )
                      {
                        v87 = *(_WORD *)(n + 2);
                        if ( v87 != 128 )
                          break;
                        n = *(_QWORD *)(n + 16) + 64LL;
                      }
                      if ( v87 != 129 )
                        break;
                    }
                    if ( v87 == 5 )
                    {
                      v119 = HeapAlloc(v4 + 60, 1297237576LL);
                      if ( v119 )
                      {
                        *(_QWORD *)(v119 + 8) = v4[52];
                        a1 = (__int64)AccFieldUnit;
                        v4[52] = v119;
                        *(_QWORD *)(v119 + 24) = AccFieldUnit;
                        *(_DWORD *)v119 = 1430668097;
                        *(_QWORD *)(v119 + 32) = n;
                        *(_DWORD *)(v119 + 16) = 0x10000;
                        *(_QWORD *)(v119 + 40) = v14;
                        NameSpaceObjectNoLock = 0;
                      }
                      else
                      {
                        LogError(3222536194LL);
                        AcpiDiagTraceAmlError(v4, 3222536194LL);
                        PrintDebugMessage(153, 0, 0, 0, 0LL);
                        NameSpaceObjectNoLock = -1072431102;
                      }
                    }
                    else if ( v87 == 14 )
                    {
                      NameSpaceObjectNoLock = ReadField(v4, n, *(_QWORD *)(n + 32) + 12LL, v14);
                    }
                    else
                    {
                      if ( v14 != n )
                      {
                        *(_OWORD *)v14 = *(_OWORD *)n;
                        *(_OWORD *)(v14 + 16) = *(_OWORD *)(n + 16);
                        *(_QWORD *)(v14 + 32) = *(_QWORD *)(n + 32);
                        if ( (*(_BYTE *)n & 1) != 0 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(n + 8) + 8LL));
                        }
                        else if ( *(_QWORD *)(n + 32) )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(n + 8));
                          *(_WORD *)v14 |= 1u;
                          *(_QWORD *)(v14 + 8) = n;
                        }
                      }
                      if ( (gDebugger & 0xD0) != 0 )
                      {
                        ConPrintf("=");
                        PrintObject(v14);
                      }
                    }
                  }
                  if ( (gdwfAMLI & 4) != 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 112), 0xFFFFFFFF) == 1 )
                  {
                    *(_WORD *)(v85 + 64) |= 4u;
                    if ( (*(_WORD *)(v85 + 64) & 0x40) == 0 )
                      FreeNameSpaceObjects(v85);
                  }
                  if ( (gdwfAMLI & 4) != 0 )
                  {
                    a1 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)0x70, 0xFFFFFFFF);
                    if ( (_DWORD)a1 == 1 )
                    {
                      a1 = 0LL;
                      MEMORY[0x40] |= 4u;
                      if ( (MEMORY[0x40] & 0x40) == 0 )
                        FreeNameSpaceObjects(0LL);
                    }
                  }
LABEL_29:
                  v12 = NameSpaceObjectNoLock;
                  goto LABEL_30;
                }
                v77 = &Src + (unsigned int)a1;
                v78 = (unsigned int)(256 - a1);
                if ( (unsigned __int64)(v78 - 1) <= 0x7FFFFFFE )
                  break;
                if ( 256 != (_DWORD)a1 )
                  goto LABEL_117;
LABEL_118:
                *v75 += 4LL;
                a1 = (unsigned int)(a1 + 4);
                if ( !--v76 )
                {
                  v12 = 0;
                  goto LABEL_120;
                }
                v152 = a1 + 1;
                if ( (unsigned int)(a1 + 1) < 0x100 )
                {
                  RtlStringCchCopyA(&Src + (unsigned int)a1, (unsigned int)(256 - a1), ".");
                  LODWORD(a1) = v152;
                }
              }
              v79 = 4 - v78;
              v80 = *v75 - (_QWORD)v77;
              while ( v79 + v78 )
              {
                v81 = v77[v80];
                if ( !v81 )
                  break;
                *v77++ = v81;
                if ( !--v78 )
                  goto LABEL_360;
              }
              if ( v78 )
                goto LABEL_117;
LABEL_360:
              --v77;
LABEL_117:
              *v77 = 0;
              goto LABEL_118;
            }
            *v75 = v21 + 1;
            v76 = (unsigned __int8)v21[1];
            *v75 = v21 + 2;
            if ( v76 )
              goto LABEL_109;
          }
          else
          {
            *v10 = v21 + 1;
          }
          v12 = 0;
          goto LABEL_120;
        }
        switch ( v15 )
        {
          case 'B':
            *(_WORD *)(v14 + 2) = 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            a1 = *(unsigned __int8 *)*v10;
            *(_BYTE *)(v14 + 16) = a1;
            *v10 = (char *)*v10 + 1;
            if ( (gDebugger & 0xD0) == 0 )
              goto LABEL_215;
            ConPrintf("0x%I64x");
            v7 = 2;
            NameSpaceObjectNoLock = 0;
            v10 = (const void **)(v4 + 15);
            v12 = 0;
            v5 = 1LL;
            goto LABEL_33;
          case 'D':
            v67 = ParseInteger(v10, v14, 4LL, -1LL);
            goto LABEL_83;
          case 'N':
            a1 = v4[15];
            v107 = *(unsigned __int8 *)a1;
            v108 = (__int64)*(&OpcodeTable + v107);
            if ( !v108 || (*(_DWORD *)(v108 + 28) & 0x20) == 0 )
            {
              LogError(3222536193LL);
              AcpiDiagTraceAmlError(v4, 3222536193LL);
              PrintDebugMessage(132, *(unsigned __int8 *)v4[15], v4[15], 0, 0LL);
              v12 = -1072431103;
              goto LABEL_332;
            }
            if ( (_BYTE)v107 == 92 )
            {
              RtlStringCchCopyA(&pszDest, 0x100uLL, "\\");
              ++v4[15];
LABEL_282:
              v12 = ParseNameTail(v4, v4 + 15, &pszDest);
              NameSpaceObjectNoLock = v12;
              goto LABEL_205;
            }
            if ( (_BYTE)v107 == 94 )
            {
              RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
              ++v4[15];
              v145 = &v166;
              v146 = (_BYTE *)v4[15];
              v147 = 1LL;
              do
              {
                v148 = v146;
                if ( *v146 != 94 )
                  break;
                ++v146;
                *v145++ = 94;
                v4[15] = v146;
                v147 = (unsigned int)(v147 + 1);
                v148 = v146;
              }
              while ( (unsigned int)v147 < 0xFF );
              *(&pszDest + v147) = 0;
              if ( *v148 == 94 )
              {
                LogError(3221225734LL);
                AcpiDiagTraceAmlError(v4, 3221225734LL);
                PrintDebugMessage(129, (unsigned int)&pszDest, 0, 0, 0LL);
                v12 = -1073741562;
                goto LABEL_332;
              }
              goto LABEL_282;
            }
            pszDest = 0;
            NameSpaceObjectNoLock = 0;
            v109 = -1LL;
            do
              ++v109;
            while ( *(&pszDest + v109) );
            v110 = *(_BYTE *)a1;
            if ( *(_BYTE *)a1 )
            {
              if ( v110 != 47 )
              {
                if ( v110 == 46 )
                {
                  v111 = 2;
                  v4[15] = a1 + 1;
                }
                else
                {
                  v111 = 1;
                }
                while ( 1 )
                {
LABEL_194:
                  if ( (unsigned __int64)(unsigned int)v109 + 4 >= 0x100 )
                  {
                    LogError(3221225734LL);
                    AcpiDiagTraceAmlError(v4, 3221225734LL);
                    PrintDebugMessage(130, (unsigned int)&pszDest, 0, 0, 0LL);
                    v12 = -1073741562;
                    NameSpaceObjectNoLock = -1073741562;
                    goto LABEL_205;
                  }
                  a1 = (__int64)(&pszDest + (unsigned int)v109);
                  v112 = (unsigned int)(256 - v109);
                  if ( (unsigned __int64)(v112 - 1) <= 0x7FFFFFFE )
                    break;
                  if ( 256 != (_DWORD)v109 )
                    goto LABEL_202;
LABEL_203:
                  v4[15] += 4LL;
                  LODWORD(v109) = v109 + 4;
                  if ( !--v111 )
                  {
                    v12 = 0;
                    goto LABEL_205;
                  }
                  v141 = v109 + 1;
                  if ( (unsigned int)(v109 + 1) < 0x100 )
                  {
                    RtlStringCchCopyA(&pszDest + (unsigned int)v109, (unsigned int)(256 - v109), ".");
                    LODWORD(v109) = v141;
                  }
                }
                v113 = 4 - v112;
                v114 = v4[15] - a1;
                while ( v113 + v112 )
                {
                  v115 = *(_BYTE *)(v114 + a1);
                  if ( !v115 )
                    break;
                  *(_BYTE *)a1++ = v115;
                  if ( !--v112 )
                    goto LABEL_326;
                }
                if ( v112 )
                  goto LABEL_202;
LABEL_326:
                --a1;
LABEL_202:
                *(_BYTE *)a1 = 0;
                goto LABEL_203;
              }
              v4[15] = a1 + 1;
              v111 = *(unsigned __int8 *)(a1 + 1);
              v4[15] = a1 + 2;
              if ( v111 )
                goto LABEL_194;
            }
            else
            {
              v4[15] = a1 + 1;
            }
            v12 = 0;
LABEL_205:
            if ( v12 )
              goto LABEL_30;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("%s");
            *(_WORD *)(v14 + 2) = 2;
            v116 = -1LL;
            while ( *(&pszDest + ++v116) != 0 )
              ;
            *(_DWORD *)(v14 + 24) = v116 + 1;
            v118 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL);
            *(_QWORD *)(v14 + 32) = v118;
            if ( v118 )
            {
              memmove(v118, &pszDest, *(unsigned int *)(v14 + 24));
              goto LABEL_30;
            }
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(v4, 3221225626LL);
            PrintDebugMessage(131, (unsigned int)&pszDest, 0, 0, 0LL);
            v12 = -1073741670;
LABEL_332:
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          case 'O':
            a1 = *(unsigned __int8 *)*v10;
            *v10 = (char *)*v10 + 1;
            *(_WORD *)(v14 + 2) = 1;
            *(_QWORD *)(v14 + 16) = 0LL;
            if ( (_BYTE)a1 )
            {
              if ( (unsigned int)a1 >= 0xF && (unsigned int)a1 < 0xFF )
                goto LABEL_225;
              if ( (_DWORD)a1 == 12 )
              {
                a1 = *(unsigned int *)*v10;
                *(_DWORD *)(v14 + 16) = a1;
                *v10 = (char *)*v10 + 4;
                goto LABEL_262;
              }
              if ( (unsigned int)a1 <= 0xC )
              {
                switch ( (_DWORD)a1 )
                {
                  case 1:
                    *(_QWORD *)(v14 + 16) = 1LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_263;
                    ConPrintf("One");
                    goto LABEL_334;
                  case 0xA:
                    a1 = *(unsigned __int8 *)*v10;
                    *(_BYTE *)(v14 + 16) = a1;
                    *v10 = (char *)*v10 + 1;
                    goto LABEL_262;
                  case 0xB:
                    a1 = *(unsigned __int16 *)*v10;
                    *(_WORD *)(v14 + 16) = a1;
                    *v10 = (char *)*v10 + 2;
                    goto LABEL_262;
                }
                goto LABEL_225;
              }
              if ( (_DWORD)a1 == 14 )
              {
                a1 = *(_QWORD *)*v10;
                *(_QWORD *)(v14 + 16) = a1;
                *v10 = (char *)*v10 + 8;
LABEL_262:
                if ( (gDebugger & 0xD0) == 0 )
                {
LABEL_263:
                  v12 = 0;
                  NameSpaceObjectNoLock = 0;
                  goto LABEL_32;
                }
                ConPrintf("0x%I64x");
LABEL_334:
                v7 = 2;
                v10 = (const void **)(v4 + 15);
                v5 = 1LL;
                goto LABEL_263;
              }
              if ( (_DWORD)a1 == 255 )
              {
                v151 = IsCompatableDSDTRevision();
                a1 = 0xFFFFFFFFLL;
                if ( v151 )
                  a1 = -1LL;
                *(_QWORD *)(v14 + 16) = a1;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("Ones");
                v12 = 0;
                NameSpaceObjectNoLock = 0;
                goto LABEL_30;
              }
LABEL_225:
              *v10 = (char *)*v10 - 1;
              NameSpaceObjectNoLock = ParseString((__int64)v4, v10, v14, 1);
              v12 = NameSpaceObjectNoLock;
              v10 = (const void **)(v4 + 15);
              if ( NameSpaceObjectNoLock == -1072431103 )
              {
                a1 = *(unsigned __int8 *)*v10;
                if ( (unsigned __int8)(a1 - 17) <= 2u )
                {
                  v121 = PushTerm((_DWORD)v4, (unsigned int)*v10, v13, (unsigned int)*(&OpcodeTable + a1), v14);
                  ++v4[15];
                  v10 = (const void **)(v4 + 15);
                  v12 = v121;
                  NameSpaceObjectNoLock = v121;
                }
              }
LABEL_31:
              v7 = 2;
              v5 = 1LL;
LABEL_32:
              if ( v12 )
                return NameSpaceObjectNoLock;
              goto LABEL_33;
            }
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Zero");
              v7 = 2;
              v10 = (const void **)(v4 + 15);
              v5 = 1LL;
            }
LABEL_215:
            v12 = 0;
            NameSpaceObjectNoLock = 0;
LABEL_33:
            if ( v3 != v4[52] )
              return NameSpaceObjectNoLock;
            v11 = *(_DWORD *)(v3 + 72);
            v6 = -1LL;
            if ( v11 >= *(_DWORD *)(v3 + 76) )
              goto LABEL_35;
            continue;
          case 'S':
            v67 = ParseSuperName(v4, v14, 0LL, *(_QWORD *)(v3 + 48));
            goto LABEL_83;
          case 'W':
            v67 = ParseInteger(v10, v14, 2LL, -1LL);
LABEL_83:
            v12 = v67;
            NameSpaceObjectNoLock = v67;
            goto LABEL_30;
          case 's':
            LOBYTE(v5) = 1;
            v12 = ParseSuperName(v4, v14, v5, *(_QWORD *)(v3 + 48));
            NameSpaceObjectNoLock = v12;
            goto LABEL_30;
          default:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(v4, 3222536195LL);
            PrintDebugMessage(121, v15, 0, 0, 0LL);
            v12 = -1072431101;
            NameSpaceObjectNoLock = -1072431101;
            goto LABEL_30;
        }
      }
    }
    if ( v12 )
      return NameSpaceObjectNoLock;
LABEL_35:
    if ( v3 != v4[52] )
      return NameSpaceObjectNoLock;
    v9 = *(_DWORD *)(v3 + 76);
    v11 = *(_DWORD *)(v3 + 72);
    if ( v11 >= v9 )
      break;
    v6 = -1LL;
  }
  ++*(_DWORD *)(v3 + 16);
LABEL_38:
  a2 = *(_QWORD *)(v3 + 56);
  ++*(_DWORD *)(v3 + 16);
  if ( *(int *)(a2 + 28) >= 0 )
    goto LABEL_39;
  v153 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, _QWORD *))(a2 + 32);
  if ( !v153 )
    goto LABEL_39;
  NameSpaceObjectNoLock = v153(
                            12LL,
                            1LL,
                            *(unsigned int *)(a2 + 8),
                            *(_QWORD *)(v3 + 64) + 120LL,
                            *(_DWORD *)(a2 + 40),
                            v4);
  if ( NameSpaceObjectNoLock != 259 )
    goto LABEL_39;
  return 32772;
}
