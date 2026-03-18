/*
 * XREFs of MiBuildForkPageTable @ 0x1405B85F8
 * Callers:
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  char v18; // al
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 TransitionPte; // rbx
  int v27; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v10 = 48 * a2 - 0x220000000000LL;
  v11 = 48 * a5 - 0x220000000000LL;
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(128LL);
  MiSetPfnPteFrame(v10, v12);
  v13 = MiLockPageInline(v11);
  v15 = *(_QWORD *)(v11 + 24);
  v16 = v13;
  v17 = v15 ^ ((v15 + 1) ^ v15) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v11 + 24) = v17;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5, v17, v15, v14);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v18 = *(_BYTE *)(v10 + 34) | 0x10;
  *(_BYTE *)(v10 + 34) = v18;
  v19 = v18;
  if ( (v18 & 0xC0) != 0x40 )
  {
    MiChangePageAttribute(v10, 1u, 1);
    v19 = *(_BYTE *)(v10 + 34);
  }
  v20 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v20 | 1;
  *(_BYTE *)(v10 + 34) = v19 & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1LL, v15);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( a6 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a2, 4);
    v27 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_33;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v27 = 1;
      if ( HIBYTE(word_140C51864) )
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
      if ( !HIBYTE(word_140C51864) )
        TransitionPte |= 0x8000000000000000uLL;
    }
    v27 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v27 = 1;
        if ( HIBYTE(word_140C51864) )
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
  if ( v27 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, TransitionPte);
  return (char)CurrentThread;
}
