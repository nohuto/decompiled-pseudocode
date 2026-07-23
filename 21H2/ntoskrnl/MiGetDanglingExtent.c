/*
 * XREFs of MiGetDanglingExtent @ 0x140541460
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  bool v14; // zf
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r10
  unsigned __int8 v18; // r15
  volatile signed __int32 *v19; // rbx
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C51DE0, &LockHandle);
  do
  {
    v4 = qword_140C4CB28;
    v5 = v3;
    v6 = v2;
    if ( !qword_140C4CB28 )
      break;
    v7 = *(_QWORD *)qword_140C4CB28;
    ++v2;
    qword_140C4CB28 = *(_QWORD *)qword_140C4CB28;
    v3 = v4;
    if ( v6 )
      v3 = v5;
  }
  while ( v7 == v4 - 48 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = ((unsigned int)v8 & SchedulerAssist[5]) == 0;
        v9 = (unsigned int)v8 & SchedulerAssist[5];
        SchedulerAssist[5] = v9;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v2 )
    return -1LL;
  v16 = v3 - 48 * v2;
  v17 = v16 + 48;
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
  {
    v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v8 = (-1 << (v18 + 1)) & 4u | *(_DWORD *)(v9 + 20);
    *(_DWORD *)(v9 + 20) = v8;
  }
  if ( v17 <= v3 )
  {
    v19 = (volatile signed __int32 *)(v16 + 72);
    v20 = (v3 - v17) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v21 = (v3 - v17) / 0x30 + 1;
    do
    {
      v27 = 0;
      while ( _interlockedbittestandset64(v19, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v27, *((__int64 *)&v20 + 1), v8, v9);
        while ( *(__int64 *)v19 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
      v19 += 12;
      --v21;
    }
    while ( v21 );
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && v18 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v18 + 1));
        v14 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  __writecr8(v18);
  *a1 = v2;
  return (__int64)(v16 + 0x58000000030LL) / 48;
}
