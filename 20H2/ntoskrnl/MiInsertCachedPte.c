/*
 * XREFs of MiInsertCachedPte @ 0x140294850
 * Callers:
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiEmptyPteBins @ 0x14023E170 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // rbp
  int v9; // r11d
  unsigned __int64 v10; // rcx
  unsigned __int64 SchedulerAssist; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r10
  int v16; // r12d
  volatile signed __int64 *v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  signed __int64 v21; // rdi
  int v22; // eax
  unsigned __int8 CurrentIrql; // bp
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v28; // eax
  bool v29; // zf
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v40; // [rsp+28h] [rbp-60h]
  signed __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  unsigned int v45; // [rsp+A0h] [rbp+18h]
  int v46; // [rsp+A8h] [rbp+20h]

  v45 = a3;
  v3 = (unsigned int)a3;
  v39 = 0LL;
  if ( (unsigned int)MiIsPteCachingOptimizationEnabled(a1, a2, a3) )
  {
    if ( (unsigned int)v3 >= 0x200 )
      return 0LL;
  }
  else if ( (unsigned int)v3 > 0x40 )
  {
    return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v44 = v8;
  v9 = 0;
  v46 = 0;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 1;
    v46 = 1;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v44 = v8;
    if ( (unsigned int)v3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v8 )
    return 0LL;
  SchedulerAssist = 0x8000000000000000uLL;
  if ( (_DWORD)v3 != 1 )
  {
    v6 = a2 + 8;
    v13 = v3 << 32;
    if ( qword_140C4DDC0 )
    {
      if ( (v13 & qword_140C4DDC0) != 0 )
        v13 |= 0x10uLL;
      else
        v13 |= qword_140C4DDC0;
    }
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(qword_140C4DDC0, v13, v6, 0x8000000000000000uLL) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v13 & 1) != 0 )
          v13 |= SchedulerAssist;
        *(_QWORD *)v6 = v13;
        MiWritePteShadow(v6, v13);
        goto LABEL_26;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v13 & 1) != 0 )
      {
        v13 |= SchedulerAssist;
      }
    }
    *(_QWORD *)v6 = v13;
LABEL_26:
    v12 = 0LL;
    goto LABEL_27;
  }
  v12 = 4096LL;
LABEL_27:
  v14 = *(_QWORD *)(a1 + 80);
  v42 = v12;
  if ( v9 )
    v14 += 72LL * (unsigned __int16)KeNumberNodes;
  v15 = v14 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v43 = v15;
  _InterlockedOr(v38, 0);
  v16 = KiTbFlushTimeStamp;
  if ( !KiTbFlushTimeStamp )
  {
    do
    {
      KeFlushTb(0LL, 1LL, v6, SchedulerAssist, v39);
      _InterlockedOr(v38, 0);
      v16 = KiTbFlushTimeStamp;
    }
    while ( !KiTbFlushTimeStamp );
    v15 = v43;
    v9 = v46;
  }
  v17 = (volatile signed __int64 *)(v15 + 8LL * (v16 & 7));
  if ( v9 )
  {
    v18 = v3 + *(int *)(v15 + 64);
    if ( v18 >= 0x80 )
    {
      MiEmptyPteBins(a1, 1);
      return 0LL;
    }
    if ( v18 >= 0x40 )
    {
      MiEmptyPteBins(a1, 0);
      v9 = v46;
    }
  }
  v19 = 0LL;
  if ( qword_140C4DDC0 )
    v19 = qword_140C4DDC0;
  v20 = v12 | v19 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_40:
  v21 = *v17;
  v40 = *v17;
  while ( 1 )
  {
    while ( 1 )
    {
      v41 = v21;
      if ( (_DWORD)v21 != v16 )
      {
        if ( HIDWORD(v21) )
          break;
      }
      if ( v20 )
      {
        if ( qword_140C4DDC0 )
        {
          if ( (v20 & 0x10) != 0 )
            LODWORD(v20) = v20 & 0xFFFFFFEF;
          else
            LODWORD(v20) = ~(_DWORD)qword_140C4DDC0 & v20;
        }
      }
      else
      {
        LODWORD(v20) = 0;
      }
      v30 = (unsigned __int64)HIDWORD(v40) << 32;
      v20 = v30 | (unsigned int)v20;
      if ( qword_140C4DDC0 )
      {
        if ( (qword_140C4DDC0 & v20) != 0 )
          v20 |= 0x10uLL;
        else
          v20 |= qword_140C4DDC0;
      }
      v31 = v20;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v30, v20, v6, SchedulerAssist) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v20 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v31;
          MiWritePteShadow(a2, v31);
          goto LABEL_88;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v20 & 1) != 0 )
        {
          v31 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v31;
LABEL_88:
      LODWORD(v39) = v16;
      HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
      v21 = _InterlockedCompareExchange64(v17, v39, v21);
      v40 = v21;
      if ( v21 == v41 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), v45);
        return 1LL;
      }
    }
    if ( !(_DWORD)v21 )
      goto LABEL_40;
    _InterlockedOr(v38, 0);
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
      SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      v6 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = v6;
    }
    v21 = _InterlockedCompareExchange64(v17, 0LL, v21);
    v40 = v21;
    if ( v21 == v41 )
    {
      if ( v9 )
      {
        v24 = MiReleaseLargePteMappings(a1, &v41);
      }
      else
      {
        v25 = MiReplenishBitMap(a1, HIDWORD(v41), 0);
        v24 = v25;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v25);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), -v24);
      v21 = 0LL;
      v40 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          v6 = (unsigned int)v28 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v6;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v8 = v44;
    v9 = v46;
  }
  HIDWORD(v39) = (__int64)(a2 - v8) >> 3;
  v32 = v42 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !MiPteInShadowRange(a2) )
  {
LABEL_99:
    *(_QWORD *)a2 = v32;
    goto LABEL_100;
  }
  if ( !(unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
    goto LABEL_99;
  }
  if ( !HIBYTE(word_140C4DE88) && (v32 & 1) != 0 )
    v32 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v32;
  MiWritePteShadow(a2, v32);
LABEL_100:
  if ( v46 )
  {
    LODWORD(v37) = MiReleaseLargePteMappings(a1, &v39);
  }
  else
  {
    v37 = MiReplenishBitMap(a1, HIDWORD(v39), 0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v37);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 64), -(int)v37);
  return 1LL;
}
