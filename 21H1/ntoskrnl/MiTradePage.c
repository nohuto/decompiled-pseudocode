/*
 * XREFs of MiTradePage @ 0x14027DFE0
 * Callers:
 *     MiClaimPhysicalRun @ 0x14027DE28 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPfnLargeBitSet @ 0x14027FAA0 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiTrimSharedPage @ 0x1402CDD9C (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x1403071D0 (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x140311BA4 (MiAddMdlPageToTradeBlock.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140316150 (MiDemoteLargeFreePage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B270C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403EF724 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 *     MiReuseStandbyPage @ 0x14054B870 (MiReuseStandbyPage.c)
 *     MiLargePageMovesInProgress @ 0x140551054 (MiLargePageMovesInProgress.c)
 */

__int64 __fastcall MiTradePage(__int64 *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
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
  __int64 v16; // rdx
  unsigned int PfnPageSizeIndex; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // esi
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r11
  _DWORD *v26; // r10
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  char v33; // r10
  __int64 v34; // r11
  __int64 v35; // r14
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  int v41; // edi
  unsigned __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int8 v47; // al
  int v48; // ebp
  char v49; // cl
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  bool v53; // zf
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  __int64 active; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // esi
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  __int64 v70; // r8
  __int64 result; // rax
  __int64 v72; // rcx
  __int64 v73; // rsi
  unsigned __int8 v74; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v76; // r8
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // edx
  signed __int32 v82[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v83; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v84; // [rsp+44h] [rbp-84h]
  __int64 v85; // [rsp+48h] [rbp-80h]
  __int64 v86; // [rsp+50h] [rbp-78h]
  __int64 v87; // [rsp+58h] [rbp-70h]
  __int64 v88; // [rsp+60h] [rbp-68h] BYREF
  __int64 v89; // [rsp+68h] [rbp-60h]
  __int64 v90; // [rsp+70h] [rbp-58h]
  int v91; // [rsp+D0h] [rbp+8h]
  int v92; // [rsp+D8h] [rbp+10h] BYREF
  int v93; // [rsp+E0h] [rbp+18h]
  int v94; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = a2;
  v6 = *a1;
  v90 = a1[1];
  v84 = *((_DWORD *)a1 + 8);
  v83 = 0;
  v91 = v4 & 0x400000;
  v92 = 0;
  a1[6] = 0LL;
  v86 = v6;
  if ( (v4 & 0x400000) != 0 )
    v93 = *((_DWORD *)a1 + 7);
  else
    v93 = -1;
  v89 = 0LL;
  v8 = 48 * a2;
  v87 = 48 * a2;
  v88 = -1LL;
  v9 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v85 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v94 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v94, a2, a3, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v85;
    v8 = v87;
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
        if ( *(_QWORD *)(qword_140C4E588 + 8 * ((v12 >> 39) & 0x3FF)) != v6 )
        {
          v73 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, v5, 0x4000000000000LL, 0x7FFFFFFFFFFFFFFFLL);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v74 = KeGetCurrentIrql();
              if ( v74 <= 0xFu && v11 <= 0xFu && v74 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v76 = CurrentPrcb->SchedulerAssist;
                v77 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v53 = (v77 & v76[5]) == 0;
                v76[5] &= v77;
                if ( v53 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v11);
          v43 = 0LL;
          if ( (_DWORD)v73 != -1 )
            a1[6] = MiLargePageSizes[v73];
          goto LABEL_131;
        }
        v13 = *(_BYTE *)(v9 + 34) & 7;
        v14 = -1;
        if ( (v12 & 0x1000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v9, v12, v13);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(
                               BaseResidentPage,
                               v16,
                               *(_BYTE *)(BaseResidentPage + 34) & 7,
                               BaseResidentPage);
          v14 = PfnPageSizeIndex;
          if ( v18 != v9 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v13 == 6 )
          {
            a1[6] = MiLargePageSizes[PfnPageSizeIndex];
LABEL_152:
            v43 = 0LL;
LABEL_153:
            if ( v11 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v78 = KeGetCurrentIrql();
                  if ( v78 <= 0xFu && v11 <= 0xFu && v78 >= 2u )
                  {
                    v79 = KeGetCurrentPrcb();
                    v80 = v79->SchedulerAssist;
                    v81 = ~(unsigned __int16)(-1LL << (v11 + 1));
                    v53 = (v81 & v80[5]) == 0;
                    v80[5] &= v81;
                    if ( v53 )
                      KiRemoveSystemWorkPriorityKick(v79);
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
        if ( (unsigned int)MiIsPageOnBadList(v9, v12, v13, 0x7FFFFFFFFFFFFFFFLL) )
          goto LABEL_152;
        if ( v14 != -1 )
          break;
        if ( !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v9 + 16)) )
          goto LABEL_152;
        if ( qword_140C4DE80 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DE80;
        }
        if ( HIDWORD(v19) != 4294967294 || v89 == v9 )
          goto LABEL_152;
        v20 = *(_DWORD *)(MiSearchNumaNodeTable((v9 + 0x58000000000LL) / 48) + 8);
        v23 = ((unsigned int)MiGetPfnChannel(v9, v21, v22) << byte_140C4DDCD) | dword_140C4DE38 & v5 | (v20 << byte_140C4DDCC);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && v11 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (v11 + 1));
              v53 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
        }
        __writecr8(v11);
        MiDrainZeroLookasides(v6, v9, a1[2], v23);
        v89 = v9;
        MiLockPageInline(v9, v28, v29);
        v8 = v87;
      }
      if ( MiIsPfnFileOnly(v9) || (unsigned int)MiIsPfnFromSlabAllocation(v9) )
        goto LABEL_152;
      if ( (unsigned int)v31 > 1 )
        break;
      if ( v14 == -1 )
      {
        if ( !v91 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v5) )
        {
LABEL_125:
          MiReturnFreeZeroPage(v9, 0LL);
          goto LABEL_152;
        }
        v43 = 1LL;
        v70 = 0LL;
LABEL_127:
        MiAddMdlPageToTradeBlock(a1, v5, v70);
        goto LABEL_153;
      }
      v35 = v14;
      v36 = MiLargePageSizes[v14];
      if ( (v4 & 0x2000000) != 0 && v36 >= 0x200 || (v4 & 0x1000000) != 0 && v36 == 16 )
        goto LABEL_152;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v32);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && v11 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v53 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(v11);
      if ( v91 || v5 != (v5 & ~(v36 - 1)) || a1[2] < v36 )
      {
        v41 = v86;
      }
      else
      {
        v41 = v86;
        v42 = v36 + v5 - 1;
        if ( v42 <= a1[7] && (unsigned int)MiLargeFreePageToMdl(v86, v42, v14, a1[8], v4) == 1 )
        {
          v43 = v36;
          if ( a1[8] && (unsigned int)MiPfnZeroingNeeded(v9, v84) )
            *(_QWORD *)(v44 + 24) = 1LL;
          goto LABEL_131;
        }
      }
      if ( !(unsigned int)MiDemoteLargeFreePage(v41, v5, v14, v4, (__int64)&v92) && !v92 )
      {
        v43 = 0LL;
        if ( !(unsigned int)MiLargePageMovesInProgress(v9) )
          a1[6] = MiLargePageSizes[v35];
        goto LABEL_131;
      }
      v47 = MiLockPageInline(v9, v45, v46);
      v6 = v86;
