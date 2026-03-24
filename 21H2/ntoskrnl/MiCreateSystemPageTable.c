/*
 * XREFs of MiCreateSystemPageTable @ 0x1402E5210
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializeSystemPageTable @ 0x1402E5484 (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeSystemLeavesNonZero @ 0x1403792AC (MiMakeSystemLeavesNonZero.c)
 *     MiReplicatePteChange @ 0x1403A4544 (MiReplicatePteChange.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x14054EBC8 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x140A568CC (MxCopyPage.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, __int64 a2, int a3)
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
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v18 = 0LL;
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v19 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 0x80) != 0
     || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1185]
     && (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 1181]
     && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0))
    || (*(_DWORD *)(v3 + 64) & 0x80) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5) )
  {
    return 0LL;
  }
  PageTablePages = MiGetPageTablePages(v3, 1LL, &v18);
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
    v13 = (v18 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero((v18 + 0x58000000000LL) / 48);
    if ( v9 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v15 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000LL, v12);
        KeCopyPage(v15, a2 << 25 >> 16);
        LOBYTE(v16) = 17;
        MiUnmapPageInHyperSpaceWorker(v15, v16, 0x80000000LL);
      }
      else
      {
        MxCopyPage(v13);
      }
    }
    MiInitializeSystemPageTable(v3, v5, a2, v18, v3 + 80);
    v14 = 3;
    if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 56) != 2 )
    {
      v17 = a2;
      do
      {
        v17 = v17 << 25 >> 16;
        --v14;
      }
      while ( v14 );
      MiReplicatePteChange(v17, v17);
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
