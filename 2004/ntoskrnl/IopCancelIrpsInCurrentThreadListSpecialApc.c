/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140358140
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1402FBD90 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v25; // eax

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
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v21 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v21 )
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
          v15 = *(_QWORD *)(a1 + 88);
          if ( !v15 || *((_QWORD *)v9 + 20) == v15 )
          {
            v16 = *(v9 - 4);
            if ( (v16 & 0x402) == 0 && ((v16 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
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
            v17 = *(_QWORD *)(a1 + 88);
            if ( (!v17 || *((_QWORD *)v9 + 20) == v17) && (*(v9 - 4) & 2) == 0 )
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
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v13 = (_DWORD *)(-1LL << ((unsigned __int8)v8 + 1));
          v12 = (__int64)v19->SchedulerAssist;
          v20 = ~(unsigned __int16)v13;
          v21 = (v20 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0LL, v12, v13);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
