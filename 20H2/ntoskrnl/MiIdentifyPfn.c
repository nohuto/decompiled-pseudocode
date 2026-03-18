/*
 * XREFs of MiIdentifyPfn @ 0x14021F300
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x14021F240 (MiIdentifyPfnWrapper.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x140532D68 (MmTryIdentifyPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetSubsectionDriverProtos @ 0x14024EC00 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiGetTopLevelPfn @ 0x140341C10 (MiGetTopLevelPfn.c)
 *     MiGetLeafPfnBuddy @ 0x14038020C (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiIsActivePfnCold @ 0x14054ECCC (MiIsActivePfnCold.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiIdentifyPfn(__m128i *a1, unsigned __int64 *a2)
{
  __m128i v2; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  bool v11; // r8
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 BaseResidentPage; // rax
  __int64 v15; // rdx
  __m128i *v16; // r8
  unsigned int v17; // r9d
  __int64 PfnPageSizeIndex; // r10
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 result; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  signed __int32 v41; // edx
  bool v42; // zf
  signed __int32 v43; // eax
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  int v46; // eax
  unsigned __int64 v47; // rdx
  __int16 v48; // r8
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rsi
  unsigned __int64 v54; // r15
  unsigned int v55; // r14d
  unsigned __int64 v56; // r15
  unsigned int SystemRegionType; // ecx
  ULONG_PTR v58; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v60; // rcx
  int v61; // eax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  __int64 v64; // r8
  unsigned __int64 v65; // rdx
  ULONG_PTR v66; // r8
  ULONG_PTR v67; // rbx
  int v68; // esi
  __int64 v69; // rcx
  __int64 v70; // r13
  __int64 *v71; // rcx
  __int64 v72; // rax
  bool v73; // [rsp+30h] [rbp-59h]
  int v74; // [rsp+34h] [rbp-55h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-51h]
  __int64 v76; // [rsp+40h] [rbp-49h] BYREF
  __m128i v77; // [rsp+48h] [rbp-41h] BYREF
  __m128i v78; // [rsp+58h] [rbp-31h]
  __m128i v79; // [rsp+68h] [rbp-21h]
  __int64 v80; // [rsp+78h] [rbp-11h]
  _OWORD v81[2]; // [rsp+80h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  BugCheckParameter2 = (ULONG_PTR)a1;
  v6 = a1[2];
  v77 = v2;
  v78 = v5;
  v79 = v6;
  v7 = (__int64)a1[0x5800000000LL].m128i_i64 / 48;
  v80 = v7;
  a2[1] = v7;
  v74 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  v8 = v74 & 7;
  LOBYTE(v10) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  v11 = (v10 & 8) != 0;
  v73 = v11;
  if ( (v10 & 8) != 0 )
    v10 = 5;
  else
    v10 = (unsigned __int8)v10;
  v12 = v79.m128i_u64[1];
  v9 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (v74 & 7));
  v13 = v9 ^ (v9 ^ ((unsigned __int64)v10 << 57)) & 0xE00000000000000LL;
  *a2 = v13;
  if ( (v12 & 0x1000000000LL) == 0 )
  {
    switch ( (int)v8 )
    {
      case 0:
      case 1:
      case 5:
        return 1LL;
      case 2:
      case 3:
      case 4:
        if ( v79.m128i_i16[0] )
        {
          v13 |= 0x100uLL;
          *a2 = v13;
        }
        if ( (v78.m128i_i64[1] & 0x4000000000000000LL) != 0 )
        {
          if ( !(unsigned int)MI_PFN_IS_PROTO(&v77) )
            a2[2] = (v77.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
        if ( (unsigned int)MiIsActivePfnCold(&v77) )
        {
          v13 |= 0x80uLL;
LABEL_33:
          *a2 = v13;
        }
LABEL_34:
        if ( (unsigned int)MI_PFN_IS_PROTO(&v77) )
        {
          v29 = v78.m128i_i64[0];
          if ( (v78.m128i_i16[0] & 0x400) != 0 )
          {
            if ( qword_140C4DDC0 && (v78.m128i_i8[0] & 0x10) == 0 )
              v29 = v78.m128i_i64[0] & ~qword_140C4DDC0;
            v34 = v29 >> 16;
            v35 = *(_QWORD *)v34;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v27) = -1;
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v35 + 72, v27, v28);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v74 = 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v38 = SchedulerAssist[6];
                  SchedulerAssist[6] = v38 + 1;
                  if ( v38 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(v35 + 72), 0x1Fu) )
              {
                v39 = CurrentPrcb->SchedulerAssist;
                if ( v39 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v40 = v39[6] - 1;
                    v39[6] = v40;
                    if ( !v40 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                LOBYTE(v27) = -1;
                v74 = ExpWaitForSpinLockExclusiveAndAcquire(v35 + 72, v27);
              }
              v41 = *(_DWORD *)(v35 + 72);
              while ( (v41 & 0xBFFFFFFF) != 0x80000000 )
              {
                if ( (v41 & 0x40000000) == 0 )
                {
                  v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 72), v41 | 0x40000000, v41);
                  v42 = v41 == v43;
                  v41 = v43;
                  if ( !v42 )
                    continue;
                }
                KeYieldProcessorEx(&v74);
                v41 = *(_DWORD *)(v35 + 72);
              }
            }
            if ( (*(_QWORD *)(v35 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              a2[2] = *(_QWORD *)((*(_QWORD *)(v35 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35 + 72, retaddr);
              else
                *(_DWORD *)(v35 + 72) = 0;
              v44 = KeGetCurrentPrcb();
              v45 = v44->SchedulerAssist;
              if ( v45 )
              {
                if ( v44->NestingLevel <= 1u )
                {
                  v46 = v45[6] - 1;
                  v45[6] = v46;
                  if ( !v46 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
              a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v35 + 56) >> 5)) & 1;
              v47 = *(_QWORD *)(v34 + 8);
              if ( v47 )
              {
                v48 = *(_WORD *)(v34 + 34);
                if ( (v48 & 2) != 0 && (*(_DWORD *)(v35 + 56) & 0x4000000) != 0 )
                {
                  *a2 ^= (*a2 ^ MiStartingOffset(v34, v47, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
                }
                else
                {
                  v49 = v77.m128i_i64[1] | 0x8000000000000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)v34 + 56LL) & 0x20) != 0 )
                  {
                    if ( v49 < v47 || v49 >= v47 + 8LL * *(unsigned int *)(v34 + 44) )
                    {
                      if ( (v48 & 2) != 0 )
                        v50 = (v49 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v34, 0xFFFFFFFFLL, v34) + 72) << 9);
                      else
                        v50 = (v49 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(v34) + 72) << 9);
                    }
                    else
                    {
                      v50 = (v49 << 9) - (v47 << 9);
                    }
                    v51 = ((unsigned __int64)*(unsigned int *)(v34 + 36) << 9) + (v50 & 0xFFFFFFFFFFFFF000uLL);
                  }
                  else
                  {
                    v51 = ((__int64)(v49 - v47) >> 3 << 12)
                        + ((*(unsigned int *)(v34 + 36) | ((unsigned __int64)(*(_WORD *)(v34 + 32) & 0xFFC0) << 26)) << 12);
                  }
                  *a2 ^= (*a2 ^ v51) & 0x1FFFFFFFFFFFE00LL;
                }
              }
              v52 = *(_DWORD *)(v35 + 56);
              if ( (v52 & 8) == 0 || (v52 & 1) != 0 )
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            }
            else
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
            }
          }
          else
          {
            v30 = v77.m128i_i64[1];
            v31 = v77.m128i_i64[1] | 0x8000000000000000uLL;
            a2[2] = v77.m128i_i64[1] | 0x8000000000000000uLL;
            if ( v30 > 0 )
            {
              a2[2] = v31 | 1;
              v32 = *(_QWORD *)(v31 - 16);
              if ( v32 >= 0x1000000000000LL )
                v32 = 0xFFFFFFFFFFFFLL;
              v13 = *a2 ^ (*a2 ^ (v32 << 9)) & 0x1FFFFFFFFFFFE00LL;
            }
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 2;
          }
          return 1LL;
        }
        v53 = v77.m128i_i64[1];
        v54 = v77.m128i_u64[1];
        if ( v77.m128i_i64[1] && ((v12 >> 60) & 7) != 1 )
          v54 = v77.m128i_i64[1] | 0x8000000000000000uLL;
        if ( (unsigned int)MiGetSystemRegionType(v54) == 5 )
        {
          *a2 = (v13 ^ (v13 ^ ((v54 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return 1LL;
        }
        if ( v54 == -8LL )
        {
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          a2[2] = (unsigned __int64)MmBadPointer;
          return 1LL;
        }
        v76 = (v12 >> 60) & 7;
        if ( v76 != 1 )
        {
          v55 = 0;
          if ( v54 )
            v56 = (__int64)(v54 << 25) >> 16;
          else
            v56 = 0LL;
          SystemRegionType = MiGetSystemRegionType(v56);
          if ( SystemRegionType == 5 )
          {
            a2[2] = v56;
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return 1LL;
          }
          a2[2] = v56 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v79.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            result = 1LL;
            if ( SystemRegionType == 9 )
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            else
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            return result;
          }
          if ( v56 > 0x7FFFFFFEFFFFLL )
          {
            if ( v76 == 2 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
              return 1LL;
            }
            if ( SystemRegionType == 1 )
            {
              v58 = BugCheckParameter2;
              TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
              if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
              {
                *a2 &= 0xFE000000000001FFuLL;
                v60 = *a2;
              }
              else
              {
                v60 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v60;
              }
              if ( TopLevelPfn != v58 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v60 = *a2;
              }
              *a2 = v60 & 0xFFFFFFFFFFFFFFF0uLL | 7;
              return 1LL;
            }
            if ( SystemRegionType == 6 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 4;
              return 1LL;
            }
            if ( SystemRegionType <= 0xE )
            {
              v61 = 20992;
              if ( _bittest(&v61, SystemRegionType) )
              {
                *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
                return 1LL;
              }
            }
          }
          if ( (v74 & 7) == 6 && ((v77.m128i_i8[0] & 1) == 0 || v73) )
          {
            if ( v56 > 0x7FFFFFFEFFFFLL )
            {
              v62 = (((unsigned __int64)qword_140C4F9B8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v63 = v53 | 0x8000000000000000uLL;
              if ( v63 >= 0xFFFFF68000000000uLL )
              {
                while ( 1 )
                {
                  if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
                    goto LABEL_144;
                  if ( v63 >= v62
                    && v63 <= (((unsigned __int64)qword_140C4E1E8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    break;
                  }
                  ++v55;
                  v62 &= 0xFFFFFFFFFFFFF000uLL;
                  v63 = (__int64)(v63 << 25) >> 16;
                  if ( v63 < 0xFFFFF68000000000uLL )
                    goto LABEL_144;
                }
                v64 = MiGetTopLevelPfn(BugCheckParameter2);
                v65 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v64 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v65;
                if ( v64 != BugCheckParameter2 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v65 = *a2;
                }
                *a2 = v65 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                return 1LL;
              }
            }
LABEL_144:
            if ( v56 < 0xFFFFF68000000000uLL || v56 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
              return 1LL;
            }
          }
          else
          {
            v66 = BugCheckParameter2;
            v67 = BugCheckParameter2;
            v68 = 0;
            memset(v81, 0, sizeof(v81));
            v69 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v69 & 0xFFFFFFFFFLL) != v80 )
            {
              do
              {
                v70 = v69 & 0xFFFFFFFFFLL;
                v67 = 48 * (v69 & 0xFFFFFFFFFLL) - 0x58000000000LL;
                if ( (unsigned int)++v68 > 4 )
                  KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
                LODWORD(v76) = 0;
                *((_QWORD *)v81 + (unsigned int)(v68 - 1)) = v67;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v76);
                  while ( *(__int64 *)(v67 + 24) < 0 );
                }
                v69 = *(_QWORD *)(v67 + 40);
              }
              while ( (v69 & 0xFFFFFFFFFLL) != v70 );
              v66 = BugCheckParameter2;
            }
            v71 = (__int64 *)v81;
            do
            {
              v72 = *v71;
              if ( !*v71 )
                break;
              if ( v72 != v67 )
                _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v55;
              ++v71;
            }
            while ( v55 < 4 );
            *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v67 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
            if ( v67 != v66 )
              _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v56 < 0xFFFFF68000000000uLL || v56 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v56 < qword_140C4F9B8 || v56 > qword_140C4E1E8 )
                *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
              return 1LL;
            }
          }
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
          return 1LL;
        }
LABEL_52:
        *a2 = (v13 ^ (v13 ^ (MiGetLeafPfnBuddy(&v77) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        return 1LL;
      case 6:
        if ( (v77.m128i_i8[0] & 1) != 0 && !v11 && v79.m128i_i16[0] <= 1u )
          goto LABEL_34;
        v13 |= 0x100uLL;
        goto LABEL_33;
      case 7:
        v13 |= 0x100uLL;
        *a2 = v13;
        if ( !(unsigned int)MI_PFN_IS_PROTO(&v77) )
          a2[2] = (v77.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v12 >> 60) & 7) == 1 )
          goto LABEL_52;
        v33 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v33 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        *a2 = v33;
        return 1LL;
    }
  }
  BaseResidentPage = MiGetBaseResidentPage(a1, v8);
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(
                                     BaseResidentPage,
                                     v15,
                                     BaseResidentPage,
                                     *(_BYTE *)(BaseResidentPage + 34) & 7);
  if ( v17 == 6 && (unsigned int)MiIsActivePfnCold(v16) )
    *a2 |= 0x80uLL;
  v19 = v16->m128i_u64[1];
  if ( v19 && (((unsigned __int64)v16[2].m128i_i64[1] >> 60) & 7) != 1 )
    v19 |= 0x8000000000000000uLL;
  if ( v16 != a1 )
    _InterlockedAnd64(&v16[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v20 = MiLargePageSizes[PfnPageSizeIndex];
  v21 = v7 & ~(v20 - 1);
  v22 = v21 + v20 - v7;
  if ( v17 == 6 )
  {
    v23 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
    *a2 = v23;
    if ( v19 )
      v19 += 8 * (v7 - v21);
    if ( (unsigned int)MiGetSystemRegionType(v19) == 5 )
    {
      *a2 = (v23 ^ (v23 ^ ((v19 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
      result = v22;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      if ( v19 )
        v19 = (__int64)(v19 << 25) >> 16;
      if ( (unsigned int)MiGetSystemRegionType(v19) == 5 )
      {
        a2[2] = v19;
        result = v22;
        *a2 = v23 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        a2[2] = v19 & 0xFFFFFFFFFFFFF000uLL;
        v25 = v23 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        v26 = v23 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        if ( v19 > 0x7FFFFFFEFFFFLL )
          v26 = v25;
        result = v22;
        *a2 = v26;
      }
    }
  }
  else
  {
    if ( v17 == 5 )
      v17 = 1;
    result = v22;
    *a2 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v17) & 0xF1FFFFFFFFFFFFFFuLL;
  }
  return result;
}