LABEL_119:
      v11 = v47;
      v8 = v87;
    }
    v48 = v90;
    if ( !*(_QWORD *)(v90 + 16) )
      break;
    v49 = *(_BYTE *)(v9 + 35);
    if ( v49 < 0 )
      break;
    if ( (unsigned int)v31 > 4 )
    {
      v53 = (_DWORD)v31 == 6;
      goto LABEL_86;
    }
    if ( (v4 & 0x4000000) == 0 && (v34 & *(_QWORD *)(v9 + 40)) == 0 && *(__int64 *)(v9 + 8) > 0
      || (v4 & 0x200000) != 0 && ((v49 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9, v30, v31, v32)) )
    {
      goto LABEL_152;
    }
    v50 = MiTradeTransitionPage(v9, v4, (__int64)&v88);
    if ( v50 == 3 )
    {
      if ( *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
        goto LABEL_129;
      if ( !v91 )
        goto LABEL_138;
      v72 = v9;
      goto LABEL_134;
    }
    if ( v50 != 2 )
      goto LABEL_130;
LABEL_77:
    v11 = MiLockPageInline(v9, v51, v52);
    v8 = v87;
  }
  if ( (_DWORD)v31 == 2 )
  {
    if ( *(_WORD *)(v9 + 32) )
      goto LABEL_152;
    if ( !(unsigned int)MiReuseStandbyPage(v9) )
      goto LABEL_125;
    v43 = 1LL;
    v70 = 1LL;
    goto LABEL_127;
  }
  if ( (_DWORD)v31 != 6
    || (*(_BYTE *)(v9 + 34) & 0x10) != 0
    || *(_WORD *)(v9 + 32) != 1
    || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2
    || (*(_BYTE *)v9 & 1) == 0 )
  {
    goto LABEL_152;
  }
  v49 = *(_BYTE *)(v9 + 35);
  v53 = (v49 & 8) == 0;
