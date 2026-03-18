/*
 * XREFs of MiCreateSystemPageTable @ 0x1403289C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x1403290D0 (MiGetPageTablePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeSystemLeavesNonZero @ 0x14037630C (MiMakeSystemLeavesNonZero.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x140A4EF28 (MxCopyPage.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int16 v8; // bx
  __int64 v9; // r12
  int PageTablePages; // eax
  __int64 v12; // r9
  ULONG_PTR v13; // rbx
  int v14; // edx
  _KPROCESS *v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v19 = 0LL;
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v20 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80) != 0
     || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1185]
     && (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1181]
     && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 64) & 0x80) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  PageTablePages = MiGetPageTablePages(v3, 1LL, &v19);
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
    v13 = (v19 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero((v19 + 0x58000000000LL) / 48);
    if ( v9 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v16 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000LL, v12);
        KeCopyPage(v16, (__int64)(a2 << 25) >> 16);
        LOBYTE(v17) = 17;
        MiUnmapPageInHyperSpaceWorker(v16, v17, 0x80000000);
      }
      else
      {
        MxCopyPage(v13);
      }
    }
    MiInitializeSystemPageTable(v3, v5, a2, v19, v3 + 80);
    v14 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 56) != 2 )
    {
      v18 = a2;
      do
      {
        v18 = v18 << 25 >> 16;
        --v14;
      }
      while ( v14 );
      MiReplicatePteChange(v18, v18);
    }
    v15 = (_KPROCESS *)((*(unsigned __int8 *)(a1 + 2) >> 2) & 7);
    if ( (int)v5 <= (int)v15 )
    {
      if ( (int)v5 > 1 )
        MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
      return 0LL;
    }
    if ( v9 )
      MiFlushTbList(v3 + 80, v15);
    return 1LL;
  }
}
