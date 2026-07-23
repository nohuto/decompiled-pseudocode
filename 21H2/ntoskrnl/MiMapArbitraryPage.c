/*
 * XREFs of MiMapArbitraryPage @ 0x1403697C0
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiCombinePte @ 0x14055CB40 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist, int a5)
{
  __int64 v5; // rdi
  int v6; // r15d
  __int64 *v7; // rsi
  unsigned int v8; // r12d
  __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // r14
  int v13; // eax
  char v14; // al
  int v15; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 v17; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // edx
  int v31; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2[8];
  v6 = (int)SchedulerAssist;
  v7 = (__int64 *)a2[9];
  v8 = a3;
  v11 = (unsigned __int128)((v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v11 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v11 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31, v11, a3, (__int64)SchedulerAssist);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v13 = MiCombineCandidate(a1, v8, v5);
  if ( v6 )
  {
    if ( v13 != v6 )
      goto LABEL_24;
  }
  else if ( !v13 )
  {
    goto LABEL_24;
  }
  if ( a5 == 1 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_38;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    v19 = KeGetCurrentIrql();
    if ( v19 > 0xFu )
      goto LABEL_38;
    if ( CurrentIrql > 0xFu )
      goto LABEL_38;
    if ( v19 < 2u )
      goto LABEL_38;
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = CurrentPrcb->SchedulerAssist;
    v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v23 = (v22 & v21[5]) == 0;
    v21[5] &= v22;
    if ( !v23 )
      goto LABEL_38;
LABEL_37:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_38:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v14 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v14 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_38;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    v24 = KeGetCurrentIrql();
    if ( v24 > 0xFu )
      goto LABEL_38;
    if ( CurrentIrql > 0xFu )
      goto LABEL_38;
    if ( v24 < 2u )
      goto LABEL_38;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = CurrentPrcb->SchedulerAssist;
    v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v23 = (v26 & v25[5]) == 0;
    v25[5] &= v26;
    if ( !v23 )
      goto LABEL_38;
    goto LABEL_37;
  }
  v15 = 1;
  if ( v14 )
  {
    if ( v14 == 2 )
      v15 = 25;
  }
  else
  {
    v15 = 9;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)v7, (v5 + 0x58000000000LL) / 48, v15 | 0x20000000u);
  a2[7] = v7;
  v17 = ValidPte;
  a2[6] = v5;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *v7 = v17;
      MiWritePteShadow((__int64)v7, v17);
      goto LABEL_12;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
  }
  *v7 = v17;
LABEL_12:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
