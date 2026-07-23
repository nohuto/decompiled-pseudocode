/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x18002C2B0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketAllocate @ 0x1800878F0 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x180003144 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800070C0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002F380 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006E250 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E390 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x180089FD4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  int v8; // r14d
  _QWORD *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r11
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // dx
  unsigned int v17; // eax
  _RTL_SRWLOCK *v18; // rcx
  volatile signed __int64 *v19; // r12
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  struct _TEB *v24; // r14
  unsigned __int16 HeapData_high; // bp
  __int16 v26; // ax
  unsigned int v27; // r8d
  volatile signed __int64 *v28; // r14
  volatile signed __int64 *v29; // rbp
  signed __int64 v30; // r10
  signed __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // ecx
  bool v35; // zf
  signed __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // r14d
  unsigned int v39; // ebp
  char v40; // cl
  int v41; // r13d
  __int64 v42; // r8
  __int64 v43; // r12
  signed __int16 *v44; // r15
  int v45; // edx
  __int64 v46; // rax
  signed __int16 *v47; // rbx
  signed __int16 v48; // ax
  signed __int16 v49; // tt
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // r10
  unsigned int v53; // ebx
  __int16 v54; // bx
  __int64 v55; // rdi
  volatile signed __int64 *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  char v60; // cl
  unsigned int v61; // eax
  signed __int64 v62; // rdi
  signed __int64 v63; // rax
  unsigned __int64 v64; // rdi
  volatile signed __int64 *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned int v69; // ebx
  struct _TEB *v70; // rax
  unsigned __int16 v71; // ax
  unsigned __int16 v72; // r15
  __int16 v73; // ax
  unsigned int v74; // r8d
  volatile signed __int64 *v75; // r15
  volatile signed __int64 *v76; // r13
  signed __int64 v77; // r10
  signed __int64 v78; // r9
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  int v81; // ecx
  signed __int64 v82; // rax
  int v83; // eax
  __int64 v84; // r15
  unsigned int v85; // r13d
  char v86; // cl
  int v87; // r10d
  __int64 v88; // r8
  unsigned __int64 v89; // r12
  signed __int16 *v90; // r12
  signed __int16 *v91; // rbx
  signed __int16 v92; // ax
  signed __int16 v93; // tt
  __int64 v94; // r9
  int v95; // r8d
  int v96; // r11d
  unsigned int v97; // ebx
  __int16 v98; // bx
  char v99; // cl
  int v100; // r10d
  unsigned int v101; // r9d
  __int64 v102; // r10
  __int64 v103; // rcx
  int (__fastcall *v104)(__int64, __int64, _QWORD); // rax
  unsigned int v105; // r9d
  char v106; // cl
  __int64 v107; // r8
  __int64 v108; // r11
  signed __int16 *v109; // r10
  unsigned int v110; // eax
  int v111; // r9d
  signed __int16 *v112; // r8
  signed __int16 v113; // dx
  _RTL_SRWLOCK *v114; // rcx
  _RTL_SRWLOCK *v115; // rax
  unsigned __int64 *v116; // rdi
  int v117; // ecx
  __int64 v118; // rcx
  _QWORD *v119; // rdx
  __int64 *v120; // rax
  __int64 *v121; // rcx
  __int64 v122; // r12
  _QWORD *v123; // r8
  __int64 v124; // rax
  __int64 v125; // r9
  _QWORD *v126; // rdx
  __int64 *v127; // rdx
  unsigned __int64 v128; // rdx
  __int16 RandomValue32; // ax
  unsigned int v130; // eax
  volatile signed __int64 *v131; // rax
  unsigned __int64 v132; // rax
  char v133; // cl
  int v134; // r12d
  __int16 v135; // ax
  volatile signed __int64 *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r8
  _QWORD *v139; // rcx
  __int64 v140; // rcx
  signed __int16 v141; // ax
  int v142; // [rsp+40h] [rbp-98h]
  unsigned int v143; // [rsp+40h] [rbp-98h]
  unsigned int v144; // [rsp+40h] [rbp-98h]
  int v145; // [rsp+40h] [rbp-98h]
  unsigned int v146; // [rsp+40h] [rbp-98h]
  int v147; // [rsp+40h] [rbp-98h]
  unsigned int v148; // [rsp+44h] [rbp-94h]
  unsigned int v149; // [rsp+44h] [rbp-94h]
  int v150; // [rsp+44h] [rbp-94h]
  int v151; // [rsp+44h] [rbp-94h]
  char v152[8]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v153; // [rsp+50h] [rbp-88h]
  int v154; // [rsp+58h] [rbp-80h]
  __int64 v155; // [rsp+60h] [rbp-78h]
  int v156; // [rsp+68h] [rbp-70h]
  unsigned int v157; // [rsp+6Ch] [rbp-6Ch]
  __int64 v158; // [rsp+70h] [rbp-68h]
  __int64 v159; // [rsp+78h] [rbp-60h]
  __int64 p_HeapData; // [rsp+80h] [rbp-58h]
  int v161; // [rsp+88h] [rbp-50h] BYREF
  __int64 v162; // [rsp+90h] [rbp-48h]
  int v163; // [rsp+98h] [rbp-40h]
  int v164; // [rsp+9Ch] [rbp-3Ch]

  v5 = 0LL;
  v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v156 = 0;
  v8 = 0;
  v158 = 0LL;
  while ( !v7 )
  {
    if ( !v8 )
    {
      v8 = 1;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a3 + 16));
    }
