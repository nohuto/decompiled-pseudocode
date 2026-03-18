/*
 * XREFs of MiMapPagesToZero @ 0x140296210
 * Callers:
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiGetPagesToZero @ 0x14054A25C (MiGetPagesToZero.c)
 * Callees:
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiRemoveFaultNode @ 0x140317F9C (MiRemoveFaultNode.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapPagesToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v14; // ebx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // r10
  int v23; // eax
  char v24; // cl
  unsigned int v25; // r14d
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int64 LeafVa; // rbp
  int v30; // eax
  int v31; // eax
  unsigned int v32; // ebp
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // edx
  unsigned __int64 UltraMapping; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+88h] [rbp+10h]

  v4 = a1;
  if ( a3 >= 3 )
  {
    v6 = 1LL;
  }
  else
  {
    _mm_lfence();
    v6 = MiLargePageSizes[a3];
  }
  v46 = v6;
  UltraMapping = MiGetUltraMapping(32LL * a3 + a1 + 88, a3, v6);
  SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
  v8 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 2LL;
  if ( a3 <= 1 )
  {
    v10 = 2 - a3;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v10;
    }
    while ( v10 );
  }
  v11 = a2 + 0x58000000000LL;
  v12 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = (unsigned int)CurrentIrql + 1;
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v12 = (-1LL << (CurrentIrql + 1)) & 4;
    v9 = (unsigned int)v12 | SchedulerAssist[5];
    SchedulerAssist[5] = v9;
  }
  v14 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v12, v9, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  if ( *(_BYTE *)(v4 + 69) == 1 )
  {
    MiRemoveFaultNode(v4, v12, v9);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    ++dword_140C2A250;
    return 0LL;
  }
  v21 = *(unsigned __int8 *)(a2 + 34) >> 6;
  if ( v46 != 1 )
    goto LABEL_35;
  if ( (_DWORD)v21 && (_DWORD)v21 != 2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 0xC0) == 0xC0 )
      MiFinalizePageAttribute(a2, 1LL, 1LL);
    goto LABEL_35;
  }
  v22 = 0x140000000uLL;
  if ( dword_140C4DEDC[4 * v21] == 1 )
  {
    MiChangePageAttribute(a2, 1LL, 1LL);
LABEL_35:
    v22 = 0x140000000uLL;
  }
  v23 = 4;
  v24 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v24 )
  {
    v12 = 28LL;
    if ( v24 == 2 )
      v23 = 28;
  }
  else
  {
    v23 = 12;
  }
  v25 = v23 | 0xA0000000;
  if ( a3 <= 1 )
    v25 = v23 | 0xA4000000;
  v26 = ((((a2 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25 & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
  v27 = 0x8000000000000000uLL;
  if ( v8 < 0xFFFFF68000000000uLL )
    goto LABEL_65;
  v28 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_65;
  LeafVa = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v26 = ((((a2 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25 & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v25 & 0x4000000) == 0 )
    {
      v26 = ((((a2 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v25 & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
    }
    v30 = MiUserPdeOrAbove(v8, v12, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL);
    v28 = 0xFFFFF6FFFFFFFFFFuLL;
    v22 = 0x140000000uLL;
    if ( v30 )
      v26 |= 4uLL;
  }
  v27 = v26;
  v26 |= 4uLL;
  if ( v8 > 0xFFFFF6BFFFFFFF78uLL )
    v26 = v27;
  if ( (v25 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa(LeafVa);
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    if ( *(_BYTE *)(((LeafVa >> 39) & 0x1FF) - 256 + v22 + 12908808) == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= v28 )
    {
      goto LABEL_66;
    }
    if ( LeafVa < qword_140C4FA78 || (v31 = HIBYTE(word_140C4DF48), LeafVa > qword_140C4E2A8) )
      v31 = (unsigned __int8)word_140C4DF48;
  }
  else
  {
    v31 = HIBYTE(word_140C4DF48);
  }
  if ( v31 )
LABEL_65:
    v26 |= 0x100uLL;
LABEL_66:
  v32 = a3;
  v33 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int8)word_140C4DF48 << 8)) & 0x100 | 0x42;
  v34 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int8)word_140C4DF48 << 8)) & 0x100 | 0xC2;
  if ( (v25 & 0x4000000) == 0 )
    v34 = v33;
  v35 = v34 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 <= 1 )
  {
    if ( MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow(v37, v36) )
      {
        if ( !HIBYTE(word_140C4DF48) )
          v35 |= 0x8000000000000000uLL;
        *(_QWORD *)v8 = v35;
        MiWritePteShadow(v8, v35);
        goto LABEL_92;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v35 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v8 = v35;
    goto LABEL_92;
  }
  v38 = 8 * v46 + v8;
  if ( v8 >= v38 )
    goto LABEL_91;
  do
  {
    v39 = v35;
    if ( v8 < 0xFFFFF6FB7DBED000uLL || v8 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_88;
    if ( !(unsigned int)MiPteHasShadow(v27, v35) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v35 & 1) != 0 )
      {
        v39 |= 0x8000000000000000uLL;
      }
LABEL_88:
      *(_QWORD *)v8 = v39;
      goto LABEL_89;
    }
    if ( !HIBYTE(word_140C4DF48) && (v35 & 1) != 0 )
      v39 |= 0x8000000000000000uLL;
    *(_QWORD *)v8 = v39;
    MiWritePteShadow(v8, v39);
LABEL_89:
    v27 = 0xFFFFFFFFF000LL;
    v8 += 8LL;
    v35 ^= (v35 ^ (v35 + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( v8 < v38 );
  v4 = a1;
  v32 = a3;
LABEL_91:
  v8 -= 8 * v46;
LABEL_92:
  *(_QWORD *)(v4 + 32) = v8;
  *(_QWORD *)(v4 + 40) = UltraMapping;
  *(_QWORD *)(v4 + 48) = UltraMapping + (v46 << 12) - 1;
  *(_DWORD *)(v4 + 64) = v32;
  *(_QWORD *)(v4 + 72) = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
