/*
 * XREFs of MiGetUltraMapping @ 0x1402C6260
 * Callers:
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiDeleteUltraMapContext @ 0x1402682BC (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiZeroWithUltraSpace @ 0x14026C4CC (MiZeroWithUltraSpace.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiMapPagesToZero @ 0x1402C5D00 (MiMapPagesToZero.c)
 *     MiMakeProtoTransition @ 0x1402CBAF0 (MiMakeProtoTransition.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocateHyperSpace @ 0x1402E80DC (MiAllocateHyperSpace.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x1405B5BA0 (MiCombinePte.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // r11
  __int64 *v16; // r11
  __int64 v17; // rbp
  __int64 ValidPte; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 *v22; // rdi
  __int64 v23; // r13
  unsigned __int64 SetBitsAndClear; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // r14
  __int64 j; // r13
  __int64 v31; // rbx
  __int64 v32; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v34; // r9
  unsigned __int64 i; // r8
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r8
  int v47; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v49; // [rsp+70h] [rbp+8h]
  __int64 *v50; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v51; // [rsp+70h] [rbp+8h]

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_19;
    v10 = v4 & 0x1FFFFF;
    v11 = a3 << 12;
    if ( (a3 << 12) + v10 > 0x200000 )
    {
      v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      *a1 = v4;
    }
    else if ( v10 != 0 && (a4 & 2) == 0 )
    {
      *a1 = v11 + v4;
      return v4;
    }
    v13 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v49 = (_QWORD *)v13;
    if ( a2 <= 1 )
    {
      v32 = 2 - a2;
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v32;
      }
      while ( v32 );
      v49 = (_QWORD *)v13;
    }
    v14 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v14 = v38 | ZeroPte;
        *v49 = v14;
        MiWritePteShadow((__int64)v49, v14);
LABEL_10:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v16 = (__int64 *)(v15 + 8);
            v50 = v16;
            if ( ((unsigned __int16)v16 & 0xFFF) != 0 )
            {
              v17 = (__int64)((_QWORD)v16 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v16, a1[2], 3087007748LL);
              if ( (unsigned int)MiPteInShadowRange(v50) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v50 = ValidPte;
                  MiWritePteShadow((__int64)v50, ValidPte);
                  goto LABEL_15;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v50 = ValidPte;
LABEL_15:
              result = v17;
              *a1 = v11 + v17;
              return result;
            }
          }
          goto LABEL_19;
        }
        if ( a2 > 1 )
        {
          v19 = ZeroPte;
          v51 = (unsigned __int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (unsigned int)MiPteInShadowRange(v51) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                v19 = ZeroPte | 0x8000000000000000uLL;
              *v51 = v19;
              MiWritePteShadow((__int64)v51, v19);
              goto LABEL_19;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v19 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v51 = v19;
        }
LABEL_19:
        v4 -= v9;
        goto LABEL_20;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v14 = v38 | ZeroPte;
      }
    }
    v15 = (unsigned __int64)v49;
    *v49 = v14;
    goto LABEL_10;
  }
LABEL_20:
  KeAcquireInStackQueuedSpinLock(&qword_140C53080, &LockHandle);
  if ( !v4 )
    goto LABEL_24;
  v20 = (v4 - qword_140C53088) >> 30;
  v21 = ZeroPte;
  v22 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( (unsigned int)MiPteInShadowRange(v22) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
        v21 = ZeroPte | 0x8000000000000000uLL;
      *v22 = v21;
      MiWritePteShadow((__int64)v22, v21);
      goto LABEL_23;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v21 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v22 = v21;
LABEL_23:
  _bittestandset64((signed __int64 *)qword_140C530B0, v20);
LABEL_24:
  v23 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    *a1 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v43 = (v42 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v42;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx((unsigned __int64 *)&qword_140C53098, 1uLL, qword_140C53090);
      v25 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0LL, 2LL);
      v34 = 0LL;
      for ( i = (unsigned __int64)qword_140C53098 >> 6; v34 < i; *v36 |= v37 )
      {
        v36 = (_QWORD *)(qword_140C530A0 + 8 * v34);
        v37 = *((_QWORD *)qword_140C530B0 + v34++);
      }
      memset(qword_140C530B0, 0, 4 * (((qword_140C530A8 & 0x1F) != 0) + ((unsigned __int64)qword_140C530A8 >> 5)));
    }
    qword_140C53090 = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && LockHandle.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v43 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(v26);
    v27 = qword_140C53088 + (v25 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v27 + (a3 << 12);
    if ( a2 )
    {
      v28 = ((v27 >> 27) & 0x1FFFF8) - 0x90482600000LL;
      v29 = a1 + 1;
      LOBYTE(v23) = a2 != 1;
      for ( j = v23 + 1; j; --j )
      {
        v31 = MiMakeValidPte(v28, *v29, 3087007748LL);
        if ( (unsigned int)MiPteInShadowRange(v28) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (v31 & 1) != 0 )
              v31 |= 0x8000000000000000uLL;
            *(_QWORD *)v28 = v31;
            MiWritePteShadow(v28, v31);
            goto LABEL_33;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v31 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v28 = v31;
LABEL_33:
        ++v29;
        v28 = v28 << 25 >> 16;
      }
    }
    return v27;
  }
}
