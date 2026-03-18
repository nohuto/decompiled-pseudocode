/*
 * XREFs of MiTradePage @ 0x140224F90
 * Callers:
 *     MiClaimPhysicalRun @ 0x140224DD8 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiPfnLargeBitSet @ 0x140226A50 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x140226AB0 (MiActivePageClaimCandidate.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiTrimSharedPage @ 0x1403206B4 (MiTrimSharedPage.c)
 *     MiDrainZeroLookasides @ 0x140344FD0 (MiDrainZeroLookasides.c)
 *     MiAddMdlPageToTradeBlock @ 0x14034F394 (MiAddMdlPageToTradeBlock.c)
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140353CC8 (MiDemoteLargeFreePage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B450C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F0A84 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 *     MiReuseStandbyPage @ 0x14054BEC0 (MiReuseStandbyPage.c)
 *     MiLargePageMovesInProgress @ 0x1405516A4 (MiLargePageMovesInProgress.c)
 */

__int64 __fastcall MiTradePage(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r15d
  ULONG_PTR v3; // r13
  __int64 v4; // r14
  __int64 v6; // r11
  ULONG_PTR v7; // rbx
  __int64 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // di
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 BaseResidentPage; // rax
  __int64 v16; // rdx
  unsigned int PfnPageSizeIndex; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // esi
  unsigned int v21; // esi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r11
  _DWORD *v24; // r10
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  char v29; // r10
  __int64 v30; // r11
  __int64 v31; // r14
  unsigned __int64 v32; // rsi
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  int v37; // edi
  unsigned __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // r8
  unsigned __int8 v41; // al
  int v42; // ebp
  char v43; // cl
  int v44; // eax
  bool v45; // zf
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 active; // rax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // esi
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  __int64 v58; // r8
  __int64 result; // rax
  ULONG_PTR v60; // rcx
  __int64 v61; // rsi
  unsigned __int8 v62; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v64; // r8
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // edx
  signed __int32 v70[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v71; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v72; // [rsp+44h] [rbp-84h]
  __int64 v73; // [rsp+48h] [rbp-80h]
  __int64 v74; // [rsp+50h] [rbp-78h]
  __int64 v75; // [rsp+58h] [rbp-70h]
  __int64 v76; // [rsp+60h] [rbp-68h] BYREF
  ULONG_PTR v77; // [rsp+68h] [rbp-60h]
  __int64 v78; // [rsp+70h] [rbp-58h]
  int v79; // [rsp+D0h] [rbp+8h]
  int v80; // [rsp+D8h] [rbp+10h] BYREF
  int v81; // [rsp+E0h] [rbp+18h]
  int v82; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 6);
  v3 = a2;
  v4 = *a1;
  v78 = a1[1];
  v72 = *((_DWORD *)a1 + 8);
  v71 = 0;
  v79 = v2 & 0x400000;
  v80 = 0;
  a1[6] = 0LL;
  v74 = v4;
  if ( (v2 & 0x400000) != 0 )
    v81 = *((_DWORD *)a1 + 7);
  else
    v81 = -1;
  v77 = 0LL;
  v6 = 48 * a2;
  v75 = 48 * a2;
  v76 = -1LL;
  v7 = 48 * a2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v73 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= a2;
  }
  v82 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v82, a2);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v73;
    v6 = v75;
  }
  v10 = CurrentIrql;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v3 > 0xFFFFFFFFFLL || (*(_QWORD *)(v6 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
          goto LABEL_154;
        v12 = *(_QWORD *)(v7 + 40);
        if ( *(_QWORD *)(qword_140C4E448 + 8 * ((v12 >> 39) & 0x3FF)) != v4 )
        {
          v61 = (unsigned int)MiPfnLargeBitSet(&MiSystemPartition, v3, 0x4000000000000LL, 0x7FFFFFFFFFFFFFFFLL);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && v10 <= 0xFu && v62 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v64 = CurrentPrcb->SchedulerAssist;
                v65 = ~(unsigned __int16)(-1LL << (v10 + 1));
                v45 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v45 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v10);
          v39 = 0LL;
          if ( (_DWORD)v61 != -1 )
            a1[6] = MiLargePageSizes[v61];
          goto LABEL_133;
        }
        v13 = *(_BYTE *)(v7 + 34) & 7;
        v14 = -1;
        if ( (v12 & 0x1000000000LL) != 0 )
        {
          BaseResidentPage = MiGetBaseResidentPage(v7, v12);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(
                               BaseResidentPage,
                               v16,
                               *(_BYTE *)(BaseResidentPage + 34) & 7,
                               BaseResidentPage);
          v14 = PfnPageSizeIndex;
          if ( v18 != v7 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v13 == 6 )
          {
            a1[6] = MiLargePageSizes[PfnPageSizeIndex];
LABEL_154:
            v39 = 0LL;
LABEL_155:
            if ( v10 != 17 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v66 = KeGetCurrentIrql();
                  if ( v66 <= 0xFu && v10 <= 0xFu && v66 >= 2u )
                  {
                    v67 = KeGetCurrentPrcb();
                    v68 = v67->SchedulerAssist;
                    v69 = ~(unsigned __int16)(-1LL << (v10 + 1));
                    v45 = (v69 & v68[5]) == 0;
                    v68[5] &= v69;
                    if ( v45 )
                      KiRemoveSystemWorkPriorityKick(v67);
                  }
                }
              }
              __writecr8(v10);
            }
            goto LABEL_133;
          }
          v11 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( (_DWORD)v13 != 5 )
          break;
        if ( (unsigned int)MiIsPageOnBadList(v7, v12, v13, 0x7FFFFFFFFFFFFFFFLL) )
          goto LABEL_154;
        if ( v14 != -1 )
        {
          v13 = 1LL;
          break;
        }
        if ( !(unsigned int)MiInvalidPteConforms(*(_QWORD *)(v7 + 16)) )
          goto LABEL_154;
        if ( qword_140C4DD40 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DD40;
        }
        if ( HIDWORD(v19) != 4294967294 || v77 == v7 )
          goto LABEL_154;
        v20 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(v7 + 0x58000000000LL) / 48) + 8);
        v21 = ((unsigned int)MiGetPfnChannel(v7) << byte_140C4DC8D) | dword_140C4DCF8 & v3 | (v20 << byte_140C4DC8C);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && v10 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = v23->SchedulerAssist;
              v25 = ~(unsigned __int16)(-1LL << (v10 + 1));
              v45 = (v25 & v24[5]) == 0;
              v24[5] &= v25;
              if ( v45 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
        }
        __writecr8(v10);
        MiDrainZeroLookasides(v4, v7, a1[2], v21);
        v77 = v7;
        MiLockPageInline(v7);
        v6 = v75;
      }
      if ( (unsigned int)MiIsPfnFileOnly(v7, v12, v13, v11) == 1 || (unsigned int)MiIsPfnFromSlabAllocation(v7) )
        goto LABEL_154;
      if ( (unsigned int)v27 > 1 )
        break;
      if ( v14 == -1 )
      {
        if ( !v79 && !(unsigned int)MiUnlinkFreeOrZeroedPage(v3) )
        {
LABEL_127:
          MiReturnFreeZeroPage(v7, 0LL);
          goto LABEL_154;
        }
        v39 = 1LL;
        v58 = 0LL;
LABEL_129:
        MiAddMdlPageToTradeBlock(a1, v3, v58);
        goto LABEL_155;
      }
      v31 = v14;
      v32 = MiLargePageSizes[v14];
      if ( (v2 & 0x2000000) != 0 && v32 >= 0x200 || (v2 & 0x1000000) != 0 && v32 == 16 )
        goto LABEL_154;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v28);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && v10 <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v45 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(v10);
      if ( v79 || v3 != (v3 & ~(v32 - 1)) || a1[2] < v32 )
      {
        v37 = v74;
      }
      else
      {
        v37 = v74;
        v38 = v32 + v3 - 1;
        if ( v38 <= a1[7] && (unsigned int)MiLargeFreePageToMdl(v74, v38, v14, a1[8], v2) == 1 )
        {
          v39 = v32;
          if ( a1[8] && (unsigned int)MiPfnZeroingNeeded(v7, v72) )
            *(_QWORD *)(v40 + 24) = 1LL;
          goto LABEL_133;
        }
      }
      if ( !(unsigned int)MiDemoteLargeFreePage(v37, v3, v14, v2, (__int64)&v80) && !v80 )
      {
        v39 = 0LL;
        if ( !(unsigned int)MiLargePageMovesInProgress(v7) )
          a1[6] = MiLargePageSizes[v31];
        goto LABEL_133;
      }
      v41 = MiLockPageInline(v7);
      v4 = v74;
