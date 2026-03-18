/*
 * XREFs of MiActivePageClaimCandidate @ 0x14034C9A0
 * Callers:
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x14034C3D0 (MiPfnsWorthTrying.c)
 *     MiCheckContiguityTradeEligible @ 0x1405450C4 (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiHyperPage @ 0x14034D1E4 (MiHyperPage.c)
 *     MiVaIsPageFileHash @ 0x14034D29C (MiVaIsPageFileHash.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F536C (MiGetPfnPageSizeIndexUnsynchronized.c)
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
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rax
  __int16 v26; // ax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  int v34; // [rsp+58h] [rbp+10h] BYREF
  int v35; // [rsp+68h] [rbp+20h] BYREF

  v35 = a4;
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
      v34 = 0;
      v35 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, &v34, &v35);
    }
    if ( PfnPageSizeIndex == -1 )
    {
LABEL_9:
      if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) == a1 )
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
              v21 = *(_QWORD *)(a2 + 24);
              if ( (v21 & 0x4000000000000000LL) == 0
                && v11 != qword_140C4DCB8
                && v11 != qword_140C4DCC0
                && (a3 != 1 || !MiIsPfnFileOnly(v20)) )
              {
                v22 = *(unsigned __int16 *)(a2 + 32);
                if ( (unsigned int)v22 <= 1
                  && v22 <= (v21 & 0x3FFFFFFFFFFFFFFFuLL)
                  && (*(_BYTE *)a2 & 1) != 0
                  && ((*(_QWORD *)(a2 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a2 + 8) <= 0) )
                {
                  return 0LL;
                }
              }
            }
            else if ( v11 != -8LL && (unsigned int)MiGetSystemRegionType(v11) != 5 )
            {
              v23 = *(_QWORD *)(a2 + 40);
              if ( ((v23 >> 60) & 7) != 1
                && (v23 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && v11 >= 0xFFFFF68000000000uLL
                && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v24 = (__int64)(v11 << 25) >> 16;
                if ( (*(_BYTE *)a2 & 1) != 0 )
                {
                  if ( !PsInitialSystemProcess || v10 != PsInitialSystemProcess->DirectoryTableBase >> 12 )
                  {
                    v27 = 0xFFFFF6FB40000000uLL;
                    v28 = 0xFFFFF6FB5FFFFFF8uLL;
                    v29 = 0;
                    while ( v11 < v27 || v11 > v28 )
                    {
                      v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      if ( (unsigned int)++v29 >= 3 )
                      {
                        if ( (v23 & 0xFFFFFFFFFLL) == v10 )
                        {
                          v7 = 0LL;
                          if ( v11 != 0xFFFFF6FB7DBEDF68uLL || *(_WORD *)(a2 + 32) > 1u )
                            return 1LL;
                        }
                        else
                        {
                          v30 = *(_QWORD *)(a2 + 24);
                          v31 = v30 & 0x3FFFFFFFFFFFFFFFLL;
                          if ( (v30 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
                          {
                            if ( (v30 & 0xFFFFFFFFFLL) != 0 && (v24 < qword_140C4DC60 || v24 >= qword_140C4DC60 + 4096) )
                            {
                              v32 = *(unsigned __int16 *)(a2 + 32);
                              if ( (unsigned int)v32 <= 1 && v32 <= v31 )
                                return 0LL;
                            }
                          }
                          else if ( (unsigned int)MiGetSystemRegionType(v24) == 6 )
                          {
                            if ( *(_WORD *)(a2 + 32) <= 1u && v31 < 0x10000 )
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
                  v25 = *(unsigned __int16 *)(a2 + 32);
                  if ( (unsigned int)v25 <= 1 && v25 <= (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
                    return 0LL;
                }
                else
                {
                  if ( MiVaIsPageFileHash(*(_QWORD *)(qword_140C4E4C8 + 8 * ((v23 >> 39) & 0x3FF)), v24) )
                    return 0LL;
                  if ( (unsigned int)MiGetSystemRegionType(v24) == 5
                    && (*(_BYTE *)(a2 + 35) & 0x10) == 0
                    && *(_WORD *)(a2 + 32) <= 1u
                    && (MiFlags & 0x800) == 0 )
                  {
                    if ( a3 != 1 )
                      return 0LL;
                    v26 = MI_READ_PTE_LOCK_FREE(v11);
                    if ( (v26 & 1) != 0 && (v26 & 0x200) == 0 )
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