LABEL_5:
    v10 = (_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v11 = *(_QWORD *)(a3 + 24);
      v12 = a3 + 24;
      v13 = 4096;
      if ( !v7 )
        v13 = 1;
      if ( v11 != v12 )
      {
        while ( 2 )
        {
          LOWORD(v14) = *(_WORD *)(v11 + 32);
          v156 = 0;
          while ( 1 )
          {
            v15 = v13;
            if ( v13 >= (unsigned __int16)v14 )
              v15 = v14;
            if ( (unsigned __int16)v14 <= v15 && v8 == 1 )
              break;
            v16 = v14 - v15;
            v14 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 32), v14 - v15, v14);
            v17 = v16 + v15;
            if ( v14 == v17 )
            {
              if ( *(_WORD *)(v11 + 32) )
                goto LABEL_15;
              v122 = v11;
              if ( *(_BYTE *)(v11 + 38) )
              {
                if ( *(_BYTE *)(v11 + 38) == 1 )
                {
                  v12 = a3 + 40;
                  v123 = 0LL;
                }
                else
                {
                  if ( *(_BYTE *)(v11 + 38) != 2 )
                    goto LABEL_15;
                  v12 = 0LL;
                  v123 = 0LL;
                }
              }
              else
              {
                v123 = (_QWORD *)(a3 + 8);
              }
              v124 = a3 + 40;
              if ( v12 )
              {
                v125 = *(_QWORD *)v11;
                if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
                {
                  v126 = *(_QWORD **)(v11 + 8);
                  if ( *v126 == v11 )
                  {
                    *v126 = v125;
                    *(_QWORD *)(v125 + 8) = v126;
                    if ( v123 )
                      --*v123;
                    goto LABEL_157;
                  }
                }
LABEL_245:
                __fastfail(3u);
              }
LABEL_157:
              *(_BYTE *)(v11 + 38) = 1;
              if ( a3 != -40 )
              {
                v127 = *(__int64 **)(a3 + 48);
                if ( *v127 != v124 )
                  goto LABEL_245;
                *(_QWORD *)v11 = v124;
                v122 = 0LL;
                *(_QWORD *)(v11 + 8) = v127;
                *v127 = v11;
                *(_QWORD *)(a3 + 48) = v11;
              }
              if ( (*(_BYTE *)a3 & 1) == 0 && *v10 > 8uLL )
              {
                v122 = *(_QWORD *)v124;
                if ( *(_QWORD *)(*(_QWORD *)v124 + 8LL) != v124 )
                  goto LABEL_245;
                v137 = *(_QWORD *)v122;
                if ( *(_QWORD *)(*(_QWORD *)v122 + 8LL) != v122 )
                  goto LABEL_245;
                *(_QWORD *)v124 = v137;
                *(_QWORD *)(v137 + 8) = v124;
                --MEMORY[0];
                *(_BYTE *)(v122 + 38) = 2;
              }
              if ( v122 && *(_BYTE *)(v122 + 38) == 2 )
                *(_QWORD *)(v122 + 16) = 0LL;
LABEL_15:
              if ( v15 > 1u )
                *(_QWORD *)(a3 + 56) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v15 - 1)) & 0xFFF;
              goto LABEL_17;
            }
            if ( v14 < v17 )
              v156 = 1;
          }
          v11 = *(_QWORD *)v11;
          if ( v11 != v12 )
            continue;
          break;
        }
      }
      v11 = 0LL;
