/*
 * XREFs of MiInsertCachedPte @ 0x1402EA450
 * Callers:
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 * Callees:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiEmptyPteBins @ 0x140319FD0 (MiEmptyPteBins.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rbp
  int v7; // r11d
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  __int64 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // r12d
  volatile signed __int64 *v16; // r13
  unsigned __int64 v17; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  signed __int64 v21; // rdi
  int v22; // eax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  int v25; // ecx
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v37; // [rsp+28h] [rbp-60h]
  signed __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+40h] [rbp-48h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]
  int v43; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v36 = 0LL;
  if ( a3 >= 0x200 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v41 = v6;
  v7 = 0;
  v43 = 0;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v43 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v41 = v6;
    if ( a3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  if ( a3 != 1 )
  {
    v10 = (__int64 *)(a2 + 8);
    v11 = v3 << 32;
    if ( qword_140C4DF80 )
    {
      if ( (v11 & qword_140C4DF80) != 0 )
        v11 |= 0x10uLL;
      else
        v11 |= qword_140C4DF80;
    }
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v11 & 1) != 0 )
          v11 |= v12;
        *v10 = v11;
        MiWritePteShadow((__int64)v10, v11);
        goto LABEL_23;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v11 & 1) != 0 )
      {
        v11 |= v12;
      }
    }
    *v10 = v11;
LABEL_23:
    v9 = 0LL;
    goto LABEL_24;
  }
  v9 = 4096LL;
LABEL_24:
  v13 = *(_QWORD *)(a1 + 80);
  v39 = v9;
  if ( v7 )
    v13 += 72LL * (unsigned __int16)KeNumberNodes;
  v14 = v13 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v40 = v14;
  _InterlockedOr(v35, 0);
  v15 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0, 1u);
      _InterlockedOr(v35, 0);
      v15 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v14 = v40;
    v7 = v43;
  }
  v16 = (volatile signed __int64 *)(v14 + 8LL * (v15 & 7));
  if ( v7 )
  {
    v17 = v3 + *(int *)(v14 + 64);
    if ( v17 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1LL);
      return 0LL;
    }
    if ( v17 >= 0x40 )
    {
      MiEmptyPteBins(a1, 0LL);
      v7 = v43;
    }
  }
  v19 = 0LL;
  if ( qword_140C4DF80 )
    v19 = qword_140C4DF80;
  v20 = v9 | v19 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_38:
  v21 = *v16;
  v37 = *v16;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = v21;
      if ( (_DWORD)v21 != v15 )
      {
        if ( HIDWORD(v21) )
          break;
      }
      if ( v20 )
      {
        if ( qword_140C4DF80 )
        {
          if ( (v20 & 0x10) != 0 )
            LODWORD(v20) = v20 & 0xFFFFFFEF;
          else
            LODWORD(v20) = ~(_DWORD)qword_140C4DF80 & v20;
        }
      }
      else
      {
        LODWORD(v20) = 0;
      }
      v20 = ((unsigned __int64)HIDWORD(v37) << 32) | (unsigned int)v20;
      if ( qword_140C4DF80 )
      {
        if ( (qword_140C4DF80 & v20) != 0 )
          v20 |= 0x10uLL;
        else
          v20 |= qword_140C4DF80;
      }
      v32 = v20;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v20 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v32;
          MiWritePteShadow(a2, v32);
          goto LABEL_86;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v20 & 1) != 0 )
        {
          v32 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v32;
LABEL_86:
      LODWORD(v36) = v15;
      HIDWORD(v36) = (__int64)(a2 - v6) >> 3;
      v21 = _InterlockedCompareExchange64(v16, v36, v21);
      v37 = v21;
      if ( v21 == v38 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 64), a3);
        return 1LL;
      }
    }
    if ( !(_DWORD)v21 )
      goto LABEL_38;
    _InterlockedOr(v35, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v21) <= 2 )
    {
      if ( (v21 & 1) != 0 || (v22 = 0, (unsigned int)(KiTbFlushTimeStamp - v21) < 2) )
        v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    if ( v22 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v21 = _InterlockedCompareExchange64(v16, 0LL, v21);
    v37 = v21;
    if ( v21 == v38 )
    {
      if ( v7 )
      {
        v25 = MiReleaseLargePteMappings(a1, &v38, 0LL);
      }
      else
      {
        v26 = MiReplenishBitMap(a1, HIDWORD(v38), 0);
        v25 = v26;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v26);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 64), -v25);
      v21 = 0LL;
      v37 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v6 = v41;
    v7 = v43;
  }
  HIDWORD(v36) = (__int64)(a2 - v6) >> 3;
  v33 = v39 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !(unsigned int)MiPteInShadowRange(a2) )
  {
LABEL_97:
    *(_QWORD *)a2 = v33;
    goto LABEL_98;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v33 & 1) != 0 )
      v33 |= 0x8000000000000000uLL;
    goto LABEL_97;
  }
  if ( !HIBYTE(word_140C4E048) && (v33 & 1) != 0 )
    v33 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v33;
  MiWritePteShadow(a2, v33);
LABEL_98:
  if ( v43 )
  {
    LODWORD(v34) = MiReleaseLargePteMappings(a1, &v36, 0LL);
  }
  else
  {
    v34 = MiReplenishBitMap(a1, HIDWORD(v36), 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v34);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 64), -(int)v34);
  return 1LL;
}
