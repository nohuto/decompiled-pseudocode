/*
 * XREFs of MiInsertCachedPte @ 0x1402BBAD0
 * Callers:
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiEmptyPteBins @ 0x140269570 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x1402697F0 (MiReplenishBitMap.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // r8
  int v7; // esi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  int v11; // r13d
  volatile signed __int64 *v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  signed __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned int v18; // ecx
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 CurrentIrql; // r11
  unsigned __int64 v26; // rax
  int v27; // ecx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // al
  _DWORD *v31; // r9
  int v32; // eax
  bool v33; // zf
  signed __int32 v34[8]; // [rsp+0h] [rbp-88h] BYREF
  volatile signed __int64 v35; // [rsp+20h] [rbp-68h]
  struct _KPRCB *CurrentPrcb; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-58h]
  volatile signed __int64 *v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  int v42; // [rsp+A0h] [rbp+18h]
  signed __int64 v43; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  CurrentPrcb = 0LL;
  v43 = 0LL;
  v5 = a1;
  if ( a3 >= 0x200 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v37 = v6;
  v7 = 0;
  v42 = 0;
  v8 = a2 << 25 >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v42 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v37 = v6;
    if ( (unsigned int)v3 > (4096 - (unsigned int)(a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v6 )
    return 0LL;
  if ( (_DWORD)v3 == 1 )
  {
    v39 = 4096LL;
    goto LABEL_6;
  }
  v20 = v3 << 32;
  if ( qword_140C50780 )
  {
    if ( (v20 & qword_140C50780) != 0 )
      v20 |= 0x10uLL;
    else
      v20 |= qword_140C50780;
  }
  if ( (unsigned int)MiPteInShadowRange(a2 + 8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) && (v20 & 1) != 0 )
        v20 |= 0x8000000000000000uLL;
      *(_QWORD *)(a2 + 8) = v20;
      MiWritePteShadow(a2 + 8, v20);
      goto LABEL_36;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v20 & 1) != 0 )
      v20 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)(a2 + 8) = v20;
LABEL_36:
  v39 = 0LL;
LABEL_6:
  v9 = *(_QWORD *)(v5 + 72);
  if ( v7 )
    v9 += 72LL * (unsigned __int16)KeNumberNodes;
  v10 = v9 + 72LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  while ( 1 )
  {
    _InterlockedOr(v34, 0);
    v11 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0LL, 1LL);
  }
  v12 = (volatile signed __int64 *)(v10 + 8LL * (KiTbFlushTimeStamp & 7));
  v38 = v12;
  if ( v7 )
  {
    v29 = v3 + *(int *)(v10 + 64);
    if ( v29 < 0x80 )
    {
      if ( v29 >= 0x40 )
      {
        MiEmptyPteBins(v5, 0);
        v12 = v38;
      }
      goto LABEL_11;
    }
    MiEmptyPteBins(v5, 1);
    return 0LL;
  }
LABEL_11:
  v13 = 0LL;
  if ( qword_140C50780 )
    v13 = qword_140C50780;
  v14 = v37;
  v15 = v39 | v13 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_14:
  v16 = *v12;
  v35 = *v12;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentPrcb = (struct _KPRCB *)v16;
      if ( (_DWORD)v16 != v11 )
      {
        if ( HIDWORD(v16) )
          break;
      }
      if ( v15 )
      {
        if ( qword_140C50780 )
        {
          if ( (v15 & 0x10) != 0 )
            LODWORD(v15) = v15 & 0xFFFFFFEF;
          else
            LODWORD(v15) = ~(_DWORD)qword_140C50780 & v15;
        }
      }
      else
      {
        LODWORD(v15) = 0;
      }
      v15 = ((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v15;
      if ( qword_140C50780 )
      {
        if ( (qword_140C50780 & v15) != 0 )
          v15 |= 0x10uLL;
        else
          v15 |= qword_140C50780;
      }
      v17 = v15;
      if ( !(unsigned int)MiPteInShadowRange(a2) )
        goto LABEL_24;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v17 = v15 | 0x8000000000000000uLL;
        }
LABEL_24:
        *(_QWORD *)a2 = v17;
        goto LABEL_25;
      }
      if ( !HIBYTE(word_140C51864) && (v15 & 1) != 0 )
        v17 = v15 | 0x8000000000000000uLL;
      *(_QWORD *)a2 = v17;
      MiWritePteShadow(a2, v17);
LABEL_25:
      v14 = v37;
      v12 = v38;
      HIDWORD(v43) = (__int64)(a2 - v37) >> 3;
      LODWORD(v43) = v11;
      v16 = _InterlockedCompareExchange64(v38, v43, v16);
      v35 = v16;
      if ( (struct _KPRCB *)v16 == CurrentPrcb )
      {
        v18 = v3;
        goto LABEL_27;
      }
      v5 = a1;
    }
    if ( !(_DWORD)v16 )
      goto LABEL_14;
    _InterlockedOr(v34, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v16) <= 2
      && ((v16 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v16) < 2) )
    {
      break;
    }
    CurrentIrql = KeGetCurrentIrql();
    v40 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    v16 = _InterlockedCompareExchange64(v12, 0LL, v16);
    v35 = v16;
    if ( (struct _KPRCB *)v16 == CurrentPrcb )
    {
      if ( v42 )
      {
        v27 = MiReleaseLargePteMappings(v5, &CurrentPrcb, 0LL);
      }
      else
      {
        v26 = MiReplenishBitMap(v5, HIDWORD(CurrentPrcb), 0);
        v27 = v26;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), v26);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), -v27);
      v12 = v38;
      v16 = 0LL;
      LOBYTE(CurrentIrql) = v40;
      v35 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v9 = -1LL << ((unsigned __int8)CurrentIrql + 1);
          v32 = ~(unsigned __int16)v9;
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v12 = v38;
            LOBYTE(CurrentIrql) = v40;
          }
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v14 = v37;
  }
  HIDWORD(v43) = (__int64)(a2 - v14) >> 3;
  v21 = MiSwizzleInvalidPte(0LL, v9);
  v22 = v39 | v21 & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !(unsigned int)MiPteInShadowRange(a2) )
    goto LABEL_43;
  if ( (unsigned int)MiPteHasShadow() )
  {
    if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
      v22 |= 0x8000000000000000uLL;
    *(_QWORD *)a2 = v22;
    MiWritePteShadow(a2, v22);
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v22 & 1) != 0 )
      v22 |= 0x8000000000000000uLL;
LABEL_43:
    *(_QWORD *)a2 = v22;
  }
  if ( v42 )
  {
    v24 = MiReleaseLargePteMappings(v5, &v43, 0LL);
  }
  else
  {
    v23 = MiReplenishBitMap(v5, HIDWORD(v43), 0);
    v24 = v23;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), v23);
  }
  v18 = -v24;
LABEL_27:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), v18);
  return 1LL;
}