LABEL_17:
      v18 = (_RTL_SRWLOCK *)(a3 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v18);
      else
        RtlReleaseSRWLockShared(v18);
      if ( v11 )
      {
        v19 = (volatile signed __int64 *)(v11 + 48);
        v20 = 3LL;
        v21 = 2 * (*(unsigned __int16 *)(v11 + 34) + (unsigned __int64)*(unsigned __int8 *)(v11 + 39));
        v22 = RtlpSearchWidth[*(unsigned __int8 *)(a3 + 1)];
        v157 = (unsigned int)v11 >> 12;
        v23 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
        v148 = v22;
        if ( a4 >= (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12)) )
          v20 = 1LL;
        v154 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
        v155 = v20;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v27 = 0;
        }
        else
        {
          v24 = NtCurrentTeb();
          HeapData_high = (unsigned __int8)HIWORD(v24->HeapData);
          if ( HeapData_high == HIBYTE(HIWORD(v24->HeapData)) )
          {
            RandomValue32 = RtlpHeapGenerateRandomValue32();
            v20 = v155;
            v26 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
          }
          else
          {
            v26 = (unsigned __int8)(HIWORD(v24->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v24->HeapData);
          }
          v22 = v148;
          v19 = (volatile signed __int64 *)(v11 + 48);
          HIWORD(v24->HeapData) = v26;
          v27 = RtlpLowFragHeapRandomData[HeapData_high];
        }
        v28 = &v19[(2 * (unsigned __int64)*(unsigned __int16 *)(v11 + 36)) >> 6];
        v29 = &v19[(v21 - 1) >> 6];
LABEL_27:
        if ( v21 < 0x40 )
        {
          v30 = *v28;
          v61 = v21;
          if ( (unsigned int)v21 >= v22 )
            v61 = v22;
          v22 = v61;
        }
        else
        {
          while ( 1 )
          {
            v30 = *v28;
            if ( (*v28 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v57 = v28++;
            if ( v57 == v29 )
              v28 = v19;
          }
          if ( v28 == v29 && (v21 & 0x3F) != 0 && (v21 & 0x3F) < v22 )
            v22 = v21 & 0x3F;
        }
        v149 = v22;
        v27 = ((v22 * v27) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v31 = ~v30;
          if ( v22 < 0x40 )
          {
            _BitScanForward64(&v58, v31 & 0x5555555555555555LL);
            v59 = 1LL << v22;
            v27 += v58;
            v60 = v58;
            v20 = v155;
            v32 = ((v59 - 1) << v60) & 0x5555555555555555LL;
          }
          else
          {
            v32 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v33, __ROR8__(v31 & v32, v27));
          v34 = ((_BYTE)v27 + (_BYTE)v33) & 0x3F;
          v164 = v34;
          v36 = _InterlockedCompareExchange64(v28, v30 | (v20 << v34), v30);
          v35 = v30 == v36;
          v30 = v36;
          if ( v35 )
            break;
          v22 = v149;
          v20 = v155;
          if ( (v36 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v136 = v28 + 1;
            v28 = v19;
            if ( v136 <= v29 )
              v28 = v136;
            goto LABEL_27;
          }
        }
        v37 = HIWORD(v154);
        v23 = (unsigned __int16)v23;
        v38 = (v34 + ((unsigned int)(v28 - v19) << 6)) >> 1;
        *(_WORD *)(v11 + 36) = v38;
        LODWORD(v159) = (unsigned __int16)v23;
        v39 = v37 + (unsigned __int16)v23 * v38;
        if ( *(_BYTE *)(v11 + 45) <= 1u )
          goto LABEL_45;
        v40 = *(_BYTE *)(v11 + 44);
        v41 = 0;
        v42 = v39 >> v40;
        v43 = 2 * v42;
        v44 = (signed __int16 *)(2 * v42 + v11 + *(unsigned __int16 *)(v11 + 46));
        _m_prefetchw(v44);
        v150 = 0;
        v45 = *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int16)((unsigned int)v11 >> 12);
        v142 = -1;
        v153 = 0LL;
        v154 = WORD4(RtlpHpHeapGlobals) ^ v45;
        v46 = ((v154 + v39 - 1) >> v40) - (unsigned int)v42 + 1;
        if ( v44 >= &v44[v46] )
          goto LABEL_45;
        v47 = &v44[v46];
        do
        {
          while ( 1 )
          {
            v48 = *v44;
            while ( v48 > 0 )
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange16(v44, v48 + 1, v48);
              if ( v49 == v48 )
              {
                v50 = v150;
                v51 = v142;
                LODWORD(v52) = v153;
                goto LABEL_41;
              }
            }
            if ( v41 )
              break;
            v41 = 1;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v11 + 24));
          }
          v51 = v142;
          if ( v48 )
          {
            v50 = v150 + 1;
            v52 = v43 >> 1;
            ++v150;
            v153 = v43 >> 1;
            if ( v142 == -1 )
            {
              v51 = v43 >> 1;
              v142 = v51;
            }
            *v44 = v48 + 1;
          }
          else
          {
            LODWORD(v52) = v153;
            v50 = --v150;
            *v44 = 1;
          }
LABEL_41:
          ++v44;
          v43 += 2LL;
        }
        while ( v44 < v47 );
        v23 = v159;
        if ( v50 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
            (v50 << *(_BYTE *)(v11 + 44)) / 4096);
        if ( v51 == -1 )
        {
          if ( !v41 )
            goto LABEL_45;
LABEL_126:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v11 + 24));
          goto LABEL_45;
        }
        v99 = *(_BYTE *)(v11 + 44);
        v100 = v52 - v51 + 1;
        v101 = v51 << v99;
        v102 = (unsigned int)(v100 << v99);
        v103 = *(_QWORD *)a1;
        v104 = (int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
        v146 = v101;
        v153 = v102;
        if ( v104(v103, v11 + v101, (unsigned int)v102) < 0 )
        {
          RtlpHpLfhSubsegmentDecBlockCounts(a1, v11, v39, v154);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v11 + 24));
          _InterlockedAnd64(
            (volatile signed __int64 *)(v11 + 8 * ((unsigned __int64)(2 * v38) >> 6) + 48),
            ~(3LL << ((2 * v38) & 0x3F)));
        }
        else
        {
          v105 = v146;
          v106 = *(_BYTE *)(v11 + 44);
          v107 = v146 >> v106;
          v108 = 2 * v107;
          v109 = (signed __int16 *)(2 * v107 + v11 + *(unsigned __int16 *)(v11 + 46));
          _m_prefetchw(v109);
          v110 = v105 - 1 + v153;
          v111 = -1;
          v112 = &v109[(v110 >> v106) - (unsigned int)v107 + 1];
          if ( v109 >= v112 )
            goto LABEL_126;
          do
          {
            v113 = *v109;
            while ( v113 > 0 )
            {
              v141 = _InterlockedCompareExchange16(v109, v113 + 1, v113);
              v35 = v113 == v141;
              v113 = v141;
              if ( v35 )
                goto LABEL_121;
            }
            if ( v113 )
            {
              LODWORD(v5) = v5 + 1;
              if ( v111 == -1 )
                v111 = v108 >> 1;
            }
            else
            {
              LODWORD(v5) = v5 - 1;
            }
            *v109 = v113 + 1;
LABEL_121:
            ++v109;
            v108 += 2LL;
          }
          while ( v109 < v112 );
          if ( (_DWORD)v5 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
              ((_DWORD)v5 << *(_BYTE *)(v11 + 44)) / 4096);
          if ( v111 == -1 )
            goto LABEL_126;
LABEL_45:
          v5 = v11 + v39;
          if ( a4 < v23 )
          {
            v53 = v23 - a4;
            if ( v53 == 1 )
              v54 = 0x8000;
            else
              v54 = v53 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int64)(unsigned __int16)v157)
                     + v5
                     - 2) = v54;
          }
        }
        if ( !v5 )
          RtlpHpLfhSubsegmentFreeBlock(a1, v11, 0LL, a5);
        goto LABEL_51;
      }
      v8 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
    }
    else
    {
      v114 = (_RTL_SRWLOCK *)(a3 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v114);
      else
        RtlReleaseSRWLockShared(v114);
      v115 = a2;
      v116 = (unsigned __int64 *)&a2[3];
      if ( (unsigned __int64 *)*v116 != v116 )
      {
        RtlAcquireSRWLockExclusive(a2 + 2);
        if ( (unsigned __int64 *)*v116 == v116 )
          v55 = 0LL;
        else
          v55 = RtlpHpLfhOwnerMoveSubsegment(a2, *v116, 2LL);
        RtlReleaseSRWLockExclusive(a2 + 2);
        if ( v55 )
          goto LABEL_134;
        v115 = a2;
      }
      v55 = RtlpHpLfhSubsegmentCreate(a1, v115, a5);
      if ( !v55 )
        goto LABEL_52;
LABEL_134:
      v8 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
      if ( *(_WORD *)(v55 + 32) == *(_WORD *)(v55 + 34) )
      {
        *(_QWORD *)(v55 + 16) = a3;
      }
      else
      {
        v132 = _InterlockedExchange64((volatile __int64 *)(v55 + 16), a3);
        if ( (v132 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 32), v132 >> 1);
      }
      if ( *v10 && *(_WORD *)(v55 + 32) == *(_WORD *)(v55 + 34) )
        goto LABEL_205;
      v117 = *(unsigned __int8 *)(v55 + 38);
      if ( v117 == 2 )
      {
        v118 = 0LL;
LABEL_139:
        v119 = 0LL;
        goto LABEL_140;
      }
      if ( *(_BYTE *)(v55 + 38) )
      {
        if ( v117 != 1 )
          goto LABEL_149;
        v118 = a3 + 40;
        goto LABEL_139;
      }
      v118 = a3 + 24;
      v119 = (_QWORD *)(a3 + 8);
LABEL_140:
      v120 = (__int64 *)(a3 + 24);
      if ( v118 )
      {
        v138 = *(_QWORD *)v55;
        if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 )
          goto LABEL_245;
        v139 = *(_QWORD **)(v55 + 8);
        if ( *v139 != v55 )
          goto LABEL_245;
        *v139 = v138;
        *(_QWORD *)(v138 + 8) = v139;
        if ( v119 )
          --*v119;
      }
      *(_BYTE *)(v55 + 38) = 0;
      if ( a3 != -24 )
      {
        v121 = *(__int64 **)(a3 + 32);
        if ( (__int64 *)*v121 != v120 )
          goto LABEL_245;
        *(_QWORD *)v55 = v120;
        *(_QWORD *)(v55 + 8) = v121;
        *v121 = v55;
        *(_QWORD *)(a3 + 32) = v55;
        if ( a3 != -8 )
          ++*v10;
        v55 = 0LL;
      }
      if ( (*(_BYTE *)a3 & 1) == 0 && *v10 > 8uLL )
      {
        v55 = *v120;
        if ( *(__int64 **)(*v120 + 8) != v120 )
          goto LABEL_245;
        v140 = *(_QWORD *)v55;
        if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 )
          goto LABEL_245;
        *v120 = v140;
        *(_QWORD *)(v140 + 8) = v120;
        --*v10;
        *(_BYTE *)(v55 + 38) = 2;
      }
      if ( v55 && *(_BYTE *)(v55 + 38) == 2 )
