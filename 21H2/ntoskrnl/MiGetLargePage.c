/*
 * XREFs of MiGetLargePage @ 0x140303A34
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140210120 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1405522C0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x140555970 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInsertDemotedPages @ 0x1402918D0 (MiInsertDemotedPages.c)
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140303120 (MiIsFreeZeroPfnCold.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1490 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetFreeZeroLargePages @ 0x1403F6914 (MiGetFreeZeroLargePages.c)
 *     MiLargePageMovesComplete @ 0x1403F6D20 (MiLargePageMovesComplete.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiArePageContentsZero @ 0x14054EBC8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055FDC4 (MiNotifyPageHeat.c)
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
  __int64 v19; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  _DWORD *v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // r9
  unsigned int v29; // [rsp+44h] [rbp-104h] BYREF
  BOOL v30; // [rsp+48h] [rbp-100h]
  __int64 v31; // [rsp+50h] [rbp-F8h]
  _DWORD v32[36]; // [rsp+60h] [rbp-E8h] BYREF

  v7 = a4;
  v31 = a6;
  v29 = a4;
  memset(v32, 0, sizeof(v32));
  v9 = v7 >> byte_140C4DE8C;
  v10 = *(_QWORD *)(a1 + 16) + 4544LL * (v7 >> byte_140C4DE8C);
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
    v7 = v29;
    if ( !v12 )
      return 0LL;
  }
  v16 = (*(_DWORD *)(FreeZeroLargePages + 16) & 0x3E0LL) != 0;
  v30 = v16;
  if ( v12 == a2 )
  {
    MiLargePageMovesComplete(a1, v9);
  }
  else
  {
    MiInsertDemotedPages(v10, FreeZeroLargePages, v12, a2, FreeZeroLargePages);
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29, v17, v18, v19);
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
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v16 && (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero((v14 + 0x58000000000LL) / 48);
  v25 = v32;
  LOBYTE(v26) = MiIsFreeZeroPfnCold(v14);
  if ( v26 && (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v31 )
    {
      v25 = (_DWORD *)v31;
    }
    else
    {
      v32[0] = 1;
      v32[2] = 16;
    }
    MiAddPageToHeatList(v25, (v14 + 0x58000000000LL) / 48, a2);
    if ( v25[1] && v25 == v32 )
      MiNotifyPageHeat(v25);
    MiSetFreeZeroPfnCold(v14, 0LL);
  }
  if ( v30 )
  {
    if ( v25[1] )
      MiNotifyPageHeat(v25);
    if ( v12 == 3 )
      MiZeroPhysicalPage((v14 + 0x58000000000LL) / 48, 0, a3, v27);
    else
      MiZeroLargePage(v14, a2);
    *(_QWORD *)(v14 + 16) = ZeroPte;
  }
  return v14;
}
