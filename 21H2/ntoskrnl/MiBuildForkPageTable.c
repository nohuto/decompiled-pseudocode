/*
 * XREFs of MiBuildForkPageTable @ 0x14055820C
 * Callers:
 *     MiUpdateForkMaps @ 0x14055B9E0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int8 v16; // al
  _DWORD *v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  char v21; // al
  char v22; // cl
  unsigned __int64 v23; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 TransitionPte; // rbx
  int v30; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v16 = MiLockPageInline(v11, v13, v14, v15);
  v18 = *(_QWORD *)(v11 + 24);
  v19 = v16;
  v20 = v18 ^ ((v18 + 1) ^ v18) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = v20;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, v20, v18, (__int64)v17);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v21 = *(_BYTE *)(v10 + 34) | 0x10;
  *(_BYTE *)(v10 + 34) = v21;
  v22 = v21;
  if ( (v21 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v10, 1LL, 1LL, v17);
    v22 = *(_BYTE *)(v10 + 34);
  }
  v23 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v23 | 1;
  *(_BYTE *)(v10 + 34) = v22 & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v28 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v19);
  if ( a6 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a2, 4);
    v30 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_33;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v30 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_33;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_33;
    }
    if ( (TransitionPte & 1) != 0 )
      goto LABEL_32;
  }
  else
  {
    TransitionPte = MiMakeValidPte(a3, a2, -2147483644) | 4;
    if ( a6 == 3 && (MiFlags & 0xC00000) != 0 && *(_BYTE *)(a1 + 912) != 1 )
    {
      *(_QWORD *)((a3 & 0xFFF) + *(_QWORD *)(a1 + 1928)) = TransitionPte;
      if ( !HIBYTE(word_140C4E048) )
        TransitionPte |= 0x8000000000000000uLL;
    }
    v30 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v30 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_33;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_33;
      }
      if ( (TransitionPte & 1) != 0 )
LABEL_32:
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
LABEL_33:
  *a4 = TransitionPte;
  if ( v30 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, TransitionPte);
  return (char)CurrentThread;
}
