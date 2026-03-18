/*
 * XREFs of MiTradePage @ 0x140277580
 * Callers:
 *     MiClaimPhysicalRun @ 0x14027738C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140235E40 (MiGetBaseResidentPage.c)
 *     MiTrimSharedPage @ 0x14023F658 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x1402416A4 (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x1402446B4 (MiAddMdlPageToTradeBlock.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiPfnZeroingNeeded @ 0x140268A70 (MiPfnZeroingNeeded.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiPfnLargeBitSet @ 0x14027924C (MiPfnLargeBitSet.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiTradeTransitionPage @ 0x1402E8240 (MiTradeTransitionPage.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     MiDemoteLargeFreePage @ 0x14038719C (MiDemoteLargeFreePage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403CC0F0 (MiLockAndInsertPageInFreeList.c)
 *     MiLargeFreePageToMdl @ 0x1403D5CF4 (MiLargeFreePageToMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLargePageMovesInProgress @ 0x1405AF29C (MiLargePageMovesInProgress.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r12d
  __int64 v5; // r13
  int v7; // r14d
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  __int64 v13; // r11
  char v14; // dl
  __int64 active; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ebp
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r8d
  unsigned __int64 v24; // rcx
  int v25; // ebp
  int v26; // ebp
  __int64 v27; // r8
  int PfnPageSizeIndex; // eax
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r10
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v49; // r9
  __int64 v50; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  signed __int32 v59[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v60; // [rsp+40h] [rbp-78h] BYREF
  int v61; // [rsp+44h] [rbp-74h]
  __int64 v62; // [rsp+48h] [rbp-70h] BYREF
  __int64 v63; // [rsp+50h] [rbp-68h]
  __int64 v64; // [rsp+58h] [rbp-60h]
  __int64 BaseResidentPage; // [rsp+60h] [rbp-58h]
  unsigned __int8 v66; // [rsp+C0h] [rbp+8h]
  int v67; // [rsp+C8h] [rbp+10h]
  int v68; // [rsp+D0h] [rbp+18h] BYREF
  int v69; // [rsp+D8h] [rbp+20h]

  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 24);
  v5 = *(_QWORD *)a1;
  v63 = *(_QWORD *)(a1 + 8);
  v61 = *(_DWORD *)(a1 + 32);
  v60 = 0;
  v68 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v7 = v3 & 0x400000;
  if ( (v3 & 0x400000) != 0 )
    v69 = *(_DWORD *)(a1 + 28);
  else
    v69 = -1;
  v62 = -1LL;
  v64 = 0LL;
  v8 = 48 * a2 - 0x220000000000LL;
  v9 = MiLockPageInline(v8);
  while ( 1 )
  {
    while ( 1 )
    {
      v66 = v9;
      while ( 1 )
      {
        if ( !(unsigned int)MiIsPfn(a2) )
          goto LABEL_163;
        v10 = *(_QWORD *)(v8 + 40);
        if ( *(_QWORD *)(qword_140C51F48 + 8 * ((v10 >> 43) & 0x3FF)) != v5 )
        {
          v50 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v66 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << (v66 + 1));
                v35 = (v54 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v54;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v66);
          if ( (_DWORD)v50 != -1 )
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[v50];
          ++dword_140C29DC4;
          goto LABEL_23;
        }
        v11 = *(_BYTE *)(v8 + 34) & 7;
        v67 = -1;
        if ( (v10 & 0x10000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v8);
          v11 = *(_BYTE *)(BaseResidentPage + 34) & 7;
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
          v67 = PfnPageSizeIndex;
          if ( BaseResidentPage != v8 )
            _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v11 == 6 )
          {
            ++dword_140C29DCC;
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[PfnPageSizeIndex];
            goto LABEL_20;
          }
        }
        if ( v11 != 5 )
          goto LABEL_9;
        if ( MiIsPageOnBadList(v8) )
        {
          ++dword_140C29DD4;
          goto LABEL_20;
        }
        if ( v23 != -1 )
          break;
        if ( !MiInvalidPteConforms(*(_QWORD *)(v8 + 16)) )
          goto LABEL_48;
        if ( qword_140C50780 )
        {
          if ( (v24 & 0x10) != 0 )
            v24 &= ~0x10uLL;
          else
            v24 &= ~qword_140C50780;
        }
        if ( HIDWORD(v24) != 4294967294 )
        {
LABEL_48:
          ++dword_140C29DD8;
          goto LABEL_20;
        }
        if ( v64 == v8 )
        {
          ++dword_140C29DDC;
          goto LABEL_20;
        }
        v25 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4)) + 8);
        v26 = ((unsigned int)MiGetPfnChannel(v8) << byte_140C506CD) | dword_140C50738 & a2 | (v25 << byte_140C506CC);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v66 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << (v66 + 1));
              v35 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        __writecr8(v66);
        v27 = *(_QWORD *)(a1 + 16);
        ++dword_140C29DA0;
        MiDrainZeroLookasides(v5, v8, v27, v26);
        v64 = v8;
        MiLockPageInline(v8);
      }
      v11 = 1;
LABEL_9:
      if ( _bittest64((const signed __int64 *)(v8 + 40), 0x35u) || (unsigned int)MiIsPfnFromSlabAllocation(v8) )
      {
LABEL_163:
        ++dword_140C29DBC;
        goto LABEL_20;
      }
      if ( v11 <= 1 )
      {
        if ( v12 == -1 )
        {
          if ( v7 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2) )
          {
            ++dword_140C29D9C;
            v2 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 0);
          }
          else
          {
            ++dword_140C29DE4;
            MiReturnFreeZeroPage(v8, 0LL);
          }
          goto LABEL_20;
        }
        BaseResidentPage = v12;
        v29 = MiLargePageSizes[v12];
        if ( (v3 & 0x2000000) != 0 && v29 >= 0x200 || (v3 & 0x1000000) != 0 && v29 == 16 )
          goto LABEL_20;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v66 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << (v66 + 1));
              v35 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(v37);
              v12 = v67;
            }
          }
        }
        __writecr8(v66);
        if ( (a2 & ~(v29 - 1)) == a2 && (v3 & 0x400000) == 0 && *(_QWORD *)(a1 + 16) >= v29 )
        {
          v30 = v29 + a2 - 1;
          if ( v30 <= *(_QWORD *)(a1 + 56) )
          {
            if ( (unsigned int)MiLargeFreePageToMdl(v5, v30, v12, *(_QWORD *)(a1 + 64), v3) )
            {
              dword_140C29D9C += v29;
              v2 = v29;
              if ( *(_QWORD *)(a1 + 64) )
              {
                if ( MiPfnZeroingNeeded(v8, v61) )
                  *(_QWORD *)(v49 + 24) = 1LL;
              }
              goto LABEL_23;
            }
            v12 = v67;
          }
        }
        if ( !(unsigned int)MiDemoteLargeFreePage(v5, a2, v12, v3, (__int64)&v68) && !v68 )
        {
          if ( (unsigned int)MiLargePageMovesInProgress(v8) )
          {
            ++dword_140C29DD0;
          }
          else
          {
            ++dword_140C29DC8;
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[BaseResidentPage];
          }
          goto LABEL_23;
        }
        goto LABEL_69;
      }
      v13 = v63;
      if ( !*(_QWORD *)(v63 + 16) || (v14 = *(_BYTE *)(v8 + 35), v14 < 0) )
      {
        if ( v11 == 2 )
        {
          if ( *(_WORD *)(v8 + 32) )
          {
            ++dword_140C29DE8;
          }
          else if ( (unsigned int)MiReuseStandbyPage(v8) )
          {
            v2 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2, 1);
          }
          else
          {
            MiReturnFreeZeroPage(v8, 0LL);
            ++dword_140C29DE4;
          }
          goto LABEL_20;
        }
        if ( v11 == 6
          && (*(_BYTE *)(v8 + 34) & 0x10) == 0
          && *(_WORD *)(v8 + 32) == 1
          && ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 2
          && (*(_BYTE *)v8 & 1) != 0 )
        {
          v14 = *(_BYTE *)(v8 + 35);
          if ( (v14 & 8) == 0 )
            goto LABEL_16;
        }
        ++dword_140C29DF4;
LABEL_20:
        if ( v66 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v55 = KeGetCurrentIrql();
              if ( v55 <= 0xFu && v66 <= 0xFu && v55 >= 2u )
              {
                v56 = KeGetCurrentPrcb();
                v57 = v56->SchedulerAssist;
                v58 = ~(unsigned __int16)(-1LL << (v66 + 1));
                v35 = (v58 & v57[5]) == 0;
                v57[5] &= v58;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick(v56);
              }
            }
          }
          __writecr8(v66);
        }
        goto LABEL_23;
      }
      if ( v11 > 4 )
        break;
      if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && (v3 & 0x4000000) == 0 && *(__int64 *)(v8 + 8) > 0 )
      {
        ++dword_140C29DF8;
        goto LABEL_20;
      }
      if ( (v3 & 0x200000) != 0 && ((v14 & 0x40) != 0 || MiIsPageOnBadList(v8)) )
      {
LABEL_108:
        ++dword_140C29DFC;
        goto LABEL_20;
      }
      v22 = MiTradeTransitionPage(v8, v66, v13, v69, v3, (__int64)&v62);
      if ( v22 == 3 )
      {
        if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v5 )
          goto LABEL_142;
        if ( !v7 )
        {
LABEL_40:
          v2 = 1LL;
          MiAddMdlPageToTradeBlock(a1, a2, 1);
          goto LABEL_23;
        }
        v21 = v8;
LABEL_144:
        MiLockAndInsertPageInFreeList(v21);
        goto LABEL_40;
      }
      if ( v22 != 2 )
        goto LABEL_23;
LABEL_69:
      v9 = MiLockPageInline(v8);
    }
    if ( v11 != 6 )
    {
      ++dword_140C29E04;
      goto LABEL_20;
    }
LABEL_16:
    if ( (v3 & 0x200000) != 0 && ((v14 & 0x40) != 0 || MiIsPageOnBadList(v8)) )
      goto LABEL_108;
    if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 2 )
      break;
    if ( (v3 & 8) != 0 )
      goto LABEL_147;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && v66 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (v66 + 1));
          v35 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v35 )
          {
            KiRemoveSystemWorkPriorityKick(v41);
            v13 = v63;
          }
        }
      }
    }
    __writecr8(v66);
    if ( (unsigned int)MiSwapStackPage(v5, v8, v13, *(_DWORD *)(a1 + 28), v3, &v62, &v60) )
    {
      if ( v60 )
        ++dword_140C29DA8;
      else
        ++dword_140C29DB4;
LABEL_32:
      *(_QWORD *)(v8 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList(v8 + 16, v18, v19);
      v21 = v8;
      if ( !v7 )
      {
        _InterlockedOr(v59, 0);
        MiSetPfnTbFlushStamp(v8, (unsigned int)KiTbFlushTimeStamp, 0LL);
        goto LABEL_40;
      }
      goto LABEL_144;
    }
    if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 2 )
    {
      ++dword_140C29E08;
      goto LABEL_23;
    }
    v9 = MiLockPageInline(v8);
    ++dword_140C29DB8;
  }
  active = MiActivePageClaimCandidate(v5, v8, 1LL);
  if ( active )
  {
    ++dword_140C29E8C;
    *(_QWORD *)(a1 + 48) = active;
    goto LABEL_20;
  }
  if ( (v3 & 8) != 0 )
  {
LABEL_147:
    ++dword_140C29E00;
    goto LABEL_20;
  }
  if ( *(__int64 *)(v8 + 40) < 0 )
    v17 = MiTrimSharedPage(v8, v66, v3);
  else
    v17 = MiStealPage(v8, *(_DWORD *)(a1 + 28), (__int64)&v62);
  v20 = v17;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && v66 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v18 = -1LL << (v66 + 1);
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)v18;
        v35 = (v47 & v46[5]) == 0;
        v19 = (unsigned int)v47 & v46[5];
        v46[5] = v19;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
  }
  __writecr8(v66);
  if ( !v20 )
  {
    ++dword_140C29E10;
    goto LABEL_23;
  }
  if ( v20 == 2 )
    goto LABEL_69;
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) == v5 )
  {
    ++dword_140C29DAC;
    goto LABEL_32;
  }
LABEL_142:
  ++dword_140C29DC4;
  MiLockAndInsertPageInFreeList(v8);
LABEL_23:
  result = v2;
  *(_QWORD *)(a1 + 40) = v62;
  return result;
}
