/*
 * XREFs of MiGetLargePage @ 0x140267060
 * Callers:
 *     MiGetLargePagesDemoteAsNeeded @ 0x1402662A0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiResolvePrivateZeroFault @ 0x1403219B0 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiInsertDemotedPages @ 0x140268654 (MiInsertDemotedPages.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiWakeLargePageWaiters @ 0x1405B05A0 (MiWakeLargePageWaiters.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  int v8; // r15d
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  BOOL v15; // esi
  int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v22; // r13d
  __int64 v23; // rdi
  _DWORD *v24; // r15
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-100h]
  __int64 v36; // [rsp+68h] [rbp-F0h]
  _DWORD v37[36]; // [rsp+80h] [rbp-D8h] BYREF

  v8 = a2;
  v10 = a4;
  memset(v37, 0, 0x8CuLL);
  v36 = 24512 * v10 + *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v36 + 22608) && (MiFlags & 0x30) != 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a3 + 1;
  while ( 1 )
  {
    v12 = MiUnlinkNodeLargePages(a1, v8, --v11, 1, v10, 4, a5, a6 | 0x82u, 0LL);
    v13 = v12;
    if ( v12 )
      break;
    v8 = a2;
    if ( !v11 )
      return 0LL;
  }
  v14 = *(_QWORD *)(v12 + 16);
  v15 = (v14 & 0x3E0) != 0;
  if ( qword_140C50780 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C50780;
  if ( HIDWORD(v14) != 4294967293 || (v16 = 1, (HvlEnlightenments & 0x200000) == 0) )
    v16 = 0;
  if ( v11 == a3 )
  {
    v17 = *(_QWORD *)(a1 + 16) + 24512 * v10;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v17 + 22848));
    v18 = *(_QWORD *)(v17 + 22792);
    --*(_DWORD *)(v17 + 22788);
    *(_QWORD *)(v17 + 22792) = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 22848));
    if ( v18 )
      MiWakeLargePageWaiters(v18);
    v22 = a3;
    v23 = v13;
  }
  else
  {
    v22 = a3;
    v23 = v13 + 48 * MiLargePageSizes[a3] * (a2 % (MiLargePageSizes[v11] << 12) / (MiLargePageSizes[a3] << 12));
    MiInsertDemotedPages(v36, v13, v11, a3, v23);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = -1LL << (CurrentIrql + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)v19;
        v29 = (v28 & SchedulerAssist[5]) == 0;
        v20 = (unsigned int)v28 & SchedulerAssist[5];
        SchedulerAssist[5] = v20;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v15 && (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4));
  v24 = v37;
  if ( v16 )
  {
    if ( !a7 )
    {
      v37[0] = 1;
      v37[2] = 16;
    }
    v24 = v37;
    if ( a7 )
      v24 = a7;
    if ( (unsigned int)MiAddPageToHeatRanges(v24, 0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), v22) )
      MiNotifyPageHeat(v24, v30, v31, v32);
    if ( v24[1] && v24 == v37 )
      MiNotifyPageHeat(v24, v30, v31, v32);
    *(_QWORD *)(v23 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v23 + 16), 0LL);
  }
  if ( v15 )
  {
    if ( v24[1] )
      MiNotifyPageHeat(v24, v19, v20, SchedulerAssist);
    if ( v11 == 3 )
      MiZeroPhysicalPage(0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), 0, a5);
    else
      MiZeroLargePage(v23, v22, a5);
    *(_QWORD *)(v23 + 16) = ZeroPte;
  }
  return v23;
}
