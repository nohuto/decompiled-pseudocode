/*
 * XREFs of MiProcessVaContiguityInformation @ 0x140552500
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1406BD8D0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiVadPagesTradable @ 0x14023A0D0 (MiVadPagesTradable.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiGetVadCacheAttribute @ 0x14055BFC0 (MiGetVadCacheAttribute.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x1408D192C (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // r15
  int v7; // ebx
  __int64 v8; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  signed __int32 v14; // ecx
  unsigned int v15; // r9d
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r10
  __int64 LargePage; // rax
  __int64 v19; // r8
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  struct _KPRCB *v25; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v27; // eax
  unsigned __int8 v28; // [rsp+30h] [rbp-30h]
  _DWORD *v29; // [rsp+38h] [rbp-28h]
  unsigned __int64 v30; // [rsp+40h] [rbp-20h]
  __int128 v31; // [rsp+48h] [rbp-18h] BYREF
  unsigned int VaRangePhysicallyContiguous; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 *v33; // [rsp+B8h] [rbp+58h]

  VaRangePhysicallyContiguous = 0;
  v4 = 0LL;
  v5 = 512LL;
  v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v33 = v6;
  v31 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C4E688 + 8LL * *((unsigned __int16 *)v6 + 87));
  if ( (int)MiAcquireNonPagedResources((ULONG_PTR *)v8, 0x200uLL, 1024LL, 6u) < 0 )
    return 3221225626LL;
  v10 = a1 + 16 * a2;
  if ( a1 >= v10 )
  {
LABEL_41:
    VaRangePhysicallyContiguous = 0;
    goto LABEL_42;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x1FFFFF) != 0
      || (v11 = *(_QWORD *)a1, (*(_QWORD *)a1 & 0xFFFFFFFFFFE00000uLL) != *(_QWORD *)a1) )
    {
      VaRangePhysicallyContiguous = -1073741811;
      goto LABEL_42;
    }
    if ( !v4 )
      goto LABEL_11;
    if ( v11 < (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12
      || v11 > (((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF) )
    {
      MiUnlockAndDereferenceVadShared((char *)v4);
      v4 = 0LL;
    }
    if ( !v4 )
    {
LABEL_11:
      v12 = MiObtainReferencedVadEx(*(_QWORD *)a1, 2, (int *)&VaRangePhysicallyContiguous);
      v4 = v12;
      if ( !v12 )
        goto LABEL_44;
      if ( *(_QWORD *)(a1 + 8) + *(_QWORD *)a1 - 1LL > (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF) )
      {
        VaRangePhysicallyContiguous = -1073741800;
        goto LABEL_42;
      }
      if ( !(unsigned int)MiVadSupportsPhysicalContiguityQuery(v12)
        || !(unsigned int)MiVadPagesTradable(v4)
        || (unsigned int)MiGetVadCacheAttribute() != 1
        || (v7 = (*(_DWORD *)(v4 + 48) >> 12) & 0x3F) == 0 )
      {
        VaRangePhysicallyContiguous = -1073741637;
        goto LABEL_42;
      }
    }
    MiInitializePageColorBase((__int64)v6, v7, (__int64)&v31);
    v13 = *(_QWORD *)a1;
    v30 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v30 )
      break;
LABEL_35:
    a1 += 16LL;
    if ( a1 >= v10 )
      goto LABEL_41;
    v6 = v33;
  }
  while ( (unsigned int)MiQueryVaPhysicalContiguity((__int64)v33, v13, 1, (_DWORD *)1) )
  {
LABEL_34:
    v13 += 0x200000LL;
    if ( v13 >= v30 )
      goto LABEL_35;
  }
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v31, 1u);
  v15 = DWORD2(v31) & v14 | HIDWORD(v31);
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LargePage = MiGetLargePage(v8, 1u, 1, v15, 4, 0LL);
  v29 = (_DWORD *)LargePage;
  if ( LargePage )
    MiConvertEntireLargePageToSmall(LargePage, 1, 2LL, 1LL, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && v28 <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v24 = (v23 & v22[5]) == 0;
        v19 = (unsigned int)v23 & v22[5];
        v22[5] = v19;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v28);
  if ( v29 )
  {
    VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous((__int64)v33, v13, v19, v29);
    goto LABEL_34;
  }
  VaRangePhysicallyContiguous = -1073741801;
LABEL_42:
  if ( v4 )
    MiUnlockAndDereferenceVadShared((char *)v4);
LABEL_44:
  MiReturnCommit(v8, 512LL);
  if ( (ULONG_PTR *)v8 != &MiSystemPartition
    || (v25 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v25->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_54:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v5);
    return VaRangePhysicallyContiguous;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 512) > 0x100 )
  {
LABEL_50:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v25->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( !v5 )
      return VaRangePhysicallyContiguous;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v27 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v25->CachedResidentAvailable,
            CachedResidentAvailable + 512,
            CachedResidentAvailable);
    v24 = (_DWORD)CachedResidentAvailable == v27;
    LODWORD(CachedResidentAvailable) = v27;
    if ( v24 )
      return VaRangePhysicallyContiguous;
    if ( v27 == -1 || (unsigned __int64)(v27 + 512LL) > 0x100 )
      goto LABEL_50;
  }
}
