/*
 * XREFs of MiActivePageClaimCandidate @ 0x140226AB0
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1402264E0 (MiPfnsWorthTrying.c)
 *     MiCheckContiguityTradeEligible @ 0x1405416F4 (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiHyperPage @ 0x14033C680 (MiHyperPage.c)
 *     MiVaIsPageFileHash @ 0x14033C948 (MiVaIsPageFileHash.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F0A84 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F0E58 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 BaseResidentPage; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  int PfnPageSizeIndex; // eax
  __int64 v16; // r8
  unsigned int v17; // r8d
  __int64 *v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rax
  __int16 v28; // ax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  int v36; // [rsp+58h] [rbp+10h] BYREF
  int v37; // [rsp+68h] [rbp+20h] BYREF

  v37 = a4;
  v7 = 1LL;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v10 = ((unsigned __int64)v9 >> 63) + (v9 >> 3);
  v11 = v8 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) == 0 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x1000000000LL) == 0 )
      goto LABEL_9;
    if ( a3 == 1 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a2, v9);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage, v13, BaseResidentPage, v14);
      if ( v16 != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v36 = 0;
      v37 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, &v36, &v37);
    }
    if ( PfnPageSizeIndex == -1 )
    {
LABEL_9:
      if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) == a1 )
      {
        if ( *(_BYTE *)(a1 + 4830) )
        {
          v17 = 0;
          v18 = MiLargePageSizes;
          v19 = a1 + 5064;
          while ( !*(_QWORD *)v19 || !_bittest64(*(const signed __int64 **)(v19 + 8), v10 / *v18) )
          {
            ++v17;
            v19 += 16LL;
            ++v18;
            if ( v17 >= 2 )
              goto LABEL_15;
          }
          return MiLargePageSizes[v17];
        }
        else
        {
LABEL_15:
          if ( !(unsigned int)MiIsPfnFromSlabAllocation(a2) )
          {
            if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
            {
              v23 = *(_QWORD *)(a2 + 24);
              if ( (v23 & 0x4000000000000000LL) == 0
                && v11 != qword_140C4DC38
                && v11 != qword_140C4DC40
                && (a3 != 1 || (unsigned int)MiIsPfnFileOnly(v21, v20, v23, v22) != 1) )
              {
                v24 = *(unsigned __int16 *)(a2 + 32);
                if ( (unsigned int)v24 <= 1
                  && v24 <= (v23 & 0x3FFFFFFFFFFFFFFFuLL)
                  && (*(_BYTE *)a2 & 1) != 0
                  && ((*(_QWORD *)(a2 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a2 + 8) <= 0) )
                {
                  return 0LL;
                }
              }
            }
            else if ( v11 != -8LL && (unsigned int)MiGetSystemRegionType(v11) != 5 )
            {
              v25 = *(_QWORD *)(a2 + 40);
              if ( ((v25 >> 60) & 7) != 1
                && (v25 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && v11 >= 0xFFFFF68000000000uLL
                && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v26 = (__int64)(v11 << 25) >> 16;
                if ( (*(_BYTE *)a2 & 1) != 0 )
                {
                  if ( !PsInitialSystemProcess || v10 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
                  {
                    v29 = 0xFFFFF6FB40000000uLL;
                    v30 = 0xFFFFF6FB5FFFFFF8uLL;
                    v31 = 0;
                    while ( v11 < v29 || v11 > v30 )
                    {
                      v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      if ( (unsigned int)++v31 >= 3 )
                      {
                        if ( (v25 & 0xFFFFFFFFFLL) == v10 )
                        {
                          v7 = 0LL;
                          if ( v11 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
                            return 1LL;
                        }
                        else
                        {
                          v32 = *(_QWORD *)(a2 + 24);
                          v33 = v32 & 0x3FFFFFFFFFFFFFFFLL;
                          if ( (v32 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
                          {
                            if ( (v32 & 0xFFFFFFFFFLL) != 0 && (v26 < qword_140C4DBE0 || v26 >= qword_140C4DBE0 + 4096) )
                            {
                              v34 = *(unsigned __int16 *)(a2 + 32);
                              if ( (unsigned int)v34 <= 1 && v34 <= v33 )
                                return 0LL;
                            }
                          }
                          else if ( (unsigned int)MiGetSystemRegionType(v26) == 6 )
                          {
                            if ( *(_WORD *)(a2 + 32) <= 1u && v33 < 0x10000 )
                              return 0LL;
                          }
                          else if ( (unsigned int)MiHyperPage(a2) && *(_WORD *)(a2 + 32) <= 1u )
                          {
                            return 0LL;
                          }
                        }
                        return v7;
                      }
                    }
                    if ( *(_WORD *)(a2 + 32) <= 1u && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
                      return 0LL;
                  }
                }
                else if ( (unsigned int)MiHyperPage(a2) )
                {
                  v27 = *(unsigned __int16 *)(a2 + 32);
                  if ( (unsigned int)v27 <= 1 && v27 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                    return 0LL;
                }
                else
                {
                  if ( MiVaIsPageFileHash(*(_QWORD *)(qword_140C4E448 + 8 * ((v25 >> 39) & 0x3FF)), v26) )
                    return 0LL;
                  if ( (unsigned int)MiGetSystemRegionType(v26) == 5
                    && (*(_BYTE *)(a2 + 35) & 0x10) == 0
                    && *(_WORD *)(a2 + 32) <= 1u
                    && (MiFlags & 0x800) == 0 )
                  {
                    if ( a3 != 1 )
                      return 0LL;
                    v28 = MI_READ_PTE_LOCK_FREE(v11);
                    if ( (v28 & 1) != 0 && (v28 & 0x200) == 0 )
                      return 0LL;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      return MiLargePageSizes[PfnPageSizeIndex];
    }
  }
  return v7;
}
