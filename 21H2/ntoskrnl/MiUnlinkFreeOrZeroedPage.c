/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x1402DAC10
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiPurgeZeroList @ 0x140384A9C (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiPageListCollision @ 0x14021981C (MiPageListCollision.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR BugCheckParameter2, _QWORD *a2, __int16 a3)
{
  __int64 v4; // r12
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
  _QWORD *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  ULONG_PTR v29; // r10
  volatile signed __int32 *v30; // r8
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r9
  signed __int64 v35; // rdx
  signed __int64 v36; // r8
  signed __int64 v37; // rcx
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r11
  signed __int64 v42; // rdx
  signed __int64 v43; // r8
  signed __int64 v44; // rcx
  __int64 v45; // rax
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // ebx
  int v53; // ecx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __int64 updated; // rcx
  unsigned int v57; // esi
  __int64 v59; // rax
  __int128 v60; // [rsp+38h] [rbp-50h] BYREF
  __int64 v61; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v63; // [rsp+90h] [rbp+8h]
  unsigned int v66; // [rsp+A8h] [rbp+20h]

  v61 = 0LL;
  v60 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = 0;
  v66 = *(_BYTE *)(v4 + 34) & 7;
  v6 = (__int64)(48 * BugCheckParameter2) / 48;
  if ( dword_140C4DEC4 <= (unsigned int)dword_140C4DEC8 )
  {
    v7 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4;
    if ( v6 >= *(_QWORD *)v7 && (dword_140C4DEC4 == dword_140C4DEC8 || v6 < *((_QWORD *)v7 + 2)) )
      goto LABEL_15;
  }
  v8 = 0;
  v9 = dword_140C4DEC8;
  if ( dword_140C4DEC8 < 0 )
LABEL_126:
    KeBugCheckEx(0x1Au, 0x6201uLL, v6, 0LL, 0LL);
  while ( 1 )
  {
    v10 = (v8 + v9) >> 1;
    v7 = (char *)qword_140C4DF08 + 16 * v10;
    if ( v6 < *(_QWORD *)v7 )
    {
      if ( !v10 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v6, (ULONG_PTR)v7, 0LL);
      v9 = v10 - 1;
      goto LABEL_12;
    }
    if ( v10 == dword_140C4DEC8 || v6 < *((_QWORD *)v7 + 2) )
      break;
    v8 = v10 + 1;
LABEL_12:
    if ( v9 < v8 )
      goto LABEL_126;
  }
  dword_140C4DEC4 = (v8 + v9) >> 1;
LABEL_15:
  v11 = *((_DWORD *)v7 + 2);
  if ( qword_140C4DF10 )
    v12 = MiPageToChannel(v6);
  else
    v12 = 0;
  v13 = a2;
  v14 = dword_140C4DF38 & (unsigned int)BugCheckParameter2 | (v11 << byte_140C4DECC) | (v12 << byte_140C4DECD);
  v15 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL));
  if ( a2 )
  {
    v21 = -1;
  }
  else
  {
    v16 = dword_140C4DEC8;
    v17 = *(_QWORD *)(v15 + 8LL * v66 + 2176);
    if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
      || (v18 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, BugCheckParameter2 < *(_QWORD *)v18)
      || dword_140C4DEC4 != dword_140C4DEC8 && BugCheckParameter2 >= *((_QWORD *)v18 + 2) )
    {
      v19 = 0;
      if ( dword_140C4DEC8 < 0 )
LABEL_128:
        KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
      while ( 1 )
      {
        v20 = (v19 + v16) >> 1;
        v18 = (char *)qword_140C4DF08 + 16 * v20;
        if ( BugCheckParameter2 >= *(_QWORD *)v18 )
        {
          if ( v20 == dword_140C4DEC8 || BugCheckParameter2 < *((_QWORD *)v18 + 2) )
          {
            dword_140C4DEC4 = (v19 + v16) >> 1;
            break;
          }
          v19 = v20 + 1;
        }
        else
        {
          if ( !v20 )
            KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)qword_140C4DF08, 0LL);
          v16 = v20 - 1;
        }
        if ( v16 < v19 )
          goto LABEL_128;
      }
    }
    v21 = *((_DWORD *)v18 + 2);
    *(_QWORD *)&v60 = 0LL;
    v13 = (_QWORD *)(v17 + 40 * v14);
    v22 = v13 + 4;
    a2 = v13;
    *((_QWORD *)&v60 + 1) = v13 + 4;
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
      KiAcquireQueuedSpinLockInstrumented(&v60, v22);
      v13 = a2;
    }
    else
    {
      v26 = (_QWORD *)_InterlockedExchange64(v22, (__int64)&v60);
      if ( v26 )
      {
        KxWaitForLockOwnerShip((__int64)&v60, v26);
        v13 = a2;
      }
    }
  }
  v27 = v66;
  _InterlockedDecrement64(*(volatile signed __int64 **)(v15 + 8LL * v66 + 4216));
  if ( dword_140C4E70C == 1 )
  {
    LOBYTE(v28) = 1;
    v29 = BugCheckParameter2 & 0x1F;
    v30 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (BugCheckParameter2 >> 5));
    if ( v29 + 1 <= 0x20 )
    {
      v31 = 1 << v29;
      goto LABEL_51;
    }
    if ( (BugCheckParameter2 & 0x1F) == 0 )
      goto LABEL_50;
    _InterlockedOr(v30++, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v29);
    v28 = 1LL - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    if ( v28 >= 0x20 )
    {
      v32 = v28 >> 5;
      v28 += -32LL * (v28 >> 5);
      do
      {
        *v30++ = -1;
        --v32;
      }
      while ( v32 );
    }
    if ( v28 )
    {
LABEL_50:
      v31 = (1 << v28) - 1;
LABEL_51:
      _InterlockedOr(v30, v31);
    }
    v27 = v66;
  }
  --*v13;
  if ( v13[2] == BugCheckParameter2 )
  {
    v33 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    v13[2] = v33;
    if ( v33 == 0xFFFFFFFFFLL )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v15 + 16)
                                              + 4544 * ((unsigned __int64)(unsigned int)v14 >> byte_140C4DECC)
                                              + 16 * (v27 + 252)
                                              + 8)
                                  + 4 * ((unsigned __int64)((unsigned int)v14 & dword_140C4DF38) >> 5)),
        ~(1 << (v14 & dword_140C4DF38 & 0x1F)));
      v13[3] = 0xFFFFFFFFFLL;
    }
    else
    {
      v34 = 48 * v33 - 0x58000000000LL;
      v35 = *(_QWORD *)(v34 + 24);
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), v35 | 0xFFFFFFFFFLL, v35);
      if ( v35 != v36 )
      {
        do
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), v36 | 0xFFFFFFFFFLL, v36);
        }
        while ( v37 != v36 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v4 ^ *(_QWORD *)(48 * (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v38 = *(_QWORD *)(v4 + 24);
    v39 = *(_QWORD *)v4 & 0xFFFFFFFFFLL;
    if ( v39 == 0xFFFFFFFFFLL )
    {
      a2[3] = v38 & 0xFFFFFFFFFLL;
    }
    else
    {
      v40 = 48 * v39 - 0x58000000000LL;
      v41 = v38 & 0xFFFFFFFFFLL;
      v42 = *(_QWORD *)(v40 + 24);
      v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 24), v41 | v42 & 0xFFFFFFF000000000uLL, v42);
      if ( v42 != v43 )
      {
        do
        {
          v44 = v43;
          v43 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v40 + 24),
                  v41 | v43 & 0xFFFFFFF000000000uLL,
                  v43);
        }
        while ( v44 != v43 );
      }
    }
  }
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
  v63 = *(_BYTE *)(v15 + 4829);
  if ( v21 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v60, retaddr);
      goto LABEL_71;
    }
    _m_prefetchw(&v60);
    v45 = v60;
    if ( (_QWORD)v60 )
    {
LABEL_70:
      *(_QWORD *)&v60 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v45 + 8), 1uLL);
    }
    else if ( (__int128 *)_InterlockedCompareExchange64(
                            *((volatile signed __int64 **)&v60 + 1),
                            0LL,
                            (signed __int64)&v60) != &v60 )
    {
      v45 = KxWaitForLockChainValid((__int64 *)&v60);
      goto LABEL_70;
    }
