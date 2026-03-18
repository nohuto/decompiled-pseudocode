/*
 * XREFs of MiClearPartitionPageBitMap @ 0x1405BDB0C
 * Callers:
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x140981F58 (MiMakePartitionMemoryBlock.c)
 */

char __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KTHREAD *v18; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v21; // edx
  $CEA84C04E3712D858E5667A507841A2A *v22; // rax
  int v23; // r8d
  __int16 *v25[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
  v25[4] = 0LL;
  v25[0] = (__int16 *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 192);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v7 = *a2;
  v8 = 0LL;
  v9 = v6;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v8 )
  {
    v10 = (_QWORD *)v8[1];
    v11 = (__int64)v8;
    v12 = v8;
    if ( v10 )
    {
      do
      {
        v8 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v12 )
          break;
        v12 = v8;
      }
    }
    MiActOnPartitionNodePages(v11, 9uLL, 0LL, v25);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  MiDeletePartitionPageNodes(&v25[4]);
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiMakePartitionMemoryBlock(a1);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 192);
  v18 = KeGetCurrentThread();
  if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  _disable();
  p_Process = (__int64)&v18[1].Process;
  v21 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v21;
    p_Process += 96LL;
    if ( v21 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_33:
    LODWORD(v22) = *((_DWORD *)&v18->0 + 1);
    if ( ((unsigned int)v22 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, a1 + 192, SessionId, 0LL);
    _enable();
    goto LABEL_41;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v23 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  LOBYTE(v22) = *(_BYTE *)(p_Process + 16);
  v18->AbEntrySummary |= 1 << (char)v22;
  _enable();
  if ( v23 )
    LOBYTE(v22) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v18, a1 + 192, v23);
LABEL_41:
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 )
  {
    v22 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v22->ApcState.ApcListHead[0].Flink != v22 )
      LOBYTE(v22) = KiCheckForKernelApcDelivery();
  }
  return (char)v22;
}
