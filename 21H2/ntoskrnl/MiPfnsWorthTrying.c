/*
 * XREFs of MiPfnsWorthTrying @ 0x140278460
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x14045CC5A (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1405C5550 (MiScrubNode.c)
 *     MmIdentifyPhysicalMemory @ 0x14096B768 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 * Callees:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140235D34 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     MiFindNextLowerLargePageCandidate @ 0x14025408C (MiFindNextLowerLargePageCandidate.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiPfnLargeBitSet @ 0x14027924C (MiPfnLargeBitSet.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiClusterVadFull @ 0x14045DB90 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  int v5; // ebp
  _DWORD *v9; // r13
  __int16 v10; // dx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  int v16; // r11d
  int v17; // r8d
  __int64 v18; // rdi
  char v19; // cl
  __int64 v20; // r8
  unsigned __int64 v21; // rbp
  __int64 v22; // r9
  __int64 *v23; // r10
  __int64 v24; // r8
  unsigned __int64 active; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v30; // rcx
  __int64 v31; // r9
  PVOID *v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int16 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  bool v42; // zf
  unsigned __int64 v43; // rcx
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 LeafPfnBuddy; // rax
  __int64 v50; // rbx
  unsigned __int64 v51; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 v58; // r8
  unsigned __int64 NextLowerLargePageCandidate; // rax
  __int16 v60; // [rsp+70h] [rbp+8h]
  int v61; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp+18h]
  int v63; // [rsp+88h] [rbp+20h]

  v63 = a4;
  v5 = a4;
  if ( (MiZeroCont & 2) != 0 )
    memset(&MiCont, 0, 0x2E4uLL);
  v9 = a5;
  v10 = *(_WORD *)a1;
  v11 = -1LL;
  v12 = a2 + 48 * a3;
  v60 = *(_WORD *)a1;
  *a5 = 0;
  v62 = 0LL;
  if ( a2 >= v12 )
    return 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    v14 = 0xFFFFDE0000000000uLL;
    v15 = 0xAAAAAAAAAAAAAAABuLL;
    if ( ((v13 >> 43) & 0x3FF) != v10 )
    {
      v55 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      v56 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      v57 = MiPfnLargeBitSet(&MiSystemPartition, v55);
      if ( v57 != -1 )
      {
        v58 = MiLargePageSizes[v57];
        v55 &= ~(v58 - 1);
        NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate((__int64)&MiSystemPartition, v55, v58);
        if ( NextLowerLargePageCandidate >= v55 )
        {
          ++dword_140C29EC4;
        }
        else
        {
          ++dword_140C29EC8;
          v55 = NextLowerLargePageCandidate;
        }
      }
      ++dword_140C29EA4;
      return v56 - v55;
    }
    v16 = *(_BYTE *)(a2 + 34) & 7;
    v17 = -1;
    LODWORD(a5) = v16;
    if ( (v13 & 0x10000000000LL) != 0 )
    {
      v61 = 0;
      PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a2, (int *)&a5, &v61);
      v17 = PfnPageSizeIndexUnsynchronized;
      if ( PfnPageSizeIndexUnsynchronized == -1 )
        goto LABEL_36;
      v45 = MiLargePageSizes[PfnPageSizeIndexUnsynchronized];
      v14 = 0xFFFFDE0000000000uLL;
      v16 = (int)a5;
      v18 = a2 + 0x220000000000LL;
      v15 = 0xAAAAAAAAAAAAAAABuLL;
      if ( (_DWORD)a5 == 6 )
      {
        v46 = ~(v45 - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        v47 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
        v48 = MiFindNextLowerLargePageCandidate(a1, v46, v45);
        if ( v48 >= v46 )
        {
          ++dword_140C29EA8;
        }
        else
        {
          ++dword_140C29EAC;
          v46 = v48;
        }
        return v47 - v46;
      }
      v5 = v63;
    }
    else
    {
      v18 = a2 + 0x220000000000LL;
    }
    if ( v16 != 5 )
      break;
    if ( MiIsPageOnBadList(a2) )
    {
      ++dword_140C29EB8;
      return v31 * ((__int64)(v12 - a2) >> 4);
    }
    if ( MiIsPfnFromSlabAllocation(v30) )
    {
      ++dword_140C29F30;
LABEL_100:
      v53 = 3 * ((v15 * (v18 >> 4)) & 0xFFFFFFFFFFFFFE00uLL);
LABEL_101:
      v39 = v12 - 16 * v53 - v14;
      return v15 * (v39 >> 4);
    }
    if ( v17 != -1 )
      goto LABEL_49;
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v32 = &qword_140C532D8;
      v33 = v15 * (v18 >> 4);
      v34 = 0;
      while ( (PVOID)v33 != *v32 )
      {
        ++v34;
        ++v32;
        if ( v34 >= 4 )
        {
          v35 = 0;
          v36 = &qword_140C532B8;
          while ( v33 != *v36 )
          {
            ++v35;
            ++v36;
            if ( v35 >= 4 )
              goto LABEL_36;
          }
          break;
        }
      }
      ++dword_140C29F60;
      return v15 * ((__int64)(v12 - a2) >> 4);
    }
LABEL_36:
    a2 += 48LL;
    if ( a2 >= v12 )
      return 0LL;
    v10 = v60;
  }
  if ( v16 <= 1 )
  {
    if ( v17 == -1 )
      goto LABEL_36;
LABEL_49:
    v40 = v15 * (v18 >> 4);
    v41 = MiLargePageSizes[v17];
    if ( v41 >= 0x200 )
      v42 = (v5 & 0x2000000) == 0;
    else
      v42 = (v5 & 0x1000000) == 0;
    if ( !v42 )
    {
      ++dword_140C29F44;
      v53 = 3 * (v40 & -(__int64)v41);
      goto LABEL_101;
    }
    v43 = v41 - (v40 & (v41 - 1));
    if ( v43 > v15 * ((__int64)(v12 - a2) >> 4) )
      v43 = v15 * ((__int64)(v12 - a2) >> 4);
    a2 = 48 * v43 + a2 - 48;
    goto LABEL_36;
  }
  v19 = *(_BYTE *)(a2 + 35);
  v20 = 0LL;
  LODWORD(a5) = 0;
  if ( v19 < 0 )
  {
    if ( v16 == 2 )
    {
      if ( *(_WORD *)(a2 + 32) )
        goto LABEL_72;
      goto LABEL_36;
    }
    if ( v16 != 6
      || (*(_BYTE *)(a2 + 34) & 0x10) != 0
      || *(_WORD *)(a2 + 32) != 1
      || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
      || (v19 & 8) != 0
      || (*(_BYTE *)a2 & 1) == 0 )
    {
LABEL_72:
      ++dword_140C29F40;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    goto LABEL_22;
  }
  if ( v16 <= 4 )
  {
    if ( MiIsPfnFromSlabAllocation(a2) )
    {
      ++dword_140C29F34;
      goto LABEL_100;
    }
    if ( *(_WORD *)(a2 + 32) != v38
      || (v5 & 0x4000000) == 0 && (v37 & *(_QWORD *)(a2 + 40)) == 0 && *(__int64 *)(a2 + 8) > 0 )
    {
      ++dword_140C29EBC;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    goto LABEL_36;
  }
  v21 = 0xAAAAAAAAAAAAAAABuLL * (v18 >> 4);
  if ( (v21 & 0xFFFFFFFFFFFFFE00uLL) == v11
    || (v11 = (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4)) & 0xFFFFFFFFFFFFFE00uLL, !*(_BYTE *)(a1 + 15590)) )
  {
LABEL_18:
    v20 = 2LL;
    if ( v16 != 6 )
    {
      ++dword_140C29EC0;
      v39 = v12 - a2;
      return v15 * (v39 >> 4);
    }
    if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2 )
    {
      v5 = v63;
      if ( (v63 & 8) != 0 )
      {
        ++dword_140C29ED0;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)a2);
      if ( LeafPfnBuddy == -32LL )
      {
        ++dword_140C29ECC;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      if ( !LeafPfnBuddy )
        *v9 = 1;
      goto LABEL_36;
    }
    if ( (v63 & 0x800000) == 0 )
      goto LABEL_21;
    if ( *(__int64 *)(a2 + 40) < 0 )
    {
      v5 = v63;
      if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (v63 & 0x8000000) == 0 )
      {
        ++dword_140C29ED4;
        v39 = v12 - a2;
        return v15 * (v39 >> 4);
      }
      goto LABEL_22;
    }
    if ( (v63 & 0x8000000) == 0 || a3 == 16 )
    {
      v51 = 16LL;
    }
    else
    {
      if ( a3 != 512 )
      {
        v62 = 0LL;
        goto LABEL_21;
      }
      v51 = 512LL;
    }
    v62 = v51;
    if ( v21 == (v21 & ~(v51 - 1)) )
    {
      v5 = v63;
      if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) >= v51 )
        LODWORD(a5) = 1;
      goto LABEL_22;
    }
LABEL_21:
    v5 = v63;
LABEL_22:
    active = MiActivePageClaimCandidate(a1, a2, v20);
    if ( active )
    {
      v26 = ~(active - 1) & (0xAAAAAAAAAAAAAAABuLL * (v18 >> 4));
      v27 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      if ( active >= 0x200 )
      {
        v54 = MiFindNextLowerLargePageCandidate(a1, v26, active);
        if ( v54 >= v26 )
        {
          ++dword_140C29EB4;
        }
        else
        {
          ++dword_140C29EB0;
          v26 = v54;
        }
      }
      return v27 - v26;
    }
    if ( (v5 & 8) != 0 )
    {
      ++dword_140C29ED0;
      v50 = v12 - a2;
      return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
    }
    if ( (_DWORD)a5 )
    {
      if ( (unsigned int)MiClusterVadFull(a2, v62, 0LL) )
      {
        ++dword_140C29F74;
        v50 = v12 - a2;
        return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
      }
    }
    goto LABEL_36;
  }
  v22 = 0LL;
  v23 = MiLargePageSizes;
  v24 = a1 + 15816;
  while ( !*(_QWORD *)v24 || !_bittest64(*(const signed __int64 **)(v24 + 8), v21 / *v23) )
  {
    v22 = (unsigned int)(v22 + 1);
    v24 += 16LL;
    ++v23;
    if ( (unsigned int)v22 >= 2 )
    {
      v15 = 0xAAAAAAAAAAAAAAABuLL;
      goto LABEL_18;
    }
  }
  ++dword_140C29EC4;
  v50 = v12 - 48 * (v21 & -MiLargePageSizes[v22]) + 0x220000000000LL;
  return 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4);
}
