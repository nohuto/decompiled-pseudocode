/*
 * XREFs of MiIdentifyPfn @ 0x14025F2A0
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x14025F1E0 (MiIdentifyPfnWrapper.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x14052ED48 (MmTryIdentifyPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     MiGetTopLevelPfn @ 0x14034D5B0 (MiGetTopLevelPfn.c)
 *     MiGetLeafPfnBuddy @ 0x14037DA1C (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403EF724 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiIsActivePfnCold @ 0x14054ACAC (MiIsActivePfnCold.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __int64 v11; // r8
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
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  bool v45; // zf
  unsigned __int32 v46; // eax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  __int64 v51; // r8
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rbx
  int v55; // eax
  __int64 v56; // rsi
  unsigned __int64 v57; // r15
  unsigned int v58; // r14d
  unsigned __int64 v59; // r15
  unsigned int SystemRegionType; // ecx
  __int64 v61; // r9
  __int64 v62; // rdx
  ULONG_PTR v63; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rsi
  __int64 v69; // r8
  unsigned __int64 v70; // rdx
  ULONG_PTR v71; // r8
  ULONG_PTR v72; // rbx
  int v73; // esi
  __int64 v74; // rcx
  __int64 v75; // r13
  __int64 *v76; // rcx
  __int64 v77; // rax
  char v78; // [rsp+30h] [rbp-59h]
  int v79; // [rsp+34h] [rbp-55h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-51h]
  __int64 v81; // [rsp+40h] [rbp-49h] BYREF
  __m128i v82; // [rsp+48h] [rbp-41h] BYREF
  __m128i v83; // [rsp+58h] [rbp-31h]
  __m128i v84; // [rsp+68h] [rbp-21h]
  __int64 v85; // [rsp+78h] [rbp-11h]
  _OWORD v86[2]; // [rsp+80h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  BugCheckParameter2 = (ULONG_PTR)a1;
  v6 = a1[2];
  v82 = v2;
  v83 = v5;
  v84 = v6;
  v7 = (__int64)a1[0x5800000000LL].m128i_i64 / 48;
  v85 = v7;
  a2[1] = v7;
  v79 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  v8 = v79 & 7;
  LOBYTE(v10) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  v11 = (unsigned __int8)v10;
  LOBYTE(v11) = (v10 & 8) != 0;
  v78 = v11;
  if ( (v10 & 8) != 0 )
    v10 = 5;
  else
    v10 = (unsigned __int8)v10;
  v12 = v84.m128i_u64[1];
  v9 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (v79 & 7));
  v13 = v9 ^ (v9 ^ ((unsigned __int64)v10 << 57)) & 0xE00000000000000LL;
  *a2 = v13;
  if ( (v12 & 0x1000000000LL) == 0 )
  {
    v27 = (int)v8;
    v28 = 0x140000000uLL;
    switch ( v27 )
    {
      case 0LL:
      case 1LL:
      case 5LL:
        return 1LL;
      case 2LL:
      case 3LL:
      case 4LL:
        if ( v84.m128i_i16[0] )
        {
          v13 |= 0x100uLL;
          *a2 = v13;
        }
        if ( (v83.m128i_i64[1] & 0x4000000000000000LL) != 0 )
        {
          if ( !(unsigned int)MI_PFN_IS_PROTO(&v82, 0x140000000uLL, v11) )
            a2[2] = (v82.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
        if ( (unsigned int)MiIsActivePfnCold(&v82) )
        {
          v13 |= 0x80uLL;
LABEL_33:
          *a2 = v13;
        }
LABEL_34:
        if ( (unsigned int)MI_PFN_IS_PROTO(&v82, v28, v11) )
        {
          v32 = v83.m128i_i64[0];
          if ( (v83.m128i_i16[0] & 0x400) != 0 )
          {
            if ( qword_140C4DE80 && (v83.m128i_i8[0] & 0x10) == 0 )
              v32 = v83.m128i_i64[0] & ~qword_140C4DE80;
            v37 = v32 >> 16;
            v38 = *(_QWORD *)v37;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v29) = -1;
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v38 + 72, v29);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v79 = 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v41 = SchedulerAssist[6];
                  SchedulerAssist[6] = v41 + 1;
                  if ( v41 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(v38 + 72), 0x1Fu) )
              {
                v42 = CurrentPrcb->SchedulerAssist;
                if ( v42 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v43 = v42[6] - 1;
                    v42[6] = v43;
                    if ( !v43 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                LOBYTE(v29) = -1;
                v79 = ExpWaitForSpinLockExclusiveAndAcquire(v38 + 72, v29, v30, v31);
              }
              v44 = *(unsigned int *)(v38 + 72);
              if ( (*(_DWORD *)(v38 + 72) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v44 & 0x40000000) == 0 )
                  {
                    v46 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 72), v44 | 0x40000000, v44);
                    v45 = (_DWORD)v44 == v46;
                    v44 = v46;
                    if ( !v45 )
                      continue;
                  }
                  KeYieldProcessorEx(&v79, v44, v30, (__int64)v31);
                  v44 = *(unsigned int *)(v38 + 72);
                }
                while ( (v44 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
            if ( (*(_QWORD *)(v38 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              a2[2] = *(_QWORD *)((*(_QWORD *)(v38 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38 + 72, retaddr);
              else
                *(_DWORD *)(v38 + 72) = 0;
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              if ( v48 )
              {
                if ( v47->NestingLevel <= 1u )
                {
                  v49 = v48[6] - 1;
                  v48[6] = v49;
                  if ( !v49 )
                    KiRemoveSystemWorkPriorityKick(v47);
                }
              }
              a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v38 + 56) >> 5)) & 1;
              v50 = *(_QWORD *)(v37 + 8);
              if ( v50 )
              {
                v51 = *(unsigned __int16 *)(v37 + 34);
                if ( (v51 & 2) != 0 && (*(_DWORD *)(v38 + 56) & 0x4000000) != 0 )
                {
                  *a2 ^= (*a2 ^ MiStartingOffset(v37, v50, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
                }
                else
                {
                  v52 = v82.m128i_i64[1] | 0x8000000000000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)v37 + 56LL) & 0x20) != 0 )
                  {
                    if ( v52 < v50 || v52 >= v50 + 8LL * *(unsigned int *)(v37 + 44) )
                    {
                      if ( (v51 & 2) != 0 )
                        v53 = (v52 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v37, 0xFFFFFFFFLL, v37) + 72) << 9);
                      else
                        v53 = (v52 << 9)
                            - (*(_QWORD *)(MiGetSubsectionDriverProtos(v37, v50, v51, *(_QWORD *)v37) + 72) << 9);
                    }
                    else
                    {
                      v53 = (v52 << 9) - (v50 << 9);
                    }
                    v54 = ((unsigned __int64)*(unsigned int *)(v37 + 36) << 9) + (v53 & 0xFFFFFFFFFFFFF000uLL);
                  }
                  else
                  {
                    v54 = ((__int64)(v52 - v50) >> 3 << 12)
                        + ((*(unsigned int *)(v37 + 36) | ((unsigned __int64)(*(_WORD *)(v37 + 32) & 0xFFC0) << 26)) << 12);
                  }
                  *a2 ^= (*a2 ^ v54) & 0x1FFFFFFFFFFFE00LL;
                }
              }
              v55 = *(_DWORD *)(v38 + 56);
              if ( (v55 & 8) == 0 || (v55 & 1) != 0 )
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            }
            else
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v38 + 72));
            }
          }
          else
          {
            v33 = v82.m128i_i64[1];
            v34 = v82.m128i_i64[1] | 0x8000000000000000uLL;
            a2[2] = v82.m128i_i64[1] | 0x8000000000000000uLL;
            if ( v33 > 0 )
            {
              a2[2] = v34 | 1;
              v35 = *(_QWORD *)(v34 - 16);
              if ( v35 >= 0x1000000000000LL )
                v35 = 0xFFFFFFFFFFFFLL;
              v13 = *a2 ^ (*a2 ^ (v35 << 9)) & 0x1FFFFFFFFFFFE00LL;
            }
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 2;
          }
          return 1LL;
        }
        v56 = v82.m128i_i64[1];
        v57 = v82.m128i_u64[1];
        if ( v82.m128i_i64[1] && ((v12 >> 60) & 7) != 1 )
          v57 = v82.m128i_i64[1] | 0x8000000000000000uLL;
        if ( (unsigned int)MiGetSystemRegionType(v57) == 5 )
        {
          *a2 = (v13 ^ (v13 ^ ((v57 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return 1LL;
        }
        if ( v57 == -8LL )
        {
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          a2[2] = (unsigned __int64)MmBadPointer;
          return 1LL;
        }
        v81 = (v12 >> 60) & 7;
        if ( v81 != 1 )
        {
          v58 = 0;
          if ( v57 )
            v59 = (__int64)(v57 << 25) >> 16;
          else
            v59 = 0LL;
          SystemRegionType = MiGetSystemRegionType(v59);
          if ( SystemRegionType == 5 )
          {
            a2[2] = v59;
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return 1LL;
          }
          v62 = 0xFFFFFFFFFLL;
          a2[2] = v59 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v84.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            result = 1LL;
            if ( SystemRegionType == 9 )
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            else
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            return result;
          }
          if ( v59 > 0x7FFFFFFEFFFFLL )
          {
            if ( v81 == 2 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
              return 1LL;
            }
            if ( SystemRegionType == 1 )
            {
              v63 = BugCheckParameter2;
              TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
              if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
              {
                *a2 &= 0xFE000000000001FFuLL;
                v65 = *a2;
              }
              else
              {
                v65 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v65;
              }
              if ( TopLevelPfn != v63 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v65 = *a2;
              }
              *a2 = v65 & 0xFFFFFFFFFFFFFFF0uLL | 7;
              return 1LL;
            }
            if ( SystemRegionType == 6 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 4;
              return 1LL;
            }
            if ( SystemRegionType <= 0xE )
            {
              v66 = 20992;
              if ( _bittest(&v66, SystemRegionType) )
              {
                *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
                return 1LL;
              }
            }
          }
          if ( (v79 & 7) == 6 && ((v82.m128i_i8[0] & 1) == 0 || v78) )
          {
            if ( v59 > 0x7FFFFFFEFFFFLL )
            {
              v67 = (((unsigned __int64)qword_140C4FA78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v68 = v56 | 0x8000000000000000uLL;
              if ( v68 >= 0xFFFFF68000000000uLL )
              {
                while ( 1 )
                {
                  if ( v68 > 0xFFFFF6FFFFFFFFFFuLL )
                    goto LABEL_144;
                  if ( v68 >= v67
                    && v68 <= (((unsigned __int64)qword_140C4E2A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    break;
                  }
                  ++v58;
                  v67 &= 0xFFFFFFFFFFFFF000uLL;
                  v68 = (__int64)(v68 << 25) >> 16;
                  if ( v68 < 0xFFFFF68000000000uLL )
                    goto LABEL_144;
                }
                v69 = MiGetTopLevelPfn(BugCheckParameter2);
                v70 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v69 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v70;
                if ( v69 != BugCheckParameter2 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v70 = *a2;
                }
                *a2 = v70 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                return 1LL;
              }
            }
LABEL_144:
            if ( v59 < 0xFFFFF68000000000uLL || v59 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
              return 1LL;
            }
          }
          else
          {
            v71 = BugCheckParameter2;
            v72 = BugCheckParameter2;
            v73 = 0;
            memset(v86, 0, sizeof(v86));
            v74 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v74 & 0xFFFFFFFFFLL) != v85 )
            {
              do
              {
                v75 = v74 & 0xFFFFFFFFFLL;
                v72 = 48 * (v74 & 0xFFFFFFFFFLL) - 0x58000000000LL;
                if ( (unsigned int)++v73 > 4 )
                  KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
                LODWORD(v81) = 0;
                *((_QWORD *)v86 + (unsigned int)(v73 - 1)) = v72;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v81, v62, v71, v61);
                    while ( *(__int64 *)(v72 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) );
                  v62 = 0xFFFFFFFFFLL;
                }
                v74 = *(_QWORD *)(v72 + 40);
              }
              while ( (v74 & 0xFFFFFFFFFLL) != v75 );
              v71 = BugCheckParameter2;
            }
            v76 = (__int64 *)v86;
            do
            {
              v77 = *v76;
              if ( !*v76 )
                break;
              if ( v77 != v72 )
                _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v58;
              ++v76;
            }
            while ( v58 < 4 );
            *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v72 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
            if ( v72 != v71 )
              _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v59 < 0xFFFFF68000000000uLL || v59 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v59 < qword_140C4FA78 || v59 > qword_140C4E2A8 )
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
        *a2 = (v13 ^ (v13 ^ (MiGetLeafPfnBuddy(&v82) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        return 1LL;
      case 6LL:
        if ( (v82.m128i_i8[0] & 1) != 0 && !(_BYTE)v11 && v84.m128i_i16[0] <= 1u )
          goto LABEL_34;
        v13 |= 0x100uLL;
        goto LABEL_33;
      case 7LL:
        v13 |= 0x100uLL;
        *a2 = v13;
        if ( !(unsigned int)MI_PFN_IS_PROTO(&v82, 0x140000000uLL, v11) )
          a2[2] = (v82.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v12 >> 60) & 7) == 1 )
          goto LABEL_52;
        v36 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v36 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        *a2 = v36;
        return 1LL;
    }
  }
  BaseResidentPage = MiGetBaseResidentPage(a1, v8, v11);
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
