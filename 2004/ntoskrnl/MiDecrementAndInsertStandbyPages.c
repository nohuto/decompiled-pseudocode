/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x140236A50
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  char v7; // al
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v17; // rbx
  _QWORD *MmInternal; // r14
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  unsigned __int64 *v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 TransitionPte; // [rsp+20h] [rbp-58h] BYREF
  __int64 v39; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    v43 = MiPteInShadowRange(&TransitionPte);
    while ( 1 )
    {
      v6 = v4[v5];
      TransitionPte = v3;
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = v3;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v39 = v6 + 16;
      v8 = MI_READ_PTE_LOCK_FREE(v6 + 16);
      v10 = *(_QWORD *)(v6 + 8);
      v11 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
      v12 = 4;
      v13 = (v8 >> 5) & 0x1F;
      v14 = *(unsigned __int8 *)(48 * v11 - 0x58000000000LL + 34) >> 6;
      if ( !v14 || v14 == 3 )
      {
        v12 = 12;
      }
      else if ( v14 == 2 )
      {
        v12 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v11, v12 | 0xA0000000, v9);
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = ValidPte;
      MmInternal = CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
            v20 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = v20,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v20 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( !(unsigned int)MiPteInShadowRange(v20) )
        goto LABEL_10;
      if ( !(unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
        break;
      if ( !HIBYTE(word_140C4DE08) && (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *v20 = v17;
      MiWritePteShadow(v20, v17);
LABEL_11:
      v25 = (v10 >> 3) & 0x1FF;
      v26 = (unsigned __int64 *)(UltraMapping + 8LL * (unsigned int)v25);
      v27 = MI_READ_PTE_LOCK_FREE(v26);
      TransitionPte = v27;
      if ( v43
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v36 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF));
          if ( (v36 & 0x20) != 0 )
            v27 |= 0x20uLL;
          if ( (v36 & 0x42) != 0 )
            v27 |= 0x42uLL;
        }
        else
        {
          v27 = TransitionPte;
        }
      }
      TransitionPte = MiMakeTransitionPte((v27 >> 12) & 0xFFFFFFFFFLL, v13);
      v28 = TransitionPte;
      v29 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(UltraMapping + 8LL * (unsigned int)v25) )
      {
        if ( (unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
        {
          v37 = v28;
          if ( !HIBYTE(word_140C4DE08) && (v28 & 1) != 0 )
            v37 = v28 | 0x8000000000000000uLL;
          *v26 = v37;
          MiWritePteShadow(UltraMapping + 8LL * (unsigned int)v25, v37);
          goto LABEL_14;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v28 & 1) != 0 )
        {
          v29 |= 0x8000000000000000uLL;
        }
      }
      *v26 = v29;
LABEL_14:
      LOBYTE(v30) = 17;
      MiUnmapPageInHyperSpaceWorker(UltraMapping + 8LL * (unsigned int)v25, v30, 0x80000000LL);
      MiSetNonResidentPteHeat(v39, 0LL);
      ++v5;
      v4 = a1;
      v3 = v34;
      if ( v5 >= a2 )
        goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
LABEL_10:
    *v20 = v17;
    goto LABEL_11;
  }
LABEL_15:
  MiInsertAndUnlockStandbyPages(0LL, v4, a2, a3);
}