LABEL_205:
        *(_QWORD *)(v55 + 16) = 0LL;
LABEL_149:
      v158 = v55;
    }
  }
  while ( 1 )
  {
    _m_prefetchw((const void *)(a3 + 56));
    v62 = *(_QWORD *)(a3 + 56);
    if ( (v62 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v62 - 1, v62);
        if ( v62 == v63 )
          break;
        v156 = 1;
        v62 = v63;
        if ( (v63 & 0xFFF) == 0 )
          goto LABEL_171;
      }
      v64 = v62 & 0xFFFFFFFFFFFFF000uLL;
      if ( v64 )
        break;
    }
LABEL_171:
    if ( v8 == 2 )
      goto LABEL_5;
    v8 = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
  }
  if ( v8 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
  v65 = (volatile signed __int64 *)(v64 + 48);
  v66 = 3LL;
  v67 = *(unsigned __int8 *)(a3 + 1);
  v155 = 2 * (*(unsigned __int16 *)(v64 + 34) + (unsigned __int64)*(unsigned __int8 *)(v64 + 39));
  v68 = RtlpSearchWidth[v67];
  v154 = (unsigned int)v64 >> 12;
  v69 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v64 + 40) ^ ((unsigned int)v64 >> 12);
  v143 = v68;
  if ( a4 >= (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v64 + 40) ^ ((unsigned int)v64 >> 12)) )
    v66 = 1LL;
  LODWORD(v153) = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v64 + 40) ^ ((unsigned int)v64 >> 12);
  v159 = v66;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v74 = 0;
  }
  else
  {
    v70 = NtCurrentTeb();
    p_HeapData = (__int64)&v70->HeapData;
    v71 = HIWORD(v70->HeapData);
    v72 = (unsigned __int8)v71;
    if ( (unsigned __int8)v71 == HIBYTE(v71) )
    {
      v135 = RtlpHeapGenerateRandomValue32();
      v73 = (v135 << 8) | (unsigned __int8)(v135 + 1);
    }
    else
    {
      v73 = (unsigned __int8)(v71 ^ (v71 + 1)) ^ v71;
    }
    v65 = (volatile signed __int64 *)(v64 + 48);
    *(_WORD *)(p_HeapData + 2) = v73;
    v68 = v143;
    v74 = RtlpLowFragHeapRandomData[v72];
  }
  v75 = &v65[(2 * (unsigned __int64)*(unsigned __int16 *)(v64 + 36)) >> 6];
  v76 = &v65[(unsigned __int64)(v155 - 1) >> 6];
