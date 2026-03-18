/*
 * XREFs of MiCreateSystemPageTable @ 0x14027CE40
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     MiMakeSystemLeavesNonZero @ 0x1403C9B90 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int16 v8; // r14
  __int64 v9; // r13
  int PageTablePages; // edx
  _QWORD *v12; // r12
  ULONG_PTR v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v17 = 0LL;
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v16 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80u) != 0LL
     || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFFLL) != MiState[v5 + 2131]
     && (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFFLL) != MiState[v5 + 2127]
     && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  PageTablePages = MiGetPageTablePages(v3, 1LL, (_DWORD)v5 == 0, &v17);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 7) < 2u
      && KeGetCurrentThread()->Priority < 16
      && (*(_DWORD *)(v3 + 128) & 0x400) == 0 )
    {
      return 3LL;
    }
    else
    {
      *(_DWORD *)(v3 + 328) = PageTablePages;
      return 5LL;
    }
  }
  else
  {
    v12 = v17;
    v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x44000000000LL) >> 4);
    if ( (*(_DWORD *)(v3 + 128) & 0x1000) == 0 || !MiIsPfnFromSlabAllocation((__int64)v17) )
      ++*(_QWORD *)(v3 + 112);
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(v13);
    MiInitializeSystemPageTable(a1, v5, a2, v12, v3 + 144);
    v14 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 120) != 2 )
    {
      v15 = a2;
      do
      {
        v15 = v15 << 25 >> 16;
        --v14;
      }
      while ( v14 );
      MiReplicatePteChange(v15, v15);
    }
    if ( (int)v5 <= ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
    {
      if ( (int)v5 > 1 )
        MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v9 )
      MiFlushTbList(v3 + 144);
    return 2LL;
  }
}
