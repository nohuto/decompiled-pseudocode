/*
 * XREFs of MiMapArbitraryPage @ 0x140369610
 * Callers:
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiCombinePte @ 0x14055C900 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407272B0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x1403697A0 (MiCombineCandidate.c)
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
  __int64 v27; // r8
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // edx
  int v32; // [rsp+68h] [rbp+20h] BYREF

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
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32, v11, a3, (__int64)SchedulerAssist);
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
      if ( !HIBYTE(word_140C4E008) && (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *v7 = v17;
      MiWritePteShadow((__int64)v7, v17, v27);
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
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
