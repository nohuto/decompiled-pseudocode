/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402484C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _BYTE *v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rdi
  unsigned int *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  v9 = *(unsigned int **)&CurrentThread[1].SystemCallNumber;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].SystemCallNumber == v9 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  else
  {
    do
    {
      if ( *((char *)v9 + 35) < *((char *)v9 + 34) + 2 )
      {
        v10 = *(_QWORD *)(a1 + 96);
        if ( !v10 || *((_QWORD *)v9 + 5) == v10 )
        {
          v13 = *(_QWORD *)(a1 + 88);
          if ( !v13 || *((_QWORD *)v9 + 20) == v13 )
          {
            v14 = *(v9 - 4);
            if ( (v14 & 0x402) == 0 && ((v14 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
            {
              *((_BYTE *)v9 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) )
        {
          v11 = *(_QWORD *)(a1 + 96);
          if ( !v11 || *((_QWORD *)v9 + 5) == v11 )
          {
            v15 = *(_QWORD *)(a1 + 88);
            if ( (!v15 || *((_QWORD *)v9 + 20) == v15) && (*(v9 - 4) & 2) == 0 )
            {
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
      }
      v9 = *(unsigned int **)v9;
    }
    while ( &CurrentThread[1].SystemCallNumber != v9 );
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread(CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
