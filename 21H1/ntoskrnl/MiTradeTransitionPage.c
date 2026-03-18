/*
 * XREFs of MiTradeTransitionPage @ 0x14034C418
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // ebp
  int PfnChannel; // eax
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 Page; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  BOOL IsPfnFromSlabAllocation; // eax
  __int64 v24; // r8
  unsigned int v26; // r15d
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  __int64 v43; // [rsp+50h] [rbp+8h]

  v6 = (unsigned __int8)a2;
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2, a2) && !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      v9 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
      v43 = v9;
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v31 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2);
        PfnChannel = MiGetPfnChannel(BugCheckParameter2);
        v13 = 128LL;
        v14 = (PfnChannel << byte_140C4DDCD) | dword_140C4DE38 & v10 | (v11 << byte_140C4DDCC);
        if ( (a5 & 0x3000000) != 0 )
          v13 = 65664LL;
      }
      else
      {
        v13 = 48LL;
        v14 = dword_140C4DE38 & v10 | a4 & ~dword_140C4DE38;
      }
      Page = MiGetPage(v9, v14, v13);
      v19 = Page;
      if ( Page == -1 )
        return 1LL;
      v20 = 48 * Page - 0x58000000000LL;
      v22 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v16, v17, v18);
      if ( v20 == BugCheckParameter2 )
      {
        v19 = -1LL;
LABEL_19:
        *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v42 = v40->SchedulerAssist;
              v31 = (v41 & v42[5]) == 0;
              v42[5] &= v41;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
        }
        __writecr8(v22);
        if ( a6 )
          *a6 = v19;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || MiIsPfnFileOnly(BugCheckParameter2) )
      {
        v24 = 0LL;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
        v24 = 0LL;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(BugCheckParameter2 + 32)
          && v43 == *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(BugCheckParameter2, v21) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(BugCheckParameter2, v20, v24, a3);
            goto LABEL_19;
          }
          v26 = 2;
          goto LABEL_24;
        }
      }
      v26 = v24;
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v38 = v37->SchedulerAssist;
            v31 = ((unsigned int)v21 & v38[5]) == 0;
            v24 = (unsigned int)v21 & v38[5];
            v38[5] = v24;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v22);
      MiReleaseFreshPage(v20, v21, v24);
      return v26;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
