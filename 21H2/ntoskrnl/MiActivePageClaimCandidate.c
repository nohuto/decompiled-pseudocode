/*
 * XREFs of MiActivePageClaimCandidate @ 0x14030D450
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiCheckContiguityTradeEligible @ 0x140546E04 (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiHyperPage @ 0x14030DC94 (MiHyperPage.c)
 *     MiVaIsPageFileHash @ 0x14030DD4C (MiVaIsPageFileHash.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r13d
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 BaseResidentPage; // rax
  int PfnPageSizeIndex; // eax
  __int64 v14; // r8
  unsigned int v15; // r8d
  __int64 *v16; // r10
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int16 v24; // ax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  int v32; // [rsp+58h] [rbp+10h] BYREF
  int v33; // [rsp+68h] [rbp+20h] BYREF

  v33 = a4;
  v4 = a3;
  v7 = 1LL;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v10 = ((unsigned __int64)v9 >> 63) + (v9 >> 3);
  v11 = v8 | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(a2 + 35) & 8) == 0 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x1000000000LL) == 0 )
      goto LABEL_9;
    if ( (_DWORD)a3 == 1 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a2, v9, a3);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( v14 != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v32 = 0;
      v33 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, &v32, &v33);
    }
    if ( PfnPageSizeIndex == -1 )
    {
LABEL_9:
      if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) == a1 )
      {
        if ( *(_BYTE *)(a1 + 4830) )
        {
          v15 = 0;
          v16 = MiLargePageSizes;
          v17 = a1 + 5064;
          while ( !*(_QWORD *)v17 || !_bittest64(*(const signed __int64 **)(v17 + 8), v10 / *v16) )
          {
            ++v15;
            v17 += 16LL;
            ++v16;
            if ( v15 >= 2 )
              goto LABEL_15;
          }
          return MiLargePageSizes[v15];
        }
        else
        {
LABEL_15:
          if ( !(unsigned int)MiIsPfnFromSlabAllocation(a2) )
          {
            if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
            {
              v19 = *(_QWORD *)(a2 + 24);
              if ( (v19 & 0x4000000000000000LL) == 0
                && v11 != qword_140C4DE78
                && v11 != qword_140C4DE80
                && (v4 != 1 || !MiIsPfnFileOnly(v18)) )
              {
                v20 = *(unsigned __int16 *)(a2 + 32);
                if ( (unsigned int)v20 <= 1
                  && v20 <= (v19 & 0x3FFFFFFFFFFFFFFFuLL)
                  && (*(_BYTE *)a2 & 1) != 0
                  && ((*(_QWORD *)(a2 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a2 + 8) <= 0) )
                {
                  return 0LL;
                }
              }
            }
            else if ( v11 != -8LL && (unsigned int)MiGetSystemRegionType(v11) != 5 )
            {
              v21 = *(_QWORD *)(a2 + 40);
              if ( ((v21 >> 60) & 7) != 1
                && (v21 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && v11 >= 0xFFFFF68000000000uLL
                && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v22 = (__int64)(v11 << 25) >> 16;
                if ( (*(_BYTE *)a2 & 1) != 0 )
                {
                  if ( !PsInitialSystemProcess || v10 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
                  {
                    v25 = 0xFFFFF6FB40000000uLL;
                    v26 = 0xFFFFF6FB5FFFFFF8uLL;
                    v27 = 0;
                    while ( v11 < v25 || v11 > v26 )
                    {
                      v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      if ( (unsigned int)++v27 >= 3 )
                      {
                        if ( (v21 & 0xFFFFFFFFFLL) == v10 )
                        {
                          v7 = 0LL;
                          if ( v11 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
                            return 1LL;
                        }
                        else
                        {
                          v28 = *(_QWORD *)(a2 + 24);
                          v29 = v28 & 0x3FFFFFFFFFFFFFFFLL;
                          if ( (v28 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
                          {
                            if ( (v28 & 0xFFFFFFFFFLL) != 0 && (v22 < qword_140C4DE20 || v22 >= qword_140C4DE20 + 4096) )
                            {
                              v30 = *(unsigned __int16 *)(a2 + 32);
                              if ( (unsigned int)v30 <= 1 && v30 <= v29 )
                                return 0LL;
                            }
                          }
                          else if ( (unsigned int)MiGetSystemRegionType(v22) == 6 )
                          {
                            if ( *(_WORD *)(a2 + 32) <= 1u && v29 < 0x10000 )
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
                  v23 = *(unsigned __int16 *)(a2 + 32);
                  if ( (unsigned int)v23 <= 1 && v23 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                    return 0LL;
                }
                else
                {
                  if ( MiVaIsPageFileHash(*(_QWORD *)(qword_140C4E688 + 8 * ((v21 >> 39) & 0x3FF)), v22) )
                    return 0LL;
                  if ( (unsigned int)MiGetSystemRegionType(v22) == 5
                    && (*(_BYTE *)(a2 + 35) & 0x10) == 0
                    && *(_WORD *)(a2 + 32) <= 1u
                    && (MiFlags & 0x800) == 0 )
                  {
                    if ( v4 != 1 )
                      return 0LL;
                    v24 = MI_READ_PTE_LOCK_FREE(v11);
                    if ( (v24 & 1) != 0 && (v24 & 0x200) == 0 )
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