LABEL_121:
      v10 = v41;
      v6 = v75;
    }
    v42 = v78;
    if ( !*(_QWORD *)(v78 + 16) )
      break;
    v43 = *(_BYTE *)(v7 + 35);
    if ( v43 < 0 )
      break;
    if ( (unsigned int)v27 > 4 )
    {
      v45 = (_DWORD)v27 == 6;
      goto LABEL_88;
    }
    if ( (v2 & 0x4000000) == 0 && (v30 & *(_QWORD *)(v7 + 40)) == 0 && *(__int64 *)(v7 + 8) > 0
      || (v2 & 0x200000) != 0 && ((v43 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v7, v26, v27, v28)) )
    {
      goto LABEL_154;
    }
    v44 = MiTradeTransitionPage(v7, v2, (__int64)&v76);
    if ( v44 == 3 )
    {
      if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL)) != v4 )
        goto LABEL_131;
      if ( !v79 )
        goto LABEL_140;
      v60 = v7;
      goto LABEL_136;
    }
    if ( v44 != 2 )
      goto LABEL_132;
LABEL_79:
    v10 = MiLockPageInline(v7);
    v6 = v75;
  }
  if ( (_DWORD)v27 == 2 )
  {
    if ( *(_WORD *)(v7 + 32) )
      goto LABEL_154;
    if ( !(unsigned int)MiReuseStandbyPage(v7) )
      goto LABEL_127;
    v39 = 1LL;
    v58 = 1LL;
    goto LABEL_129;
  }
  if ( (_DWORD)v27 != 6
    || (*(_BYTE *)(v7 + 34) & 0x10) != 0
    || *(_WORD *)(v7 + 32) != 1
    || ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2
    || (*(_BYTE *)v7 & 1) == 0 )
  {
    goto LABEL_154;
  }
  v43 = *(_BYTE *)(v7 + 35);
  v45 = (v43 & 8) == 0;