LABEL_71:
    v46 = KeGetCurrentPrcb();
    v47 = v46->SchedulerAssist;
    if ( v47 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v48 = v47[6] - 1;
        v47[6] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
  }
  v49 = *(_QWORD *)(v15 + 16) + 4544 * ((unsigned __int64)(unsigned int)v14 >> byte_140C4DECC);
  _InterlockedDecrement64((volatile signed __int64 *)(v49 + 8LL * v66 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v49
                                                      + 8
                                                      * (v66
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v14 >> byte_140C4DECD)))
                                                      + 4216));
  v50 = _InterlockedDecrement64((volatile signed __int64 *)(v15 + 7104));
  if ( v50 == *(_QWORD *)(v15 + 5168) || v50 == *(_QWORD *)(v15 + 5176) )
    MiUpdateAvailableEvents(v15);
  if ( v50 <= 0x420 )
  {
    v51 = *(_QWORD *)(v15 + 6848);
    if ( !v51 || !*(_BYTE *)(v51 + 52) )
      MiObtainFreePages(v15);
    if ( v50 < 0xA0 && v50 + 1 >= 0xA0 && *(_DWORD *)(v15 + 1160) )
      KeSetEvent((PRKEVENT)(v15 + 1008), 0, 0);
  }
  if ( v50 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v52 = 1;
    }
    else
    {
      v53 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v53 & 0xC) == 8 )
      {
        v52 = 1;
      }
      else if ( v50 < 0x20 && (ULONG_PTR *)v15 == &MiSystemPartition )
      {
        v52 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v52 = 1;
      }
      else if ( (v53 & 2) != 0 && v50 >= 0x21 )
      {
        v52 = 1;
      }
      else
      {
        v52 = (*(unsigned __int8 *)(v15 + 4) >> 5) & 1;
      }
    }
  }
  else
  {
    v52 = 1;
  }
  if ( (*(_BYTE *)(v4 + 34) & 8) != 0 )
    MiPageListCollision(v4);
  v54 = qword_140C4DF80;
  *(_QWORD *)(v4 + 24) &= 0xFFFFFFF000000000uLL;
  v55 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)v4 = 0LL;
  if ( v54 && (v55 & 0x10) == 0 )
    v55 &= ~v54;
  if ( HIDWORD(v55) == 4294967293 )
    v5 = 2;
  updated = ZeroPte;
  v57 = v52 | v5;
  *(_QWORD *)(v4 + 16) = ZeroPte;
  if ( v57 >= 2 )
  {
    updated = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL);
    *(_QWORD *)(v4 + 16) = updated;
  }
  if ( v66 == 1 || v63 == 1 )
  {
    if ( updated )
    {
      *(_QWORD *)(v4 + 16) = updated & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      return v57 & 1;
    }
    v59 = 128LL;
    if ( v54 )
    {
      if ( (v54 & 0x80u) == 0LL )
      {
        *(_QWORD *)(v4 + 16) = v54 | 0x80;
        return v57 & 1;
      }
      v59 = 144LL;
    }
    *(_QWORD *)(v4 + 16) = v59;
    return v57 & 1;
  }
  else
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      return v57 & 1;
    }
    return v57 & 1;
  }
}
