/*
 * XREFs of MiMapPagesToZero @ 0x1402C5D00
 * Callers:
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     MiRemoveFaultNode @ 0x14025CE80 (MiRemoveFaultNode.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapPagesToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 CurrentIrql; // rbp
  int v10; // ecx
  unsigned __int64 v11; // r10
  int v12; // ecx
  char v13; // al
  int v14; // ebp
  int v15; // ebp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 LeafVa; // rdi
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // edx
  unsigned __int64 UltraMapping; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+90h] [rbp+18h] BYREF
  __int64 v44; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = a1;
  if ( a3 < 3 )
  {
    _mm_lfence();
    v7 = MiLargePageSizes[a3];
  }
  else
  {
    v7 = 1LL;
  }
  UltraMapping = MiGetUltraMapping(32LL * a3 + a1 + 88, a3, v7, 0LL);
  v8 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 1 )
  {
    v29 = 2 - a3;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v29;
    }
    while ( v29 );
  }
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v43);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( *(_BYTE *)(v6 + 70) )
  {
    MiRemoveFaultNode(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v31 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v35 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    ++dword_140C29730;
    return 0LL;
  }
  v10 = *(unsigned __int8 *)(v4 + 34) >> 6;
  if ( v7 == 1 )
  {
    if ( !v10 || v10 == 2 )
    {
      v11 = 0x140000000uLL;
      if ( dword_140C507DC[4 * v10] != 1 )
        goto LABEL_13;
      MiChangePageAttribute(v4, 1u, 1);
    }
    else if ( (*(_BYTE *)(v4 + 34) & 0xC0) == 0xC0 )
    {
      MiFinalizePageAttribute(v4, 1LL, 1LL);
    }
  }
  v11 = 0x140000000uLL;
LABEL_13:
  v12 = 4;
  v13 = *(_BYTE *)(v4 + 34) >> 6;
  if ( v13 )
  {
    if ( v13 == 2 )
      v12 = 28;
  }
  else
  {
    v12 = 12;
  }
  v14 = -1543503872;
  if ( a3 > 1 )
    v14 = -1610612736;
  v15 = v12 | v14;
  v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v15 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL )
    goto LABEL_79;
  v17 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_79;
  LeafVa = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v15 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v15 & 0x4000000) == 0 )
    {
      v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v15 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    }
    v30 = MiUserPdeOrAbove(v8);
    v11 = 0x140000000uLL;
    v17 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v30 )
      v16 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v16 |= 4uLL;
  if ( (v15 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa(LeafVa);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v19 = HIBYTE(word_140C51864);
  }
  else
  {
    if ( *(_BYTE *)(((LeafVa >> 39) & 0x1FF) - 256 + v11 + 12926800) == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= v17 )
    {
      goto LABEL_33;
    }
    v19 = LeafVa < qword_140C540C0 || LeafVa > qword_140C51BF0
        ? (unsigned __int8)word_140C51864
        : HIBYTE(word_140C51864);
  }
  if ( v19 )
LABEL_79:
    v16 |= 0x100uLL;
LABEL_33:
  if ( v15 < 0 )
    v16 |= 0x42uLL;
  v20 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100;
  v21 = v20 | 0x80;
  if ( (v15 & 0x4000000) == 0 )
    v21 = v20;
  v22 = v21 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 <= 1 )
  {
    if ( (unsigned int)MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        *(_QWORD *)v8 = v22;
        MiWritePteShadow(v8, v22);
        goto LABEL_45;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v22 & 1) != 0 )
      {
        v22 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v8 = v22;
    goto LABEL_45;
  }
  v23 = 8 * v7;
  if ( v8 >= v8 + 8 * v7 )
    goto LABEL_44;
  v24 = v8 + 8 * v7;
  do
  {
    v25 = v22;
    if ( !(unsigned int)MiPteInShadowRange(v8) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v22 & 1) != 0 )
      {
        v25 = v22 | 0x8000000000000000uLL;
      }
LABEL_41:
      *(_QWORD *)v8 = v25;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
      v25 = v22 | 0x8000000000000000uLL;
    *(_QWORD *)v8 = v25;
    MiWritePteShadow(v8, v25);
LABEL_42:
    v8 += 8LL;
    v22 ^= (v22 ^ (v22 + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( v8 < v24 );
  v4 = a2;
  v23 = 8 * v7;
  v6 = a1;
LABEL_44:
  v8 -= v23;
LABEL_45:
  *(_QWORD *)(v6 + 40) = UltraMapping;
  *(_QWORD *)(v6 + 32) = v8;
  *(_QWORD *)(v6 + 48) = (v7 << 12) + UltraMapping - 1;
  *(_DWORD *)(v6 + 64) = a3;
  *(_QWORD *)(v6 + 80) = v4;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = v44;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
        v35 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v26);
  return 1LL;
}
