/*
 * XREFs of MiIdentifyPfn @ 0x140206380
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x1402062C0 (MiIdentifyPfnWrapper.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x14052F398 (MmTryIdentifyPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetTopLevelPfn @ 0x1402D5600 (MiGetTopLevelPfn.c)
 *     MiGetLeafPfnBuddy @ 0x14037E4DC (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F0A84 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiIsActivePfnCold @ 0x14054B2FC (MiIsActivePfnCold.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  bool v41; // zf
  unsigned __int32 v42; // eax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  unsigned __int64 v46; // rdx
  __int16 v47; // r8
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // rsi
  unsigned __int64 v53; // r15
  unsigned int v54; // r14d
  unsigned __int64 v55; // r15
  unsigned int SystemRegionType; // ecx
  __int64 v57; // rdx
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
          v28 = v78.m128i_i64[0];
          if ( (v78.m128i_i16[0] & 0x400) != 0 )
          {
            if ( qword_140C4DD40 && (v78.m128i_i8[0] & 0x10) == 0 )
              v28 = v78.m128i_i64[0] & ~qword_140C4DD40;
            v33 = v28 >> 16;
            v34 = *(_QWORD *)v33;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v27) = -1;
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v34 + 72, v27);
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
                  v37 = SchedulerAssist[6];
                  SchedulerAssist[6] = v37 + 1;
                  if ( v37 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(v34 + 72), 0x1Fu) )
              {
                v38 = CurrentPrcb->SchedulerAssist;
                if ( v38 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v39 = v38[6] - 1;
                    v38[6] = v39;
                    if ( !v39 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                LOBYTE(v27) = -1;
                v74 = ExpWaitForSpinLockExclusiveAndAcquire(v34 + 72, v27);
              }
              v40 = *(unsigned int *)(v34 + 72);
              if ( (*(_DWORD *)(v34 + 72) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v40 & 0x40000000) == 0 )
                  {
                    v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v34 + 72), v40 | 0x40000000, v40);
                    v41 = (_DWORD)v40 == v42;
                    v40 = v42;
                    if ( !v41 )
                      continue;
                  }
                  KeYieldProcessorEx(&v74, v40);
                  v40 = *(unsigned int *)(v34 + 72);
                }
                while ( (v40 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
            if ( (*(_QWORD *)(v34 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              a2[2] = *(_QWORD *)((*(_QWORD *)(v34 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34 + 72, retaddr);
              else
                *(_DWORD *)(v34 + 72) = 0;
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              if ( v44 )
              {
                if ( v43->NestingLevel <= 1u )
                {
                  v45 = v44[6] - 1;
                  v44[6] = v45;
                  if ( !v45 )
                    KiRemoveSystemWorkPriorityKick(v43);
                }
              }
              a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v34 + 56) >> 5)) & 1;
              v46 = *(_QWORD *)(v33 + 8);
              if ( v46 )
              {
                v47 = *(_WORD *)(v33 + 34);
                if ( (v47 & 2) != 0 && (*(_DWORD *)(v34 + 56) & 0x4000000) != 0 )
                {
                  *a2 ^= (*a2 ^ MiStartingOffset(v33, v46, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
                }
                else
                {
                  v48 = v77.m128i_i64[1] | 0x8000000000000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)v33 + 56LL) & 0x20) != 0 )
                  {
                    if ( v48 < v46 || v48 >= v46 + 8LL * *(unsigned int *)(v33 + 44) )
                    {
                      if ( (v47 & 2) != 0 )
                        v49 = (v48 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v33, 0xFFFFFFFFLL, v33) + 72) << 9);
                      else
                        v49 = (v48 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(v33) + 72) << 9);
                    }
                    else
                    {
                      v49 = (v48 << 9) - (v46 << 9);
                    }
                    v50 = ((unsigned __int64)*(unsigned int *)(v33 + 36) << 9) + (v49 & 0xFFFFFFFFFFFFF000uLL);
                  }
                  else
                  {
                    v50 = ((__int64)(v48 - v46) >> 3 << 12)
                        + ((*(unsigned int *)(v33 + 36) | ((unsigned __int64)(*(_WORD *)(v33 + 32) & 0xFFC0) << 26)) << 12);
                  }
                  *a2 ^= (*a2 ^ v50) & 0x1FFFFFFFFFFFE00LL;
                }
              }
              v51 = *(_DWORD *)(v34 + 56);
              if ( (v51 & 8) == 0 || (v51 & 1) != 0 )
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            }
            else
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
            }
          }
          else
          {
            v29 = v77.m128i_i64[1];
            v30 = v77.m128i_i64[1] | 0x8000000000000000uLL;
            a2[2] = v77.m128i_i64[1] | 0x8000000000000000uLL;
            if ( v29 > 0 )
            {
              a2[2] = v30 | 1;
              v31 = *(_QWORD *)(v30 - 16);
              if ( v31 >= 0x1000000000000LL )
                v31 = 0xFFFFFFFFFFFFLL;
              v13 = *a2 ^ (*a2 ^ (v31 << 9)) & 0x1FFFFFFFFFFFE00LL;
            }
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 2;
          }
          return 1LL;
        }
        v52 = v77.m128i_i64[1];
        v53 = v77.m128i_u64[1];
        if ( v77.m128i_i64[1] && ((v12 >> 60) & 7) != 1 )
          v53 = v77.m128i_i64[1] | 0x8000000000000000uLL;
        if ( (unsigned int)MiGetSystemRegionType(v53) == 5 )
        {
          *a2 = (v13 ^ (v13 ^ ((v53 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return 1LL;
        }
        if ( v53 == -8LL )
        {
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          a2[2] = (unsigned __int64)MmBadPointer;
          return 1LL;
        }
        v76 = (v12 >> 60) & 7;
        if ( v76 != 1 )
        {
          v54 = 0;
          if ( v53 )
            v55 = (__int64)(v53 << 25) >> 16;
          else
            v55 = 0LL;
          SystemRegionType = MiGetSystemRegionType(v55);
          if ( SystemRegionType == 5 )
          {
            a2[2] = v55;
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return 1LL;
          }
          v57 = 0xFFFFFFFFFLL;
          a2[2] = v55 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v79.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            result = 1LL;
            if ( SystemRegionType == 9 )
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            else
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            return result;
          }
          if ( v55 > 0x7FFFFFFEFFFFLL )
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
            if ( v55 > 0x7FFFFFFEFFFFLL )
            {
              v62 = (((unsigned __int64)qword_140C4F938 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v63 = v52 | 0x8000000000000000uLL;
              if ( v63 >= 0xFFFFF68000000000uLL )
              {
                while ( 1 )
                {
                  if ( v63 > 0xFFFFF6FFFFFFFFFFuLL )
                    goto LABEL_144;
                  if ( v63 >= v62
                    && v63 <= (((unsigned __int64)qword_140C4E168 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    break;
                  }
                  ++v54;
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
            if ( v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL )
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
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v76, v57);
                    while ( *(__int64 *)(v67 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) );
                  v57 = 0xFFFFFFFFFLL;
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
              ++v54;
              ++v71;
            }
            while ( v54 < 4 );
            *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v67 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
            if ( v67 != v66 )
              _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v55 < qword_140C4F938 || v55 > qword_140C4E168 )
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
        v32 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v32 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        *a2 = v32;
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
