/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14028C1F0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiHandleCollidedFault @ 0x14028BEFC (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiIsFaultPteIntact @ 0x14028D274 (MiIsFaultPteIntact.c)
 *     MiImagePageOk @ 0x14028DC10 (MiImagePageOk.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiRelockProtoPoolPage @ 0x14031A078 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  ULONG_PTR v14; // rbp
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v25; // rax
  unsigned __int8 v26; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // ebx
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp+10h]
  unsigned __int8 v35; // [rsp+88h] [rbp+20h] BYREF

  v35 = a4;
  v6 = a5;
  v34 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v34);
  v13 = *v6;
  v14 = *(_QWORD *)a2 - 32LL;
  v33 = v9;
  if ( !v13 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2LL) )
    {
      v15 = *v6;
    }
    else
    {
      *v6 = 1;
      v15 = 1;
    }
    v13 = v15;
    if ( !v15 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2);
      v13 = *v6;
    }
  }
  if ( v13 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3, v10, v11, v12);
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v14 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v35);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v26 = v35;
      if ( v35 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = v35;
        v10 = -1LL << (v35 + 1);
        v30 = ~(unsigned __int16)v10;
        v31 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v26 = v35;
    }
    __writecr8(v26);
  }
  v16 = 0LL;
  if ( a1[7] )
  {
    LOBYTE(v10) = 17;
    v16 = MiReleaseFaultState(a1 + 7, v10, 0LL);
  }
  if ( *(_QWORD *)(v14 + 216) )
  {
    v25 = KeAbPreAcquire(v14);
    v17 = v25;
    if ( v25 )
      KeAbPreWait(v25);
  }
  else
  {
    v17 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v14 + 56), WrPageIn, 0, 0, 0LL);
  if ( v17 )
  {
    KeAbPreAcquire(v14);
    KeAbPostReleaseEx(v14);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v14);
  if ( a1[7] )
    MiRelockFaultState(a1 + 7, v16);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v35);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5, v20, v21, v22);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2, v18, v19);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v34, &v33) && (unsigned int)MiImagePageOk(*a1, a2, v23, 0LL) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v32 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v32 - 1073740748;
}