LABEL_82:
  if ( (unsigned __int64)v155 < 0x40 )
  {
    v77 = *v75;
    v130 = v155;
    if ( (unsigned int)v155 >= v68 )
      v130 = v68;
    v68 = v130;
  }
  else
  {
    while ( 1 )
    {
      v77 = *v75;
      if ( (*v75 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v131 = v75++;
      if ( v131 == v76 )
        v75 = v65;
    }
    if ( v75 == v76 && (v155 & 0x3F) != 0 && ((unsigned __int8)v155 & 0x3Fu) < (unsigned __int64)v68 )
      v68 = v155 & 0x3F;
  }
  v144 = v68;
  v74 = ((v68 * v74) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v78 = ~v77;
    if ( v68 < 0x40 )
    {
      _BitScanForward64(&v128, v78 & 0x5555555555555555LL);
      v74 += v128;
      v79 = (((1LL << v68) - 1) << v128) & 0x5555555555555555LL;
    }
    else
    {
      v79 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v80, __ROR8__(v79 & v78, v74));
    v81 = ((_BYTE)v74 + (_BYTE)v80) & 0x3F;
    v163 = v81;
    v82 = _InterlockedCompareExchange64(v75, v77 | (v159 << v81), v77);
    v35 = v77 == v82;
    v77 = v82;
    if ( v35 )
      break;
    v68 = v144;
    if ( (v82 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v75 > v76 )
        v75 = v65;
      goto LABEL_82;
    }
  }
  v83 = WORD1(v153);
  v69 = (unsigned __int16)v69;
  v84 = (v81 + ((unsigned int)(v75 - v65) << 6)) >> 1;
  v162 = v84;
  *(_WORD *)(v64 + 36) = v84;
  v157 = (unsigned __int16)v69;
  v85 = v83 + v84 * (unsigned __int16)v69;
  if ( *(_BYTE *)(v64 + 45) <= 1u )
    goto LABEL_101;
  v86 = *(_BYTE *)(v64 + 44);
  v87 = 0;
  v88 = v85 >> v86;
  v89 = v64 + *(unsigned __int16 *)(v64 + 46);
  v152[0] = -1;
  v155 = 2 * v88;
  v90 = (signed __int16 *)(2 * v88 + v89);
  _m_prefetchw(v90);
  v151 = 0;
  v145 = -1;
  LODWORD(v159) = WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v64 + 40) ^ (unsigned __int16)((unsigned int)v64 >> 12);
  p_HeapData = 0LL;
  if ( v90 >= &v90[((v85 + (_DWORD)v159 - 1) >> v86) - (unsigned int)v88 + 1] )
  {
LABEL_101:
    v5 = v64 + v85;
    if ( a4 < v69 )
    {
      v97 = v69 - a4;
      if ( v97 == 1 )
        v98 = 0x8000;
      else
        v98 = v97 & 0x3FFF;
      *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v154 ^ (unsigned __int64)*(unsigned __int16 *)(v64 + 40))
               + v5
               - 2) = v98;
    }
  }
  else
  {
    v91 = &v90[((v85 + (_DWORD)v159 - 1) >> v86) - (unsigned int)v88 + 1];
    do
    {
      while ( 1 )
      {
        v92 = *v90;
        while ( v92 > 0 )
        {
          v93 = v92;
          v92 = _InterlockedCompareExchange16(v90, v92 + 1, v92);
          if ( v93 == v92 )
          {
            v94 = v155;
            v95 = v151;
            v96 = v145;
            goto LABEL_96;
          }
        }
        if ( v87 )
          break;
        LODWORD(v153) = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
        v87 = 1;
      }
      v94 = v155;
      v96 = v145;
      if ( v92 )
      {
        v95 = ++v151;
        p_HeapData = v155 >> 1;
        if ( v145 == -1 )
        {
          v96 = v155 >> 1;
          v145 = v96;
        }
      }
      else
      {
        v95 = --v151;
      }
      *v90 = v92 + 1;
LABEL_96:
      ++v90;
      v155 = v94 + 2;
    }
    while ( v90 < v91 );
    v69 = v157;
    if ( v95 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v95 << *(_BYTE *)(v64 + 44)) / 4096);
    if ( v96 == -1 )
    {
      if ( v87 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
      goto LABEL_101;
    }
    v133 = *(_BYTE *)(v64 + 44);
    v161 = p_HeapData - v96 + 1;
    v134 = v161 << v133;
    v147 = v96 << v133;
    if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v64 + (unsigned int)(v96 << v133),
           (unsigned int)(v161 << v133)) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v64, v147, v134, (__int64)&v161, 1, (__int64)v152);
      goto LABEL_101;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v64, v85, v159);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v64 + 24));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v64 + 8 * ((unsigned __int64)(unsigned int)(2 * v162) >> 6) + 48),
      ~(3LL << ((2 * v162) & 0x3F)));
  }
  if ( !v5 )
    RtlpHpLfhSubsegmentFreeBlock(a1, v64, 0LL, a5);
LABEL_51:
  v55 = v158;
LABEL_52:
  if ( v156 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( v55 )
    RtlpHpLfhBucketAddSubsegment(a1, a2, v55, a5);
  return v5;
}
