/*
 * XREFs of MiGetLargePage @ 0x1403490A0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EE860 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiInsertDemotedPages @ 0x140345820 (MiInsertDemotedPages.c)
 *     MiIsFreeZeroPfnCold @ 0x14034B978 (MiIsFreeZeroPfnCold.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AEFC0 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetFreeZeroLargePages @ 0x1403EF904 (MiGetFreeZeroLargePages.c)
 *     MiLargePageMovesComplete @ 0x1403EFD10 (MiLargePageMovesComplete.c)
 *     MiAddPageToHeatList @ 0x1403F0C78 (MiAddPageToHeatList.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePage(__int64 a1, unsigned int a2, int a3, unsigned int a4, int a5, __int64 a6)
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
  unsigned int v27; // [rsp+44h] [rbp-104h] BYREF
  BOOL v28; // [rsp+48h] [rbp-100h]
  __int64 v29; // [rsp+50h] [rbp-F8h]
  _DWORD v30[36]; // [rsp+60h] [rbp-E8h] BYREF

  v7 = a4;
  v29 = a6;
  v27 = a4;
  memset(v30, 0, sizeof(v30));
  v9 = v7 >> byte_140C4DDCC;
  v10 = *(_QWORD *)(a1 + 16) + 4544LL * (v7 >> byte_140C4DDCC);
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
    v7 = v27;
    if ( !v12 )
      return 0LL;
  }
  v16 = (*(_DWORD *)(FreeZeroLargePages + 16) & 0x3E0LL) != 0;
  v28 = v16;
  if ( v12 == a2 )
  {
    MiLargePageMovesComplete(a1, v9);
  }
  else
  {
    MiInsertDemotedPages(v10, FreeZeroLargePages, v12, a2, FreeZeroLargePages);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27, v17, v18, SchedulerAssist);
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
  if ( !v16 && (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero((v14 + 0x58000000000LL) / 48);
  v25 = v30;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v14, v24, v18, SchedulerAssist) && (HvlEnlightenments & 0x200000) != 0 )
  {
    if ( v29 )
    {
      v25 = (_DWORD *)v29;
    }
    else
    {
      v30[0] = 1;
      v30[2] = 16;
    }
    MiAddPageToHeatList(v25, (v14 + 0x58000000000LL) / 48, a2);
    if ( v25[1] && v25 == v30 )
      MiNotifyPageHeat(v25);
    MiSetFreeZeroPfnCold(v14, 0LL);
  }
  if ( v28 )
  {
    if ( v25[1] )
      MiNotifyPageHeat(v25);
    if ( v12 == 3 )
      MiZeroPhysicalPage((v14 + 0x58000000000LL) / 48);
    else
      MiZeroLargePage(v14, a2);
    *(_QWORD *)(v14 + 16) = ZeroPte;
  }
  return v14;
}
