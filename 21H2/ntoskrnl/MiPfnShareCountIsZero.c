/*
 * XREFs of MiPfnShareCountIsZero @ 0x1402BF640
 * Callers:
 *     MiReduceShareCount @ 0x14022876C (MiReduceShareCount.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiUnlockPageTableCharges @ 0x1402E5B0C (MiUnlockPageTableCharges.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiIsAddressGlobal @ 0x14027DAD4 (MiIsAddressGlobal.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(ULONG_PTR a1, unsigned __int64 a2)
{
  char v4; // di
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // al
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rsi
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v16; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // r10
  unsigned __int64 *v19; // rdx
  ULONG_PTR *v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rbx
  char v26; // al
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v4 = 4;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v11 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
    v12 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
    v13 = *(_QWORD *)(a1 + 16) >> 5;
    v14 = *(unsigned __int8 *)(48 * v11 - 0x220000000000LL + 34) >> 6;
    if ( !v14 || v14 == 3 )
    {
      v4 = 12;
    }
    else if ( v14 == 2 )
    {
      v4 = 28;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = (v11 << 12) & 0xFAFFFFFFFFFFFEBDuLL | MmProtectToPteMask[v4 & 0x1F] & 0xFAF0000000000E3DuLL | 0x63 | ((word_140C51864 & 1 | 0xA000000000000LL) << 8);
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL, 0LL),
          v19 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = v19,
          !UltraMapping) )
    {
      UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                   + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v19 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    *v19 = v16;
    v20 = (ULONG_PTR *)(UltraMapping + 8 * v12);
    v21 = (*v20 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v21 - 0x220000000000LL != a1 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
        UltraMapping + (unsigned int)v12,
        *v20);
    v22 = 32 * ((v21 << 7) | v13 & 0x1F | 0x40);
    if ( qword_140C50780 )
    {
      if ( (v22 & qword_140C50780) != 0 )
        v22 |= 0x10uLL;
      else
        v22 |= qword_140C50780;
    }
    *v20 = v22;
    MiUnmapPageInHyperSpaceWorker(UltraMapping, 0x11u);
  }
  v5 = (*(_WORD *)(a1 + 32))-- == 1;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( (v6 & 0x4000000000000000LL) != 0 )
    {
      v23 = *(_BYTE *)(a1 + 35);
      if ( (v23 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v23 & 0xEF;
      v24 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
      v29 = *(_QWORD *)(a1 + 16);
      v25 = *(_QWORD *)(qword_140C51F48 + 8 * v24);
      if ( (v29 & 0x400) == 0 && ((v29 & 4) != 0 || (v29 & 2) != 0) )
      {
        v28 = MI_READ_PTE_LOCK_FREE(&v29);
        if ( v28 )
          MiReleasePageFileInfo(v25, v28, 0LL);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = -9LL;
      if ( (v7 & 0x400) != 0 )
        v8 = -2049LL;
      *(_QWORD *)(a1 + 16) = v7 & v8;
      v9 = *(_BYTE *)(a1 + 34);
      if ( (v9 & 0x10) != 0 || (*(_BYTE *)(a1 + 34) = v9 & 0xF8 | 2, a2 <= 1) || (unsigned int)MiGetPfnPriority(a1) >= 5 )
        MiInsertPageInList(a1);
      else
        MiInsertProtectedStandbyPage(a2, a1);
    }
    return 4LL;
  }
  else
  {
    v5 = (v6 & 0x4000000000000000LL) == 0;
    v26 = *(_BYTE *)(a1 + 34);
    if ( v5 )
    {
      if ( (v26 & 0x10) != 0 )
        v27 = v26 & 0xF8 | 3;
      else
        v27 = v26 & 0xF8 | 2;
    }
    else
    {
      v27 = v26 | 7;
    }
    *(_BYTE *)(a1 + 34) = v27;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(a1 + 16) )
      *(_BYTE *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 699LL) = 1;
    return 3LL;
  }
}
