/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14031273C
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140229704 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiImagePageOk @ 0x14025B630 (MiImagePageOk.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int *a5)
{
  int *v6; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r12
  ULONG_PTR v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  unsigned __int8 v28; // si
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  unsigned int v37; // ebx
  __int64 v38; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp+10h]
  unsigned __int8 v40; // [rsp+88h] [rbp+20h] BYREF

  v40 = a4;
  v6 = a5;
  v39 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v39);
  v12 = *v6;
  v13 = *(_QWORD *)a2 - 32LL;
  v38 = v9;
  if ( !v12 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2LL, v11) )
    {
      v16 = *v6;
    }
    else
    {
      *v6 = 1;
      v16 = 1;
    }
    v12 = v16;
    if ( !v16 && a3 && *(_WORD *)(a3 + 32) >= 0x7FFFu )
    {
      *v6 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2, v10, v14, v15);
      v12 = *v6;
    }
  }
  if ( v12 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3, v29, v30, v31);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v10) = v40;
    MiUnlockProtoPoolPage(a3, v10);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v28 = v40;
      if ( v40 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = v40;
        v35 = ~(unsigned __int16)(-1LL << (v40 + 1));
        v36 = (v35 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v35;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v28 = v40;
    }
    __writecr8(v28);
  }
  v17 = 0LL;
  if ( a1[7] )
    v17 = MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
  if ( *(_QWORD *)(v13 + 216) )
  {
    v27 = KeAbPreAcquire(v13, 0LL, 0);
    v18 = v27;
    if ( v27 )
      KeAbPreWait(v27);
  }
  else
  {
    v18 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v13 + 56), WrPageIn, 0, 0, 0LL);
  if ( v18 )
  {
    KeAbPreAcquire(v13, v18, 0);
    KeAbPostReleaseEx(v13, v18);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v13);
  if ( a1[7] )
    MiRelockFaultState((__int64 *)a1 + 7, v17);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, (char *)&v40, v19);
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
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v39, &v38) && MiImagePageOk(*a1, a2) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2, v23, v24, v25);
    return 3221226548LL;
  }
  v37 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2, v20, v21, v22);
  return v37 - 1073740748;
}
