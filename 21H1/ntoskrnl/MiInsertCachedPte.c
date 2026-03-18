/*
 * XREFs of MiInsertCachedPte @ 0x1402482D0
 * Callers:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140203670 (MiEmptyPteBins.c)
 *     MiReplenishBitMap @ 0x140203840 (MiReplenishBitMap.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned int a3)
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
  __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 CurrentIrql; // r11
  ULONG_PTR v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG_PTR v32; // rax
  int v33; // ecx
  unsigned __int64 v34; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v36; // al
  _DWORD *v37; // r9
  int v38; // eax
  bool v39; // zf
  signed __int32 v40[8]; // [rsp+0h] [rbp-98h] BYREF
  volatile signed __int64 v41; // [rsp+20h] [rbp-78h]
  signed __int64 v42; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+30h] [rbp-68h]
  volatile signed __int64 *v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-48h]
  int v49; // [rsp+B0h] [rbp+18h]
  signed __int64 v50; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v42 = 0LL;
  v50 = 0LL;
  v5 = a1;
  if ( a3 > 0x40 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v43 = v6;
  v7 = 0;
  v49 = 0;
  v8 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = 1;
    v49 = 1;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = v6;
    if ( (unsigned int)v3 > (4096 - ((unsigned __int16)a2 & 0xFFFu)) >> 3 )
      return 0LL;
  }
  if ( a2 == (unsigned __int64 *)v6 )
    return 0LL;
  if ( (_DWORD)v3 == 1 )
  {
    v45 = 4096LL;
    goto LABEL_6;
  }
  v21 = v3 << 32;
  if ( qword_140C4DE80 )
  {
    if ( (v21 & qword_140C4DE80) != 0 )
      v21 |= 0x10uLL;
    else
      v21 |= qword_140C4DE80;
  }
  if ( (unsigned int)MiPteInShadowRange(a2 + 1, 0LL) )
  {
    if ( (unsigned int)MiPteHasShadow(v23, v22) )
    {
      if ( !HIBYTE(word_140C4DF48) && (v21 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
      a2[1] = v21;
      MiWritePteShadow(a2 + 1, v21);
      goto LABEL_36;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v21 & 1) != 0 )
      v21 |= 0x8000000000000000uLL;
  }
  a2[1] = v21;
LABEL_36:
  v45 = 0LL;
LABEL_6:
  v9 = *(_QWORD *)(v5 + 80);
  if ( v7 )
    v9 += 72LL * (unsigned __int16)KeNumberNodes;
  v10 = v9 + 72LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  while ( 1 )
  {
    _InterlockedOr(v40, 0);
    v11 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0LL, 1LL);
  }
  v12 = (volatile signed __int64 *)(v10 + 8LL * (KiTbFlushTimeStamp & 7));
  v44 = v12;
  if ( v7 )
  {
    v34 = v3 + *(int *)(v10 + 64);
    if ( v34 < 0x80 )
    {
      if ( v34 >= 0x40 )
      {
        MiEmptyPteBins(v5, 0);
        v12 = v44;
      }
      goto LABEL_11;
    }
    MiEmptyPteBins(v5, 1);
    return 0LL;
  }
LABEL_11:
  v13 = 0LL;
  if ( qword_140C4DE80 )
    v13 = qword_140C4DE80;
  v14 = v43;
  v15 = v45 | v13 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_14:
  v16 = *v12;
  v41 = *v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v42 = v16;
      if ( (_DWORD)v16 != v11 )
      {
        if ( HIDWORD(v16) )
          break;
      }
      if ( v15 )
      {
        if ( qword_140C4DE80 )
        {
          if ( (v15 & 0x10) != 0 )
            LODWORD(v15) = v15 & 0xFFFFFFEF;
          else
            LODWORD(v15) = ~(_DWORD)qword_140C4DE80 & v15;
        }
      }
      else
      {
        LODWORD(v15) = 0;
      }
      v15 = ((unsigned __int64)HIDWORD(v41) << 32) | (unsigned int)v15;
      if ( qword_140C4DE80 )
      {
        if ( (qword_140C4DE80 & v15) != 0 )
          v15 |= 0x10uLL;
        else
          v15 |= qword_140C4DE80;
      }
      v17 = v15;
      if ( !(unsigned int)MiPteInShadowRange(a2, v9) )
        goto LABEL_24;
      if ( !(unsigned int)MiPteHasShadow(v18, v9) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v17 = v15 | 0x8000000000000000uLL;
        }
LABEL_24:
        *a2 = v17;
        goto LABEL_25;
      }
      if ( !HIBYTE(word_140C4DF48) && (v15 & 1) != 0 )
        v17 = v15 | 0x8000000000000000uLL;
      *a2 = v17;
      MiWritePteShadow(a2, v17);
LABEL_25:
      v14 = v43;
      v12 = v44;
      HIDWORD(v50) = (__int64)((__int64)a2 - v43) >> 3;
      LODWORD(v50) = v11;
      v16 = _InterlockedCompareExchange64(v44, v50, v16);
      v41 = v16;
      if ( v16 == v42 )
      {
        v19 = v3;
        goto LABEL_27;
      }
      v5 = a1;
    }
    if ( !(_DWORD)v16 )
      goto LABEL_14;
    _InterlockedOr(v40, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v16) <= 2 )
    {
      if ( (v16 & 1) != 0 || (v24 = 0, (unsigned int)(KiTbFlushTimeStamp - v16) < 2) )
        v24 = 1;
    }
    else
    {
      v24 = 0;
    }
    if ( v24 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    v46 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    v16 = _InterlockedCompareExchange64(v12, 0LL, v16);
    v41 = v16;
    if ( v16 == v42 )
    {
      if ( v49 )
      {
        v27 = MiReleaseLargePteMappings(v5, &v42);
      }
      else
      {
        v26 = MiReplenishBitMap((unsigned __int64 *)v5, HIDWORD(v42), 0);
        v27 = v26;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), v26);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), -v27);
      v12 = v44;
      v16 = 0LL;
      LOBYTE(CurrentIrql) = v46;
      v41 = 0LL;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v36 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = CurrentPrcb->SchedulerAssist;
          v9 = -1LL << ((unsigned __int8)CurrentIrql + 1);
          v38 = ~(unsigned __int16)v9;
          v39 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v39 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v12 = v44;
            LOBYTE(CurrentIrql) = v46;
          }
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v14 = v43;
  }
  HIDWORD(v50) = (__int64)((__int64)a2 - v14) >> 3;
  v28 = v45 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !(unsigned int)MiPteInShadowRange(a2, v29) )
    goto LABEL_56;
  if ( (unsigned int)MiPteHasShadow(v31, v30) )
  {
    if ( !HIBYTE(word_140C4DF48) && (v28 & 1) != 0 )
      v28 |= 0x8000000000000000uLL;
    *a2 = v28;
    MiWritePteShadow(a2, v28);
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v28 & 1) != 0 )
      v28 |= 0x8000000000000000uLL;
LABEL_56:
    *a2 = v28;
  }
  if ( v49 )
  {
    v33 = MiReleaseLargePteMappings(v5, &v50);
  }
  else
  {
    v32 = MiReplenishBitMap((unsigned __int64 *)v5, HIDWORD(v50), 0);
    v33 = v32;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), v32);
  }
  v19 = -v33;
LABEL_27:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), v19);
  return 1LL;
}
