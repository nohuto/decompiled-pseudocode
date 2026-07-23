/*
 * XREFs of MiIdentifyPfn @ 0x140353FA0
 * Callers:
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiIdentifyPfnWrapper @ 0x140353EE0 (MiIdentifyPfnWrapper.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x140534AA8 (MmTryIdentifyPage.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiIsActivePfnCold @ 0x1405509DC (MiIsActivePfnCold.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __m128i *v15; // r8
  unsigned int v16; // r9d
  __int64 PfnPageSizeIndex; // r10
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 result; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
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
  __int64 v41; // rdx
  bool v42; // zf
  unsigned __int32 v43; // eax
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
  __int64 v58; // r9
  __int64 v59; // rdx
  ULONG_PTR v60; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  ULONG_PTR v68; // r8
  ULONG_PTR v69; // rbx
  int v70; // esi
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 *v73; // rcx
  __int64 v74; // rax
  char v75; // [rsp+30h] [rbp-59h]
  int v76; // [rsp+34h] [rbp-55h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-51h]
  __int64 v78; // [rsp+40h] [rbp-49h] BYREF
  __m128i v79; // [rsp+48h] [rbp-41h] BYREF
  __m128i v80; // [rsp+58h] [rbp-31h]
  __m128i v81; // [rsp+68h] [rbp-21h]
  __int64 v82; // [rsp+78h] [rbp-11h]
  _OWORD v83[2]; // [rsp+80h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  BugCheckParameter2 = (ULONG_PTR)a1;
  v6 = a1[2];
  v79 = v2;
  v80 = v5;
  v81 = v6;
  v7 = (__int64)a1[0x5800000000LL].m128i_i64 / 48;
  v82 = v7;
  a2[1] = v7;
  v76 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  v8 = v76 & 7;
  LOBYTE(v10) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  v11 = (unsigned __int8)v10;
  LOBYTE(v11) = (v10 & 8) != 0;
  v75 = v11;
  if ( (v10 & 8) != 0 )
    v10 = 5;
  else
    v10 = (unsigned __int8)v10;
  v12 = v81.m128i_u64[1];
  v9 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (v76 & 7));
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
        if ( v81.m128i_i16[0] )
        {
          v13 |= 0x100uLL;
          *a2 = v13;
        }
        if ( (v80.m128i_i64[1] & 0x4000000000000000LL) != 0 )
        {
          if ( !(unsigned int)MI_PFN_IS_PROTO(&v79) )
            a2[2] = (v79.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
        if ( (unsigned int)MiIsActivePfnCold(&v79) )
        {
          v13 |= 0x80uLL;
LABEL_33:
          *a2 = v13;
        }
LABEL_34:
        if ( (unsigned int)MI_PFN_IS_PROTO(&v79) )
        {
          v29 = v80.m128i_i64[0];
          if ( (v80.m128i_i16[0] & 0x400) != 0 )
          {
            if ( qword_140C4DF80 && (v80.m128i_i8[0] & 0x10) == 0 )
              v29 = v80.m128i_i64[0] & ~qword_140C4DF80;
            v34 = v29 >> 16;
            v35 = *(_QWORD *)v34;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v26) = -1;
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v35 + 72, v26);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v76 = 0;
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
                LOBYTE(v26) = -1;
                v76 = ExpWaitForSpinLockExclusiveAndAcquire(v35 + 72, v26, v27, v28);
              }
              v41 = *(unsigned int *)(v35 + 72);
              if ( (*(_DWORD *)(v35 + 72) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v41 & 0x40000000) == 0 )
                  {
                    v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 72), v41 | 0x40000000, v41);
                    v42 = (_DWORD)v41 == v43;
                    v41 = v43;
                    if ( !v42 )
                      continue;
                  }
                  KeYieldProcessorEx(&v76, v41, v27, (__int64)v28);
                  v41 = *(unsigned int *)(v35 + 72);
                }
                while ( (v41 & 0xBFFFFFFF) != 0x80000000 );
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
                  *a2 ^= (*a2 ^ MiStartingOffset((__int64 *)v34, v47, 0xFFFFFFFF)) & 0x1FFFFFFFFFFFE00LL;
                }
                else
                {
                  v49 = v79.m128i_i64[1] | 0x8000000000000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)v34 + 56LL) & 0x20) != 0 )
                  {
                    if ( v49 < v47 || v49 >= v47 + 8LL * *(unsigned int *)(v34 + 44) )
                    {
                      if ( (v48 & 2) != 0 )
                        v50 = (v49 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v34, 0xFFFFFFFFLL, v34) + 72) << 9);
                      else
                        v50 = (v49 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)v34) + 72) << 9);
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
            v30 = v79.m128i_i64[1];
            v31 = v79.m128i_i64[1] | 0x8000000000000000uLL;
            a2[2] = v79.m128i_i64[1] | 0x8000000000000000uLL;
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
        v53 = v79.m128i_i64[1];
        v54 = v79.m128i_u64[1];
        if ( v79.m128i_i64[1] && ((v12 >> 60) & 7) != 1 )
          v54 = v79.m128i_i64[1] | 0x8000000000000000uLL;
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
        v78 = (v12 >> 60) & 7;
        if ( v78 != 1 )
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
          v59 = 0xFFFFFFFFFLL;
          a2[2] = v56 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v81.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
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
            if ( v78 == 2 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
              return 1LL;
            }
            if ( SystemRegionType == 1 )
            {
              v60 = BugCheckParameter2;
              TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
              if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
              {
                *a2 &= 0xFE000000000001FFuLL;
                v62 = *a2;
              }
              else
              {
                v62 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v62;
              }
              if ( TopLevelPfn != v60 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v62 = *a2;
              }
              *a2 = v62 & 0xFFFFFFFFFFFFFFF0uLL | 7;
              return 1LL;
            }
            if ( SystemRegionType == 6 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 4;
              return 1LL;
            }
            if ( SystemRegionType <= 0xE )
            {
              v63 = 20992;
              if ( _bittest(&v63, SystemRegionType) )
              {
                *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
                return 1LL;
              }
            }
          }
          if ( (v76 & 7) == 6 && ((v79.m128i_i8[0] & 1) == 0 || v75) )
          {
            if ( v56 > 0x7FFFFFFEFFFFLL )
            {
              v64 = (((unsigned __int64)qword_140C4FB78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v65 = v53 | 0x8000000000000000uLL;
              if ( v65 >= 0xFFFFF68000000000uLL )
              {
                while ( 1 )
                {
                  if ( v65 > 0xFFFFF6FFFFFFFFFFuLL )
                    goto LABEL_144;
                  if ( v65 >= v64
                    && v65 <= (((unsigned __int64)qword_140C4E3A8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    break;
                  }
                  ++v55;
                  v64 &= 0xFFFFFFFFFFFFF000uLL;
                  v65 = (__int64)(v65 << 25) >> 16;
                  if ( v65 < 0xFFFFF68000000000uLL )
                    goto LABEL_144;
                }
                v66 = MiGetTopLevelPfn(BugCheckParameter2);
                v67 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v66 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v67;
                if ( v66 != BugCheckParameter2 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v67 = *a2;
                }
                *a2 = v67 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
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
            v68 = BugCheckParameter2;
            v69 = BugCheckParameter2;
            v70 = 0;
            memset(v83, 0, sizeof(v83));
            v71 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v71 & 0xFFFFFFFFFLL) != v82 )
            {
              do
              {
                v72 = v71 & 0xFFFFFFFFFLL;
                v69 = 48 * (v71 & 0xFFFFFFFFFLL) - 0x58000000000LL;
                if ( (unsigned int)++v70 > 4 )
                  KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
                LODWORD(v78) = 0;
                *((_QWORD *)v83 + (unsigned int)(v70 - 1)) = v69;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v78, v59, v68, v58);
                    while ( *(__int64 *)(v69 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) );
                  v59 = 0xFFFFFFFFFLL;
                }
                v71 = *(_QWORD *)(v69 + 40);
              }
              while ( (v71 & 0xFFFFFFFFFLL) != v72 );
              v68 = BugCheckParameter2;
            }
            v73 = (__int64 *)v83;
            do
            {
              v74 = *v73;
              if ( !*v73 )
                break;
              if ( v74 != v69 )
                _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v55;
              ++v73;
            }
            while ( v55 < 4 );
            *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v69 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
            if ( v69 != v68 )
              _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v56 < 0xFFFFF68000000000uLL || v56 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v56 < qword_140C4FB78 || v56 > qword_140C4E3A8 )
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
        *a2 = (v13 ^ (v13 ^ (MiGetLeafPfnBuddy(&v79) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        return 1LL;
      case 6:
        if ( (v79.m128i_i8[0] & 1) != 0 && !(_BYTE)v11 && v81.m128i_i16[0] <= 1u )
          goto LABEL_34;
        v13 |= 0x100uLL;
        goto LABEL_33;
      case 7:
        v13 |= 0x100uLL;
        *a2 = v13;
        if ( !(unsigned int)MI_PFN_IS_PROTO(&v79) )
          a2[2] = (v79.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v12 >> 60) & 7) == 1 )
          goto LABEL_52;
        v33 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v33 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        *a2 = v33;
        return 1LL;
    }
  }
  BaseResidentPage = MiGetBaseResidentPage(a1, v8, v11);
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
  if ( v16 == 6 && (unsigned int)MiIsActivePfnCold(v15) )
    *a2 |= 0x80uLL;
  v18 = v15->m128i_u64[1];
  if ( v18 && (((unsigned __int64)v15[2].m128i_i64[1] >> 60) & 7) != 1 )
    v18 |= 0x8000000000000000uLL;
  if ( v15 != a1 )
    _InterlockedAnd64(&v15[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v19 = MiLargePageSizes[PfnPageSizeIndex];
  v20 = v7 & ~(v19 - 1);
  v21 = v20 + v19 - v7;
  if ( v16 == 6 )
  {
    v22 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
    *a2 = v22;
    if ( v18 )
      v18 += 8 * (v7 - v20);
    if ( (unsigned int)MiGetSystemRegionType(v18) == 5 )
    {
      *a2 = (v22 ^ (v22 ^ ((v18 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
      result = v21;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      if ( v18 )
        v18 = (__int64)(v18 << 25) >> 16;
      if ( (unsigned int)MiGetSystemRegionType(v18) == 5 )
      {
        a2[2] = v18;
        result = v21;
        *a2 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        a2[2] = v18 & 0xFFFFFFFFFFFFF000uLL;
        v24 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        v25 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        if ( v18 > 0x7FFFFFFEFFFFLL )
          v25 = v24;
        result = v21;
        *a2 = v25;
      }
    }
  }
  else
  {
    if ( v16 == 5 )
      v16 = 1;
    result = v21;
    *a2 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v16) & 0xF1FFFFFFFFFFFFFFuLL;
  }
  return result;
}
