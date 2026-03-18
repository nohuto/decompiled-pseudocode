/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14023F530
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14031D940 (MiGetPerfectColorHeadPage.c)
 *     MiPurgeZeroList @ 0x140381E8C (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 *     MiPageListCollision @ 0x14031869C (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR BugCheckParameter2, _QWORD *a2, __int16 a3)
{
  ULONG_PTR v4; // r12
  int v5; // esi
  ULONG_PTR v6; // rdx
  char *v7; // rcx
  int v8; // r9d
  int v9; // r8d
  int v10; // eax
  int v11; // ebx
  int v12; // r13d
  _QWORD *v13; // r11
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // edx
  __int64 v17; // r9
  char *v18; // rax
  int v19; // r8d
  int v20; // ecx
  int v21; // ebx
  volatile __int64 *v22; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v25; // eax
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  ULONG_PTR v28; // r10
  volatile signed __int32 *v29; // r8
  unsigned int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r9
  signed __int64 v34; // rdx
  signed __int64 v35; // r8
  signed __int64 v36; // rcx
  __int64 v37; // r11
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r11
  signed __int64 v41; // rdx
  signed __int64 v42; // r8
  signed __int64 v43; // rcx
  __int64 v44; // rax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // ebx
  int v52; // ecx
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  __int64 updated; // rcx
  unsigned int v56; // esi
  __int64 v58; // rax
  __int128 v59; // [rsp+38h] [rbp-50h] BYREF
  __int64 v60; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  char v62; // [rsp+90h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+20h]

  v60 = 0LL;
  v59 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = 0;
  v65 = *(_BYTE *)(v4 + 34) & 7;
  v6 = (__int64)(48 * BugCheckParameter2) / 48;
  if ( dword_140C4DC84 <= (unsigned int)dword_140C4DC88 )
  {
    v7 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84;
    if ( v6 >= *(_QWORD *)v7 && (dword_140C4DC84 == dword_140C4DC88 || v6 < *((_QWORD *)v7 + 2)) )
      goto LABEL_15;
  }
  v8 = 0;
  v9 = dword_140C4DC88;
  if ( dword_140C4DC88 < 0 )
LABEL_126:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v10 = (v8 + v9) >> 1;
    v7 = (char *)qword_140C4DCC8 + 16 * v10;
    if ( v6 < *(_QWORD *)v7 )
    {
      if ( !v10 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)v7, 0LL);
      v9 = v10 - 1;
      goto LABEL_12;
    }
    if ( v10 == dword_140C4DC88 || v6 < *((_QWORD *)v7 + 2) )
      break;
    v8 = v10 + 1;
LABEL_12:
    if ( v9 < v8 )
      goto LABEL_126;
  }
  dword_140C4DC84 = (v8 + v9) >> 1;
