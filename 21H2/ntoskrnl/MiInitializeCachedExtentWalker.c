/*
 * XREFs of MiInitializeCachedExtentWalker @ 0x14059F4C4
 * Callers:
 *     MiGetCachedExtentWalkerNextPage @ 0x14059EF54 (MiGetCachedExtentWalkerNextPage.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLocateCachedExtent @ 0x14059F874 (MiLocateCachedExtent.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeCachedExtentWalker(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  volatile LONG *v5; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 CachedExtent; // rax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  volatile LONG *SpinLock; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+88h] [rbp+10h]

  v5 = (volatile LONG *)(*a2 + 72LL);
  v28 = 1;
  SpinLock = v5;
  v8 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockShared(v5);
    CachedExtent = MiLocateCachedExtent(a2, a3);
    v11 = CachedExtent;
    if ( CachedExtent )
    {
      if ( *(_QWORD *)(CachedExtent + 32) != 0x8000000000000000uLL )
        break;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( !a4 || !v28 )
    {
      if ( !v11 )
        return 3221225626LL;
      result = 3221227273LL;
      if ( *(_QWORD *)(v11 + 32) != 0x8000000000000000uLL )
        return 3221225626LL;
      return result;
    }
    result = MiAllocateFileExtents((ULONG_PTR)a2, 2, -1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v28 = 0;
    }
    v5 = SpinLock;
  }
  v18 = a2[1];
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v19 = MiStartingOffset((__int64)a2, v18, 0xFFFFFFFF);
  v20 = *(_QWORD *)(v11 + 32);
  v21 = (a3 - v19) >> 12;
  if ( v20 == 0x8000000000000000uLL )
  {
    v22 = 0x8000000000000000uLL;
  }
  else
  {
    v8 = v20 + *(_QWORD *)(v11 + 40);
    v22 = v20 + (unsigned int)v21 - (unsigned __int64)*(unsigned int *)(v11 + 24);
  }
  *(_QWORD *)(a1 + 16) = v22;
  *(_QWORD *)(a1 + 24) = v8;
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v26 = v24->SchedulerAssist;
        v16 = (v25 & v26[5]) == 0;
        v26[5] &= v25;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
  }
  __writecr8(v9);
  return 0LL;
}
