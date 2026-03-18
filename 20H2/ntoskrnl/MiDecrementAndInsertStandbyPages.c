/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x1402AF7F0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
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
  _QWORD *MmInternal; // r14
  unsigned __int64 UltraMapping; // r15
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbp
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 TransitionPte; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+28h] [rbp-50h]
  BOOL v42; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    v42 = MiPteInShadowRange((unsigned __int64)&TransitionPte);
    while ( 1 )
    {
      v6 = v4[v5];
      TransitionPte = v3;
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = v3;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v38 = v6 + 16;
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
      MmInternal = CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
            v19 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = v19,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v19 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( !MiPteInShadowRange((unsigned __int64)v19) )
        goto LABEL_10;
      if ( !(unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
        break;
      if ( !HIBYTE(word_140C4DE88) && (v16 & 1) != 0 )
        v16 |= 0x8000000000000000uLL;
      *v19 = v16;
      MiWritePteShadow(v19, v16);
LABEL_11:
      v24 = (v9 >> 3) & 0x1FF;
      v25 = (unsigned __int64 *)(UltraMapping + 8LL * (unsigned int)v24);
      v26 = MI_READ_PTE_LOCK_FREE(v25);
      TransitionPte = v26;
      if ( v42
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v35 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v35 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
        else
        {
          v26 = TransitionPte;
        }
      }
      TransitionPte = MiMakeTransitionPte((v26 >> 12) & 0xFFFFFFFFFLL, (unsigned int)v12);
      v27 = TransitionPte;
      v28 = TransitionPte;
      if ( MiPteInShadowRange(UltraMapping + 8LL * (unsigned int)v24) )
      {
        if ( (unsigned int)MiPteHasShadow(v30, v29, v31, v32) )
        {
          v36 = v27;
          if ( !HIBYTE(word_140C4DE88) && (v27 & 1) != 0 )
            v36 = v27 | 0x8000000000000000uLL;
          *v25 = v36;
          MiWritePteShadow(UltraMapping + 8LL * (unsigned int)v24, v36);
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
      MiUnmapPageInHyperSpaceWorker(UltraMapping + 8LL * (unsigned int)v24, 0x11u, 0x80000000);
      MiSetNonResidentPteHeat(v38, 0LL);
      ++v5;
      v4 = a1;
      v3 = v33;
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
