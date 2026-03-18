/*
 * XREFs of MiWaitForExtentDeletions @ 0x140540BE0
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053EC80 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForExtentDeletions(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG_PTR v5; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  ULONG_PTR v13; // [rsp+20h] [rbp-20h] BYREF
  __int16 v14; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+2Ah] [rbp-16h]
  char v16; // [rsp+2Bh] [rbp-15h]
  int v17; // [rsp+2Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF

  v16 = 0;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_140C4C990, 0LL, 0LL);
  v5 = v2;
  if ( v2 )
    KeAbPreWait(v2, v3, v4);
  v17 = 0;
  v18[1] = v18;
  v14 = 263;
  v18[0] = v18;
  v13 = qword_140C4C990;
  qword_140C4C990 = (ULONG_PTR)&v13;
  v15 = 6;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = KeWaitForGate((__int64)&v14, 18);
  if ( v5 )
  {
    KeAbPreAcquire((ULONG_PTR)&qword_140C4C990, v5, 0LL);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140C4C990, v5);
  }
  return result;
}
