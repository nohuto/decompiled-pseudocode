/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x140239384
 * Callers:
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1405FCD50 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopCancelIrpsInThreadList @ 0x1405FCD98 (IopCancelIrpsInThreadList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // rdi
  unsigned int v8; // r13d
  KIRQL v9; // r15
  __int64 *i; // rsi
  unsigned __int8 CurrentIrql; // cl
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v16; // zf
  _DWORD *v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // edx

  v4 = (KSPIN_LOCK *)(a2 + 1416);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1416));
  for ( i = *(__int64 **)(a2 + 1200); (__int64 *)(a2 + 1200) != i; i = (__int64 *)*i )
  {
    if ( *((char *)i + 35) < *((char *)i + 34) + 2 )
    {
      if ( a4 )
      {
        if ( (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
        {
          v13 = *((_DWORD *)i - 4);
          if ( (v13 & 0x402) == 0 && ((v13 & 0x84) != 0 || (*((_BYTE *)i + 39) & 2) != 0) )
          {
LABEL_12:
            v8 = 1;
            KxReleaseSpinLock(v4);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v16 = (SchedulerAssist[5] & 0xFFFF0003) == 0;
                SchedulerAssist[5] &= 0xFFFF0003;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(1uLL);
            IoCancelIrp((PIRP)(i - 4));
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v17 = KeGetCurrentPrcb()->SchedulerAssist;
              v17[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
            KxAcquireSpinLock(v4);
          }
        }
      }
      else if ( (*(_DWORD *)(i - 2) & 2) == 0 && (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
      {
        goto LABEL_12;
      }
    }
  }
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && v9 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v16 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(v9);
  return v8;
}
