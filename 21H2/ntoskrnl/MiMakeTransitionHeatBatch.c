/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x14055FCB0
 * Callers:
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetPrototypePteBoundaries @ 0x140557FEC (MiGetPrototypePteBoundaries.c)
 *     MiAddPageToHeatRanges @ 0x14055F73C (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x14055F868 (MiGetTransitionPageHeatList.c)
 */

__int64 __fastcall MiMakeTransitionHeatBatch(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r11
  int v9; // r12d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 PrototypePteBoundaries; // rax
  unsigned __int64 v19; // rdx
  PSLIST_ENTRY TransitionPageHeatList; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 *v24; // rbx
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), 0);
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v7 = 0LL;
  if ( MI_PFN_IS_PROTO(a1) )
  {
    v9 = 1;
    PrototypePteBoundaries = MiGetPrototypePteBoundaries(v6, &v32);
    if ( !PrototypePteBoundaries )
      return v7;
    v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
    v17 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
      v13 = PrototypePteBoundaries;
    v19 = PrototypePteBoundaries + 8 * v32;
    if ( v17 >= v19 )
      v17 = v19 - 8;
  }
  else
  {
    v9 = 0;
    v10 = (__int64)(v6 << 25) >> 16;
    if ( v10 > 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v10) != 6 )
        return v7;
      v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      if ( !v8 )
        return v7;
      v11 = v10 & 0x7FFFFFE00000LL;
      if ( v11 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12 )
        v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
      else
        v12 = 8
            * ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) & 0xFFFFFFFFFLL);
      v13 = v12 - 0x98000000000LL;
      v14 = v11 + 2093056;
      v15 = *(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32);
      if ( v14 <= v15 << 12 )
        v16 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      else
        v16 = 8 * (v15 & 0xFFFFFFFFFLL);
      v17 = v16 - 0x98000000000LL;
    }
  }
  TransitionPageHeatList = MiGetTransitionPageHeatList();
  v7 = (__int64)TransitionPageHeatList;
  if ( TransitionPageHeatList )
  {
    if ( TransitionPageHeatList == (PSLIST_ENTRY)-1LL )
    {
      MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), 1);
    }
    else
    {
      v21 = *((unsigned int *)&TransitionPageHeatList->Next + 2);
      v22 = -1;
      v23 = a3;
      if ( a3 >= 0xFFFFFFFF )
        v23 = 0xFFFFFFFFLL;
      if ( v21 <= v23 )
      {
        if ( a3 < 0xFFFFFFFF )
          v22 = a3;
      }
      else
      {
        v22 = v21;
      }
      v24 = (__int64 *)v6;
      if ( a3 <= v21 )
        v24 = (__int64 *)v13;
      if ( (unsigned int)((__int64)(v17 - v6) >> 3) + 1 < v22 )
      {
        if ( (unsigned int)((__int64)(v17 - (_QWORD)v24) >> 3) + 1 > v22 )
          v24 = (__int64 *)(v17 - 8LL * v22 + 8);
      }
      else
      {
        v24 = (__int64 *)v6;
        v17 = v6 - 8 + 8LL * v22;
      }
      while ( (unsigned __int64)v24 <= v17 )
      {
        v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v24);
        if ( (v25 & 0x401) == 0 && (v25 & 0x800) != 0 )
        {
          if ( v24 == (__int64 *)v6 )
          {
            v30 = a1;
            v31 = a1;
LABEL_48:
            if ( (unsigned int)MiAddPageToHeatRanges(v7, (v30 + 0x58000000000LL) / 48, 3) )
              return v7;
            goto LABEL_49;
          }
          if ( v9 )
          {
            MiTryLockLeafPage(v24, v26, &v31);
            v27 = v31;
          }
          else
          {
            v27 = MiLockTransitionLeafPage((ULONG_PTR)v24, (_BYTE *)1);
            v31 = v27;
          }
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 16) >> 3;
            if ( (*(_QWORD *)(v27 + 16) & 0x400LL) != 0 )
              LOBYTE(v28) = *(_QWORD *)(v27 + 16) >> 11;
            if ( (v28 & 1) != 0 )
            {
              MiSetNonResidentPteHeat((unsigned __int64 *)(v27 + 16), 0);
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v30 = v31;
              goto LABEL_48;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
LABEL_49:
        ++v24;
      }
    }
  }
  return v7;
}
