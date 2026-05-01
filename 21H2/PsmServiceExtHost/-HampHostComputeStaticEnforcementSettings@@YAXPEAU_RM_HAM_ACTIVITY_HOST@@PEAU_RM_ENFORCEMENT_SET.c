/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D460
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800052A0 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006028 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x18001E010 (RmpActivityImportanceMergeVectors.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18002A294 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x1800649A0 (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x180064A38 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  __int64 v7; // r9
  __int64 v8; // rax
  __int16 v9; // r15
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
  struct _RM_HAM_ACTIVITY_HOST *v50; // rbx
  unsigned __int8 v51; // cl
  int v52; // r8d
  int v53; // eax
  char v54; // al
  char v55; // cl
  char v56; // al
  char v57; // cl
  __int64 v58; // r14
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v69; // rax
  char *v70; // rax
  char *v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int128 v74; // xmm2
  unsigned __int64 v75; // rcx
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  struct _RM_COMMIT_THRESHOLDS *v78; // rax
  struct _RM_COMMIT_THRESHOLDS *v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // r9
  unsigned __int64 v84; // rdi
  __int128 v85; // xmm1
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  int v89; // eax
  unsigned int v90; // r9d
  unsigned int v91; // r10d
  int v92; // ecx
  int v93; // eax
  __int64 v94; // rcx
  __int128 v95; // xmm1
  __int128 v96; // [rsp+20h] [rbp-51h] BYREF
  __int128 v97; // [rsp+30h] [rbp-41h]
  __int128 v98; // [rsp+40h] [rbp-31h]
  __int64 v99; // [rsp+50h] [rbp-21h]
  int v100; // [rsp+58h] [rbp-19h]
  int v101; // [rsp+5Ch] [rbp-15h]
  int v102; // [rsp+60h] [rbp-11h] BYREF
  __int64 v103; // [rsp+68h] [rbp-9h]
  unsigned __int64 v104; // [rsp+70h] [rbp-1h]
  struct _RM_HAM_ACTIVITY_HOST *v105; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v106; // [rsp+D8h] [rbp+67h] BYREF
  struct _RM_COMMIT_THRESHOLDS *v107; // [rsp+E0h] [rbp+6Fh]
  struct _RM_COMMIT_THRESHOLDS *v108; // [rsp+E8h] [rbp+77h]

  v108 = a4;
  v107 = a3;
  v105 = a1;
  v106 = 0;
  v103 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v7 = 0LL;
  v100 = 0;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v8 = *((_QWORD *)a1 + 97);
  v9 = 1;
  v96 = 0LL;
  v101 = 1;
  v97 = 0LL;
  v10 = *(_QWORD *)(v8 + 88);
  LOWORD(v106) = 1;
  v11 = *((_DWORD *)a1 + 140) == 2;
  v104 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
       - 168;
  *((_DWORD *)a2 + 6) = !v11;
  v12 = *((_QWORD *)a1 + 75);
  LODWORD(v10) = v12 != (_QWORD)a1 + 600;
  v13 = v96;
  v14 = v12 - 96;
  v15 = *((_QWORD *)&v97 + 1);
  v16 = 0LL;
  *(_QWORD *)&v98 = v96;
  if ( (_DWORD)v10 )
    v16 = v14;
  if ( v16 )
  {
    v17 = v97;
    v18 = *((_QWORD *)&v96 + 1);
    v19 = v106;
    v99 = v97;
    *((_QWORD *)&v98 + 1) = *((_QWORD *)&v96 + 1);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 512);
      v21 = *((_QWORD *)a1 + 100);
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
      ++v100;
      if ( (*(_BYTE *)(v16 + 480) & 0x20) != 0 )
        break;
      v80 = *(_QWORD *)(v16 + 464);
      v81 = *(_QWORD *)(v16 + 456);
      v82 = *(_QWORD *)(v16 + 448);
      v83 = *(_QWORD *)(v16 + 440);
      if ( v80 == -1LL || v15 == -1LL || (v15 += v80, v15 < v80) )
        v15 = -1LL;
      *((_QWORD *)&v97 + 1) = v15;
      if ( v81 == -1LL || v17 == -1 || (v84 = v81 + v17, v99 = v84, v84 < v81) )
      {
        v99 = -1LL;
        *(_QWORD *)&v97 = -1LL;
      }
      else
      {
        *(_QWORD *)&v97 = v84;
      }
      if ( v82 == -1LL || v18 == -1LL || (v18 += v82, *((_QWORD *)&v98 + 1) = v18, v18 < v82) )
      {
        v18 = -1LL;
        *((_QWORD *)&v98 + 1) = -1LL;
      }
      *((_QWORD *)&v96 + 1) = v18;
      if ( v83 == -1LL || v13 == -1LL || (v13 += v83, *(_QWORD *)&v98 = v13, v13 < v83) )
      {
        v13 = -1LL;
        *(_QWORD *)&v98 = -1LL;
      }
      *(_QWORD *)&v96 = v13;
LABEL_23:
      v28 = *(_BYTE *)(v16 + 548);
      if ( v28 == 3 || v28 == 2 && *(_BYTE *)(v16 + 549) >= 3u || v20 == v21 )
      {
        v29 = *(unsigned int *)(v16 + 424);
        if ( (v29 & 1) != 0 )
          v19 = RmpActivityImportanceMergeVectors(v29, v19);
        if ( v28 != 3 )
        {
          if ( v28 != 2 )
            goto LABEL_30;
          if ( *(_BYTE *)(v16 + 549) < 3u )
            goto LABEL_141;
        }
        v30 = *(_DWORD *)(v16 + 480) & 3;
        if ( v30 <= *((_DWORD *)a2 + 6) )
          v30 = *((_DWORD *)a2 + 6);
        *((_DWORD *)a2 + 6) = v30;
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
          *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) | (*(_DWORD *)(v16 + 480) >> 3))) & 1;
      }
      if ( (*(_BYTE *)(v104 - 1260) & 0x10) != 0 )
      {
        if ( !HampActIsStartedOrReachedPendState(v16, 5u) && *(_QWORD *)(v16 + 512) == *((_QWORD *)a1 + 100) && v90 )
          v90 = v91;
        if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7u) > v90 )
          LOBYTE(v90) = (*((_BYTE *)a2 + 28) >> 4) & 7;
        *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0x8F | (16 * v90);
      }
      v31 = *(_QWORD *)(v16 + 96);
      v32 = *(_QWORD *)(v16 + 80);
      v16 = 0LL;
      v7 = v103;
      if ( v31 != v32 + 600 )
        v16 = v31 - 96;
      if ( !v16 )
      {
        v106 = v19;
        v9 = v19;
        goto LABEL_37;
      }
      v17 = v99;
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
      v24 = *(_BYTE *)(v7 + 548);
      if ( v24 == 3 )
        v25 = 1;
      else
        v25 = v24 == 2 && *(_BYTE *)(v7 + 549) >= 5u;
      if ( v23 )
      {
        if ( v25 )
        {
LABEL_16:
          if ( (*(_DWORD *)(v16 + 112) & 0x10000) == 0 || (*(_DWORD *)(v7 + 112) & 0x10000) != 0 )
          {
            if ( (*(_DWORD *)(v16 + 112) & 0x10000) != 0 || (*(_DWORD *)(v7 + 112) & 0x10000) == 0 )
            {
              v86 = *(_QWORD *)(v16 + 456);
              if ( v86 > *(_QWORD *)(v7 + 456) )
              {
                v26 = 1;
              }
              else if ( v86 < *(_QWORD *)(v7 + 456) )
              {
                v26 = -1;
              }
              else
              {
                v87 = *(_QWORD *)(v16 + 464);
                if ( v87 > *(_QWORD *)(v7 + 464) )
                {
                  v26 = 1;
                }
                else if ( v87 < *(_QWORD *)(v7 + 464) )
                {
                  v26 = -1;
                }
                else
                {
                  v88 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 1000LL);
                  if ( v16 == v88 )
                    v26 = 1;
                  else
                    v26 = (v7 != v88) - 1;
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
      v27 = v7;
    v103 = v27;
    goto LABEL_23;
  }
  v99 = v97;
  *((_QWORD *)&v98 + 1) = *((_QWORD *)&v96 + 1);
LABEL_37:
  v33 = HampLockTrackerId;
  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 88LL);
  v35 = *(_QWORD *)(v34 + 160);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive(v35 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v38 = HampLockTrackerId;
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
  v41 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v42 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v41) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v42 |= 0x80uLL;
    ++v42[8];
  }
  RtlAcquireSRWLockShared(v34 + 168);
  v43 = *(_BYTE *)(v34 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v44 = (char *)TlsGetValue(HampLockTrackerId);
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
    v89 = *((_DWORD *)a2 + 6);
    if ( v89 <= 1 )
      v89 = 1;
    *((_DWORD *)a2 + 6) = v89;
  }
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *v46 |= 0x400uLL;
    ++v46[11];
  }
  v47 = v104;
  RtlAcquireSRWLockShared(v104);
  v48 = *(_DWORD *)(v104 + 420) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v49 & 0x400LL) == 0 )
      __int2c();
    v11 = v49[11]-- == 1LL;
    if ( v11 )
      *v49 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v47);
  v11 = !v48;
  v50 = v105;
  if ( !v11 )
  {
    RmHamHostGetCurrentState(v105, (union _RM_OPTIMIZATION_STATE *)&v102, 0LL);
    if ( (v102 & 0x100) != 0 )
    {
      v92 = *((_DWORD *)v50 + 282);
      if ( v92 <= *((_DWORD *)a2 + 6) )
        v92 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 6) = v92;
    }
    else
    {
      v93 = *((_DWORD *)a2 + 6);
      if ( v93 < 1 )
        v93 = 1;
      *((_DWORD *)a2 + 6) = v93;
    }
  }
  v51 = v106;
  if ( (v9 & 0xC0) == 0xC0 )
    v52 = 2;
  else
    v52 = (v106 & 0xE) >= 8 && (v106 & 0x30) >= 0x20;
  v53 = *((_DWORD *)a2 + 6);
  if ( v53 <= v52 )
  {
    if ( (v9 & 0xC0) == 0xC0 )
      v53 = 2;
    else
      v53 = (v106 & 0xE) >= 8 && (v106 & 0x30) >= 0x20;
  }
  *((_BYTE *)a2 + 28) &= ~2u;
  *((_DWORD *)a2 + 6) = v53;
  *((_BYTE *)a2 + 28) |= 2 * (v51 >> 7);
  if ( (v9 & 0x100) == 0
    || (RmHamHostGetCurrentState(v50, (union _RM_OPTIMIZATION_STATE *)&v105, (union _RM_OPTIMIZATION_STATE *)&v106),
        ((unsigned __int8)v105 & 0x10) != 0)
    || (v106 & 0x10) != 0 )
  {
    v54 = 0;
  }
  else
  {
    v54 = 8;
  }
  v55 = v54 | *((_BYTE *)a2 + 28) & 0xF7;
  *((_BYTE *)a2 + 28) = v55;
  v56 = v55;
  if ( (*((_BYTE *)v50 + 1132) & 8) != 0 && (*((_QWORD *)v50 + 81) & 0x2000000000000LL) != 0 )
  {
    v56 = v55 | 8;
    *((_BYTE *)a2 + 28) = v55 | 8;
  }
  if ( (v9 & 0x400) == 0 || (*((_QWORD *)v50 + 81) & 0x8000000000000LL) != 0 )
    v57 = 0;
  else
    v57 = 4;
  v58 = v103;
  *((_BYTE *)a2 + 28) = v57 | v56 & 0xFB;
  if ( v58 )
  {
    v59 = *(_QWORD *)(v58 + 464);
    v60 = *(_QWORD *)(v58 + 456);
    v61 = *(_QWORD *)(v58 + 448);
    v62 = *(_QWORD *)(v58 + 440);
    if ( v59 == -1LL || v15 == -1LL || (v15 += v59, v15 < v59) )
      v15 = -1LL;
    *((_QWORD *)&v97 + 1) = v15;
    if ( v60 == -1LL || v99 == -1 || (v63 = v60 + v99, v99 = v63, v63 < v60) )
    {
      v63 = -1LL;
      v99 = -1LL;
    }
    *(_QWORD *)&v97 = v63;
    if ( v61 == -1LL
      || *((_QWORD *)&v98 + 1) == -1LL
      || (v64 = v61 + *((_QWORD *)&v98 + 1), *((_QWORD *)&v98 + 1) = v64, v64 < v61) )
    {
      v64 = -1LL;
      *((_QWORD *)&v98 + 1) = -1LL;
    }
    *((_QWORD *)&v96 + 1) = v64;
    if ( v62 == -1LL || (_QWORD)v98 == -1LL || (v65 = v62 + v98, *(_QWORD *)&v98 = v65, v65 < v62) )
    {
      v65 = -1LL;
      *(_QWORD *)&v98 = -1LL;
      *(_QWORD *)&v96 = -1LL;
    }
    else
    {
      *(_QWORD *)&v96 = v65;
    }
  }
  else
  {
    v65 = v98;
  }
  if ( v100 )
  {
    v66 = v99;
    v67 = *((_QWORD *)&v98 + 1);
  }
  else
  {
    v85 = *(_OWORD *)((char *)v50 + 888);
    v96 = *(_OWORD *)((char *)v50 + 872);
    v67 = *((_QWORD *)&v96 + 1);
    v65 = v96;
    v97 = v85;
    v15 = *((_QWORD *)&v85 + 1);
    v66 = v85;
    v98 = v96;
  }
  if ( (*(_BYTE *)(v47 - 1260) & 0x20) != 0 )
  {
    if ( HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)v50 + 97) + 88LL)) )
    {
      RmpCommitThresholdsAddValue((struct _RM_COMMIT_THRESHOLDS *)&v96, 0xFFFFFFFFFFFFFFFFuLL);
      v67 = *((_QWORD *)&v96 + 1);
      v65 = v96;
      v15 = *((_QWORD *)&v97 + 1);
      v66 = v97;
    }
    else
    {
      v67 = *((_QWORD *)&v98 + 1);
      v65 = v98;
    }
  }
  v68 = *((_QWORD *)v50 + 118);
  if ( v66 < v68 && v66 )
  {
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v96, v68, (struct _RM_COMMIT_THRESHOLDS *)&v96);
    v67 = *((_QWORD *)&v96 + 1);
    v65 = v96;
    v15 = *((_QWORD *)&v97 + 1);
    v66 = v97;
  }
  v69 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v50 + 75);
  if ( v69 == (struct _RM_HAM_ACTIVITY_HOST *)((char *)v50 + 600) )
    v101 = 0;
  v70 = (char *)v69 - 96;
  v71 = 0LL;
  if ( v101 )
    v71 = v70;
  if ( v71 && (*((_DWORD *)v71 + 28) & 0x80000) != 0 )
  {
    v94 = *((_QWORD *)HampHostGetFirstActivity(v50) + 9);
    v95 = *(_OWORD *)(v94 + 88);
    v96 = *(_OWORD *)(v94 + 72);
    v67 = *((_QWORD *)&v96 + 1);
    v65 = v96;
    v97 = v95;
    v15 = *((_QWORD *)&v95 + 1);
    v66 = v95;
  }
  v72 = *((_QWORD *)v50 + 119);
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
  v73 = *((_QWORD *)v50 + 120);
  if ( v15 != -1LL )
  {
    if ( v15 < v73 )
      v15 = 0LL;
    else
      v15 -= v73;
  }
  *((_QWORD *)&v97 + 1) = v15;
  if ( v66 == -1LL )
  {
    *(_QWORD *)&v97 = -1LL;
  }
  else if ( v66 < v73 )
  {
    *(_QWORD *)&v97 = 0LL;
  }
  else
  {
    *(_QWORD *)&v97 = v66 - v73;
  }
  if ( v67 == -1LL )
  {
    *((_QWORD *)&v96 + 1) = -1LL;
  }
  else if ( v67 < v73 )
  {
    *((_QWORD *)&v96 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v96 + 1) = v67 - v73;
  }
  if ( v65 == -1LL )
  {
    *(_QWORD *)&v96 = -1LL;
  }
  else if ( v65 < v73 )
  {
    *(_QWORD *)&v96 = 0LL;
  }
  else
  {
    *(_QWORD *)&v96 = v65 - v73;
  }
  v74 = v97;
  v75 = *((_QWORD *)v50 + 106);
  v76 = v96;
  v77 = v97;
  if ( v15 > v75 )
  {
    v75 = *((_QWORD *)&v97 + 1);
  }
  else
  {
    *((_QWORD *)&v97 + 1) = *((_QWORD *)v50 + 106);
    v77 = v97;
  }
  if ( (unsigned __int64)v77 <= *((_QWORD *)v50 + 107) )
  {
    *(_QWORD *)&v97 = *((_QWORD *)v50 + 107);
    v77 = v97;
  }
  v78 = v107;
  *((_QWORD *)a2 + 2) = v75;
  if ( v78 )
  {
    *(_OWORD *)v78 = v76;
    *((_OWORD *)v78 + 1) = v74;
  }
  v79 = v108;
  if ( v108 )
  {
    *(_OWORD *)v108 = v76;
    *((_OWORD *)v79 + 1) = v77;
  }
  if ( a5 )
    *a5 = (struct _HAM_ACTIVITY *)v58;
}
