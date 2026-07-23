/*
 * XREFs of MiSessionRemoveImage @ 0x14038B148
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmLockLoadedModuleListExclusive @ 0x1403720B8 (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiHandleDriverNonPagedSections @ 0x14075CAD0 (MiHandleDriverNonPagedSections.c)
 */

unsigned __int64 *__fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 SessionVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r12
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rbx
  bool v12; // zf
  unsigned __int8 v13; // di
  unsigned __int64 *v15; // rcx
  unsigned __int64 *v16; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 k; // rcx
  _QWORD *j; // rax
  unsigned __int64 v23; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  unsigned __int8 v28; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  v28 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  SessionVm = MiGetSessionVm();
  SharedVm = MiGetSharedVm(SessionVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  MmLockLoadedModuleListExclusive(&v28);
  v10 = MiSessionLookupImage(v2);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  v12 = (*((_DWORD *)v10 + 15))-- == 1;
  if ( v12 )
  {
    v15 = (unsigned __int64 *)*v10;
    v16 = v10;
    if ( *v10 )
    {
      for ( ; v15[1]; v15 = (unsigned __int64 *)v15[1] )
        ;
    }
    else
    {
      for ( i = v10[2]; ; i = v15[2] )
      {
        v15 = (unsigned __int64 *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v15 || (unsigned __int64 *)v15[1] == v16 )
          break;
        v16 = v15;
      }
    }
    if ( v15 )
      v18 = v15[6];
    else
      v18 = 0LL;
    v19 = v11[1];
    v20 = (unsigned __int64)v11;
    *(_QWORD *)a2 = v18;
    if ( v19 )
    {
      for ( j = *(_QWORD **)v19; j; j = (_QWORD *)*j )
        v19 = (unsigned __int64)j;
    }
    else
    {
      for ( k = v11[2]; ; k = *(_QWORD *)(v19 + 16) )
      {
        v19 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 || *(_QWORD *)v19 == v20 )
          break;
        v20 = v19;
      }
    }
    if ( v19 )
      v23 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v23 = 0LL;
    *(_QWORD *)(a2 + 8) = v23;
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 88), v11);
    *(_QWORD *)(a2 + 16) = v11[9];
  }
  else
  {
    v11 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v13 = v28;
    if ( v28 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = v28;
      v27 = ~(unsigned __int16)(-1LL << (v28 + 1));
      v12 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v13 = v28;
  }
  __writecr8(v13);
  MiUnlockWorkingSetExclusive(SessionVm, v9);
  if ( v11 && *((_BYTE *)v11 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  return v11;
}
