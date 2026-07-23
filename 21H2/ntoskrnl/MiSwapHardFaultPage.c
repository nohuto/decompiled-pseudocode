/*
 * XREFs of MiSwapHardFaultPage @ 0x1405639B0
 * Callers:
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 updated; // rbx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 result; // rax

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, (a3 + 0x58000000000LL) / 48);
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_8;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (updated & 1) != 0 )
      updated |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = updated;
  if ( v8 )
    MiWritePteShadow((__int64)a1, updated);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntryEx(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( (v9 & 4) != 0 )
  {
    v9 &= ~4uLL;
    *(_QWORD *)(a2 + 16) = v9;
  }
  if ( (v9 & 2) != 0 )
    *(_QWORD *)(a2 + 16) = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
    MiPfnReferenceCountIsZero(a2, (a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
