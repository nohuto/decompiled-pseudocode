/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140A48A5C
 * Callers:
 *     MiInitializeSystemVa @ 0x140A4895C (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeFlushEntireTb @ 0x1403B3140 (KeFlushEntireTb.c)
 *     MiApplyDynamicRelocations @ 0x140A48C34 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A48CF0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // r14d
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 i; // r14
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  bool v20; // zf
  bool v21; // zf
  __int64 v22; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140C4F918;
  v5 = qword_140C4F958;
  v22 = qword_140C4F918;
  if ( (MiFlags & 0x8000) == 0 && qword_140C4F958 == 0xFFFFF68000000000uLL )
    goto LABEL_18;
  v6 = ((unsigned __int64)qword_140C4F958 >> 39) & 0x1FF;
  v7 = 0;
  v8 = (__int64 *)(8 * v6 - 0x90482413000LL);
  if ( 8 * v6 != 3944 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    v10 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v8) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_5;
      v20 = (v9 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v20 = (v9 & 1) == 0;
    }
    if ( !v20 )
      v9 |= v19;
LABEL_5:
    *v8 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v8, v9, v11);
    if ( (MiFlags & 0x200000) != 0 )
      goto LABEL_11;
    v12 = ZeroPte;
    v13 = 0;
    if ( !MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) )
    {
LABEL_9:
      MEMORY[0xFFFFF6FB7DBEDF68] = v12;
      if ( v13 )
        MiWritePteShadow(0xFFFFF6FB7DBEDF68uLL, v12, v14);
LABEL_11:
      KeFlushEntireTb();
      goto LABEL_12;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_9;
      v21 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v21 = (ZeroPte & 1) == 0;
    }
    if ( !v21 )
      v12 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_9;
  }
LABEL_12:
  v15 = v5;
  for ( i = 39LL; ; i -= 9LL )
  {
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( i >= 0xC )
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( (unsigned int)++v7 > 4 )
      break;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v5 + ((v15 >> 9) & 0x7FFFFFFFF8LL);
  }
  v4 = v22;
LABEL_18:
  v17 = 0xFFFFFA8000000000uLL;
  if ( (MiFlags & 0x8000) != 0 || v4 != 0xFFFFFA8000000000uLL )
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  result = MiApplyRetpolineFixupsToKernelAndHal(a1, v17);
  MmPteBase = v5;
  qword_140C00E80 = v5;
  return result;
}
