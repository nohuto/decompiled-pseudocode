/*
 * XREFs of MiConvertEntireLargePageToSmall @ 0x1403F5C28
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F41AC (MiUpdateLargePageSectionPfns.c)
 *     MiPrefetchPreallocatePages @ 0x140539860 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiCreateKernelHalSlabRange @ 0x140A506A0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiConvertEntireLargePageToSmall(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 SchedulerAssist,
        __int64 a5,
        _QWORD *a6)
{
  int v6; // r12d
  __int64 v8; // r10
  _QWORD *v9; // r15
  int v10; // r11d
  __int64 v11; // rbx
  __int16 v12; // si
  __int64 v13; // rdx
  ULONG_PTR v14; // rbp
  unsigned __int8 CurrentIrql; // di
  LOGICAL ShouldYieldProcessor; // eax
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // [rsp+60h] [rbp+8h]
  int v26; // [rsp+68h] [rbp+10h] BYREF
  BOOL v27; // [rsp+70h] [rbp+18h]

  v6 = a3;
  v8 = MiLargePageSizes[a2];
  v9 = a6;
  v10 = 0;
  v11 = a1 + 48 * v8;
  v12 = 0;
  v13 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v14 = v8 + (a1 + 0x58000000000LL) / 48;
  v25 = 0xFFFFFFFFFLL;
  v27 = (int)SchedulerAssist <= 1;
  if ( (_DWORD)a3 == 1 )
  {
    SchedulerAssist = (unsigned int)-(int)SchedulerAssist;
    v12 = ((_DWORD)SchedulerAssist != 0) + 513;
    if ( a6 )
      *a6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v13 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v13 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = a3;
  }
  do
  {
    v11 -= 48LL;
    v26 = v10;
    --v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v26, v13, a3, SchedulerAssist);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      v9 = a6;
    }
    MiConvertLargePfnToSmall(a1, v11, a3, v27);
    v10 = 0;
    if ( v6 )
    {
      v13 = 1LL;
      if ( v6 == 1 )
      {
        if ( v11 == a5 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)(v11 + 8) |= 0x8000000000000000uLL;
          *(_QWORD *)(v11 + 16) = ZeroPte;
          if ( (v12 & 1) != 0 )
          {
            if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
            {
              MiArePageContentsZero(v14);
LABEL_28:
              v10 = 0;
            }
          }
          else
          {
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v11 + 16));
          }
        }
        else if ( *(_WORD *)(v11 + 32) )
        {
          if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
            *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
          *(_BYTE *)(v11 + 34) |= 7u;
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(v14, v12);
          v10 = 0;
          if ( v9 )
            ++*v9;
        }
      }
      else if ( v6 == 2 )
      {
        *(_QWORD *)(v11 + 16) = ZeroPte;
        *(_QWORD *)v11 = 0LL;
        MiSetPfnBlink(v11, v25, 1);
        v25 = v14;
        goto LABEL_28;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v14 & 0xF) == 0 && CurrentIrql < 2u )
    {
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v10 = 0;
      if ( ShouldYieldProcessor )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = -1LL << (CurrentIrql + 1);
            SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)v13;
            v19 = (v18 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            a3 = (unsigned int)v18 & *(_DWORD *)(SchedulerAssist + 20);
            *(_DWORD *)(SchedulerAssist + 20) = a3;
            if ( v19 )
            {
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v10 = 0;
            }
          }
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          v13 = (-1LL << (CurrentIrql + 1)) & 4;
          a3 = (unsigned int)v13 | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = a3;
        }
      }
    }
  }
  while ( v11 != a1 );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
