/*
 * XREFs of MiPfnShareCountIsZero @ 0x140326190
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140238450 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     MiReduceShareCount @ 0x1402968DC (MiReduceShareCount.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiUserPdeOrAbove @ 0x1402ABED4 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIsAddressGlobal @ 0x14031EB10 (MiIsAddressGlobal.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  char v13; // dl
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v16; // rdi
  unsigned __int64 *MmInternal; // rbx
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v19; // r8
  __int64 v20; // r15
  __int64 v21; // r8
  unsigned __int64 v22; // r11
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // al
  char v34; // al
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // [rsp+60h] [rbp+8h] BYREF
  __int64 v45; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)MI_PFN_IS_PROTO(a1) )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( (unsigned __int64)(v4 + 16) >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)(v4 + 16) <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v8 = v5 | 0x20;
        v9 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
        if ( (v9 & 0x20) == 0 )
          v8 = v5;
        v5 = v8;
        if ( (v9 & 0x42) != 0 )
          v5 = v8 | 0x42;
      }
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
    v12 = v5 >> 5;
    v13 = 4;
    v14 = *(unsigned __int8 *)(48 * v11 - 0x58000000000LL + 34) >> 6;
    if ( !v14 || v14 == 3 )
    {
      v13 = 12;
    }
    else if ( v14 == 2 )
    {
      v13 = 28;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = (v11 << 12) & 0xFAFFFFFFFFFFFEFFuLL | MmProtectToPteMask[v13 & 0x1F] & 0xFAFF000000000E7FuLL | 0x21 | ((unsigned __int64)(word_140C4E008 & 1) << 8) | 0xA00000000000042LL;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
          v19 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = (unsigned __int64)v19,
          !UltraMapping) )
    {
      UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                   + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v19 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) )
          v16 |= 0x8000000000000000uLL;
        *v19 = v16;
        MiWritePteShadow((__int64)v19, v16, (__int64)v19);
LABEL_30:
        v20 = (v10 >> 3) & 0x1FF;
        v21 = *(_QWORD *)(UltraMapping + 8 * v20);
        v22 = UltraMapping + 8 * v20;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL
          && v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v24 = *((_QWORD *)&v23->Flink + ((v22 >> 3) & 0x1FF));
            v25 = v21 | 0x20;
            if ( (v24 & 0x20) == 0 )
              v25 = v21;
            v21 = v25;
            if ( (v24 & 0x42) != 0 )
              v21 = v25 | 0x42;
          }
        }
        v44 = v21;
        if ( (unsigned __int64)&v44 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v44 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v26 )
          {
            v27 = *((_QWORD *)&v26->Flink + (((unsigned __int64)&v44 >> 3) & 0x1FF));
            v28 = v21 | 0x20;
            if ( (v27 & 0x20) == 0 )
              v28 = v21;
            v21 = v28;
            if ( (v27 & 0x42) != 0 )
              v21 = v28 | 0x42;
          }
        }
        v29 = v21 & 0xFFFFFFFFF000LL | (32 * (v12 & 0x1F | 0x40));
        if ( qword_140C4DF40 )
        {
          if ( (qword_140C4DF40 & v29) != 0 )
            v29 |= 0x10uLL;
          else
            v29 |= qword_140C4DF40;
        }
        v44 = v29;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (v29 & 1) != 0 )
              v29 |= 0x8000000000000000uLL;
            *(_QWORD *)v22 = v29;
            MiWritePteShadow(v22, v29, v30);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v29 & 1) != 0 )
          {
            v29 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v22 = v29;
LABEL_67:
        LOBYTE(v29) = 17;
        MiUnmapPageInHyperSpaceWorker(v22, v29, 0x80000000LL);
        goto LABEL_68;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
    *v19 = v16;
    goto LABEL_30;
  }
LABEL_68:
  v31 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v32 = (v31 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v33 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v32 )
    {
      v34 = v33 | 7;
    }
    else if ( (v33 & 0x10) != 0 )
    {
      v34 = v33 & 0xF8 | 3;
    }
    else
    {
      v34 = v33 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v34;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
    }
    return 3LL;
  }
  else if ( (_DWORD)v32 )
  {
    v36 = *(_BYTE *)(a1 + 35);
    if ( (v36 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v36 & 0xEF;
    v37 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
    v45 = *(_QWORD *)(a1 + 16);
    v38 = *(_QWORD *)(qword_140C4E648 + 8 * v37);
    if ( (v45 & 0x400) == 0 && ((v45 & 4) != 0 || (v45 & 2) != 0) )
    {
      v39 = MI_READ_PTE_LOCK_FREE(&v45);
      if ( v39 )
        MiReleasePageFileInfo(v38, v39, 0);
    }
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
    return 4LL;
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 16);
    v41 = -9LL;
    if ( (v40 & 0x400) != 0 )
      v41 = -2049LL;
    *(_QWORD *)(a1 + 16) = v40 & v41;
    v42 = *(_BYTE *)(a1 + 34);
    if ( (v42 & 0x10) != 0 )
    {
      v43 = 136LL;
      if ( a2 != 1 )
        v43 = 8LL;
    }
    else
    {
      *(_BYTE *)(a1 + 34) = v42 & 0xF8 | 2;
      if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v43 = 4LL;
    }
    MiInsertPageInList(a1, v43);
    return 4LL;
  }
}
