/*
 * XREFs of MiTradePage @ 0x14030B930
 * Callers:
 *     MiClaimPhysicalRun @ 0x14030B77C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x14020F71C (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x14030A1D8 (MiAddMdlPageToTradeBlock.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiPfnLargeBitSet @ 0x14030D3F0 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x14030D450 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiReuseStandbyPage @ 0x1405515A0 (MiReuseStandbyPage.c)
 *     MiLargePageMovesInProgress @ 0x140556D84 (MiLargePageMovesInProgress.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // r15d
  ULONG_PTR v5; // r13
  __int64 v6; // r14
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 CurrentIrql; // r10
  unsigned __int8 v11; // di
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 BaseResidentPage; // rax
  unsigned int PfnPageSizeIndex; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v19; // esi
  int v20; // esi
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r11
  _DWORD *v23; // r10
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned int v28; // r8d
  unsigned __int64 v29; // r9
  char v30; // r10
  __int64 v31; // r11
  __int64 v32; // r14
  unsigned __int64 v33; // rsi
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  unsigned __int8 v45; // al
  __int64 v46; // rbp
  char v47; // cl
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // r9
  bool v52; // zf
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  __int64 active; // rax
  ULONG_PTR v58; // rcx
  int v59; // eax
  __int64 v60; // r8
  _DWORD *v61; // r9
  int v62; // esi
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  int v65; // eax
  int v66; // r8d
  __int64 result; // rax
  __int64 v68; // rcx
  __int64 v69; // rsi
  unsigned __int8 v70; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v72; // r8
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // edx
  signed __int32 v78[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v79; // [rsp+40h] [rbp-88h] BYREF
  int v80; // [rsp+44h] [rbp-84h]
  __int64 v81; // [rsp+48h] [rbp-80h]
  __int64 v82; // [rsp+50h] [rbp-78h]
  __int64 v83; // [rsp+58h] [rbp-70h]
  __int64 v84; // [rsp+60h] [rbp-68h] BYREF
  __int64 v85; // [rsp+68h] [rbp-60h]
  __int64 v86; // [rsp+70h] [rbp-58h]
  int v87; // [rsp+D0h] [rbp+8h]
  int v88; // [rsp+D8h] [rbp+10h] BYREF
  int v89; // [rsp+E0h] [rbp+18h]
  int v90; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v86 = *(_QWORD *)(a1 + 8);
  v80 = *(_DWORD *)(a1 + 32);
  v79 = 0;
  v87 = v4 & 0x400000;
  v88 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v82 = v6;
  if ( (v4 & 0x400000) != 0 )
    v89 = *(_DWORD *)(a1 + 28);
  else
    v89 = -1;
  v85 = 0LL;
  v8 = 48 * a2;
  v83 = 48 * a2;
  v84 = -1LL;
  v9 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v81 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v90 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v90, a2, a3, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v81;
    v8 = v83;
  }
  v11 = CurrentIrql;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 > 0xFFFFFFFFFLL || (*(_QWORD *)(v8 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
          goto LABEL_152;
        v12 = *(_QWORD *)(v9 + 40);
        if ( *(_QWORD *)(qword_140C4E688 + 8 * ((v12 >> 39) & 0x3FF)) != v6 )
        {
          v69 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, v5, 0x4000000000000LL, 0x7FFFFFFFFFFFFFFFLL);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v70 = KeGetCurrentIrql();
              if ( v70 <= 0xFu && v11 <= 0xFu && v70 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v72 = CurrentPrcb->SchedulerAssist;
                v73 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v52 = (v73 & v72[5]) == 0;
                v72[5] &= v73;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v11);
          v40 = 0LL;
          if ( (_DWORD)v69 != -1 )
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[v69];
          goto LABEL_131;
        }
        v13 = *(_BYTE *)(v9 + 34) & 7;
        v14 = -1;
        if ( (v12 & 0x1000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v9, v12, v13);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
          v14 = PfnPageSizeIndex;
          if ( v17 != v9 )
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v13 == 6 )
          {
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[PfnPageSizeIndex];
LABEL_152:
            v40 = 0LL;
LABEL_153:
            if ( v11 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v74 = KeGetCurrentIrql();
                  if ( v74 <= 0xFu && v11 <= 0xFu && v74 >= 2u )
                  {
                    v75 = KeGetCurrentPrcb();
                    v76 = v75->SchedulerAssist;
                    v77 = ~(unsigned __int16)(-1LL << (v11 + 1));
                    v52 = (v77 & v76[5]) == 0;
                    v76[5] &= v77;
                    if ( v52 )
                      KiRemoveSystemWorkPriorityKick(v75);
                  }
                }
              }
              __writecr8(v11);
            }
            goto LABEL_131;
          }
        }
        if ( (_DWORD)v13 != 5 )
          break;
        if ( (unsigned int)MiIsPageOnBadList(v9) )
          goto LABEL_152;
        if ( v14 != -1 )
          break;
        if ( !MiInvalidPteConforms(*(_QWORD *)(v9 + 16)) )
          goto LABEL_152;
        if ( qword_140C4DF80 )
        {
          if ( (v18 & 0x10) != 0 )
            v18 &= ~0x10uLL;
          else
            v18 &= ~qword_140C4DF80;
        }
        if ( HIDWORD(v18) != 4294967294 || v85 == v9 )
          goto LABEL_152;
        v19 = *(_DWORD *)(MiSearchNumaNodeTable((v9 + 0x58000000000LL) / 48) + 8);
        v20 = ((unsigned int)MiGetPfnChannel(v9) << byte_140C4DECD) | dword_140C4DF38 & v5 | (v19 << byte_140C4DECC);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v11 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = v22->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v11 + 1));
              v52 = (v24 & v23[5]) == 0;
              v23[5] &= v24;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
        }
        __writecr8(v11);
        MiDrainZeroLookasides(v6, v9, *(_QWORD *)(a1 + 16), v20);
        v85 = v9;
        MiLockPageInline(v9, v25, v26, v27);
        v8 = v83;
      }
      if ( MiIsPfnFileOnly(v9) || (unsigned int)MiIsPfnFromSlabAllocation(v9) )
        goto LABEL_152;
      if ( v28 > 1 )
        break;
      if ( v14 == -1 )
      {
        if ( !v87 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v5, 0LL, 0) )
        {
LABEL_125:
          MiReturnFreeZeroPage(v9, 0LL);
          goto LABEL_152;
        }
        v40 = 1LL;
        v66 = 0;
LABEL_127:
        MiAddMdlPageToTradeBlock(a1, v5, v66);
        goto LABEL_153;
      }
      v32 = v14;
      v33 = MiLargePageSizes[v14];
      if ( (v4 & 0x2000000) != 0 && v33 >= 0x200 || (v4 & 0x1000000) != 0 && v33 == 16 )
        goto LABEL_152;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v29);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && v11 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v52 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
      }
      __writecr8(v11);
      if ( v87 || v5 != (v5 & ~(v33 - 1)) || *(_QWORD *)(a1 + 16) < v33 )
      {
        v38 = v82;
      }
      else
      {
        v38 = v82;
        v39 = v33 + v5 - 1;
        if ( v39 <= *(_QWORD *)(a1 + 56)
          && (unsigned int)MiLargeFreePageToMdl(v82, v39, v14, *(_QWORD *)(a1 + 64), v4) == 1 )
        {
          v40 = v33;
          if ( *(_QWORD *)(a1 + 64) && MiPfnZeroingNeeded(v9, v80) )
            *(_QWORD *)(v41 + 24) = 1LL;
          goto LABEL_131;
        }
      }
      if ( !(unsigned int)MiDemoteLargeFreePage(v38, v5, v14, v4, (__int64)&v88) && !v88 )
      {
        v40 = 0LL;
        if ( !(unsigned int)MiLargePageMovesInProgress(v9) )
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v32];
        goto LABEL_131;
      }
      v45 = MiLockPageInline(v9, v42, v43, v44);
      v6 = v82;
LABEL_119:
      v11 = v45;
      v8 = v83;
    }
    v46 = v86;
    if ( !*(_QWORD *)(v86 + 16) )
      break;
    v47 = *(_BYTE *)(v9 + 35);
    if ( v47 < 0 )
      break;
    if ( v28 > 4 )
    {
      v52 = v28 == 6;
      goto LABEL_86;
    }
    if ( (v4 & 0x4000000) == 0 && (v31 & *(_QWORD *)(v9 + 40)) == 0 && *(__int64 *)(v9 + 8) > 0
      || (v4 & 0x200000) != 0 && ((v47 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    {
      goto LABEL_152;
    }
    v48 = MiTradeTransitionPage(v9, v11, v46, v89, v4, &v84);
    if ( v48 == 3 )
    {
      if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
        goto LABEL_129;
      if ( !v87 )
        goto LABEL_138;
      v68 = v9;
      goto LABEL_134;
    }
    if ( v48 != 2 )
      goto LABEL_130;
LABEL_77:
    v11 = MiLockPageInline(v9, v49, v50, v51);
    v8 = v83;
  }
  if ( v28 == 2 )
  {
    if ( *(_WORD *)(v9 + 32) )
      goto LABEL_152;
    if ( !(unsigned int)MiReuseStandbyPage(v9) )
      goto LABEL_125;
    v40 = 1LL;
    v66 = 1;
    goto LABEL_127;
  }
  if ( v28 != 6
    || (*(_BYTE *)(v9 + 34) & 0x10) != 0
    || *(_WORD *)(v9 + 32) != 1
    || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2
    || (*(_BYTE *)v9 & 1) == 0 )
  {
    goto LABEL_152;
  }
  v47 = *(_BYTE *)(v9 + 35);
  v52 = (v47 & 8) == 0;
LABEL_86:
  if ( !v52 || (v4 & 0x200000) != 0 && ((v47 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    goto LABEL_152;
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
  {
    if ( v30 == 2 || (v4 & 8) != 0 )
      goto LABEL_152;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v29);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && v11 <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v52 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    __writecr8(v11);
    if ( (unsigned int)MiSwapStackPage(v6, v9, v46, *(unsigned int *)(a1 + 28), v4, &v84, &v79) )
      goto LABEL_136;
    if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
      goto LABEL_130;
    goto LABEL_77;
  }
  active = MiActivePageClaimCandidate(v6, v9, 1LL);
  if ( active )
  {
    *(_QWORD *)(a1 + 48) = active;
    goto LABEL_152;
  }
  if ( (_BYTE)v81 == 2 || (v4 & 8) != 0 )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    v59 = MiTrimSharedPage(v58, v11, v4);
  else
    v59 = MiStealPage(v58, v11, v4, v46, *(_DWORD *)(a1 + 28), &v84);
  v62 = v59;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v63 = KeGetCurrentIrql();
      if ( v63 <= 0xFu && v11 <= 0xFu && v63 >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v49 = -1LL << (v11 + 1);
        v61 = v64->SchedulerAssist;
        v65 = ~(unsigned __int16)v49;
        v52 = (v65 & v61[5]) == 0;
        v60 = (unsigned int)v65 & v61[5];
        v61[5] = v60;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
  }
  __writecr8(v11);
  if ( !v62 )
    goto LABEL_130;
  if ( v62 == 2 )
  {
    v45 = MiLockPageInline(v9, v49, v60, v61);
    goto LABEL_119;
  }
  if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
  {
LABEL_129:
    MiLockAndInsertPageInFreeList(v9);
LABEL_130:
    v40 = 0LL;
    goto LABEL_131;
  }
LABEL_136:
  *(_QWORD *)(v9 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList(v9 + 16, v49);
  v68 = v9;
  if ( v87 )
  {
LABEL_134:
    MiLockAndInsertPageInFreeList(v68);
    goto LABEL_138;
  }
  _InterlockedOr(v78, 0);
  MiSetPfnTbFlushStamp(v9, KiTbFlushTimeStamp, 0);
LABEL_138:
  v40 = 1LL;
  MiAddMdlPageToTradeBlock(a1, v5, 1);
LABEL_131:
  result = v40;
  *(_QWORD *)(a1 + 40) = v84;
  return result;
}
