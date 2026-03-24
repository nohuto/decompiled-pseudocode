/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14032C3E0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140325EC0 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

void __fastcall MiDecrementAndInsertStandbyPages(_QWORD *a1, __int64 a2, unsigned __int8 a3)
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
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v17; // rbx
  unsigned __int64 *MmInternal; // r14
  unsigned __int64 UltraMapping; // r15
  __int64 *v20; // rsi
  __int64 v21; // rbp
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // r8
  struct _LIST_ENTRY *Flink; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 TransitionPte; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 *v35; // [rsp+28h] [rbp-50h]
  unsigned int v37; // [rsp+88h] [rbp+10h]
  int v39; // [rsp+98h] [rbp+20h]

  v37 = a2;
  v3 = 0LL;
  v4 = a1;
  v5 = 0LL;
  if ( (_DWORD)a2 )
  {
    v39 = MiPteInShadowRange(&TransitionPte, a2);
    while ( 1 )
    {
      v6 = v4[v5];
      TransitionPte = v3;
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v6 + 32) = v3;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v35 = (unsigned __int64 *)(v6 + 16);
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
      v17 = ValidPte;
      MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal
        || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0),
            v20 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
            MmInternal[1543] = (unsigned __int64)v20,
            !UltraMapping) )
      {
        UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
        v20 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( !(unsigned int)MiPteInShadowRange(v20, v15) )
        goto LABEL_10;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_140C4E008) && (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *v20 = v17;
      MiWritePteShadow((__int64)v20, v17, v29);
LABEL_11:
      v21 = (v9 >> 3) & 0x1FF;
      v22 = (unsigned __int64 *)(UltraMapping + 8LL * (unsigned int)v21);
      v23 = MI_READ_PTE_LOCK_FREE(v22);
      TransitionPte = v23;
      if ( v39
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v31 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF));
          if ( (v31 & 0x20) != 0 )
            v23 |= 0x20uLL;
          if ( (v31 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
        else
        {
          v23 = TransitionPte;
        }
      }
      TransitionPte = MiMakeTransitionPte((v23 >> 12) & 0xFFFFFFFFFLL, (unsigned int)v12);
      v24 = TransitionPte;
      v25 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(UltraMapping + 8LL * (unsigned int)v21, v26) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v33 = v24;
          if ( !HIBYTE(word_140C4E008) && (v24 & 1) != 0 )
            v33 = v24 | 0x8000000000000000uLL;
          *v22 = v33;
          MiWritePteShadow(UltraMapping + 8LL * (unsigned int)v21, v33, v32);
          goto LABEL_14;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v24 & 1) != 0 )
        {
          v25 |= 0x8000000000000000uLL;
        }
      }
      *v22 = v25;
LABEL_14:
      LOBYTE(v27) = 17;
      MiUnmapPageInHyperSpaceWorker(UltraMapping + 8LL * (unsigned int)v21, v27, 0x80000000LL);
      MiSetNonResidentPteHeat(v35, 0);
      ++v5;
      v4 = a1;
      v3 = v28;
      if ( v5 >= v37 )
        goto LABEL_15;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
LABEL_10:
    *v20 = v17;
    goto LABEL_11;
  }
LABEL_15:
  MiInsertAndUnlockStandbyPages(0LL, v4, v37, a3);
}
