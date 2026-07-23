/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140341A74
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140282754 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiImagePageOk @ 0x1402B4660 (MiImagePageOk.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     MiIsFaultPteIntact @ 0x140344F9C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v12; // r9
  int v13; // ecx
  ULONG_PTR v14; // rbp
  int v15; // eax
  __int64 v16; // r12
  ULONG_PTR v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v26; // rax
  unsigned __int8 v27; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  unsigned int v33; // ebx
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp+10h]
  unsigned __int8 v36; // [rsp+88h] [rbp+20h] BYREF

  v36 = a4;
  v6 = a5;
  v35 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v9 = MI_READ_PTE_LOCK_FREE(v35);
  v13 = *v6;
  v14 = *(_QWORD *)a2 - 32LL;
  v34 = v9;
  if ( !v13 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2) )
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
    LOBYTE(v10) = v36;
    MiUnlockProtoPoolPage(a3, v10, v11, v12);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v27 = v36;
      if ( v36 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = v36;
        v31 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v32 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v27 = v36;
    }
    __writecr8(v27);
  }
  v16 = 0LL;
  if ( a1[7] )
    v16 = MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
  if ( *(_QWORD *)(v14 + 216) )
  {
    v26 = KeAbPreAcquire(v14, 0LL, 0);
    v17 = v26;
    if ( v26 )
      KeAbPreWait(v26);
  }
  else
  {
    v17 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v14 + 56), WrPageIn, 0, 0, 0LL);
  if ( v17 )
  {
    KeAbPreAcquire(v14, v17, 0);
    KeAbPostReleaseEx(v14, v17);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v14);
  if ( a1[7] )
    MiRelockFaultState((__int64)(a1 + 7), v16);
  if ( *v6 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, (char *)&v36, v19, v20);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5, v21, v22, v23);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2, v18, v19);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a1, *a1, v35, &v34) && MiImagePageOk(*a1, a2, v24) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return 3221226548LL;
  }
  v33 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2);
  return v33 - 1073740748;
}
