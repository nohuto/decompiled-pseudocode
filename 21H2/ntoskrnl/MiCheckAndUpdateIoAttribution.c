/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x1402F8A18
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402F88E8 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  v16 = 0LL;
  if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF40;
  v3 = *(_QWORD *)(v2 >> 16);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (int)IoReferenceIoAttributionFromThread(CurrentThread, (__int64)&v16) >= 0 )
  {
    v4 = v16;
    if ( v16 == 8LL * *(_QWORD *)(v3 + 120) )
    {
      v5 = v16;
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      v7 = *(_QWORD *)(v3 + 120);
      v8 = v6;
      v9 = v7 & 0xE000000000000000uLL;
      v10 = 8 * v7;
      *(_QWORD *)(v3 + 120) = (v4 >> 3) | v9;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( !v10 )
        return;
      v5 = v10;
    }
    IoDiskIoAttributionDereference(v5);
  }
}