LABEL_15:
  v11 = *((_DWORD *)v7 + 2);
  if ( qword_140C4DCD0 )
    v12 = MiPageToChannel(v6);
  else
    v12 = 0;
  v13 = a2;
  v14 = dword_140C4DCF8 & (unsigned int)BugCheckParameter2 | (v11 << byte_140C4DC8C) | (v12 << byte_140C4DC8D);
  v15 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
  if ( a2 )
  {
    v21 = -1;
  }
  else
  {
    v16 = dword_140C4DC88;
    v17 = *(_QWORD *)(v15 + 8LL * v65 + 2176);
    if ( dword_140C4DC84 > (unsigned int)dword_140C4DC88
      || (v18 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84, BugCheckParameter2 < *(_QWORD *)v18)
      || dword_140C4DC84 != dword_140C4DC88 && BugCheckParameter2 >= *((_QWORD *)v18 + 2) )
    {
      v19 = 0;
      if ( dword_140C4DC88 < 0 )
LABEL_128:
        KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
      while ( 1 )
      {
        v20 = (v19 + v16) >> 1;
        v18 = (char *)qword_140C4DCC8 + 16 * v20;
        if ( BugCheckParameter2 >= *(_QWORD *)v18 )
        {
          if ( v20 == dword_140C4DC88 || BugCheckParameter2 < *((_QWORD *)v18 + 2) )
          {
            dword_140C4DC84 = (v19 + v16) >> 1;
            break;
          }
          v19 = v20 + 1;
        }
        else
        {
          if ( !v20 )
            KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DCC8, 0LL);
          v16 = v20 - 1;
        }
        if ( v16 < v19 )
          goto LABEL_128;
      }
    }
    v21 = *((_DWORD *)v18 + 2);
    *(_QWORD *)&v59 = 0LL;
    v13 = (_QWORD *)(v17 + 40 * v14);
    v22 = v13 + 4;
    a2 = v13;
    *((_QWORD *)&v59 + 1) = v13 + 4;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = SchedulerAssist[6];
        SchedulerAssist[6] = v25 + 1;
        if ( v25 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v13 = a2;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v59, v22);
      v13 = a2;
    }
    else if ( _InterlockedExchange64(v22, (__int64)&v59) )
    {
      KxWaitForLockOwnerShip(&v59);
      v13 = a2;
    }
  }
  v26 = v65;
  _InterlockedDecrement64(*(volatile signed __int64 **)(v15 + 8LL * v65 + 4216));
  if ( dword_140C4E4CC == 1 )
  {
    LOBYTE(v27) = 1;
    v28 = BugCheckParameter2 & 0x1F;
    v29 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (BugCheckParameter2 >> 5));
    if ( v28 + 1 <= 0x20 )
    {
      v30 = 1 << v28;
      goto LABEL_51;
    }
    if ( (BugCheckParameter2 & 0x1F) == 0 )
      goto LABEL_50;
    _InterlockedOr(v29++, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v28);
    v27 = 1LL - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    if ( v27 >= 0x20 )
    {
      v31 = v27 >> 5;
      v27 += -32LL * (v27 >> 5);
      do
      {
        *v29++ = -1;
        --v31;
      }
      while ( v31 );
    }
    if ( v27 )
    {
LABEL_50:
      v30 = (1 << v27) - 1;
LABEL_51:
      _InterlockedOr(v29, v30);
    }
    v26 = v65;
  }
  --*v13;
  if ( v13[2] == BugCheckParameter2 )
  {
    v32 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    v13[2] = v32;
    if ( v32 == 0xFFFFFFFFFLL )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v15 + 16)
                                              + 4544 * ((unsigned __int64)(unsigned int)v14 >> byte_140C4DC8C)
                                              + 16 * (v26 + 252)
                                              + 8)
                                  + 4 * ((unsigned __int64)((unsigned int)v14 & dword_140C4DCF8) >> 5)),
        ~(1 << (v14 & dword_140C4DCF8 & 0x1F)));
      v13[3] = 0xFFFFFFFFFLL;
    }
    else
    {
      v33 = 48 * v32 - 0x58000000000LL;
      v34 = *(_QWORD *)(v33 + 24);
      v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 24), v34 | 0xFFFFFFFFFLL, v34);
      if ( v34 != v35 )
      {
        do
        {
          v36 = v35;
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 24), v35 | 0xFFFFFFFFFLL, v35);
        }
        while ( v36 != v35 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v4 ^ *(_QWORD *)(48 * (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v37 = *(_QWORD *)(v4 + 24);
    v38 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    if ( v38 == 0xFFFFFFFFFLL )
    {
      a2[3] = v37 & 0xFFFFFFFFFLL;
    }
    else
    {
      v39 = 48 * v38 - 0x58000000000LL;
      v40 = v37 & 0xFFFFFFFFFLL;
      v41 = *(_QWORD *)(v39 + 24);
      v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 24), v40 | v41 & 0xFFFFFFF000000000uLL, v41);
      if ( v41 != v42 )
      {
        do
        {
          v43 = v42;
          v42 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v39 + 24),
                  v40 | v42 & 0xFFFFFFF000000000uLL,
                  v42);
        }
        while ( v43 != v42 );
      }
    }
  }
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
  v62 = *(_BYTE *)(v15 + 4829);
  if ( v21 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v59, retaddr);
      goto LABEL_71;
    }
    _m_prefetchw(&v59);
    v44 = v59;
    if ( (_QWORD)v59 )
    {
LABEL_70:
      *(_QWORD *)&v59 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v44 + 8), 1uLL);
    }
    else if ( (__int128 *)_InterlockedCompareExchange64(
                            *((volatile signed __int64 **)&v59 + 1),
                            0LL,
                            (signed __int64)&v59) != &v59 )
    {
      v44 = KxWaitForLockChainValid(&v59);
      goto LABEL_70;
    }
