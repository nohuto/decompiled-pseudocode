/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140A50400
 * Callers:
 *     MiInitializeSystemVa @ 0x140A50300 (MiInitializeSystemVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeFlushEntireTb @ 0x1403B7260 (KeFlushEntireTb.c)
 *     MiApplyDynamicRelocations @ 0x140A505D8 (MiApplyDynamicRelocations.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A5154C (MiApplyRetpolineFixupsToKernelAndHal.c)
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
  unsigned __int64 v11; // rbx
  int v12; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int64 i; // r14
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  bool v18; // zf
  bool v19; // zf
  __int64 v20; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140C4FB58;
  v5 = qword_140C4FB98;
  v20 = qword_140C4FB58;
  if ( (MiFlags & 0x8000) == 0 && qword_140C4FB98 == 0xFFFFF68000000000uLL )
    goto LABEL_18;
  v6 = ((unsigned __int64)qword_140C4FB98 >> 39) & 0x1FF;
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
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v18 = (v9 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v18 = (v9 & 1) == 0;
    }
    if ( !v18 )
      v9 |= v17;
LABEL_5:
    *v8 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v8, v9);
    if ( (MiFlags & 0x200000) != 0 )
      goto LABEL_11;
    v11 = ZeroPte;
    v12 = 0;
    if ( !MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) )
    {
LABEL_9:
      MEMORY[0xFFFFF6FB7DBEDF68] = v11;
      if ( v12 )
        MiWritePteShadow(0xFFFFF6FB7DBEDF68uLL, v11);
LABEL_11:
      KeFlushEntireTb();
      goto LABEL_12;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_9;
      v19 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v19 = (ZeroPte & 1) == 0;
    }
    if ( !v19 )
      v11 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_9;
  }
LABEL_12:
  v13 = v5;
  for ( i = 39LL; ; i -= 9LL )
  {
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( i >= 0xC )
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( (unsigned int)++v7 > 4 )
      break;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = v5 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
  }
  v4 = v20;
LABEL_18:
  v15 = 0xFFFFFA8000000000uLL;
  if ( (MiFlags & 0x8000) != 0 || v4 != 0xFFFFFA8000000000uLL )
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  result = MiApplyRetpolineFixupsToKernelAndHal(a1, v15);
  MmPteBase = v5;
  qword_140C00E80 = v5;
  return result;
}
