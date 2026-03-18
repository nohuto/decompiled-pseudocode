/*
 * XREFs of MiTradePage @ 0x14034AE80
 * Callers:
 *     MiClaimPhysicalRun @ 0x14034ACCC (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402F1808 (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x140315D30 (MiDrainZeroLookasides.c)
 *     MiTrimSharedPage @ 0x14031F424 (MiTrimSharedPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x140320194 (MiAddMdlPageToTradeBlock.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiPfnLargeBitSet @ 0x14034C940 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B5ECC (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     MiReuseStandbyPage @ 0x14054F890 (MiReuseStandbyPage.c)
 *     MiLargePageMovesInProgress @ 0x140555074 (MiLargePageMovesInProgress.c)
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
  int v13; // r8d
  unsigned int v14; // ebp
  __int64 BaseResidentPage; // rax
  __int64 v16; // rdx
  unsigned int PfnPageSizeIndex; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // esi
  int v21; // esi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r11
  _DWORD *v24; // r10
  int v25; // eax
  unsigned int v26; // r8d
  unsigned __int64 v27; // r9
  char v28; // r10
  __int64 v29; // r11
  __int64 v30; // r14
  unsigned __int64 v31; // rsi
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // r8
  unsigned __int8 v40; // al
  unsigned int *v41; // rbp
  char v42; // cl
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  __int64 active; // rax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // esi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  int v57; // r8d
  __int64 result; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  unsigned __int8 v61; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v63; // r8
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // edx
  signed __int32 v69[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v70; // [rsp+40h] [rbp-88h] BYREF
  int v71; // [rsp+44h] [rbp-84h]
  __int64 v72; // [rsp+48h] [rbp-80h]
  __int64 v73; // [rsp+50h] [rbp-78h]
  __int64 v74; // [rsp+58h] [rbp-70h]
  __int64 v75; // [rsp+60h] [rbp-68h] BYREF
  __int64 v76; // [rsp+68h] [rbp-60h]
  __int64 v77; // [rsp+70h] [rbp-58h]
  int v78; // [rsp+D0h] [rbp+8h]
  int v79; // [rsp+D8h] [rbp+10h] BYREF
  int v80; // [rsp+E0h] [rbp+18h]
  int v81; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v77 = *(_QWORD *)(a1 + 8);
  v71 = *(_DWORD *)(a1 + 32);
  v70 = 0;
  v78 = v4 & 0x400000;
  v79 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v73 = v6;
  if ( (v4 & 0x400000) != 0 )
    v80 = *(_DWORD *)(a1 + 28);
  else
    v80 = -1;
  v76 = 0LL;
  v8 = 48 * a2;
  v74 = 48 * a2;
  v75 = -1LL;
  v9 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v72 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v81 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v81, a2, a3, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v72;
    v8 = v74;
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
        if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((v12 >> 39) & 0x3FF)) != v6 )
        {
          v60 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, v5, 0x4000000000000LL, 0x7FFFFFFFFFFFFFFFLL);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v61 = KeGetCurrentIrql();
              if ( v61 <= 0xFu && v11 <= 0xFu && v61 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v63 = CurrentPrcb->SchedulerAssist;
                v64 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v44 = (v64 & v63[5]) == 0;
                v63[5] &= v64;
                if ( v44 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v11);
          v38 = 0LL;
          if ( (_DWORD)v60 != -1 )
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[v60];
          goto LABEL_131;
        }
        v13 = *(_BYTE *)(v9 + 34) & 7;
        v14 = -1;
        if ( (v12 & 0x1000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v9, v12);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(
                               BaseResidentPage,
                               v16,
                               *(_BYTE *)(BaseResidentPage + 34) & 7,
                               BaseResidentPage);
          v14 = PfnPageSizeIndex;
          if ( v18 != v9 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v13 == 6 )
          {
            *(_QWORD *)(a1 + 48) = MiLargePageSizes[PfnPageSizeIndex];
LABEL_152:
            v38 = 0LL;
LABEL_153:
            if ( v11 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v65 = KeGetCurrentIrql();
                  if ( v65 <= 0xFu && v11 <= 0xFu && v65 >= 2u )
                  {
                    v66 = KeGetCurrentPrcb();
                    v67 = v66->SchedulerAssist;
                    v68 = ~(unsigned __int16)(-1LL << (v11 + 1));
                    v44 = (v68 & v67[5]) == 0;
                    v67[5] &= v68;
                    if ( v44 )
                      KiRemoveSystemWorkPriorityKick(v66);
                  }
                }
              }
              __writecr8(v11);
            }
            goto LABEL_131;
          }
        }
        if ( v13 != 5 )
          break;
        if ( (unsigned int)MiIsPageOnBadList(v9) )
          goto LABEL_152;
        if ( v14 != -1 )
          break;
        if ( !MiInvalidPteConforms(*(_QWORD *)(v9 + 16)) )
          goto LABEL_152;
        if ( qword_140C4DDC0 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DDC0;
        }
        if ( HIDWORD(v19) != 4294967294 || v76 == v9 )
          goto LABEL_152;
        v20 = *((_DWORD *)MiSearchNumaNodeTable((v9 + 0x58000000000LL) / 48) + 2);
        v21 = ((unsigned int)MiGetPfnChannel(v9) << byte_140C4DD0D) | dword_140C4DD78 & v5 | (v20 << byte_140C4DD0C);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && v11 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = v23->SchedulerAssist;
              v25 = ~(unsigned __int16)(-1LL << (v11 + 1));
              v44 = (v25 & v24[5]) == 0;
              v24[5] &= v25;
              if ( v44 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
        }
        __writecr8(v11);
        MiDrainZeroLookasides(v6, v9, *(_QWORD *)(a1 + 16), v21);
        v76 = v9;
        MiLockPageInline(v9);
        v8 = v74;
      }
      if ( MiIsPfnFileOnly(v9) || (unsigned int)MiIsPfnFromSlabAllocation(v9) )
        goto LABEL_152;
      if ( v26 > 1 )
        break;
      if ( v14 == -1 )
      {
        if ( !v78 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v5, 0LL, 0) )
        {
LABEL_125:
          MiReturnFreeZeroPage(v9, 0LL);
          goto LABEL_152;
        }
        v38 = 1LL;
        v57 = 0;
LABEL_127:
        MiAddMdlPageToTradeBlock(a1, v5, v57);
        goto LABEL_153;
      }
      v30 = v14;
      v31 = MiLargePageSizes[v14];
      if ( (v4 & 0x2000000) != 0 && v31 >= 0x200 || (v4 & 0x1000000) != 0 && v31 == 16 )
        goto LABEL_152;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v27);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && v11 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v44 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v44 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8(v11);
      if ( v78 || v5 != (v5 & ~(v31 - 1)) || *(_QWORD *)(a1 + 16) < v31 )
      {
        v36 = v73;
      }
      else
      {
        v36 = v73;
        v37 = v31 + v5 - 1;
        if ( v37 <= *(_QWORD *)(a1 + 56)
          && (unsigned int)MiLargeFreePageToMdl(v73, v37, v14, *(_QWORD *)(a1 + 64), v4) == 1 )
        {
          v38 = v31;
          if ( *(_QWORD *)(a1 + 64) && MiPfnZeroingNeeded(v9, v71) )
            *(_QWORD *)(v39 + 24) = 1LL;
          goto LABEL_131;
        }
      }
      if ( !(unsigned int)MiDemoteLargeFreePage(v36, v5, v14, v4, (__int64)&v79) && !v79 )
      {
        v38 = 0LL;
        if ( !(unsigned int)MiLargePageMovesInProgress(v9) )
          *(_QWORD *)(a1 + 48) = MiLargePageSizes[v30];
        goto LABEL_131;
      }
      v40 = MiLockPageInline(v9);
      v6 = v73;
LABEL_119:
      v11 = v40;
      v8 = v74;
    }
    v41 = (unsigned int *)v77;
    if ( !*(_QWORD *)(v77 + 16) )
      break;
    v42 = *(_BYTE *)(v9 + 35);
    if ( v42 < 0 )
      break;
    if ( v26 > 4 )
    {
      v44 = v26 == 6;
      goto LABEL_86;
    }
    if ( (v4 & 0x4000000) == 0 && (v29 & *(_QWORD *)(v9 + 40)) == 0 && *(__int64 *)(v9 + 8) > 0
      || (v4 & 0x200000) != 0 && ((v42 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    {
      goto LABEL_152;
    }
    v43 = MiTradeTransitionPage(v9, v4, (__int64)&v75);
    if ( v43 == 3 )
    {
      if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
        goto LABEL_129;
      if ( !v78 )
        goto LABEL_138;
      v59 = v9;
      goto LABEL_134;
    }
    if ( v43 != 2 )
      goto LABEL_130;
LABEL_77:
    v11 = MiLockPageInline(v9);
    v8 = v74;
  }
  if ( v26 == 2 )
  {
    if ( *(_WORD *)(v9 + 32) )
      goto LABEL_152;
    if ( !(unsigned int)MiReuseStandbyPage(v9) )
      goto LABEL_125;
    v38 = 1LL;
    v57 = 1;
    goto LABEL_127;
  }
  if ( v26 != 6
    || (*(_BYTE *)(v9 + 34) & 0x10) != 0
    || *(_WORD *)(v9 + 32) != 1
    || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2
    || (*(_BYTE *)v9 & 1) == 0 )
  {
    goto LABEL_152;
  }
  v42 = *(_BYTE *)(v9 + 35);
  v44 = (v42 & 8) == 0;
LABEL_86:
  if ( !v44 || (v4 & 0x200000) != 0 && ((v42 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9)) )
    goto LABEL_152;
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
  {
    if ( v28 == 2 || (v4 & 8) != 0 )
      goto LABEL_152;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v27);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && v11 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(v11);
    if ( (unsigned int)MiSwapStackPage(v6, v9, v41, *(_DWORD *)(a1 + 28), v4, &v75, &v70) )
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
  if ( (_BYTE)v72 == 2 || (v4 & 8) != 0 )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9) )
    v51 = MiTrimSharedPage(v50, v11, v4);
  else
    v51 = MiStealPage(v50, v11, v4, (_DWORD)v41, *(_DWORD *)(a1 + 28), (__int64)&v75);
  v52 = v51;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        v44 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
  }
  __writecr8(v11);
  if ( !v52 )
    goto LABEL_130;
  if ( v52 == 2 )
  {
    v40 = MiLockPageInline(v9);
    goto LABEL_119;
  }
  if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
  {
LABEL_129:
    MiLockAndInsertPageInFreeList(v9);
LABEL_130:
    v38 = 0LL;
    goto LABEL_131;
  }
LABEL_136:
  *(_QWORD *)(v9 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v9 + 16));
  v59 = v9;
  if ( v78 )
  {
LABEL_134:
    MiLockAndInsertPageInFreeList(v59);
    goto LABEL_138;
  }
  _InterlockedOr(v69, 0);
  MiSetPfnTbFlushStamp(v9, KiTbFlushTimeStamp, 0);
LABEL_138:
  v38 = 1LL;
  MiAddMdlPageToTradeBlock(a1, v5, 1);
LABEL_131:
  result = v38;
  *(_QWORD *)(a1 + 40) = v75;
  return result;
}
