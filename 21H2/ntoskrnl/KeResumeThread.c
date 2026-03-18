/*
 * XREFs of KeResumeThread @ 0x1402EEAA8
 * Callers:
 *     PsMultiResumeProcess @ 0x140259668 (PsMultiResumeProcess.c)
 *     PsMultiResumeThread @ 0x1402EEA18 (PsMultiResumeThread.c)
 *     KeAlertResumeThread @ 0x14056B0EC (KeAlertResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // ebp
  char v9; // al
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v7 = *(char *)(a1 + 644);
  v8 = v7;
  if ( a2 > v7 )
    a2 = *(char *)(a1 + 644);
  if ( a2 )
  {
    if ( (_BYTE)v7 )
    {
      v9 = v7 - a2;
      *(_BYTE *)(a1 + 644) = v9;
      if ( !v9 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
        KiResumeThread(a1, CurrentPrcb, 0LL);
    }
  }
  _InterlockedAnd(v6, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v8;
}
