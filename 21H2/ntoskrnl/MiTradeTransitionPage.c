/*
 * XREFs of MiTradeTransitionPage @ 0x140259688
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 * Callees:
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(ULONG_PTR a1, unsigned __int8 a2, __int64 a3, int a4, int a5, __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // ebp
  int PfnChannel; // eax
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 Page; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // r8
  int IsPfnFromSlabAllocation; // eax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v25; // r15d
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // edx
  _DWORD *v38; // r9
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  __int64 v43; // [rsp+50h] [rbp+8h]

  v6 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)((__int64 (*)(void))MiCanPageMove)() && !(unsigned int)MiIsPfnFromSlabAllocation(a1) )
    {
      v9 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
      v43 = v9;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v30 = (v34 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v34;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v10 = (__int64)(a1 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 8);
        PfnChannel = MiGetPfnChannel(a1);
        v13 = 128LL;
        v14 = (PfnChannel << byte_140C4DECD) | dword_140C4DF38 & v10 | (v11 << byte_140C4DECC);
        if ( (a5 & 0x3000000) != 0 )
          v13 = 65664LL;
      }
      else
      {
        v13 = 48LL;
        v14 = dword_140C4DF38 & v10 | a4 & ~dword_140C4DF38;
      }
      Page = MiGetPage(v9, v14, v13);
      v16 = Page;
      if ( Page == -1 )
        return 1LL;
      v17 = 48 * Page - 0x58000000000LL;
      v19 = (unsigned __int8)MiLockPageInline(a1);
      if ( v17 == a1 )
      {
        v16 = -1LL;
LABEL_19:
        *(_QWORD *)(a1 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(a1 + 16, v18);
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v42 = v40->SchedulerAssist;
              v30 = (v41 & v42[5]) == 0;
              v42[5] &= v41;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
        }
        __writecr8(v19);
        if ( a6 )
          *a6 = v16;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || (unsigned int)MiIsPfnFileOnly(a1, v18, v20) == 1 )
      {
        v23 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
        v23 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(a1 + 32)
          && v43 == *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(a1, v22, 0LL) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(a1);
            goto LABEL_19;
          }
          v25 = 2;
          goto LABEL_24;
        }
      }
      v25 = v23;
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v38 = v36->SchedulerAssist;
            v30 = (v37 & v38[5]) == 0;
            v38[5] &= v37;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v19);
      MiReleaseFreshPage(v17);
      return v25;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