LABEL_86:
  if ( !v53 || (v4 & 0x200000) != 0 && ((v49 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v9, v30, v31, v32)) )
    goto LABEL_152;
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
  {
    if ( v33 == 2 || (v4 & 8) != 0 )
      goto LABEL_152;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), v32);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && v11 <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v57 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v53 = (v57 & v56[5]) == 0;
          v56[5] &= v57;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v55);
        }
      }
    }
    __writecr8(v11);
    if ( (unsigned int)MiSwapStackPage(v6, v9, v48, *((_DWORD *)a1 + 7), v4, (__int64)&v88, (__int64)&v83) )
      goto LABEL_136;
    if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
      goto LABEL_130;
    goto LABEL_77;
  }
  active = MiActivePageClaimCandidate(v6, v9, 1LL);
  if ( active )
  {
    a1[6] = active;
    goto LABEL_152;
  }
  if ( (_BYTE)v85 == 2 || (v4 & 8) != 0 )
    goto LABEL_152;
  if ( (unsigned int)MI_PFN_IS_PROTO(v9, v59, v60) )
    v62 = MiTrimSharedPage(v61, v11, v4);
  else
    v62 = MiStealPage(v61, v11, v4, v48, *((_DWORD *)a1 + 7), (__int64)&v88);
  v65 = v62;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && v11 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v63 = -1LL << (v11 + 1);
        v68 = v67->SchedulerAssist;
        v69 = ~(unsigned __int16)v63;
        v53 = (v69 & v68[5]) == 0;
        v64 = (unsigned int)v69 & v68[5];
        v68[5] = v64;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
  }
  __writecr8(v11);
  if ( !v65 )
    goto LABEL_130;
  if ( v65 == 2 )
  {
    v47 = MiLockPageInline(v9, v63, v64);
    goto LABEL_119;
  }
  if ( *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) != v6 )
  {
LABEL_129:
    MiLockAndInsertPageInFreeList(v9);
LABEL_130:
    v43 = 0LL;
    goto LABEL_131;
  }
LABEL_136:
  *(_QWORD *)(v9 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v9 + 16));
  v72 = v9;
  if ( v91 )
  {
LABEL_134:
    MiLockAndInsertPageInFreeList(v72);
    goto LABEL_138;
  }
  _InterlockedOr(v82, 0);
  MiSetPfnTbFlushStamp(v9, KiTbFlushTimeStamp, 0);
LABEL_138:
  v43 = 1LL;
  MiAddMdlPageToTradeBlock(a1, v5, 1LL);
LABEL_131:
  result = v43;
  a1[5] = v88;
  return result;
}