LABEL_71:
    v45 = KeGetCurrentPrcb();
    v46 = v45->SchedulerAssist;
    if ( v46 )
    {
      if ( v45->NestingLevel <= 1u )
      {
        v47 = v46[6] - 1;
        v46[6] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
  }
  v48 = *(_QWORD *)(v15 + 16) + 4544 * ((unsigned __int64)(unsigned int)v14 >> byte_140C4DC8C);
  _InterlockedDecrement64((volatile signed __int64 *)(v48 + 8LL * v65 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v48
                                                      + 8
                                                      * (v65
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v14 >> byte_140C4DC8D)))
                                                      + 4216));
  v49 = _InterlockedDecrement64((volatile signed __int64 *)(v15 + 7104));
  if ( v49 == *(_QWORD *)(v15 + 5168) || v49 == *(_QWORD *)(v15 + 5176) )
    MiUpdateAvailableEvents(v15);
  if ( v49 <= 0x420 )
  {
    v50 = *(_QWORD *)(v15 + 6848);
    if ( !v50 || !*(_BYTE *)(v50 + 52) )
      MiObtainFreePages(v15);
    if ( v49 < 0xA0 && v49 + 1 >= 0xA0 && *(_DWORD *)(v15 + 1160) )
      KeSetEvent((PRKEVENT)(v15 + 1008), 0, 0);
  }
  if ( v49 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v51 = 1;
    }
    else
    {
      v52 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v52 & 0xC) == 8 )
      {
        v51 = 1;
      }
      else if ( v49 < 0x20 && (ULONG_PTR *)v15 == &MiSystemPartition )
      {
        v51 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v51 = 1;
      }
      else if ( (v52 & 2) != 0 && v49 >= 0x21 )
      {
        v51 = 1;
      }
      else
      {
        v51 = (*(unsigned __int8 *)(v15 + 4) >> 5) & 1;
      }
    }
  }
  else
  {
    v51 = 1;
  }
  if ( (*(_BYTE *)(v4 + 34) & 8) != 0 )
    MiPageListCollision(v4, 1LL);
  v53 = qword_140C4DD40;
  *(_QWORD *)(v4 + 24) &= 0xFFFFFFF000000000uLL;
  v54 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)v4 = 0LL;
  if ( v53 && (v54 & 0x10) == 0 )
    v54 &= ~v53;
  if ( HIDWORD(v54) == 4294967293 )
    v5 = 2;
  updated = ZeroPte;
  v56 = v51 | v5;
  *(_QWORD *)(v4 + 16) = ZeroPte;
  if ( v56 >= 2 )
  {
    updated = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL);
    *(_QWORD *)(v4 + 16) = updated;
  }
  if ( v65 == 1 || v62 == 1 )
  {
    if ( updated )
    {
      *(_QWORD *)(v4 + 16) = updated & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      return v56 & 1;
    }
    v58 = 128LL;
    if ( v53 )
    {
      if ( (v53 & 0x80u) == 0LL )
      {
        *(_QWORD *)(v4 + 16) = v53 | 0x80;
        return v56 & 1;
      }
      v58 = 144LL;
    }
    *(_QWORD *)(v4 + 16) = v58;
    return v56 & 1;
  }
  else
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      return v56 & 1;
    }
    return v56 & 1;
  }
}
