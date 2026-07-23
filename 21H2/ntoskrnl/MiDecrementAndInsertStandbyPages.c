/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x140337130
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  char v7; // al
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rdi
  int v13; // eax
  __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v16; // rbx
  unsigned __int64 *MmInternal; // r14
  unsigned __int64 UltraMapping; // r15
  __int64 *v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned int v26; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 TransitionPte; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 *v31; // [rsp+28h] [rbp-50h]
  int v35; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    v35 = MiPteInShadowRange(&TransitionPte);
    while ( 1 )
    {
      v6 = v4[v5];
      TransitionPte = v3;
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = v3;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v31 = (unsigned __int64 *)(v6 + 16);
      v8 = MI_READ_PTE_LOCK_FREE(v6 + 16);
      v9 = *(_QWORD *)(v6 + 8);
      v10 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
      v11 = 4;
      v12 = (v8 >> 5) & 0x1F;
      v13 = *(unsigned __int8 *)(48 * v10 - 0x58000000000LL + 34) >> 6;
      if ( !v13 || v13 == 3 )
      {
        v11 = 12;
      }
      else if ( v13 == 2 )
      {
        v11 = 28;
      }
      ValidPte = MiMakeValidPte(0LL, v10, v11 | 0xA0000000);
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = ValidPte;
      MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
            v19 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = (unsigned __int64)v19,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v19 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( !(unsigned int)MiPteInShadowRange(v19) )
        goto LABEL_10;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_140C4E048) && (v16 & 1) != 0 )
        v16 |= 0x8000000000000000uLL;
      *v19 = v16;
      MiWritePteShadow((__int64)v19, v16);
LABEL_11:
      v20 = (v9 >> 3) & 0x1FF;
      v21 = (unsigned __int64 *)(UltraMapping + 8LL * (unsigned int)v20);
      v22 = MI_READ_PTE_LOCK_FREE(v21);
      TransitionPte = v22;
      if ( v35
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v28 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF));
          if ( (v28 & 0x20) != 0 )
            v22 |= 0x20uLL;
          if ( (v28 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v22 = TransitionPte;
        }
      }
      TransitionPte = MiMakeTransitionPte((v22 >> 12) & 0xFFFFFFFFFLL, (unsigned int)v12);
      v23 = TransitionPte;
      v24 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(UltraMapping + 8LL * (unsigned int)v20) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v29 = v23;
          if ( !HIBYTE(word_140C4E048) && (v23 & 1) != 0 )
            v29 = v23 | 0x8000000000000000uLL;
          *v21 = v29;
          MiWritePteShadow(UltraMapping + 8LL * (unsigned int)v20, v29);
          goto LABEL_14;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v23 & 1) != 0 )
        {
          v24 |= 0x8000000000000000uLL;
        }
      }
      *v21 = v24;
LABEL_14:
      LOBYTE(v25) = 17;
      MiUnmapPageInHyperSpaceWorker(UltraMapping + 8LL * (unsigned int)v20, v25, 0x80000000LL);
      MiSetNonResidentPteHeat(v31, 0);
      ++v5;
      v4 = a1;
      v3 = v26;
      if ( v5 >= a2 )
        goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
LABEL_10:
    *v19 = v16;
    goto LABEL_11;
  }
LABEL_15:
  MiInsertAndUnlockStandbyPages(0LL, v4, a2, a3);
}
