/*
 * XREFs of MiPfnShareCountIsZero @ 0x14028E490
 * Callers:
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MiReduceShareCount @ 0x1402F23FC (MiReduceShareCount.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiIsAddressGlobal @ 0x140286000 (MiIsAddressGlobal.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  char v15; // dl
  __int64 Process; // rcx
  int v17; // eax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v19; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r11
  unsigned __int64 *v24; // r8
  __int64 v25; // r15
  __int64 v26; // r8
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  struct _LIST_ENTRY *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  char v36; // al
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // [rsp+60h] [rbp+8h] BYREF
  __int64 v47; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)MI_PFN_IS_PROTO(a1, a2, a3) )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( (unsigned __int64)(v6 + 16) >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)(v6 + 16) <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v5)
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = v7 | 0x20;
        v11 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v11 & 0x20) == 0 )
          v10 = v7;
        v7 = v10;
        if ( (v11 & 0x42) != 0 )
          v7 = v10 | 0x42;
      }
    }
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
    v14 = v7 >> 5;
    v15 = 4;
    Process = 6 * v13;
    v17 = *(unsigned __int8 *)(48 * v13 - 0x58000000000LL + 34) >> 6;
    if ( !v17 || v17 == 3 )
    {
      v15 = 12;
    }
    else if ( v17 == 2 )
    {
      v15 = 28;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = (v13 << 12) & 0xFAFFFFFFFFFFFEFFuLL | MmProtectToPteMask[v15 & 0x1F] & 0xFAFF000000000E7FuLL | 0x21 | ((unsigned __int64)(word_140C4DF48 & 1) << 8) | 0xA00000000000042LL;
    MmInternal = CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
      v22 = 0x7FFFFFFFF8LL;
      v23 = UltraMapping;
      Process = 0xFFFFF68000000000uLL;
      v24 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = v24;
      if ( UltraMapping )
      {
LABEL_23:
        if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(Process, 0x7FFFFFFFF8LL) )
          {
            if ( !HIBYTE(word_140C4DF48) )
              v19 |= 0x8000000000000000uLL;
            *v24 = v19;
            MiWritePteShadow(v24, v19);
LABEL_32:
            v25 = (v12 >> 3) & 0x1FF;
            v26 = *(_QWORD *)(v23 + 8 * v25);
            v27 = v23 + 8 * v25;
            if ( v27 >= 0xFFFFF6FB7DBED000uLL
              && v27 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v22)
              && (v26 & 1) != 0
              && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              v22 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v22 )
              {
                v28 = *(_QWORD *)(v22 + 8 * ((v27 >> 3) & 0x1FF));
                v22 = v26 | 0x20;
                if ( (v28 & 0x20) == 0 )
                  v22 = v26;
                v26 = v22;
                if ( (v28 & 0x42) != 0 )
                  v26 = v22 | 0x42;
              }
            }
            v46 = v26;
            if ( (unsigned __int64)&v46 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v46 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v46, v22)
              && (v26 & 1) != 0
              && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              v29 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v29 )
              {
                v30 = *((_QWORD *)&v29->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF));
                v31 = v26 | 0x20;
                if ( (v30 & 0x20) == 0 )
                  v31 = v26;
                v26 = v31;
                if ( (v30 & 0x42) != 0 )
                  v26 = v31 | 0x42;
              }
            }
            v32 = v26 & 0xFFFFFFFFF000LL | (32 * (v14 & 0x1F | 0x40));
            if ( qword_140C4DE80 )
            {
              if ( (qword_140C4DE80 & v32) != 0 )
                v32 |= 0x10uLL;
              else
                v32 |= qword_140C4DE80;
            }
            v46 = v32;
            if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (unsigned int)MiPteHasShadow(qword_140C4DE80, v32) )
              {
                if ( !HIBYTE(word_140C4DF48) && (v32 & 1) != 0 )
                  v32 |= 0x8000000000000000uLL;
                *(_QWORD *)v27 = v32;
                MiWritePteShadow(v27, v32);
                goto LABEL_69;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v32 & 1) != 0 )
              {
                v32 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v27 = v32;
LABEL_69:
            LOBYTE(v32) = 17;
            MiUnmapPageInHyperSpaceWorker(v27, v32, 0x80000000LL);
            goto LABEL_70;
          }
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 )
            v19 |= 0x8000000000000000uLL;
        }
        *v24 = v19;
        goto LABEL_32;
      }
    }
    else
    {
      v22 = 0x7FFFFFFFF8LL;
    }
    v23 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v24 = (unsigned __int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_23;
  }
LABEL_70:
  v33 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v34 = (v33 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v35 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v34 )
    {
      v36 = v35 | 7;
    }
    else if ( (v35 & 0x10) != 0 )
    {
      v36 = v35 & 0xF8 | 3;
    }
    else
    {
      v36 = v35 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v36;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
    }
    return 3LL;
  }
  else if ( (_DWORD)v34 )
  {
    v38 = *(_BYTE *)(a1 + 35);
    if ( (v38 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v38 & 0xEF;
    v39 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
    v47 = *(_QWORD *)(a1 + 16);
    v40 = *(_QWORD *)(qword_140C4E588 + 8 * v39);
    if ( (v47 & 0x400) == 0 && ((v47 & 4) != 0 || (v47 & 2) != 0) )
    {
      v41 = MI_READ_PTE_LOCK_FREE(&v47);
      if ( v41 )
        MiReleasePageFileInfo(v40, v41, 0LL);
    }
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
    return 4LL;
  }
  else
  {
    v42 = *(_QWORD *)(a1 + 16);
    v43 = -9LL;
    if ( (v42 & 0x400) != 0 )
      v43 = -2049LL;
    *(_QWORD *)(a1 + 16) = v42 & v43;
    v44 = *(_BYTE *)(a1 + 34);
    if ( (v44 & 0x10) != 0 )
    {
      v45 = 136LL;
      if ( a2 != 1 )
        v45 = 8LL;
    }
    else
    {
      *(_BYTE *)(a1 + 34) = v44 & 0xF8 | 2;
      if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v45 = 4LL;
    }
    MiInsertPageInList(a1, v45);
    return 4LL;
  }
}
