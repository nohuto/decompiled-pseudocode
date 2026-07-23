/*
 * XREFs of MiCreateSystemPageTable @ 0x140296560
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeSystemLeavesNonZero @ 0x140378DFC (MiMakeSystemLeavesNonZero.c)
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x140A578CC (MxCopyPage.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int16 v8; // bx
  __int64 v9; // r12
  int PageTablePages; // eax
  ULONG_PTR v12; // rbx
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v17 = 0LL;
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v18 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80) != 0
     || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1185]
     && (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1181]
     && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 64) & 0x80) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  PageTablePages = MiGetPageTablePages(v3, 1LL, &v17);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_BYTE *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 6) < 2u
      && KeGetCurrentThread()->Priority < 16
      && (*(_DWORD *)(v3 + 64) & 0x400) == 0 )
    {
      return 2LL;
    }
    else
    {
      *(_DWORD *)(v3 + 264) = PageTablePages;
      return 4LL;
    }
  }
  else
  {
    ++*(_QWORD *)(v3 + 48);
    v12 = (v17 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero((v17 + 0x58000000000LL) / 48);
    if ( v9 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
        KeCopyPage(v14, a2 << 25 >> 16);
        LOBYTE(v15) = 17;
        MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
      }
      else
      {
        MxCopyPage(v12);
      }
    }
    MiInitializeSystemPageTable(v3, v5, a2, v17, v3 + 80);
    v13 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 56) != 2 )
    {
      v16 = a2;
      do
      {
        v16 = v16 << 25 >> 16;
        --v13;
      }
      while ( v13 );
      MiReplicatePteChange(v16, v16);
    }
    if ( (int)v5 <= ((*(unsigned __int8 *)(a1 + 2) >> 2) & 7) )
    {
      if ( (int)v5 > 1 )
        MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v9 )
      MiFlushTbList(v3 + 80);
    return 1LL;
  }
}
