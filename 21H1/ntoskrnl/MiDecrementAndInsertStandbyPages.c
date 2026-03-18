/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14028FAA0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(_QWORD *a1, __int64 a2, unsigned __int8 a3)
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
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v18; // rbx
  _QWORD *MmInternal; // r14
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 TransitionPte; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 *v37; // [rsp+28h] [rbp-50h]
  unsigned int v39; // [rsp+88h] [rbp+10h]
  int v41; // [rsp+98h] [rbp+20h]

  v39 = a2;
  v3 = 0LL;
  v4 = a1;
  v5 = 0LL;
  if ( (_DWORD)a2 )
  {
    v41 = MiPteInShadowRange(&TransitionPte, a2);
    while ( 1 )
    {
      v6 = v4[v5];
      TransitionPte = v3;
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = v3;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v37 = (unsigned __int64 *)(v6 + 16);
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
      v18 = ValidPte;
      MmInternal = CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
            v21 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = v21,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v21 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( !(unsigned int)MiPteInShadowRange(v21, v16) )
        goto LABEL_10;
      if ( !(unsigned int)MiPteHasShadow(v23, v22) )
        break;
      if ( !HIBYTE(word_140C4DF48) && (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
      *v21 = v18;
      MiWritePteShadow(v21, v18);
LABEL_11:
      v24 = (v10 >> 3) & 0x1FF;
      v25 = (unsigned __int64 *)(UltraMapping + 8LL * (unsigned int)v24);
      v26 = MI_READ_PTE_LOCK_FREE(v25);
      TransitionPte = v26;
      if ( v41
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v34 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF));
          if ( (v34 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v34 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
        else
        {
          v26 = TransitionPte;
        }
      }
      TransitionPte = MiMakeTransitionPte((v26 >> 12) & 0xFFFFFFFFFLL, v13);
      v27 = TransitionPte;
      v28 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(UltraMapping + 8LL * (unsigned int)v24, v29) )
      {
        if ( (unsigned int)MiPteHasShadow(v31, v30) )
        {
          v35 = v27;
          if ( !HIBYTE(word_140C4DF48) && (v27 & 1) != 0 )
            v35 = v27 | 0x8000000000000000uLL;
          *v25 = v35;
          MiWritePteShadow(UltraMapping + 8LL * (unsigned int)v24, v35);
          goto LABEL_14;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v27 & 1) != 0 )
        {
          v28 |= 0x8000000000000000uLL;
        }
      }
      *v25 = v28;
LABEL_14:
      LOBYTE(v30) = 17;
      MiUnmapPageInHyperSpaceWorker(UltraMapping + 8LL * (unsigned int)v24, v30, 0x80000000LL);
      MiSetNonResidentPteHeat(v37, 0);
      ++v5;
      v4 = a1;
      v3 = v32;
      if ( v5 >= v39 )
        goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
LABEL_10:
    *v21 = v18;
    goto LABEL_11;
  }
LABEL_15:
  MiInsertAndUnlockStandbyPages(0LL, v4, v39, a3);
}
