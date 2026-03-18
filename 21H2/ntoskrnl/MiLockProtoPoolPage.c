/*
 * XREFs of MiLockProtoPoolPage @ 0x140273AF0
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiDeleteMergedPte @ 0x140239C2C (MiDeleteMergedPte.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiLockProtoPoolPageForce @ 0x140273AAC (MiLockProtoPoolPageForce.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiAllocateInPageSupport @ 0x140339CA0 (MiAllocateInPageSupport.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14059C8C8 (MiGetPageFileSectionForReservation.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiInsertLargeVadMapping @ 0x1405A7464 (MiInsertLargeVadMapping.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x140273EE0 (MiLockOwnedProtoPage.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14028DC40 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // si
  unsigned __int64 v12; // rdx
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  char v16; // al
  _BYTE *i; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned int v20; // edi
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // edx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_BYTE *)a2;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v4 = *v3;
    do
    {
      if ( (*v3 & 1) == 0 || (v4 & 0x200) != 0 )
        return 0LL;
      v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v5 > qword_140C50840 || (*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v6 = 48 * v5 - 0x220000000000LL;
    if ( v2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= a2;
      }
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
    }
    else
    {
      v34 = 0;
      CurrentIrql = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
    }
    v8 = *v3;
    if ( (*v3 & 1) == 0 || (v8 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v31 = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v24 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v5 == ((v8 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            a2 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = ((unsigned int)a2 & v23[5]) == 0;
            v23[5] &= a2;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  v9 = *(_QWORD *)(v6 + 40);
  if ( (v9 & 0x10000000000LL) != 0 || (v9 & 0x20000000000000LL) != 0 )
    goto LABEL_25;
  a2 = *(unsigned __int16 *)(v6 + 32);
  v10 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)a2 )
  {
    if ( (_WORD)a2 == 1 )
    {
      if ( !v10 && (*(_BYTE *)(v6 + 34) & 8) == 0 )
        goto LABEL_25;
    }
    else if ( (_WORD)a2 != 2 || !v10 || (*(_BYTE *)(v6 + 34) & 8) == 0 )
    {
      goto LABEL_25;
    }
  }
  v11 = 0;
  if ( v9 < 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0
    || (v12 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL, v12 <= 0xFFFFF6BFFFFFFF78uLL)
    && v12 >= 0xFFFFF68000000000uLL
    && (*(_BYTE *)(v6 + 35) & 0x20) != 0 )
  {
    v11 = 1;
    v13 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v9 >> 43) & 0x3FF));
    if ( !(unsigned int)MiChargeCommit(v13, 1LL, 4LL) )
      goto LABEL_26;
  }
  else
  {
    v13 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v9 >> 43) & 0x3FF));
  }
  if ( v13 == &MiSystemPartition )
  {
    a2 = (__int64)KeGetCurrentPrcb();
    v14 = *(_DWORD *)(a2 + 34460);
    while ( v14 )
    {
      if ( v14 == -1 )
        break;
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 34460), v14 - 1, v14);
      if ( v15 == v14 )
        goto LABEL_25;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v13, 1LL, 0xFFFFFFFFLL) )
  {
    if ( v11 )
      MiReturnCommit(v13, 1LL);
    goto LABEL_26;
  }
LABEL_25:
  ++*(_WORD *)(v6 + 32);
LABEL_26:
  if ( CurrentIrql == 17 )
  {
    LOBYTE(a2) = 17;
    MiLockOwnedProtoPage(v6, a2);
  }
  else
  {
    *v2 = CurrentIrql;
    v16 = *(_BYTE *)(v6 + 34);
    for ( i = (_BYTE *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL); (v16 & 0x20) != 0; v16 = *(_BYTE *)(v6 + 34) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(CurrentIrql);
      v20 = 0;
      while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
      {
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v6);
    }
    *(_BYTE *)(v6 + 34) = v16 | 0x20;
    if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 && (*i & 0x20) == 0 )
      MiWriteValidPteVolatile(i, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v6;
}
