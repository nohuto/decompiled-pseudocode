/*
 * XREFs of MiGetLargePage @ 0x140319D60
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EFBC0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiPrefetchPreallocatePages @ 0x140534150 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiInsertDemotedPages @ 0x1403164E0 (MiInsertDemotedPages.c)
 *     MiIsFreeZeroPfnCold @ 0x14031C638 (MiIsFreeZeroPfnCold.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiSetFreeZeroPfnCold @ 0x1403A8BA0 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetFreeZeroLargePages @ 0x1403F0C64 (MiGetFreeZeroLargePages.c)
 *     MiLargePageMovesComplete @ 0x1403F1070 (MiLargePageMovesComplete.c)
 *     MiAddPageToHeatList @ 0x1403F1FD8 (MiAddPageToHeatList.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055A924 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  unsigned int v7; // esi
  unsigned int v9; // edi
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r12
  int v12; // ebp
  __int64 FreeZeroLargePages; // rax
  __int64 v14; // rsi
  BOOL v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdx
  _DWORD *v25; // rbx
  unsigned __int64 v26; // r9
  unsigned int v28; // [rsp+44h] [rbp-104h] BYREF
  BOOL v29; // [rsp+48h] [rbp-100h]
  __int64 v30; // [rsp+50h] [rbp-F8h]
  _DWORD v31[36]; // [rsp+60h] [rbp-E8h] BYREF

  v7 = a4;
  v30 = a6;
  v28 = a4;
  memset(v31, 0, sizeof(v31));
  v9 = v7 >> byte_140C4DC8C;
  v10 = *(_QWORD *)(a1 + 16) + 4544LL * (v7 >> byte_140C4DC8C);
  if ( !*(_QWORD *)(v10 + 4176) && (MiFlags & 0x30) != 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v12 = a2 + 1;
  while ( 1 )
  {
    FreeZeroLargePages = MiGetFreeZeroLargePages(a1, --v12, 1, a5 | 0x20u, v9, v7, 4, a3);
    v14 = FreeZeroLargePages;
    if ( FreeZeroLargePages )
      break;
    v7 = v28;
    if ( !v12 )
      return 0LL;
  }
  v16 = (*(_DWORD *)(FreeZeroLargePages + 16) & 0x3E0LL) != 0;
  v29 = v16;
  if ( v12 == a2 )
  {
    MiLargePageMovesComplete(a1, v9);
  }
  else
  {
    MiInsertDemotedPages(v10, FreeZeroLargePages, v12, a2, FreeZeroLargePages);
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28, v17, v18, SchedulerAssist);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        v18 = (unsigned int)v22 & *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v18;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v24 = (unsigned __int128)((v14 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  if ( !v16 && (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero((v14 + 0x58000000000LL) / 48);
  v25 = v31;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v14, v24, v18, SchedulerAssist) && (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v30 )
    {
      v25 = (_DWORD *)v30;
    }
    else
    {
      v31[0] = 1;
      v31[2] = 16;
    }
    MiAddPageToHeatList(v25, (v14 + 0x58000000000LL) / 48, a2);
    if ( v25[1] && v25 == v31 )
      MiNotifyPageHeat(v25);
    MiSetFreeZeroPfnCold(v14, 0LL);
  }
  if ( v29 )
  {
    if ( v25[1] )
      MiNotifyPageHeat(v25);
    if ( v12 == 3 )
      MiZeroPhysicalPage((v14 + 0x58000000000LL) / 48, 0, a3, v26);
    else
      MiZeroLargePage(v14, a2, a3);
    *(_QWORD *)(v14 + 16) = ZeroPte;
  }
  return v14;
}
