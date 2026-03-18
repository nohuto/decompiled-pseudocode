/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14027FEF8
 * Callers:
 *     MiHandleCollidedFault @ 0x14023EB78 (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiFlushWaitForReadInProgress @ 0x140597FAC (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiImagePageOk @ 0x140271020 (MiImagePageOk.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiRelockProtoPoolPage @ 0x14027FE9C (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _DWORD *a5)
{
  _DWORD *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  ULONG_PTR v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v20; // si
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
  v12 = 0LL;
  v13 = *(_QWORD *)a2 - 32LL;
  v26 = v9;
  if ( !*v6 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2LL, v11) )
    {
      if ( !*v6 )
      {
        if ( !a3 )
          goto LABEL_6;
        if ( *(_WORD *)(a3 + 32) < 0x7FFFu )
          goto LABEL_6;
        *v6 = 1;
        MiRemoveLockedPageChargeAndDecRef(a2);
        if ( !*v6 )
          goto LABEL_6;
      }
    }
    else
    {
      *v6 = 1;
    }
  }
  if ( a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_6:
  _InterlockedAdd((volatile signed __int32 *)(v13 + 176), 1u);
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
      v20 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = v28;
        v23 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v20 = v28;
    }
    __writecr8(v20);
    v12 = 0LL;
  }
  v14 = 0LL;
  if ( a1[7] )
    v14 = MiReleaseFaultState((__int64)(a1 + 7), 17, 0LL);
  if ( *(_QWORD *)(v13 + 216) )
  {
    v18 = KeAbPreAcquire(v13, 0LL, 0LL);
    v12 = v18;
    if ( v18 )
      KeAbPreWait(v18);
  }
  KeWaitForSingleObject((PVOID)(v13 + 56), WrPageIn, 0, 0, 0LL);
  if ( v12 )
  {
    KeAbPreAcquire(v13, v12, 0LL);
    KeAbPostReleaseEx(v13);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v13);
  if ( a1[7] )
    MiRelockFaultState((__int64 *)a1 + 7, v14);
  if ( *v6 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v28, v15);
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
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v27, &v26) && MiImagePageOk(*a1, a2, v16, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v25 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v25 - 1073740748;
}