LABEL_88:
  if ( !v45 || (v2 & 0x200000) != 0 && ((v43 & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v7, v26, v27, v28)) )
    goto LABEL_154;
  if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
  {
    if ( v29 == 2 || (v2 & 8) != 0 )
      goto LABEL_154;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v28);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && v10 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v45 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(v10);
    if ( (unsigned int)MiSwapStackPage(v4, v7, v42, *((_DWORD *)a1 + 7), v2, (__int64)&v76, (__int64)&v71) )
      goto LABEL_138;
    if ( ((*(_QWORD *)(v7 + 40) >> 60) & 7) == 2 )
      goto LABEL_132;
    goto LABEL_79;
  }
  active = MiActivePageClaimCandidate(v4, v7, 1LL);
  if ( active )
  {
    a1[6] = active;
    goto LABEL_154;
  }
  if ( (_BYTE)v73 == 2 || (v2 & 8) != 0 )
    goto LABEL_154;
  if ( (unsigned int)MI_PFN_IS_PROTO(v7) )
    v52 = MiTrimSharedPage(v51, v10, v2);
  else
    v52 = MiStealPage(v51, v10, v2, v42, *((_DWORD *)a1 + 7), (__int64)&v76);
  v53 = v52;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && v10 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v45 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(v10);
  if ( !v53 )
    goto LABEL_132;
  if ( v53 == 2 )
  {
    v41 = MiLockPageInline(v7);
    goto LABEL_121;
  }
  if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL)) != v4 )
  {
LABEL_131:
    MiLockAndInsertPageInFreeList(v7);
LABEL_132:
    v39 = 0LL;
    goto LABEL_133;
  }
LABEL_138:
  *(_QWORD *)(v7 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList();
  v60 = v7;
  if ( v79 )
  {
LABEL_136:
    MiLockAndInsertPageInFreeList(v60);
    goto LABEL_140;
  }
  _InterlockedOr(v70, 0);
  MiSetPfnTbFlushStamp(v7, (unsigned int)KiTbFlushTimeStamp, 0LL);
LABEL_140:
  v39 = 1LL;
  MiAddMdlPageToTradeBlock(a1, v3, 1LL);
LABEL_133:
  result = v39;
  a1[5] = v76;
  return result;
}
