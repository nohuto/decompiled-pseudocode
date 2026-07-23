/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140209390
 * Callers:
 *     MiHandleCollidedFault @ 0x14020909C (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 * Callees:
 *     MiIsFaultPteIntact @ 0x14020A414 (MiIsFaultPteIntact.c)
 *     MiImagePageOk @ 0x14020ADB0 (MiImagePageOk.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiRelockProtoPoolPage @ 0x140324DC8 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  ULONG_PTR v12; // rbp
  int v13; // eax
  __int64 v14; // r12
  _RTL_BALANCED_NODE *v15; // rsi
  __int64 v16; // r8
  __int64 v18; // rax
  unsigned __int8 v19; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned __int8 v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = a4;
  v6 = a5;
  v27 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v27);
  v11 = *v6;
  v12 = *(_QWORD *)a2 - 32LL;
  v26 = v9;
  if ( !v11 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    {
      v13 = *v6;
    }
    else
    {
      *v6 = 1;
      v13 = 1;
    }
    v11 = v13;
    if ( !v13 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2);
      v11 = *v6;
    }
  }
  if ( v11 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v12 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v10) = v28;
    MiUnlockProtoPoolPage(a3, v10);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v19 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = v28;
        v10 = -1LL << (v28 + 1);
        v23 = ~(unsigned __int16)v10;
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v19 = v28;
    }
    __writecr8(v19);
  }
  v14 = 0LL;
  if ( a1[7] )
  {
    LOBYTE(v10) = 17;
    v14 = MiReleaseFaultState(a1 + 7, v10, 0LL);
  }
  if ( *(_QWORD *)(v12 + 216) )
  {
    v18 = KeAbPreAcquire(v12, 0LL);
    v15 = (_RTL_BALANCED_NODE *)v18;
    if ( v18 )
      KeAbPreWait(v18);
  }
  else
  {
    v15 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v12 + 56), WrPageIn, 0, 0, 0LL);
  if ( v15 )
  {
    KeAbPreAcquire(v12, v15);
    KeAbPostReleaseEx(v12);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v12);
  if ( a1[7] )
    MiRelockFaultState(a1 + 7, v14);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v28);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v27, &v26) && (unsigned int)MiImagePageOk(*a1, a2, v16, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v25 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v25 - 1073740748;
}
