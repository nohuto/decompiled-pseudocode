/*
 * XREFs of MiSessionRemoveImage @ 0x1402DBD88
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiHandleDriverNonPagedSections @ 0x1407608BC (MiHandleDriverNonPagedSections.c)
 */

__int64 __fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 SessionVm; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rdx
  unsigned __int8 v16; // di
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 k; // rcx
  _QWORD *j; // rax
  unsigned __int64 v26; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  unsigned __int8 v31; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  v31 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  SessionVm = MiGetSessionVm();
  SharedVm = (volatile LONG *)MiGetSharedVm(SessionVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v9 = v8;
  MmLockLoadedModuleListExclusive(&v31);
  v12 = MiSessionLookupImage(v2, v10, v11);
  v13 = v12;
  if ( !v12 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  v14 = (*(_DWORD *)(v12 + 60))-- == 1;
  if ( v14 )
  {
    v18 = *(_QWORD **)v12;
    v19 = (_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      for ( ; v18[1]; v18 = (_QWORD *)v18[1] )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v12 + 16); ; i = v18[2] )
      {
        v18 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v18 || (_QWORD *)v18[1] == v19 )
          break;
        v19 = v18;
      }
    }
    if ( v18 )
      v21 = v18[6];
    else
      v21 = 0LL;
    v22 = *(_QWORD *)(v13 + 8);
    v23 = v13;
    *(_QWORD *)a2 = v21;
    if ( v22 )
    {
      for ( j = *(_QWORD **)v22; j; j = (_QWORD *)*j )
        v22 = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(v13 + 16); ; k = *(_QWORD *)(v22 + 16) )
      {
        v22 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v22 || *(_QWORD *)v22 == v23 )
          break;
        v23 = v22;
      }
    }
    if ( v22 )
      v26 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v26 = 0LL;
    *(_QWORD *)(a2 + 8) = v26;
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 80), (unsigned __int64 *)v13);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v13 + 72);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v16 = v31;
    if ( v31 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = v31;
      v15 = -1LL << (v31 + 1);
      v30 = ~(unsigned __int16)v15;
      v14 = (v30 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v30;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = v31;
  }
  __writecr8(v16);
  LOBYTE(v15) = v9;
  MiUnlockWorkingSetExclusive(SessionVm, v15);
  if ( v13 && *(_BYTE *)(v13 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  return v13;
}
