/*
 * XREFs of MiMapArbitraryPage @ 0x1403128B0
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCombinePte @ 0x1405B5BA0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, int a5)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r12
  int v12; // eax
  char v13; // al
  char v14; // cl
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // edx
  int v33; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(a2 + 64);
  v6 = (int)SchedulerAssist;
  v7 = *(_QWORD *)(a2 + 72);
  v8 = a3;
  v9 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33, a2, a3, (__int64)SchedulerAssist);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  v12 = MiCombineCandidate(a1, v8, v5);
  if ( v6 )
  {
    if ( v12 != v6 )
      goto LABEL_39;
  }
  else if ( !v12 )
  {
    goto LABEL_39;
  }
  if ( a5 && (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) > 1u )
  {
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_53;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_53;
    v21 = KeGetCurrentIrql();
    if ( v21 > 0xFu )
      goto LABEL_53;
    if ( CurrentIrql > 0xFu )
      goto LABEL_53;
    if ( v21 < 2u )
      goto LABEL_53;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = CurrentPrcb->SchedulerAssist;
    v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v25 = (v24 & v23[5]) == 0;
    v23[5] &= v24;
    if ( !v25 )
      goto LABEL_53;
LABEL_52:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_53:
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v13 = *(_BYTE *)(v5 + 34) >> 6;
  if ( v13 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_53;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_53;
    v26 = KeGetCurrentIrql();
    if ( v26 > 0xFu )
      goto LABEL_53;
    if ( CurrentIrql > 0xFu )
      goto LABEL_53;
    if ( v26 < 2u )
      goto LABEL_53;
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = CurrentPrcb->SchedulerAssist;
    v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v25 = (v28 & v27[5]) == 0;
    v27[5] &= v28;
    if ( !v25 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v14 = 1;
  if ( v13 )
  {
    if ( v13 == 2 )
      v14 = 25;
  }
  else
  {
    v14 = 9;
  }
  v15 = (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_61:
    v15 |= 0x100uLL;
    goto LABEL_23;
  }
  v16 = (__int64)(v7 << 25) >> 16;
  if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v15 = v7 == 0xFFFFF6FB7DBEDF68uLL
        ? (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : (((0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v14 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(v7) )
      v15 |= 4uLL;
  }
  if ( v7 <= 0xFFFFF6BFFFFFFF78uLL )
    v15 |= 4uLL;
  if ( v16 < 0xFFFF800000000000uLL )
  {
    v17 = HIBYTE(word_140C51864);
    goto LABEL_22;
  }
  if ( byte_140C53F50[((v16 >> 39) & 0x1FF) - 256] != 1 && (v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v16 < qword_140C540C0 || v16 > qword_140C51BF0 )
      v17 = (unsigned __int8)word_140C51864;
    else
      v17 = HIBYTE(word_140C51864);
LABEL_22:
    if ( !v17 )
      goto LABEL_23;
    goto LABEL_61;
  }
LABEL_23:
  v18 = word_140C51864 & 1;
  *(_QWORD *)(v9 + 56) = v7;
  *(_QWORD *)(v9 + 48) = v5;
  v19 = v15 & 0xFAFFFFFFFFFFFEFFuLL | ((v18 | 0xA000000000000LL) << 8);
  if ( (unsigned int)MiPteInShadowRange(v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) )
        v19 |= 0x8000000000000000uLL;
      *(_QWORD *)v7 = v19;
      MiWritePteShadow(v7, v19);
      goto LABEL_25;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      v19 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)v7 = v19;
LABEL_25:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
