/*
 * XREFs of MiInsertCachedPte @ 0x140284AB0
 * Callers:
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 * Callees:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiEmptyPteBins @ 0x14027C980 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x14027CB50 (MiReplenishBitMap.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // r8
  int v7; // esi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // r13d
  volatile signed __int64 *v13; // r10
  __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbx
  signed __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 CurrentIrql; // r11
  ULONG_PTR v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  ULONG_PTR v37; // rax
  int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // al
  int v41; // eax
  bool v42; // zf
  signed __int32 v43[8]; // [rsp+0h] [rbp-98h] BYREF
  volatile signed __int64 v44; // [rsp+20h] [rbp-78h]
  signed __int64 v45; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-68h]
  volatile signed __int64 *v47; // [rsp+38h] [rbp-60h]
  __int64 v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-48h]
  int v52; // [rsp+B0h] [rbp+18h]
  signed __int64 v53; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v45 = 0LL;
  v53 = 0LL;
  v5 = a1;
  if ( a3 > 0x40 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v46 = v6;
  v7 = 0;
  v52 = 0;
  SchedulerAssist = (_DWORD *)0xFFFFF68000000000LL;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v52 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v46 = v6;
    if ( (unsigned int)v3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  if ( (_DWORD)v3 == 1 )
  {
    v48 = 4096LL;
    goto LABEL_6;
  }
  v23 = v3 << 32;
  if ( qword_140C4DD40 )
  {
    if ( (v23 & qword_140C4DD40) != 0 )
      v23 |= 0x10uLL;
    else
      v23 |= qword_140C4DD40;
  }
  if ( MiPteInShadowRange(a2 + 8) )
  {
    if ( (unsigned int)MiPteHasShadow(v25, v24, v26, SchedulerAssist) )
    {
      if ( !HIBYTE(word_140C4DE08) && (v23 & 1) != 0 )
        v23 |= 0x8000000000000000uLL;
      *(_QWORD *)(a2 + 8) = v23;
      MiWritePteShadow(a2 + 8, v23);
      goto LABEL_36;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v23 & 1) != 0 )
      v23 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)(a2 + 8) = v23;
LABEL_36:
  v48 = 0LL;
LABEL_6:
  v10 = *(_QWORD *)(v5 + 80);
  if ( v7 )
    v10 += 72LL * (unsigned __int16)KeNumberNodes;
  v11 = v10 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  while ( 1 )
  {
    _InterlockedOr(v43, 0);
    v12 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0, 1u);
  }
  v13 = (volatile signed __int64 *)(v11 + 8LL * (KiTbFlushTimeStamp & 7));
  v47 = v13;
  if ( v7 )
  {
    v39 = v3 + *(int *)(v11 + 64);
    if ( v39 < 0x80 )
    {
      if ( v39 >= 0x40 )
      {
        MiEmptyPteBins(v5, 0);
        v13 = v47;
      }
      goto LABEL_11;
    }
    MiEmptyPteBins(v5, 1);
    return 0LL;
  }
LABEL_11:
  v14 = 0LL;
  if ( qword_140C4DD40 )
    v14 = qword_140C4DD40;
  v15 = v46;
  v16 = v48 | v14 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_14:
  v17 = *v13;
  v44 = *v13;
  while ( 1 )
  {
    while ( 1 )
    {
      v45 = v17;
      if ( (_DWORD)v17 != v12 )
      {
        if ( HIDWORD(v17) )
          break;
      }
      if ( v16 )
      {
        if ( qword_140C4DD40 )
        {
          if ( (v16 & 0x10) != 0 )
            LODWORD(v16) = v16 & 0xFFFFFFEF;
          else
            LODWORD(v16) = ~(_DWORD)qword_140C4DD40 & v16;
        }
      }
      else
      {
        LODWORD(v16) = 0;
      }
      v16 = ((unsigned __int64)HIDWORD(v44) << 32) | (unsigned int)v16;
      if ( qword_140C4DD40 )
      {
        if ( (qword_140C4DD40 & v16) != 0 )
          v16 |= 0x10uLL;
        else
          v16 |= qword_140C4DD40;
      }
      v18 = v16;
      if ( !MiPteInShadowRange(a2) )
        goto LABEL_24;
      if ( !(unsigned int)MiPteHasShadow(v19, v10, v20, SchedulerAssist) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v16 & 1) != 0 )
        {
          v18 = v16 | 0x8000000000000000uLL;
        }
LABEL_24:
        *(_QWORD *)a2 = v18;
        goto LABEL_25;
      }
      if ( !HIBYTE(word_140C4DE08) && (v16 & 1) != 0 )
        v18 = v16 | 0x8000000000000000uLL;
      *(_QWORD *)a2 = v18;
      MiWritePteShadow(a2, v18);
LABEL_25:
      v15 = v46;
      v13 = v47;
      HIDWORD(v53) = (__int64)(a2 - v46) >> 3;
      LODWORD(v53) = v12;
      v17 = _InterlockedCompareExchange64(v47, v53, v17);
      v44 = v17;
      if ( v17 == v45 )
      {
        v21 = v3;
        goto LABEL_27;
      }
      v5 = a1;
    }
    if ( !(_DWORD)v17 )
      goto LABEL_14;
    _InterlockedOr(v43, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v17) <= 2 )
    {
      if ( (v17 & 1) != 0 || (v27 = 0, (unsigned int)(KiTbFlushTimeStamp - v17) < 2) )
        v27 = 1;
    }
    else
    {
      v27 = 0;
    }
    if ( v27 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    v49 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v10 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v10;
    }
    v17 = _InterlockedCompareExchange64(v13, 0LL, v17);
    v44 = v17;
    if ( v17 == v45 )
    {
      if ( v52 )
      {
        v30 = MiReleaseLargePteMappings(v5, &v45);
      }
      else
      {
        v29 = MiReplenishBitMap((unsigned __int64 *)v5, HIDWORD(v45), 0);
        v30 = v29;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), v29);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), -v30);
      v13 = v47;
      v17 = 0LL;
      LOBYTE(CurrentIrql) = v49;
      v44 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v40 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = -1LL << ((unsigned __int8)CurrentIrql + 1);
          v41 = ~(unsigned __int16)v10;
          v42 = (v41 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v41;
          if ( v42 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v13 = v47;
            LOBYTE(CurrentIrql) = v49;
          }
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v15 = v46;
  }
  HIDWORD(v53) = (__int64)(a2 - v15) >> 3;
  v31 = MiSwizzleInvalidPte(0LL, v10, v15, SchedulerAssist);
  v32 = v48 | v31 & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_56;
  if ( (unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
  {
    if ( !HIBYTE(word_140C4DE08) && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
    *(_QWORD *)a2 = v32;
    MiWritePteShadow(a2, v32);
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
LABEL_56:
    *(_QWORD *)a2 = v32;
  }
  if ( v52 )
  {
    v38 = MiReleaseLargePteMappings(v5, &v53);
  }
  else
  {
    v37 = MiReplenishBitMap((unsigned __int64 *)v5, HIDWORD(v53), 0);
    v38 = v37;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), v37);
  }
  v21 = -v38;
LABEL_27:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), v21);
  return 1LL;
}
